# CMake generated Testfile for 
# Source directory: /home/erle/ros2_ws/src/ros2/rcl/rcl
# Build directory: /home/erle/ros2_ws/build/rcl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/home/erle/ros2_ws/install/share/ament_cmake_test/cmake/run_test.py" "/home/erle/ros2_ws/build/rcl/test_results/rcl/copyright.xunit.xml" "--output-file" "/home/erle/ros2_ws/build/rcl/ament_copyright/copyright.txt" "--command" "/home/erle/ros2_ws/install/bin/ament_copyright" "--xunit-file" "/home/erle/ros2_ws/build/rcl/test_results/rcl/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/erle/ros2_ws/src/ros2/rcl/rcl")
add_test(cppcheck "/usr/bin/python3" "-u" "/home/erle/ros2_ws/install/share/ament_cmake_test/cmake/run_test.py" "/home/erle/ros2_ws/build/rcl/test_results/rcl/cppcheck.xunit.xml" "--output-file" "/home/erle/ros2_ws/build/rcl/ament_cppcheck/cppcheck.txt" "--command" "/home/erle/ros2_ws/install/bin/ament_cppcheck" "--xunit-file" "/home/erle/ros2_ws/build/rcl/test_results/rcl/cppcheck.xunit.xml")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/erle/ros2_ws/src/ros2/rcl/rcl")
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/erle/ros2_ws/install/share/ament_cmake_test/cmake/run_test.py" "/home/erle/ros2_ws/build/rcl/test_results/rcl/lint_cmake.xunit.xml" "--output-file" "/home/erle/ros2_ws/build/rcl/ament_lint_cmake/lint_cmake.txt" "--command" "/home/erle/ros2_ws/install/bin/ament_lint_cmake" "--xunit-file" "/home/erle/ros2_ws/build/rcl/test_results/rcl/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/erle/ros2_ws/src/ros2/rcl/rcl")
add_test(uncrustify "/usr/bin/python3" "-u" "/home/erle/ros2_ws/install/share/ament_cmake_test/cmake/run_test.py" "/home/erle/ros2_ws/build/rcl/test_results/rcl/uncrustify.xunit.xml" "--output-file" "/home/erle/ros2_ws/build/rcl/ament_uncrustify/uncrustify.txt" "--command" "/home/erle/ros2_ws/install/bin/ament_uncrustify" "--xunit-file" "/home/erle/ros2_ws/build/rcl/test_results/rcl/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/erle/ros2_ws/src/ros2/rcl/rcl")
