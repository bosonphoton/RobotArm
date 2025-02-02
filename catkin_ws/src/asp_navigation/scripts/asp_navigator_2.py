#!/usr/bin/env python

import rospy
import actionlib
import asp_planning
import location_list
import Tkinter
import tkMessageBox
import ar_plan
import datetime
from geometry_msgs.msg import Twist
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal, MoveBaseFeedback
from actionlib_msgs.msg import *
from geometry_msgs.msg import Pose, Point, PoseWithCovarianceStamped, Quaternion, PoseStamped
from nav_msgs.srv import GetPlan
from nav_msgs.msg import Odometry
from sound_play.libsoundplay import SoundClient
from actionlib_msgs.msg import *
import urllib2
import urllib
import std_srvs.srv
from std_msgs.msg import String, Float32, Empty
import time
import threading
import subprocess
import re
import sys
import copy
import requests

robot_no = 1
token_no = -99
token_no_out = -99
current_task_time = ""
current_room = "r1_corr_h"
constraints = ""
loaded = ""
previous_constraints = ""
move = None
stop = False
initial_pose = PoseWithCovarianceStamped()
initial_x = 0.0
initial_y = 0.0
balls = []
blocks = []
task_list = [2,1,0]
object_token = 1
original_task_list = [2,1,0]
completed = False
#blue -  021
#green - 210
#red -   102


skip_unload = 0
in_queue = False
door_out_to_in_approach_queue = ["5.44927609813,2.67617526965,-0.859800417615,0.51063023987","3.61738583916,3.36497081915,-0.384114658816,0.923285399474","3.06435692002,3.94748137119,-0.387565199342,0.921842294679"]
door_in_to_out_approach_queue =  ["3.66259416799,0.694994267136,0.357920191926,0.933752181369","2.13368973892,0.628487490095,0.352070334028,0.93597354658","2.32317269266,-0.746728006324,0.374878667185,0.927073883188"]
drop_locations = ["0.355061659793,-0.901020680163,-0.995310604862,0.0967305528243","0.124819367676,-1.78786703233,0.988384143384,0.151976264944","-0.320970598539,-2.30988351799,0.961364459778,0.275278723253"]

def clear_cost_map():
    p = subprocess.Popen("rosservice call /move_base/clear_costmaps", stdout=subprocess.PIPE, shell=True)
    (output, err) = p.communicate()
    p_status = p.wait()

def get_constraints():
    global constraints
    global previous_constraints
    previous_constraints = constraints
    constraints = ""
    response = requests.get('http://makeandroidapp.com/ar_demo/queue_manager/modify_constraint.php', params={'get_constraint':'yes'})
    constraints = str(response.text)

def get_task():
    global balls
    global blocks
    global task_list
    print "Getting tasks"
    data = urllib2.urlopen("http://makeandroidapp.com/ar_demo/robot"+robot_no+".txt") # read only 20 000 chars
    for line in data:
        task_list = line.split(",")
    print task_list


# def get_task():
#     global balls
#     global blocks
#     print "Getting tasks"
#     data = urllib2.urlopen("http://makeandroidapp.com/ar_demo/robot_tasks.txt") # read only 20 000 chars
#     for line in data:
#         tasks_list = line.split(",")
#         for i in range(0,int(tasks_list[0])):
#             balls.append("balls"+str(i))
#         for i in range(0,int(tasks_list[1])):
#             blocks.append("blocks"+str(i))
#     print balls
#     print blocks

def callback_pose(data):
        global start_x
        global start_y
        start_x = data.pose.pose.position.x
        start_y = data.pose.pose.position.y

def goto_location(location,sensitivity):
    goalReached = False

    while(not goalReached and not stop):

        goalReached = moveToGoal(location,sensitivity)
        if (goalReached):
            rospy.loginfo("Reached destination!")

def load_object(object_name,location):
    goalReached = False
    while(not goalReached and not stop):
        goalReached = moveToGoal(location,1)
        if (goalReached):
            print "Loading object now."
            time.sleep(5)
            rospy.loginfo("Loading object now!")

def unload_object(object_name,location):
    goalReached = False
    while(not goalReached and not stop):
        goalReached = moveToGoal(location,1)
        if (goalReached):
            print "UnLoading object now."
            time.sleep(5)

def moveToGoal(location,sensitivity):
    global move
    move = actionlib.SimpleActionClient("move_base", MoveBaseAction)
    while(not move.wait_for_server(rospy.Duration.from_sec(5.0))):
            rospy.loginfo("Waiting for the move_base action server to come up")
    simplegoal = MoveBaseGoal()
    simplegoal.target_pose.header.frame_id = "map"
    simplegoal.target_pose.header.stamp = rospy.Time.now()
    goal_location_coordinates = location.split(",")
    simplegoal.target_pose.pose.position =  Point(float(goal_location_coordinates[0]),float(goal_location_coordinates[1]),0)
    simplegoal.target_pose.pose.orientation.x = 0.0
    simplegoal.target_pose.pose.orientation.y = 0.0
    # if(sensitivity != 0):
    simplegoal.target_pose.pose.orientation.z = float(goal_location_coordinates[2])
    simplegoal.target_pose.pose.orientation.w = float(goal_location_coordinates[3])
    # else:
    #     simplegoal.target_pose.pose.orientation.z = 0.0
    #     simplegoal.target_pose.pose.orientation.w = 0.0
    rospy.loginfo("Sending Next goal location ")
    move.send_goal(simplegoal)
    pub = rospy.Publisher('mobile_base/commands/velocity', Twist, queue_size=10)
    msg = Twist()
    speed = 0.1
    msg.linear.x = speed
    pub.publish(msg)

    move.wait_for_result(rospy.Duration(60))
    if(move.get_state() ==  GoalStatus.SUCCEEDED):
    	rospy.loginfo("This is the end of navigation")
    	return True

    else:
    	rospy.loginfo("The robot failed to reach the destination")
    	return False

def checkdoor(current_location,goal_location):
    max_call = 0
    soundhandle = SoundClient()
    current_location_coordinates = current_location.split(",")
    goal_location_coordinates = goal_location.split(",")
    rospy.Subscriber ('/amcl_pose',PoseWithCovarianceStamped, callback_pose)
    rospy.wait_for_service('move_base/NavfnROS/make_plan')
    make_plan = rospy.ServiceProxy('move_base/NavfnROS/make_plan', GetPlan)
    start = PoseStamped()
    goal = PoseStamped()
    start.header.frame_id = "map"
    goal.header.frame_id = "map"
    tolerance = 0.0
    # print current_location
    start.pose.position.x= float(current_location_coordinates[0])
    start.pose.position.y= float(current_location_coordinates[1])
    goal.pose.position.x = float(goal_location_coordinates[0])
    goal.pose.position.y = float(goal_location_coordinates[1])
    plan_response = make_plan(start = start, goal = goal, tolerance = tolerance)
    poses = plan_response.plan.poses
    # print poses
    if(max_call>2):
        rospy.ServiceProxy('/move_base/clear_costmaps',std_srvs.srv.Empty())
        clear_cost_map()
        max_call = 0
    if not poses:
        max_call = max_call+1
        soundhandle.say('Please Open the door for me.')
        print "Please Open the door for me."
        print "I want to go to "+goal_location
        rospy.sleep(4)
        return False
    else:
        soundhandle.say('Thank you for opening the door.')
        rospy.sleep(3)
        print "Thank you."
        return True

def approach(location_name,location_coordinate):
    print "Going to door :"+location_name+" which is at :"+location_coordinate
    goto_location(location_coordinate,1)

def opendoor(current_location,goal_location):
    door_open = False
    while(door_open == False):
        door_open = checkdoor(current_location,goal_location)
    print "Door is now open and I will go gothrough it."

def gothrough(destination,destination_coordinate):
    global current_room
    goto_location(destination_coordinate,0)
    current_room = destination

def testing_new():
    destination = "r1_corr_g"
    goal_list = asp_planning.find_plan(current_room,destination)
    print "Testing Successful"

# Server side functions
def get_token_for_going_in():
    global token_no
    response = requests.post('http://makeandroidapp.com/ar_demo/queue_manager/token_manager.php', data={'robot':robot_no})
    token_no = int(response.text)
    print "token_no for going in is :"+str(token_no)

def get_token_for_going_out():
    global token_no
    response = requests.post('http://makeandroidapp.com/ar_demo/queue_manager/token_manager.php', data={'robot':robot_no,'action':'out'})
    token_no = int(response.text)
    print "token_no for going in is :"+str(token_no)

def get_token_for_loading_object(object_name):
    global object_token
    location_number = ""
    if(object_name == "s0"):
        location_number = "s0";

    elif(object_name == "s1"):
        location_number = "s1";

    elif(object_name == "s2"):
        location_number = "s2";

    response = requests.post('http://makeandroidapp.com/ar_demo/queue_manager/object_token_manager.php', data={'location':location_number})
    object_token = int(response.text)
    print "Object token is :"+str(object_token)

def wait_for_gothrough_turn():
    response = requests.get('http://makeandroidapp.com/ar_demo/queue_manager/token_manager_2.php', params={'token':token_no})
    my_turn = int(response.text)
    if int(my_turn) == 1:
        return True
    else:
        return False


def wait_for_gothrough_turn_out():
    response = requests.get('http://makeandroidapp.com/ar_demo/queue_manager/token_manager_2.php', params={'token':token_no,'action':'going_out'})
    my_turn = int(response.text)
    if int(my_turn) == 1:
        return True
    else:
        return False


def wait_for_door_open():
    response = requests.get('http://makeandroidapp.com/ar_demo/queue_manager/token_manager.php', params={'door_action':'going_in'})
    my_turn = int(response.text)
    if int(my_turn) == 1:
        return True
    else:
        return False

def increment_ticket(action):
    global token_no
    response = requests.post('http://makeandroidapp.com/ar_demo/queue_manager/token_manager_2.php', data={'increment_ticket':action})
    print "Next robot to go through door is"+response.text

def get_reservation_state():
    # time.sleep(3)
    query_args = {'reset_token_please':'yes'}
    data = urllib.urlencode(query_args)
    url = "http://makeandroidapp.com/ar_demo/queue_manager/token_manager.php?get_reservation_state=1"
    request = urllib2.Request(url,data)
    response = urllib2.urlopen(request)
    html = response.read()
    print "Reservation State is "+html
    return int(html)

# Server side functions

#constraint value 2,3,4
def change_tasks():
    global task_list
    global constraints
    global original_task_list
    if(constraints>3):
        task_list.sort(reverse=True)


def check_constraints():
    global move
    global stop
    global loaded
    first = True
    while(1):
        if(completed):
            return
        get_constraints()
        if(previous_constraints!=constraints and not first):
            if(loaded !=1):
                stop = True
                print "Stop signal"
            print "Need Generating new plan due to addition of constraint."
            change_tasks()
            #move.cancel_all_goals()
            first = False
            time.sleep(15)
            stop = False
            bring_items()
        else:
            first=False


            # stop = False

def upload_robot_status():
    data = urllib2.urlopen("http://makeandroidapp.com/ar_demo/reserve.php?status=1&robot="+robot_no) # read only 20 000 chars
    for line in data:
        print line

def get_human_intention():
    data = urllib2.urlopen("http://makeandroidapp.com/ar_demo/door_status_human.php") # read only 20 000 chars
    for line in data:
        return line

#If collision send in safe positions and inifinte while until stress resolved


def bring_items():
    # item_list = ["water","coffee"]
    # constraint = []
    # bring_items_planner(item_list,"I have got the items you requested to bring.",constraint)
    # constraint = []
    # previous_constraint = []
    # item_list = ["coffee"]

    # ar_plan.upload_task_status(item_list,task_status)
    # first_run = True;
    # for constraint_line in constraints:
    #         constraint = constraint_line.split(" ")
    # print "Added new constraints"
    bring_items_planner("I have got the items you requested to bring.")
    time.sleep(4)

def final_time():
    global start_time
    global finish_time
    total_time = (finish_time-start_time)*60
    with open('Log.txt', 'a+') as f:
        f.write("\n Total time taken for all tasks is : "+str(total_time))
    f.close()

def log_task(status,task_name):
    global current_task_time
    time =  datetime.datetime.now()

    log_text = ""
    if status == "start":
        current_task_time = time
        log_text = "Picked object "+str(task_name)+" at :"+str(time)
        with open('Log.txt', 'a+') as f:
            f.write("\n "+log_text)
        f.close()
    elif status == "unload":
        time_taken = (time - current_task_time)*60
        log_text = "Unloaded object "+str(task_name)+" at :"+str(time)
        with open('Log.txt', 'a+') as f:
            f.write("\n "+log_text)
            f.write("\n Total time taken for bringing "+str(task_name)+" is :"+str(time_taken))
        f.close()



def token_reset_final():
    time.sleep(3)
    query_args = {'reset_token_please':'yes'}
    data = urllib.urlencode(query_args)
    url = "http://makeandroidapp.com/ar_demo/queue_manager/token_manager.php?completed=yes"
    reset_token_value = 0
    request = urllib2.Request(url,data)
    response = urllib2.urlopen(request)
    html = response.read()
    print "Token reset after final drop?"+html
    global token_no



def token_reset():
    global token_no
    token_no = -99
    time.sleep(3)
    reset_token_value =1
    query_args = {'reset_token_please':'yes'}
    data = urllib.urlencode(query_args)
    url = "http://makeandroidapp.com/ar_demo/queue_manager/token_manager.php?action=going_out&reset_token=1"
    reset_token_value = 0
    request = urllib2.Request(url,data)
    response = urllib2.urlopen(request)
    html = response.read()
    print "Token reset done?"+html

    # time.sleep(3)
    # data = urllib2.urlopen("http://makeandroidapp.com/ar_demo/queue_manager/token_manager.php?reset_token=1")
    # time.sleep(3)
    # for line in data:
    #     updated_token = int(line)
    # print "One token reduced and value is "+ str(updated_token)

def bring_items_planner(text):

    # WHile task_list empty always 1st element of the list chosen
        global skip_unload
        global in_queue
        global token_no
        # get_task()
        print "task"
        global balls
        global blocks
        global task_list
        global original_task_list
        global current_room
        global completed
        global loaded
        soundhandle = SoundClient()
        # goal_list = asp_planning.find_plan(current_room,len(balls),len(blocks),constraints)
        global start_time
        global finish_time
        start_time = datetime.datetime.now()

        while len(task_list) != 0:
            global stop
        # for individual_task in task_list:
            # log_task("start",individual_task)
            # goal_list = asp_planning.find_plan(current_room,individual_task,"0")
            current_task = task_list[0]
            goal_list = asp_planning.find_plan(current_room,task_list[0],"0")
            print goal_list
            old_current_room = current_room
            loaded = 0
            skip_unload = 0
            for goal in goal_list:
                print "Value of stop is "+str(stop)+"and loaded is :"+str(loaded)
                if(stop and loaded == 0):
                    print "Nothing loaded so returning"+str(goal)
                    return
                task = goal[2]
                if(task == 3):
                    print "Value of stop is "+str(stop)+" in :"+str(goal)
                    object_name = goal[0]
                    object_location_list = location_list.find_object_loacation(object_name)
                    time.sleep(25)
                    get_token_for_loading_object(object_name)
                    object_location = object_location_list[object_token-1]
                    print "I am loading "+object_name+" which is at :"+object_location
                    if(stop):
                        return
                    # soundhandle.say('I am loading object '+object_name)
                    loaded = 1
                    #### Change status of loading object
                    task_list.remove(current_task)
                    print "Tasks remaining in load:"+str(task_list)
                    print "Tasks remaining in original_task_list:"+str(original_task_list)
                    ##################################################################################
                    # load_object(object_name,object_location)


                elif(task == 4):
                    if(stop):
                        return
                    print "Value of stop is "+str(stop)+" in :"+str(goal)
                    object_name = goal[0]
                    object_location = drop_locations[token_no-1]
                    token_no = -99
                    print "Unloading at :"+object_location
                    print current_task
                    print str(original_task_list)
                    print str(task_list)
                    original_task_list.remove(current_task)
                    task_list = original_task_list[:]
                    print "Task list in unload is :"+str(task_list)
                    loaded = 0
                        # unload_object(object_name,object_location)
                    # soundhandle.say('I am unloading object '+object_name)

                else :
                    door_list = location_list.find_location(current_room)
                    location_name = goal[0]
                    if(location_name in door_list):
                        door_locations = door_list[location_name]
                        approach_door_coordinate = door_locations[0]
                        final_door_coordinate = door_locations[2]
                        new_location = door_locations[1]
                        if(task == 0):
                            print "Value of stop is "+str(stop)+" in :"+str(goal)
                            print "Approaching delay of 10secs"
                            timer_to_sleep = 0
                            while(timer_to_sleep < 11):
                                if(stop):
                                    return
                                time.sleep(1)
                                timer_to_sleep = timer_to_sleep + 1
                            print "Approaching door :"+location_name+" which is at :"+approach_door_coordinate
                            if(approach_door_coordinate == door_out_to_in_approach_queue[0]):
                                "Value of token is "+str(token)
                                if(token_no == -99):
                                    get_token_for_going_in()
                                if(token_no>1):
                                    in_queue = True
                                else:
                                    in_queue = False
                                approach_door_coordinate = door_out_to_in_approach_queue[token_no-1]
                            if(approach_door_coordinate == door_in_to_out_approach_queue[0]):
                                if(token_no == -99):
                                    get_token_for_going_out()
                                # token_no = get_token_for_going_out()
                                if(token_no>1):
                                    in_queue = True
                                else:
                                    in_queue = False
                                approach_door_coordinate = door_in_to_out_approach_queue[token_no-1]
                            print "Approaching door according to token"+approach_door_coordinate
                            # approach(location_name,approach_door_coordinate)

                        elif(task == 1):
                            print "Value of stop is "+str(stop)+" in :"+str(goal)
                            print "Open door action"+approach_door_coordinate +" "+ final_door_coordinate
                            if(final_door_coordinate == "3.66259416799,0.694994267136,-0.859800417615,0.51063023987"):
                                while(not wait_for_gothrough_turn()):
                                    time.sleep(2)
                                print "My turn has arrived to go in"
                            if(final_door_coordinate == "5.44927609813,2.67617526965,0.357920191926,0.933752181369"):
                                while(not wait_for_gothrough_turn_out()):
                                    time.sleep(2)
                                print "My turn has arrived to go out"

                            if(not in_queue):
                                print "Opening door since not in queue"
                                while(not wait_for_door_open()):
                                    time.sleep(4)
                                print "Human opened the door."
                                # opendoor(approach_door_coordinate,final_door_coordinate)
                            else:
                                print "Door already opened by one ahead of mine"

                        elif(task == 2):
                            # if skip_unload == 1:
                            time.sleep(5)
                            print "Value of stop is "+str(stop)+" in :"+str(goal)
                            #     print "Flushing gothrough action"
                            # else:
                            #
                            print "going through"+final_door_coordinate+new_location
                            if(new_location == "r1_corr_h" and current_room == "r1_h9_area"):
                                token_no = -99
                            print "Code comes here"
                            # token_reset()
                        # ar_plan.make_ar_plan(final_door_coordinate)
                            current_room = new_location
                            # ar_plan.make_ar_plan(final_door_coordinate)
                            # gothrough(new_location,final_door_coordinate)
                            if(final_door_coordinate == "3.66259416799,0.694994267136,-0.859800417615,0.51063023987"):
                                print "Token incremented for going in"
                                increment_ticket("in")
                            if(final_door_coordinate == "5.44927609813,2.67617526965,0.357920191926,0.933752181369"):
                                print "Token incremented for going out"
                                increment_ticket("out")
                    else:
                        time.sleep(10)
                        if(stop):
                            return
                        print "Value of stop is "+str(stop)+" in :"+str(goal)
                        print "Location "+location_name + " is not there in "+current_room
                        # ar_plan.make_ar_plan(location_coordinate)
                        door_list = location_list.find_door(location_name)
                        new_location_name  = door_list["room_name"]
                        location_coordinate = door_list[location_name]
                        # print "Human intent is :"+str(human_intent)
                        # if(location_coordinate[0] == door_out_to_in_approach_queue[0] and (human_intent == 0) ):
                        #     print "Human no intention to open or reservation state is 1"
                        #     # skip_unload = 1
                        # else:
                        #     "Changing room"
                        if(new_location_name == "r1_corr_h" and current_room != "r1_h9_area"):
                            print "value of token here is "+str(token_no)
                            if(token_no == -99):
                                get_token_for_going_in()
                            time.sleep(5)
                            # token_no = get_token_for_going_in()
                            if(token_no>1):
                                in_queue = True
                            else:
                                in_queue = False
                            location_to_go = door_out_to_in_approach_queue[token_no-1]
                            print "Location to go according to token is :"+location_to_go
                            # gothrough(new_location_name,location_to_go)
                            # ar_plan.make_ar_plan(location_to_go)
                        else:
                            print "Just Going through"
                            print "Approaching delay of 15secs"
                            time.sleep(8)

                            # gothrough(new_location_name,location_coordinate[0])
                            # ar_plan.make_ar_plan(location_coordinate[0])
                    ##### Uncomment the below part for debugging
                        current_room = new_location_name

        completed = True
                        ##########################################

def update_initial_pose(initial_pose_in):
    global initial_x
    global initial_y
    global initial_pose
    initial_x = initial_pose_in.pose.pose.position.x
    initial_y = initial_pose_in.pose.pose.position.y
    initial_pose = initial_pose_in

def multitask_begin():
    t1 = threading.Thread(target=check_constraints)
    t1.start()
    bring_items()
    t1.join()

def callback_pose(data):
        global start_x
        global start_y
        start_x = data.pose.pose.position.x
        start_y = data.pose.pose.position.y
        with open('robot_location.txt', 'w') as f:
             f.write(str(start_x)+","+str(start_y))
             f.close()

if __name__ == '__main__':
    try:
        rospy.init_node('asp_navigator_py')
        soundhandle = SoundClient()
        print "Tasks assigner"
        # rospy.wait_for_message('initialpose', PoseWithCovarianceStamped)
        # rospy.Subscriber('/initialpose', PoseWithCovarianceStamped, callback_pose)

        # Make sure we have the initial pose
        # while initial_pose.header.stamp == "":
        #     rospy.sleep(1)

        rospy.Subscriber ('/amcl_pose',PoseWithCovarianceStamped, callback_pose)
        rospy.sleep(0.5)
#        rospy.spin()
        #

        # #initializing robot position
        # with open('robot_location.txt', 'w') as f:
        #     f.write(str(start_x)+","+str(start_y))
        #     f.close()
        #initializing file for plan
        with open('entire_plan_robot_1.txt', 'w') as f:
            f.close()
        print "begin"
        multitask_begin()
        print "end"


    except rospy.ROSInterruptException:
            print "finished!"
