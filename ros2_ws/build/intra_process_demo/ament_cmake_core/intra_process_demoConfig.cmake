# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_intra_process_demo_CONFIG_INCLUDED)
  return()
endif()
set(_intra_process_demo_CONFIG_INCLUDED TRUE)

# output package information
if(NOT intra_process_demo_FIND_QUIETLY)
  message(" - Found intra_process_demo: 0.0.0 (${intra_process_demo_DIR})")
endif()

# warn when using a deprecated package
if(NOT " " STREQUAL " ")
  set(_msg "Package 'intra_process_demo' is deprecated")
  # append custom deprecation text if available
  if(NOT " " STREQUAL "TRUE ")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(intra_process_demo_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${intra_process_demo_DIR}/${_extra}")
endforeach()
