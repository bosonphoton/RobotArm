# -----------------------------------------
# This code is to control UR5e using the Python MoveIt user interfaces
# -----------------------------------------

#!/usr/bin/env python
# -*- coding: UTF-8 -*-

from __future__ import print_function
import sys
import copy
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg
from geometry_msgs.msg import PoseStamped
from math import pi
import tf
import roslib; roslib.load_manifest('robotiq_2f_gripper_control')
import actionlib
from control_msgs.msg import *
from trajectory_msgs.msg import *
from sensor_msgs.msg import JointState
from robotiq_2f_gripper_control.msg import _Robotiq2FGripper_robot_output  as outputMsg

from twisted.internet import reactor
from pymodbus.client.asynchronous import schedulers
from pymodbus.client.asynchronous.serial import AsyncModbusSerialClient
from pymodbus.client.asynchronous.twisted import ModbusClientProtocol

from visualization_msgs.msg import MarkerArray


class MoveGroupInteface(object):
	# -----------------------------------------
	# setup the moveit
	# -----------------------------------------
	def __init__(self):
		super(MoveGroupInteface, self).__init__()
		# -----------------------------------------
		# initialize moveit_commander and rospy
		# -----------------------------------------
		moveit_commander.roscpp_initialize(sys.argv)
		rospy.init_node('ur_grasp_node', anonymous=True)

		# -----------------------------------------		
		# instantiate RobotCommander
		# -----------------------------------------
		self.robot = moveit_commander.RobotCommander()

		# -----------------------------------------		
		# instantiate PlanningSceneInterface
		# -----------------------------------------
		self.scene = moveit_commander.PlanningSceneInterface()
		
		# -----------------------------------------		
		# instantiate MoveGroupCommander
		# -----------------------------------------
		group_name = 'manipulator'  # group_name can be find in ur5_moveit_config/config/ur5.srdf
		self.move_group_commander = moveit_commander.MoveGroupCommander(group_name)

		# -----------------------------------------		
		# control speed
		# -----------------------------------------
		self.move_group_commander.set_max_velocity_scaling_factor(0.05)
		self.move_group_commander.set_max_acceleration_scaling_factor(0.05)

		# -----------------------------------------		
		# allow replanning
		# -----------------------------------------
		self.move_group_commander.allow_replanning(True)
		self.move_group_commander.set_planning_time(500.0)
		self.move_group_commander.set_goal_position_tolerance(0.02)
		self.move_group_commander.set_goal_orientation_tolerance(0.02)

		# -----------------------------------------
		# get and print basic information
		# -----------------------------------------
		self.planning_frame = self.move_group_commander.get_planning_frame()
		# print('planning frame: {}'.format(self.planning_frame))
		
		self.eef_link = self.move_group_commander.get_end_effector_link()
		# print('end effector link: {}'.format(self.eef_link))
		
		self.group_names = self.robot.get_group_names()
		# print('available planning groups:{}'.format(self.robot.get_group_names()))
		
		# print('robot state:{}'.format(self.robot.get_current_state()))
		
		# -----------------------------------------
		# get and print basic information
		# -----------------------------------------
		self.box_name = ''

		# -----------------------------------------
		# create listener
		# -----------------------------------------
		self.listener = tf.TransformListener()
		self.rate = rospy.Rate(10.0)


	def display_trajectory_rviz(self, plan):
		# -----------------------------------------				
		# visualize the trajectory 
		# -----------------------------------------
		
		# create a publisher
		display_trajectory_publisher = rospy.Publisher('/move_group/display_planned_path', moveit_msgs.msg.DisplayTrajectory, queue_size=20)

		# record trajectory
		display_trajectory = moveit_msgs.msg.DisplayTrajectory()
		display_trajectory.trajectory_start = self.robot.get_current_state()
		display_trajectory.trajectory.append(plan)

		# publish trajectory
		display_trajectory_publisher.publish(display_trajectory)


	def plan_joint_goal(self, joint0, joint1, joint2, joint3, joint4, joint5):
		# ------------------------------
		# set joint goal
		# ------------------------------
		joint_goal = self.move_group_commander.get_current_joint_values()
		joint_goal[0] = joint0
		joint_goal[1] = joint1
		joint_goal[2] = joint2
		joint_goal[3] = joint3
		joint_goal[4] = joint4
		joint_goal[5] = joint5
		'''
		The go command can be called with joint values, poses, or without any
		parameters if you have already set the pose or joint target for the group
		'''
		self.move_group_commander.go(joint_goal, wait=True)
		rospy.sleep(1.0)

		# ------------------------------
		# stop and ensure that there is no residual movement
		# ------------------------------
		self.move_group_commander.stop()
	

	def plan_pose_goal(self, pose_x, pose_y, pose_z, pose_w):
		# ------------------------------
		# set pose goal
		# ------------------------------
		pose_goal = geometry_msgs.msg.Pose()

		pose_goal.orientation.w = pose_w
		pose_goal.position.x = pose_x
		pose_goal.position.y = pose_y
		pose_goal.position.z = pose_z

		# ------------------------------
		# plan to achieve pose goal
		# ------------------------------
		self.move_group_commander.set_pose_target(pose_goal)
		plan = self.move_group_commander.go(wait=True)

		# ------------------------------
		# stop and ensure that there is no residual movement
		# ------------------------------
		self.move_group_commander.stop()

		'''
		It is always good to clear your targets after planning with poses.
		Note: there is no equivalent function for clear_joint_value_targets()
		'''
		self.move_group_commander.clear_pose_targets()


	def plan_cartesian_path(self, x, y, z):
		waypoints = []
		# ------------------------------
		# generate a goal pose
		# ------------------------------
		wpose = self.move_group_commander.get_current_pose().pose
		# print('current pose:{}'.format(wpose))
		# print('-'*30)

		wpose.position.x = x
		wpose.position.y = y
		wpose.position.z = z
		waypoints.append(copy.deepcopy(wpose))

		'''
		We want the Cartesian path to be interpolated at a resolution of 1 cm
		which is why we will specify 0.01 as the eef_step in Cartesian
		translation.  We will disable the jump threshold by setting it to 0.0,
		ignoring the check for infeasible jumps in joint space, which is sufficient
		for this tutorial.
		'''
		# compute_cartesian_path(eef_step, waypoints to follow, jump_threshold)
		(plan, fraction) = self.move_group_commander.compute_cartesian_path(waypoints, 0.01, 0.0)
		velocity_scaling_factor = 0.05
		plan = self.move_group_commander.retime_trajectory(self.robot.get_current_state(), plan, velocity_scaling_factor)
		print('planning is completed')
		return plan, fraction


	def execute_plan(self, plan):
		'''
		Use execute if you would like the robot to follow
		the plan that has already been computed:
		'''
		self.move_group_commander.execute(plan, wait=True)


	def wait_for_state_update(self, box_is_known=False, box_is_attached=False, timeout=4):
		start = rospy.get_time()
		seconds = rospy.get_time()
		while (seconds - start < timeout) and not rospy.is_shutdown():
			# Test if the box is in attached objects
			attached_objects = self.scene.get_attached_objects([self.box_name])
			is_attached = len(attached_objects.keys()) > 0

			# Test if the box is in the scene.
			# Note that attaching the box will remove it from known_objects
			is_known = self.box_name in self.scene.get_known_object_names()

			# Test if we are in the expected state
			if (box_is_attached == is_attached) and (box_is_known == is_known):
				return True

			# Sleep so that we give other threads time on the processor
			rospy.sleep(1.0)
			seconds = rospy.get_time()

		# If we exited the while loop without returning then we timed out
		return False


	def add_fixed_obstacle(self, obstacle_name, frame, obstacle_size, obstsacle_position, timeout=4):
		# obstacle pose
		obstacle_pose = PoseStamped()
		obstacle_pose.header.frame_id = frame
		obstacle_pose.pose.position.x = obstsacle_position[0]
		obstacle_pose.pose.position.y = obstsacle_position[1]
		obstacle_pose.pose.position.z = obstsacle_position[2]
		obstacle_pose.pose.orientation.w = 1.0

		# add obstacle
		self.scene.add_box(obstacle_name, obstacle_pose, obstacle_size)
		rospy.sleep(1.0)
		

	def add_movable_obstacle(self, obstacle_name, frame, obstacle_size, obstsacle_position, timeout=4):
		# obstacle pose
		obstacle_pose = PoseStamped()
		obstacle_pose.header.frame_id = frame
		obstacle_pose.pose.position.x = obstsacle_position[0]
		obstacle_pose.pose.position.y = obstsacle_position[1]
		obstacle_pose.pose.position.z = obstsacle_position[2]
		obstacle_pose.pose.orientation.w = 1.0

		# add obstacle
		self.scene.attach_box(frame, obstacle_name, obstacle_pose, obstacle_size)
		rospy.sleep(1.0)


	def update_state(self):
		self.move_group_commander.set_start_state_to_current_state()
		

	def remove_movable_obstacle(self, obstacle_name, frame):
		self.scene.remove_attached_object(frame, obstacle_name)
		rospy.sleep(1.0)


	def remove_fixed_obstacle(self, obstacle_name):
		self.scene.remove_world_object(obstacle_name)
		rospy.sleep(1.0)


	def get_object_position(self):
		rospy.sleep(1.0)
		while not rospy.is_shutdown():
			try:
				(position, oritention) = self.listener.lookupTransform('/base', '/camera_marker', rospy.Time(0))
				print('position:{}'.format(position))
				print('oritention:{}'.format(oritention))
				if position:
					break
			except (tf.LookupException, tf.ConnectivityException, tf.ExtrapolationException):
				continue
		return position


	def get_object_position_astra(self):
		rospy.sleep(1.0)
		while not rospy.is_shutdown():
			try:
				self.listener.waitForTransform('/base', '/object_detected', rospy.Time(0), rospy.Duration(4.0)) # rospy.Time.now()
				(position, oritention) = self.listener.lookupTransform('/base', '/object_detected', rospy.Time(0))
				print('position:{}'.format(position))
				print('oritention:{}'.format(oritention))
				if position:
					break
			except (tf.LookupException, tf.ConnectivityException, tf.ExtrapolationException):
				continue
		return position
	

	def get_joint_values(self):
		joints = self.move_group_commander.get_current_joint_values()
		print('joints:{}'.format(joints))
		return joints


	def point1(self, x, y, z):
		x = x + 0.000
		y = y + 0.065
		z = 0.85
		return x, y, z

	def point1_astra(self, x, y, z):
		x = x + 0.015
		y = y + 0.020
		z = 0.85
		return x, y, z

	def point2(self, x, y, z):
		x = x
		y = y
		z = 0.75
		return x, y, z

	def point3(self, x, y, z):
		x = x
		y = y
		z = 0.65
		return x, y, z

	def point4(self, x, y, z):
		x = x
		y = y
		z = 0.55
		return x, y, z
	
	def point5(self, x, y, z):
		x = x
		y = y
		z = 0.45
		return x, y, z
	
	def point6(self, x, y, z):
		x = x 
		y = y
		z = 0.15
		return x, y, z

	def point1_halloween(self, x, y, z):
		x = x + 0.0
		y = y + 0.0
		z = 0.6
		return x, y, z

	def point2_halloween(self, x, y, z):
		x = x + 0.0
		y = y + 0.0
		z = 0.5
		return x, y, z

	def point3_halloween(self, x, y, z):
		x = x + 0.0
		y = y + 0.0
		z = 0.4
		return x, y, z

	def point4_halloween(self, x, y, z):
		x = x + 0.0
		y = y + 0.0
		z = 0.3
		return x, y, z

	def point5_halloween(self, x, y, z):
		x = x + 0.0
		y = y + 0.0
		z = 0.25
		return x, y, z

	def point6_halloween(self, x, y, z):
		x = x + 0.0
		y = y + 0.0
		z = z + 0.0
		return x, y, z

	def grasp(self):
		pub = rospy.Publisher('Robotiq2FGripperRobotOutput', outputMsg.Robotiq2FGripper_robot_output, queue_size = 1)
		command = outputMsg.Robotiq2FGripper_robot_output()
		command.rACT = 1
		command.rGTO = 1
		# command.rSP  = 255
		command.rSP  = 50
		command.rFR  = 1
		# command.rPR = 255
		command.rPR = 250
		connected = False
		while not connected:
			if pub.get_num_connections() > 0:
				pub.publish(command)
				connected = True
			else:
				rospy.sleep(0.1)

	def ungrasp(self):
		pub = rospy.Publisher('Robotiq2FGripperRobotOutput', outputMsg.Robotiq2FGripper_robot_output, queue_size = 1)
		command = outputMsg.Robotiq2FGripper_robot_output()
		command.rACT = 1
		command.rGTO = 1
		command.rSP  = 255
		# command.rFR  = 50
		command.rFR  = 1
		command.rPR = 0
		connected = False
		while not connected:
			if pub.get_num_connections() > 0:
				pub.publish(command)
				connected = True
			else:
				rospy.sleep(0.1)

	# ------------------------------
	# Below are created by Xiaohan, and these part needs to be verified
	# ------------------------------
	def point6_fix(self, x, y, z):
		x = x 
		y = y
		z = 0.128
		return x, y, z

	def get_object_position_astra_xiaohan(self):
		rospy.sleep(1.0)
		while not rospy.is_shutdown():
			try:
				self.listener.waitForTransform('/base', '/object_detected', rospy.Time(0), rospy.Duration(4.0)) # rospy.Time.now()
				(position, oritention) = self.listener.lookupTransform('/base', '/object_detected', rospy.Time(0))
				print('position:{}'.format(position))
				print('oritention:{}'.format(oritention))
				if position and position[2] < 1.25:
					break
			except (tf.LookupException, tf.ConnectivityException, tf.ExtrapolationException):
				continue
		return position
		
	def rotate_hand(self):
		pub = rospy.Publisher('Robotiq2FGripperRobotOutput', outputMsg.Robotiq2FGripper_robot_output, queue_size = 1)
		joint_goal = self.move_group_commander.get_current_joint_values()
		joint_goal[5] = 1.57
		'''
		The go command can be called with joint values, poses, or without any
		parameters if you have already set the pose or joint target for the group
		'''
		self.move_group_commander.go(joint_goal, wait=True)
		rospy.sleep(1.0)

		# ------------------------------
		# stop and ensure that there is no residual movement
		# ------------------------------
		self.move_group_commander.stop()


	def divide_pi(self, v1, v2, v3, v4, v5, v6):
		return v1/180*pi, v2/180*pi, v3/180*pi, v4/180*pi, v5/180*pi, v6/180*pi

