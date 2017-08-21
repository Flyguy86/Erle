#!/usr/bin/env python3
import rospy
from std_msgs.msg import String

rospy.init_node('rosimple_node', anonymous=True)
import sys
import time
from crab_msgs.msg import *
from sensor_msgs.msg import Joy

standup_time=20

################
## INITIALIZE ##
################
pub = rospy.Publisher('/joy', Joy, queue_size=10)
msg = Joy()
msg.header.stamp = rospy.Time.now()
rate = rospy.Rate(10)

valueAxe = 0.0
valueButton = 0
for i in range (0, 20):
	msg.axes.append(valueAxe)
for e in range (0, 17):
	msg.buttons.append(valueButton)


####################
## STAND UP 	  ##
####################
msg.buttons[3] = 1
i=0
bo=True
standup_time=standup_time/3
while not rospy.is_shutdown() and bo:
	i=i+1
	if (i>standup_time):
	  bo=False
	  msg.buttons[3] = 0
	pub.publish(msg)
	rate.sleep()
time.sleep(2)
import sys
import time
from crab_msgs.msg import *
from sensor_msgs.msg import Joy

walking_time=2

################
## INITIALIZE ##
################
pub = rospy.Publisher('/joy', Joy, queue_size=10)
msg = Joy()
msg.header.stamp = rospy.Time.now()
rate = rospy.Rate(10)

valueAxe = 0.0
valueButton = 0
for i in range (0, 20):
	msg.axes.append(valueAxe)
for e in range (0, 17):
	msg.buttons.append(valueButton)


#################
## LEFT   ##
#################
start = time.time()
msg.axes[0] = 1
bo=True
while not rospy.is_shutdown() and bo:
	sample_time = time.time()
	if ((sample_time - start) > walking_time):
	  bo=False
	  msg.axes[0] = 0
	pub.publish(msg)
	rate.sleep()


