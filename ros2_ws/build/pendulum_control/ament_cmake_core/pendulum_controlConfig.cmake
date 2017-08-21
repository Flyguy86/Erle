# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_pendulum_control_CONFIG_INCLUDED)
  return()
endif()
set(_pendulum_control_CONFIG_INCLUDED TRUE)

# output package information
if(NOT pendulum_control_FIND_QUIETLY)
  message(" - Found pendulum_control: 0.0.0 (${pendulum_control_DIR})")
endif()

# warn when using a deprecated package
if(NOT " " STREQUAL " ")
  set(_msg "Package 'pendulum_control' is deprecated")
  # append custom deprecation text if available
  if(NOT " " STREQUAL "TRUE ")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(pendulum_control_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${pendulum_control_DIR}/${_extra}")
endforeach()
