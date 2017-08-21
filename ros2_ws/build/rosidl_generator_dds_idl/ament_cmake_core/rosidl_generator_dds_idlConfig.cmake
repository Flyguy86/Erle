# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_rosidl_generator_dds_idl_CONFIG_INCLUDED)
  return()
endif()
set(_rosidl_generator_dds_idl_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rosidl_generator_dds_idl_FIND_QUIETLY)
  message(" - Found rosidl_generator_dds_idl: 0.0.0 (${rosidl_generator_dds_idl_DIR})")
endif()

# warn when using a deprecated package
if(NOT " " STREQUAL " ")
  set(_msg "Package 'rosidl_generator_dds_idl' is deprecated")
  # append custom deprecation text if available
  if(NOT " " STREQUAL "TRUE ")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rosidl_generator_dds_idl_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_generator_dds_idl-extras.cmake")
foreach(_extra ${_extras})
  include("${rosidl_generator_dds_idl_DIR}/${_extra}")
endforeach()
