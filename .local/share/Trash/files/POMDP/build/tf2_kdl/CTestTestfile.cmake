# CMake generated Testfile for 
# Source directory: /home/chelsea/catkin_ws/src/geometry2/tf2_kdl
# Build directory: /home/chelsea/catkin_ws/build/tf2_kdl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_tf2_kdl_rostest_test_test.launch "/home/chelsea/catkin_ws/build/tf2_kdl/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chelsea/catkin_ws/build/tf2_kdl/test_results/tf2_kdl/rostest-test_test.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/chelsea/catkin_ws/src/geometry2/tf2_kdl --package=tf2_kdl --results-filename test_test.xml --results-base-dir \"/home/chelsea/catkin_ws/build/tf2_kdl/test_results\" /home/chelsea/catkin_ws/src/geometry2/tf2_kdl/test/test.launch ")
add_test(_ctest_tf2_kdl_rostest_test_test_python.launch "/home/chelsea/catkin_ws/build/tf2_kdl/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/chelsea/catkin_ws/build/tf2_kdl/test_results/tf2_kdl/rostest-test_test_python.xml" "--return-code" "/usr/bin/python2 /opt/ros/melodic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/chelsea/catkin_ws/src/geometry2/tf2_kdl --package=tf2_kdl --results-filename test_test_python.xml --results-base-dir \"/home/chelsea/catkin_ws/build/tf2_kdl/test_results\" /home/chelsea/catkin_ws/src/geometry2/tf2_kdl/test/test_python.launch ")
subdirs("gtest")
