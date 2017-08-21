# generated from
# ament_cmake_core/cmake/symlink_install/ament_cmake_symlink_install.cmake.in

# include CMake functions
include(CMakeParseArguments)

# create empty symlink install manifest before starting install step
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt")

#
# Reimplement CMake install(DIRECTORY) command to use symlinks instead of
# copying resources.
#
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_directory)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "DIRECTORY;PATTERN;PATTERN_EXCLUDE" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_directory() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/erle/ros2_ws/install/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # default pattern to include
  if("${ARG_PATTERN} " STREQUAL " ")
    set(ARG_PATTERN "*")
  endif()

  # iterate over directories
  foreach(dir ${ARG_DIRECTORY})
    # make dir an absolute path
    if(NOT IS_ABSOLUTE "${dir}")
      set(dir "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/${dir}")
    endif()

    if(EXISTS "${dir}")
      # if directory has no trailing slash
      # append folder name to destination
      set(destination "${ARG_DESTINATION}")
      string(LENGTH "${dir}" length)
      math(EXPR offset "${length} - 1")
      string(SUBSTRING "${dir}" ${offset} 1 dir_last_char)
      if(NOT "${dir_last_char} " STREQUAL "/ ")
        get_filename_component(destination_name "${dir}" NAME)
        set(destination "${destination}/${destination_name}")
      else()
        # remove trailing slash
        string(SUBSTRING "${dir}" 0 ${offset} dir)
      endif()

      # glob recursive files
      set(relative_files "")
      foreach(pattern ${ARG_PATTERN})
        file(
          GLOB_RECURSE
          include_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT "${include_files} " STREQUAL " ")
          list(APPEND relative_files ${include_files})
        endif()
      endforeach()
      foreach(pattern ${ARG_PATTERN_EXCLUDE})
        file(
          GLOB_RECURSE
          exclude_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT "${exclude_files} " STREQUAL " ")
          list(REMOVE_ITEM relative_files ${exclude_files})
        endif()
      endforeach()
      list(SORT relative_files)

      foreach(relative_file ${relative_files})
        set(absolute_file "${dir}/${relative_file}")
        # determine link name for file including destination path
        set(symlink "${destination}/${relative_file}")

        # ensure that destination exists
        get_filename_component(symlink_dir "${symlink}" PATH)
        if(NOT EXISTS "${symlink_dir}")
          file(MAKE_DIRECTORY "${symlink_dir}")
        endif()

        _ament_cmake_symlink_install_create_symlink("${absolute_file}" "${symlink}")
      endforeach()
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_directory() can't find '${dir}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(FILES) command to use symlinks instead of copying
# resources.
#
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_files)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION;RENAME" "FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/erle/ros2_ws/install/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  if(ARG_RENAME)
    list(LENGTH ARG_FILES file_count)
    if(NOT file_count EQUAL 1)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "RENAME argument but not with a single file")
    endif()
  endif()

  # iterate over files
  foreach(file ${ARG_FILES})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      if(NOT ARG_RENAME)
        set(symlink "${ARG_DESTINATION}/${filename}")
      else()
        set(symlink "${ARG_DESTINATION}/${ARG_RENAME}")
      endif()
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_files() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(PROGRAMS) command to use symlinks instead of copying
# resources.
#
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_programs)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "PROGRAMS" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_programs() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/erle/ros2_ws/install/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # iterate over programs
  foreach(file ${ARG_PROGRAMS})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${ARG_DESTINATION}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_programs() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(TARGETS) command to use symlinks instead of copying
# resources.
#
# :param TARGET_FILES: the absolute files, replacing the name of targets passed
#   in as TARGETS
# :type TARGET_FILES: list of files
# :param ARGN: the same arguments as the CMake install command except that
#   keywords identifying the kind of type and the DESTINATION keyword must be
#   joined with an underscore, e.g. ARCHIVE_DESTINATION.
# :type ARGN: various
#
function(ament_cmake_symlink_install_targets)
  cmake_parse_arguments(ARG "OPTIONAL" "ARCHIVE_DESTINATION;DESTINATION;LIBRARY_DESTINATION;RUNTIME_DESTINATION"
    "TARGETS;TARGET_FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_targets() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # iterate over target files
  foreach(file ${ARG_TARGET_FILES})
    if(NOT IS_ABSOLUTE "${file}")
      message(FATAL_ERROR "ament_cmake_symlink_install_targets() target file "
        "'${file}' must be an absolute path")
    endif()

    # determine destination of file based on extension
    set(destination "")
    get_filename_component(fileext "${file}" EXT)
    if("${fileext}" STREQUAL ".a" OR "${fileext}" STREQUAL ".lib")
      set(destination "${ARG_ARCHIVE_DESTINATION}")
    elseif("${fileext}" STREQUAL ".dylib" OR "${fileext}" STREQUAL ".so")
      set(destination "${ARG_LIBRARY_DESTINATION}")
    elseif("${fileext} " STREQUAL " " OR "${fileext}" STREQUAL ".dll" OR "${fileext}" STREQUAL ".exe")
      set(destination "${ARG_RUNTIME_DESTINATION}")
    endif()
    if("${destination} " STREQUAL " ")
      set(destination "${ARG_DESTINATION}")
    endif()

    # make destination an absolute path and ensure that it exists
    if(NOT IS_ABSOLUTE "${destination}")
      set(destination "/home/erle/ros2_ws/install/${destination}")
    endif()
    if(NOT EXISTS "${destination}")
      file(MAKE_DIRECTORY "${destination}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${destination}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_targets() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

function(_ament_cmake_symlink_install_create_symlink absolute_file symlink)
  # register symlink for being removed during install step
  file(APPEND "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt"
    "${symlink}\n")

  # avoid any work if correct symlink is already in place
  if(EXISTS "${symlink}" AND IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    get_filename_component(real_absolute_file "${absolute_file}" REALPATH)
    if("${destination} " STREQUAL "${real_absolute_file} ")
      message(STATUS "Up-to-date symlink: ${symlink}")
      return()
    endif()
  endif()

  message(STATUS "Symlinking: ${symlink}")
  if(EXISTS "${symlink}")
    file(REMOVE "${symlink}")
  endif()

  execute_process(
    COMMAND "/usr/bin/cmake" "-E" "create_symlink"
      "${absolute_file}"
      "${symlink}"
  )
  # the CMake command does not provide a return code so check manually
  if(NOT EXISTS "${symlink}" OR NOT IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    message(FATAL_ERROR
      "Could not create symlink '${symlink}' pointing to '${absolute_file}'")
  endif()
endfunction()

# end of template

message(" - Execute custom install script")

# begin of custom install code

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_index/rosidl_interfaces/nav_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_index/rosidl_interfaces/nav_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/grid_cells.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/grid_cells__struct.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/map_meta_data.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/map_meta_data__struct.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/occupancy_grid.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/occupancy_grid__struct.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/odometry.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/odometry__struct.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/path.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/path__struct.h" "DESTINATION" "include/nav_msgs/msg")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/grid_cells.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/grid_cells__struct.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/map_meta_data.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/map_meta_data__struct.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/occupancy_grid.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/occupancy_grid__struct.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/odometry.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/odometry__struct.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/path.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_c/nav_msgs/msg/path__struct.h" "DESTINATION" "include/nav_msgs/msg")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/grid_cells.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/grid_cells__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/grid_cells__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/map_meta_data.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/map_meta_data__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/map_meta_data__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/occupancy_grid.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/occupancy_grid__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/occupancy_grid__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/odometry.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/odometry__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/odometry__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/path.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/path__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/path__traits.hpp" "DESTINATION" "include/nav_msgs/msg")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/grid_cells.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/grid_cells__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/grid_cells__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/map_meta_data.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/map_meta_data__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/map_meta_data__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/occupancy_grid.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/occupancy_grid__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/occupancy_grid__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/odometry.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/odometry__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/odometry__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/path.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/path__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/msg/path__traits.hpp" "DESTINATION" "include/nav_msgs/msg")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__request.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__request__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__request__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__response.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__response__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__response__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__request.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__request__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__request__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__response.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__response__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__response__traits.hpp" "DESTINATION" "include/nav_msgs/srv")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__request.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__request__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__request__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__response.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__response__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_map__response__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__request.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__request__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__request__traits.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__response.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__response__struct.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_cpp/nav_msgs/srv/get_plan__response__traits.hpp" "DESTINATION" "include/nav_msgs/srv")

# install("TARGETS" "nav_msgs__rosidl_typesupport_introspection_cpp" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
ament_cmake_symlink_install_targets("TARGET_FILES" "/home/erle/ros2_ws/build/nav_msgs//libnav_msgs__rosidl_typesupport_introspection_cpp.so"
"TARGETS" "nav_msgs__rosidl_typesupport_introspection_cpp" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")

# install(FILES "/home/erle/ros2_ws/build/ament_package/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/nav_msgs/environment")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/ament_package/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/nav_msgs/environment")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/msg/dds_opensplice/GridCells_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/msg/dds_opensplice/MapMetaData_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/msg/dds_opensplice/OccupancyGrid_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/msg/dds_opensplice/Odometry_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/msg/dds_opensplice/Path_.idl" "DESTINATION" "share/nav_msgs/msg/dds_opensplice")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/msg/dds_opensplice/GridCells_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/msg/dds_opensplice/MapMetaData_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/msg/dds_opensplice/OccupancyGrid_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/msg/dds_opensplice/Odometry_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/msg/dds_opensplice/Path_.idl" "DESTINATION" "share/nav_msgs/msg/dds_opensplice")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/GetMap_Request_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/GetMap_Response_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/GetPlan_Request_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/GetPlan_Response_.idl" "DESTINATION" "share/nav_msgs/srv/dds_opensplice")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/GetMap_Request_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/GetMap_Response_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/GetPlan_Request_.idl" "/home/erle/ros2_ws/build/nav_msgs/rosidl_generator_dds_idl/nav_msgs/srv/dds_opensplice/GetPlan_Response_.idl" "DESTINATION" "share/nav_msgs/srv/dds_opensplice")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/grid_cells__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/grid_cells__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/map_meta_data__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/map_meta_data__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/occupancy_grid__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/occupancy_grid__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/odometry__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/odometry__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/path__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/path__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_map__request__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_map__request__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_map__response__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_map__response__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_plan__request__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_plan__request__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_plan__response__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_plan__response__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/visibility_control.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/ccpp_GridCells_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/ccpp_MapMetaData_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/ccpp_OccupancyGrid_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/ccpp_Odometry_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/ccpp_Path_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_GetMap_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_GetMap_Response_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_GetPlan_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_GetPlan_Response_.h" "DESTINATION" "include/nav_msgs/msg/dds_opensplice")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/grid_cells__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/grid_cells__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/map_meta_data__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/map_meta_data__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/occupancy_grid__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/occupancy_grid__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/odometry__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/odometry__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/path__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/path__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_map__request__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_map__request__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_map__response__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_map__response__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_plan__request__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_plan__request__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_plan__response__type_support.hpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_plan__response__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/visibility_control.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/GridCells_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/ccpp_GridCells_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/MapMetaData_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/ccpp_MapMetaData_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/OccupancyGrid_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/ccpp_OccupancyGrid_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Odometry_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/ccpp_Odometry_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/Path_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/msg/dds_opensplice/ccpp_Path_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Request_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_GetMap_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetMap_Response_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_GetMap_Response_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Request_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_GetPlan_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/GetPlan_Response_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_GetPlan_Response_.h" "DESTINATION" "include/nav_msgs/msg/dds_opensplice")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_map__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_plan__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_Sample_GetMap_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_Sample_GetMap_Response_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_Sample_GetPlan_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_Sample_GetPlan_Response_.h" "DESTINATION" "include/nav_msgs/srv/dds_opensplice")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_map__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/get_plan__type_support.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Request_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_Sample_GetMap_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetMap_Response_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_Sample_GetMap_Response_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Request_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_Sample_GetPlan_Request_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_Dcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_Dcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_Dcps_impl.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_Dcps_impl.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_SplDcps.h" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/Sample_GetPlan_Response_SplDcps.cpp" "/home/erle/ros2_ws/build/nav_msgs/rosidl_typesupport_opensplice_cpp/nav_msgs/srv/dds_opensplice/ccpp_Sample_GetPlan_Response_.h" "DESTINATION" "include/nav_msgs/srv/dds_opensplice")

# install("TARGETS" "nav_msgs__rosidl_typesupport_opensplice_cpp" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
ament_cmake_symlink_install_targets("TARGET_FILES" "/home/erle/ros2_ws/build/nav_msgs//libnav_msgs__rosidl_typesupport_opensplice_cpp.so"
"TARGETS" "nav_msgs__rosidl_typesupport_opensplice_cpp" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")

# install(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/msg/GridCells.msg" "DESTINATION" "share/nav_msgs/msg")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/msg/GridCells.msg" "DESTINATION" "share/nav_msgs/msg")

# install(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/msg/MapMetaData.msg" "DESTINATION" "share/nav_msgs/msg")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/msg/MapMetaData.msg" "DESTINATION" "share/nav_msgs/msg")

# install(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/msg/OccupancyGrid.msg" "DESTINATION" "share/nav_msgs/msg")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/msg/OccupancyGrid.msg" "DESTINATION" "share/nav_msgs/msg")

# install(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/msg/Odometry.msg" "DESTINATION" "share/nav_msgs/msg")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/msg/Odometry.msg" "DESTINATION" "share/nav_msgs/msg")

# install(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/msg/Path.msg" "DESTINATION" "share/nav_msgs/msg")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/msg/Path.msg" "DESTINATION" "share/nav_msgs/msg")

# install(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/srv/GetMap.srv" "DESTINATION" "share/nav_msgs/srv")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/srv/GetMap.srv" "DESTINATION" "share/nav_msgs/srv")

# install(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/srv/GetPlan.srv" "DESTINATION" "share/nav_msgs/srv")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/srv/GetPlan.srv" "DESTINATION" "share/nav_msgs/srv")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/srv/GetMap_Request.msg" "DESTINATION" "share/nav_msgs/srv")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/srv/GetMap_Request.msg" "DESTINATION" "share/nav_msgs/srv")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/srv/GetMap_Response.msg" "DESTINATION" "share/nav_msgs/srv")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/srv/GetMap_Response.msg" "DESTINATION" "share/nav_msgs/srv")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/srv/GetPlan_Request.msg" "DESTINATION" "share/nav_msgs/srv")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/srv/GetPlan_Request.msg" "DESTINATION" "share/nav_msgs/srv")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/srv/GetPlan_Response.msg" "DESTINATION" "share/nav_msgs/srv")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/srv/GetPlan_Response.msg" "DESTINATION" "share/nav_msgs/srv")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_index/package_run_dependencies/nav_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_index/package_run_dependencies/nav_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_index/parent_prefix_path/nav_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_index/parent_prefix_path/nav_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")

# install(FILES "/home/erle/ros2_ws/install/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/nav_msgs/environment")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/install/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/nav_msgs/environment")

# install(FILES "/home/erle/ros2_ws/install/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/nav_msgs/environment")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/install/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/nav_msgs/environment")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/nav_msgs")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/nav_msgs")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/nav_msgs")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/nav_msgs")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/nav_msgs")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/nav_msgs")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_index/packages/nav_msgs" "DESTINATION" "share/ament_index/resource_index/packages")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_index/packages/nav_msgs" "DESTINATION" "share/ament_index/resource_index/packages")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/nav_msgs/cmake")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/nav_msgs/cmake")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/nav_msgs/cmake")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/nav_msgs/cmake")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/nav_msgs/cmake")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/nav_msgs/cmake")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/nav_msgs/cmake")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/nav_msgs/cmake")

# install(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_core/nav_msgsConfig.cmake" "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_core/nav_msgsConfig-version.cmake" "DESTINATION" "share/nav_msgs/cmake")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_core/nav_msgsConfig.cmake" "/home/erle/ros2_ws/build/nav_msgs/ament_cmake_core/nav_msgsConfig-version.cmake" "DESTINATION" "share/nav_msgs/cmake")

# install(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/package.xml" "DESTINATION" "share/nav_msgs")
ament_cmake_symlink_install_files(FILES "/home/erle/ros2_ws/src/ros2/common_interfaces/nav_msgs/package.xml" "DESTINATION" "share/nav_msgs")
