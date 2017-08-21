# CMake generated Testfile for 
# Source directory: /home/erle/ros2_ws/src/ros2/rcl_interfaces/rcl_interfaces
# Build directory: /home/erle/ros2_ws/build/rcl_interfaces
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/erle/ros2_ws/install/share/ament_cmake_test/cmake/run_test.py" "/home/erle/ros2_ws/build/rcl_interfaces/test_results/rcl_interfaces/lint_cmake.xunit.xml" "--output-file" "/home/erle/ros2_ws/build/rcl_interfaces/ament_lint_cmake/lint_cmake.txt" "--command" "/home/erle/ros2_ws/install/bin/ament_lint_cmake" "--xunit-file" "/home/erle/ros2_ws/build/rcl_interfaces/test_results/rcl_interfaces/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/erle/ros2_ws/src/ros2/rcl_interfaces/rcl_interfaces")
