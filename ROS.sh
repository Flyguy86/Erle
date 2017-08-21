#!/bin/bash
# http://docs.erlerobotics.com/brains/erle-brain-3/sofware/apm/advanced_configuration
echo "Note: Notice: ROS has been included, but is disabled."
echo "        sudo systemctl enable ros.service"
echo "        roscore  <-- separate terminial or on boot"
echo "        rosservice call /camera/start_capture"
echo "        rosnode list"
echo "termial responds: No handlers could be found for logger rosout"
echo "        sudo apt-get update"
echo "        sudo apt-get install ros-raspicam-erlerobotics"
echo "        sudo apt-get install ros-camera-web-browser-erlerobotics"
