# generated from ament_cmake_export_dependencies/cmake/ament_cmake_export_dependencies-extras.cmake.in

set(_exported_dependencies "rmw")

# find_package() all dependencies
# and append their DEFINITIONS INCLUDE_DIRS and LIBRARIES variables
# to rcl_DEFINITIONS , rcl_INCLUDE_DIRS and
# rcl_LIBRARIES.
# Additionally collect the direct dependency names in
# rcl_DEPENDENCIES as well as the recursive dependency names
# in rcl_RECURSIVE_DEPENDENCIES.
if(NOT "${_exported_dependencies} " STREQUAL " ")
  find_package(ament_cmake_core QUIET REQUIRED)
  set(rcl_DEPENDENCIES ${_exported_dependencies})
  set(rcl_RECURSIVE_DEPENDENCIES ${_exported_dependencies})
  foreach(_dep ${_exported_dependencies})
    if(NOT ${_dep}_FOUND)
      find_package("${_dep}" QUIET REQUIRED)
    endif()
    if(${_dep}_DEFINITIONS)
      list(APPEND rcl_DEFINITIONS "${${_dep}_DEFINITIONS}")
    endif()
    if(${_dep}_INCLUDE_DIRS)
      list(APPEND rcl_INCLUDE_DIRS "${${_dep}_INCLUDE_DIRS}")
    endif()
    if(${_dep}_LIBRARIES)
      list(APPEND rcl_LIBRARIES "${${_dep}_LIBRARIES}")
    endif()
    if(${_dep}_RECURSIVE_DEPENDENCIES)
      list_append_unique(rcl_RECURSIVE_DEPENDENCIES "${${_dep}_RECURSIVE_DEPENDENCIES}")
    endif()
  endforeach()
endif()
