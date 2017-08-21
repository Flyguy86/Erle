#!/usr/bin/env sh

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/erle/ros2_ws/install/share/ament_pep8/local_setup.sh\""
fi
if [ -f "/home/erle/ros2_ws/install/share/ament_pep8/local_setup.sh" ]; then
  . "/home/erle/ros2_ws/install/share/ament_pep8/local_setup.sh"
fi

export PYTHONPATH="/home/erle/ros2_ws/install/lib/python3.4/site-packages:$PYTHONPATH"
