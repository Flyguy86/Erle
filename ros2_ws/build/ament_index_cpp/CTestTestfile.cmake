# CMake generated Testfile for 
# Source directory: /home/erle/ros2_ws/src/ament/ament_index/ament_index_cpp
# Build directory: /home/erle/ros2_ws/build/ament_index_cpp
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(ament_index_cpp_utest "/usr/bin/python3" "-u" "/home/erle/ros2_ws/install/share/ament_cmake_test/cmake/run_test.py" "/home/erle/ros2_ws/build/ament_index_cpp/test_results/ament_index_cpp/ament_index_cpp_utest.gtest.xml" "--output-file" "/home/erle/ros2_ws/build/ament_index_cpp/ament_cmake_gtest/ament_index_cpp_utest.txt" "--command" "/home/erle/ros2_ws/build/ament_index_cpp//ament_index_cpp_utest" "--gtest_output=xml:/home/erle/ros2_ws/build/ament_index_cpp/test_results/ament_index_cpp/ament_index_cpp_utest.gtest.xml")
set_tests_properties(ament_index_cpp_utest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/erle/ros2_ws/build/ament_index_cpp//ament_index_cpp_utest" TIMEOUT "60")
add_test(copyright "/usr/bin/python3" "-u" "/home/erle/ros2_ws/install/share/ament_cmake_test/cmake/run_test.py" "/home/erle/ros2_ws/build/ament_index_cpp/test_results/ament_index_cpp/copyright.xunit.xml" "--output-file" "/home/erle/ros2_ws/build/ament_index_cpp/ament_copyright/copyright.txt" "--command" "/home/erle/ros2_ws/install/bin/ament_copyright" "--xunit-file" "/home/erle/ros2_ws/build/ament_index_cpp/test_results/ament_index_cpp/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/erle/ros2_ws/src/ament/ament_index/ament_index_cpp")
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/erle/ros2_ws/install/share/ament_cmake_test/cmake/run_test.py" "/home/erle/ros2_ws/build/ament_index_cpp/test_results/ament_index_cpp/lint_cmake.xunit.xml" "--output-file" "/home/erle/ros2_ws/build/ament_index_cpp/ament_lint_cmake/lint_cmake.txt" "--command" "/home/erle/ros2_ws/install/bin/ament_lint_cmake" "--xunit-file" "/home/erle/ros2_ws/build/ament_index_cpp/test_results/ament_index_cpp/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/erle/ros2_ws/src/ament/ament_index/ament_index_cpp")
add_test(uncrustify "/usr/bin/python3" "-u" "/home/erle/ros2_ws/install/share/ament_cmake_test/cmake/run_test.py" "/home/erle/ros2_ws/build/ament_index_cpp/test_results/ament_index_cpp/uncrustify.xunit.xml" "--output-file" "/home/erle/ros2_ws/build/ament_index_cpp/ament_uncrustify/uncrustify.txt" "--command" "/home/erle/ros2_ws/install/bin/ament_uncrustify" "--xunit-file" "/home/erle/ros2_ws/build/ament_index_cpp/test_results/ament_index_cpp/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/erle/ros2_ws/src/ament/ament_index/ament_index_cpp")
subdirs(gtest)
