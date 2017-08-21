// generated from rosidl_typesupport_opensplice_cpp/resource/visibility_control.h.in

#ifndef __example_interfaces__msg__dds_opensplice__visibility_control__h__
#define __example_interfaces__msg__dds_opensplice__visibility_control__h__

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_example_interfaces \
      __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_example_interfaces \
      __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_example_interfaces \
      __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_example_interfaces \
      __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_BUILDING_DLL_example_interfaces
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces \
      ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_example_interfaces
  #else
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces \
      ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_example_interfaces
  #endif
#else
  #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_example_interfaces
  #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces
#endif

#if __cplusplus
}
#endif

#endif  // __example_interfaces__msg__dds_opensplice__visibility_control__h__
