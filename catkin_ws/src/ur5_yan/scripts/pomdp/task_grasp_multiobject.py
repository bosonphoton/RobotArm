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

from utils import MoveGroupInteface

# -----------------------------------------
# initialize
# -----------------------------------------
print('Control UR5e')
print('-'*30)
demo = MoveGroupInteface()
print('-'*30)

# -----------------------------------------
# ungrasp
# -----------------------------------------
demo.ungrasp()
print('ungrasp is done!')
print('-'*30)

# -----------------------------------------
# get joint status (pose for avoidance) 
# -----------------------------------------
demo.plan_joint_goal(0, -1.8, 1.4, -1.18, -1.56, 0)
print('pose for avoidance is done!')
print('-'*30)

# -----------------------------------------
# get joint status (pose for observation) 
# -----------------------------------------
demo.plan_joint_goal(0, -0.9, 0.5, -1.57, -1.57, 0)
print('pose for observation is done!')
print('-'*30)

# -----------------------------------------
# get objects' position in real time
# -----------------------------------------
camera_id = 2
final_positions, final_orientations = demo.get_multiobject_positions(camera_id)
print('final_positions: {}, final_orientations: {}'.format(final_positions, final_orientations))