# generated from ament_cmake_export_include_directories/cmake/ament_cmake_export_include_directories-extras.cmake.in

set(_exported_include_dirs "/home/erle/opensplice/install/minimal/share/opensplice/cmake/../../../include/opensplice;/home/erle/opensplice/install/minimal/share/opensplice/cmake/../../../include/opensplice/sys;/home/erle/opensplice/install/minimal/share/opensplice/cmake/../../../include/opensplice/dcps/C++/SACPP")

# append include directories to rmw_opensplice_cpp_INCLUDE_DIRS
# warn about not existing paths
if(NOT "${_exported_include_dirs} " STREQUAL " ")
  find_package(ament_cmake_core QUIET REQUIRED)
  foreach(_exported_include_dir ${_exported_include_dirs})
    if(NOT IS_DIRECTORY "${_exported_include_dir}")
      message(WARNING "Package 'rmw_opensplice_cpp' exports the include directory '${_exported_include_dir}' which doesn't exist")
    endif()
    normalize_path(_exported_include_dir "${_exported_include_dir}")
    list(APPEND rmw_opensplice_cpp_INCLUDE_DIRS "${_exported_include_dir}")
  endforeach()
endif()
