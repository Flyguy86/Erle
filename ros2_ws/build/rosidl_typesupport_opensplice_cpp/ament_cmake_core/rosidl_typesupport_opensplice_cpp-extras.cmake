# generated from
# rosidl_typesupport_opensplice_cpp/
#   rosidl_typesupport_opensplice_cpp-extras.cmake.in

find_package(ament_cmake_core QUIET REQUIRED)
ament_register_extension(
  "rosidl_generate_interfaces"
  "rosidl_typesupport_opensplice_cpp"
  "rosidl_typesupport_opensplice_cpp_generate_interfaces.cmake")

find_package(opensplice_cmake_module QUIET REQUIRED)
find_package(OpenSplice MODULE)
if(NOT OpenSplice_FOUND)
  message(FATAL_ERROR "Could not find PrismTech OpenSplice")
endif()

set(rosidl_typesupport_opensplice_cpp_BIN
  "${rosidl_typesupport_opensplice_cpp_DIR}/../../../lib/rosidl_typesupport_opensplice_cpp/rosidl_typesupport_opensplice_cpp")
normalize_path(rosidl_typesupport_opensplice_cpp_BIN
  "${rosidl_typesupport_opensplice_cpp_BIN}")

set(rosidl_typesupport_opensplice_cpp_GENERATOR_FILES
  "${rosidl_typesupport_opensplice_cpp_DIR}/../../../lib/python3.4/site-packages/rosidl_typesupport_opensplice_cpp/__init__.py")
normalize_path(rosidl_typesupport_opensplice_cpp_GENERATOR_FILES
  "${rosidl_typesupport_opensplice_cpp_GENERATOR_FILES}")

set(rosidl_typesupport_opensplice_cpp_TEMPLATE_DIR
  "${rosidl_typesupport_opensplice_cpp_DIR}/../resource")
normalize_path(rosidl_typesupport_opensplice_cpp_TEMPLATE_DIR
  "${rosidl_typesupport_opensplice_cpp_TEMPLATE_DIR}")
