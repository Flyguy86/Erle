# CMake generated Testfile for 
# Source directory: /home/erle/ros2_ws/src/ros2/rosidl/rosidl_default_generators
# Build directory: /home/erle/ros2_ws/build/rosidl_default_generators
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/erle/ros2_ws/install/share/ament_cmake_test/cmake/run_test.py" "/home/erle/ros2_ws/build/rosidl_default_generators/test_results/rosidl_default_generators/lint_cmake.xunit.xml" "--output-file" "/home/erle/ros2_ws/build/rosidl_default_generators/ament_lint_cmake/lint_cmake.txt" "--command" "/home/erle/ros2_ws/install/bin/ament_lint_cmake" "--xunit-file" "/home/erle/ros2_ws/build/rosidl_default_generators/test_results/rosidl_default_generators/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/erle/ros2_ws/src/ros2/rosidl/rosidl_default_generators")
