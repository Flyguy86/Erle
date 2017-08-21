# CMake generated Testfile for 
# Source directory: /home/erle/ros2_ws/src/ament/ament_lint/ament_cmake_lint_cmake
# Build directory: /home/erle/ros2_ws/build/ament_cmake_lint_cmake
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/erle/ros2_ws/install/share/ament_cmake_test/cmake/run_test.py" "/home/erle/ros2_ws/build/ament_cmake_lint_cmake/test_results/ament_cmake_lint_cmake/lint_cmake.xunit.xml" "--output-file" "/home/erle/ros2_ws/build/ament_cmake_lint_cmake/ament_lint_cmake/lint_cmake.txt" "--command" "/home/erle/ros2_ws/install/bin/ament_lint_cmake" "--xunit-file" "/home/erle/ros2_ws/build/ament_cmake_lint_cmake/test_results/ament_cmake_lint_cmake/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/erle/ros2_ws/src/ament/ament_lint/ament_cmake_lint_cmake")
