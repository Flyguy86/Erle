# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/erle/spider_ws/src/crab_maestro_controller

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/erle/spider_ws/build_isolated/crab_maestro_controller

# Include any dependencies generated for this target.
include CMakeFiles/polstro.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/polstro.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/polstro.dir/flags.make

CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.o: CMakeFiles/polstro.dir/flags.make
CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.o: /home/erle/spider_ws/src/crab_maestro_controller/src/PolstroSerialInterface.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/erle/spider_ws/build_isolated/crab_maestro_controller/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.o -c /home/erle/spider_ws/src/crab_maestro_controller/src/PolstroSerialInterface.cpp

CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/erle/spider_ws/src/crab_maestro_controller/src/PolstroSerialInterface.cpp > CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.i

CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/erle/spider_ws/src/crab_maestro_controller/src/PolstroSerialInterface.cpp -o CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.s

CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.o.requires:
.PHONY : CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.o.requires

CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.o.provides: CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.o.requires
	$(MAKE) -f CMakeFiles/polstro.dir/build.make CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.o.provides.build
.PHONY : CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.o.provides

CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.o.provides.build: CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.o

CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.o: CMakeFiles/polstro.dir/flags.make
CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.o: /home/erle/spider_ws/src/crab_maestro_controller/src/PolstroSerialInterfacePOSIX.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/erle/spider_ws/build_isolated/crab_maestro_controller/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.o -c /home/erle/spider_ws/src/crab_maestro_controller/src/PolstroSerialInterfacePOSIX.cpp

CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/erle/spider_ws/src/crab_maestro_controller/src/PolstroSerialInterfacePOSIX.cpp > CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.i

CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/erle/spider_ws/src/crab_maestro_controller/src/PolstroSerialInterfacePOSIX.cpp -o CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.s

CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.o.requires:
.PHONY : CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.o.requires

CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.o.provides: CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.o.requires
	$(MAKE) -f CMakeFiles/polstro.dir/build.make CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.o.provides.build
.PHONY : CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.o.provides

CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.o.provides.build: CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.o

# Object files for target polstro
polstro_OBJECTS = \
"CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.o" \
"CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.o"

# External object files for target polstro
polstro_EXTERNAL_OBJECTS =

/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.o
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.o
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: CMakeFiles/polstro.dir/build.make
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /home/erle/ros_catkin_ws/install_isolated/lib/libroscpp.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /usr/lib/arm-linux-gnueabihf/libboost_signals.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /usr/lib/arm-linux-gnueabihf/libboost_filesystem.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /home/erle/ros_catkin_ws/install_isolated/lib/librosconsole.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /home/erle/ros_catkin_ws/install_isolated/lib/librosconsole_log4cxx.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /home/erle/ros_catkin_ws/install_isolated/lib/librosconsole_backend_interface.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /usr/lib/liblog4cxx.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /usr/lib/arm-linux-gnueabihf/libboost_regex.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /home/erle/ros_catkin_ws/install_isolated/lib/libxmlrpcpp.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /home/erle/ros_catkin_ws/install_isolated/lib/libroscpp_serialization.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /home/erle/ros_catkin_ws/install_isolated/lib/librostime.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /usr/lib/arm-linux-gnueabihf/libboost_date_time.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /home/erle/ros_catkin_ws/install_isolated/lib/libcpp_common.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /usr/lib/arm-linux-gnueabihf/libboost_system.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /usr/lib/arm-linux-gnueabihf/libboost_thread.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /usr/lib/arm-linux-gnueabihf/libpthread.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: /usr/lib/arm-linux-gnueabihf/libconsole_bridge.so
/home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so: CMakeFiles/polstro.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library /home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/polstro.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/polstro.dir/build: /home/erle/spider_ws/devel_isolated/crab_maestro_controller/lib/libpolstro.so
.PHONY : CMakeFiles/polstro.dir/build

CMakeFiles/polstro.dir/requires: CMakeFiles/polstro.dir/src/PolstroSerialInterface.cpp.o.requires
CMakeFiles/polstro.dir/requires: CMakeFiles/polstro.dir/src/PolstroSerialInterfacePOSIX.cpp.o.requires
.PHONY : CMakeFiles/polstro.dir/requires

CMakeFiles/polstro.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/polstro.dir/cmake_clean.cmake
.PHONY : CMakeFiles/polstro.dir/clean

CMakeFiles/polstro.dir/depend:
	cd /home/erle/spider_ws/build_isolated/crab_maestro_controller && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/erle/spider_ws/src/crab_maestro_controller /home/erle/spider_ws/src/crab_maestro_controller /home/erle/spider_ws/build_isolated/crab_maestro_controller /home/erle/spider_ws/build_isolated/crab_maestro_controller /home/erle/spider_ws/build_isolated/crab_maestro_controller/CMakeFiles/polstro.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/polstro.dir/depend

