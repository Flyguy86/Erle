# CMake generated Testfile for 
# Source directory: /home/erle/spider_ws/src/xacro
# Build directory: /home/erle/spider_ws/build_isolated/xacro
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_xacro_nosetests_test "/home/erle/spider_ws/build_isolated/xacro/catkin_generated/env_cached.sh" "/usr/bin/python" "/home/erle/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/erle/spider_ws/build_isolated/xacro/test_results/xacro/nosetests-test.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/erle/spider_ws/build_isolated/xacro/test_results/xacro" "/usr/bin/nosetests-2.7 -P --process-timeout=60 --where=/home/erle/spider_ws/src/xacro/test --with-xunit --xunit-file=/home/erle/spider_ws/build_isolated/xacro/test_results/xacro/nosetests-test.xml")
subdirs(test)
