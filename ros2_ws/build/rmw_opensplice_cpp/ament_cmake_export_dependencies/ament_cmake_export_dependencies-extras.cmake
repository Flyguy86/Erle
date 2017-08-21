# generated from ament_cmake_export_dependencies/cmake/ament_cmake_export_dependencies-extras.cmake.in

set(_exported_dependencies "rmw;rosidl_generator_cpp;rosidl_typesupport_opensplice_cpp")

# find_package() all dependencies
# and append their DEFINITIONS INCLUDE_DIRS and LIBRARIES variables
# to rmw_opensplice_cpp_DEFINITIONS , rmw_opensplice_cpp_INCLUDE_DIRS and
# rmw_opensplice_cpp_LIBRARIES.
# Additionally collect the direct dependency names in
# rmw_opensplice_cpp_DEPENDENCIES as well as the recursive dependency names
# in rmw_opensplice_cpp_RECURSIVE_DEPENDENCIES.
if(NOT "${_exported_dependencies} " STREQUAL " ")
  find_package(ament_cmake_core QUIET REQUIRED)
  set(rmw_opensplice_cpp_DEPENDENCIES ${_exported_dependencies})
  set(rmw_opensplice_cpp_RECURSIVE_DEPENDENCIES ${_exported_dependencies})
  foreach(_dep ${_exported_dependencies})
    if(NOT ${_dep}_FOUND)
      find_package("${_dep}" QUIET REQUIRED)
    endif()
    if(${_dep}_DEFINITIONS)
      list(APPEND rmw_opensplice_cpp_DEFINITIONS "${${_dep}_DEFINITIONS}")
    endif()
    if(${_dep}_INCLUDE_DIRS)
      list(APPEND rmw_opensplice_cpp_INCLUDE_DIRS "${${_dep}_INCLUDE_DIRS}")
    endif()
    if(${_dep}_LIBRARIES)
      list(APPEND rmw_opensplice_cpp_LIBRARIES "${${_dep}_LIBRARIES}")
    endif()
    if(${_dep}_RECURSIVE_DEPENDENCIES)
      list_append_unique(rmw_opensplice_cpp_RECURSIVE_DEPENDENCIES "${${_dep}_RECURSIVE_DEPENDENCIES}")
    endif()
  endforeach()
endif()
