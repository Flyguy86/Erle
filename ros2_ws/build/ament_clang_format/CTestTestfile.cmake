# CMake generated Testfile for 
# Source directory: /home/erle/ros2_ws/src/ament/ament_lint/ament_clang_format
# Build directory: /home/erle/ros2_ws/build/ament_clang_format
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/erle/ros2_ws/install/share/ament_cmake_test/cmake/run_test.py" "/home/erle/ros2_ws/build/ament_clang_format/test_results/ament_clang_format/lint_cmake.xunit.xml" "--output-file" "/home/erle/ros2_ws/build/ament_clang_format/ament_lint_cmake/lint_cmake.txt" "--command" "/home/erle/ros2_ws/install/bin/ament_lint_cmake" "--xunit-file" "/home/erle/ros2_ws/build/ament_clang_format/test_results/ament_clang_format/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/erle/ros2_ws/src/ament/ament_lint/ament_clang_format")
add_test(pep8 "/usr/bin/python3" "-u" "/home/erle/ros2_ws/install/share/ament_cmake_test/cmake/run_test.py" "/home/erle/ros2_ws/build/ament_clang_format/test_results/ament_clang_format/pep8.xunit.xml" "--output-file" "/home/erle/ros2_ws/build/ament_clang_format/ament_pep8/pep8.txt" "--command" "/home/erle/ros2_ws/install/bin/ament_pep8" "--xunit-file" "/home/erle/ros2_ws/build/ament_clang_format/test_results/ament_clang_format/pep8.xunit.xml" "ament_clang_format" "bin/ament_clang_format")
set_tests_properties(pep8 PROPERTIES  LABELS "pep8;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/erle/ros2_ws/src/ament/ament_lint/ament_clang_format")
add_test(pyflakes "/usr/bin/python3" "-u" "/home/erle/ros2_ws/install/share/ament_cmake_test/cmake/run_test.py" "/home/erle/ros2_ws/build/ament_clang_format/test_results/ament_clang_format/pyflakes.xunit.xml" "--output-file" "/home/erle/ros2_ws/build/ament_clang_format/ament_pyflakes/pyflakes.txt" "--command" "/home/erle/ros2_ws/install/bin/ament_pyflakes" "--xunit-file" "/home/erle/ros2_ws/build/ament_clang_format/test_results/ament_clang_format/pyflakes.xunit.xml" "ament_clang_format" "bin/ament_clang_format")
set_tests_properties(pyflakes PROPERTIES  LABELS "pyflakes;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/erle/ros2_ws/src/ament/ament_lint/ament_clang_format")
