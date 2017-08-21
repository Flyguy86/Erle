# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_rclcpp_examples_CONFIG_INCLUDED)
  return()
endif()
set(_rclcpp_examples_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rclcpp_examples_FIND_QUIETLY)
  message(" - Found rclcpp_examples: 0.0.0 (${rclcpp_examples_DIR})")
endif()

# warn when using a deprecated package
if(NOT " " STREQUAL " ")
  set(_msg "Package 'rclcpp_examples' is deprecated")
  # append custom deprecation text if available
  if(NOT " " STREQUAL "TRUE ")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rclcpp_examples_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${rclcpp_examples_DIR}/${_extra}")
endforeach()
