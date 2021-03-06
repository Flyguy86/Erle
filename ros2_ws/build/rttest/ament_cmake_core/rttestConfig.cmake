# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_rttest_CONFIG_INCLUDED)
  return()
endif()
set(_rttest_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rttest_FIND_QUIETLY)
  message(" - Found rttest: 0.0.1 (${rttest_DIR})")
endif()

# warn when using a deprecated package
if(NOT " " STREQUAL " ")
  set(_msg "Package 'rttest' is deprecated")
  # append custom deprecation text if available
  if(NOT " " STREQUAL "TRUE ")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rttest_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${rttest_DIR}/${_extra}")
endforeach()
