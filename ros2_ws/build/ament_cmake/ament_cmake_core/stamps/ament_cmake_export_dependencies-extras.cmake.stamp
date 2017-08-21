# generated from ament_cmake_export_dependencies/cmake/ament_cmake_export_dependencies-extras.cmake.in

set(_exported_dependencies "ament_cmake_core;ament_cmake_export_definitions;ament_cmake_export_dependencies;ament_cmake_export_include_directories;ament_cmake_export_interfaces;ament_cmake_export_libraries;ament_cmake_libraries;ament_cmake_python;ament_cmake_target_dependencies;ament_cmake_test")

# find_package() all dependencies
# and append their DEFINITIONS INCLUDE_DIRS and LIBRARIES variables
# to ament_cmake_DEFINITIONS , ament_cmake_INCLUDE_DIRS and
# ament_cmake_LIBRARIES.
# Additionally collect the direct dependency names in
# ament_cmake_DEPENDENCIES as well as the recursive dependency names
# in ament_cmake_RECURSIVE_DEPENDENCIES.
if(NOT "${_exported_dependencies} " STREQUAL " ")
  find_package(ament_cmake_core QUIET REQUIRED)
  set(ament_cmake_DEPENDENCIES ${_exported_dependencies})
  set(ament_cmake_RECURSIVE_DEPENDENCIES ${_exported_dependencies})
  foreach(_dep ${_exported_dependencies})
    if(NOT ${_dep}_FOUND)
      find_package("${_dep}" QUIET REQUIRED)
    endif()
    if(${_dep}_DEFINITIONS)
      list(APPEND ament_cmake_DEFINITIONS "${${_dep}_DEFINITIONS}")
    endif()
    if(${_dep}_INCLUDE_DIRS)
      list(APPEND ament_cmake_INCLUDE_DIRS "${${_dep}_INCLUDE_DIRS}")
    endif()
    if(${_dep}_LIBRARIES)
      list(APPEND ament_cmake_LIBRARIES "${${_dep}_LIBRARIES}")
    endif()
    if(${_dep}_RECURSIVE_DEPENDENCIES)
      list_append_unique(ament_cmake_RECURSIVE_DEPENDENCIES "${${_dep}_RECURSIVE_DEPENDENCIES}")
    endif()
  endforeach()
endif()
