// generated from rosidl_typesupport_opensplice_cpp/resource/visibility_control.h.in

#ifndef __rcl_interfaces__msg__dds_opensplice__visibility_control__h__
#define __rcl_interfaces__msg__dds_opensplice__visibility_control__h__

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_rcl_interfaces \
      __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_rcl_interfaces \
      __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_rcl_interfaces \
      __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_rcl_interfaces \
      __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_BUILDING_DLL_rcl_interfaces
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces \
      ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_rcl_interfaces
  #else
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces \
      ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_rcl_interfaces
  #endif
#else
  #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_rcl_interfaces
  #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces
#endif

#if __cplusplus
}
#endif

#endif  // __rcl_interfaces__msg__dds_opensplice__visibility_control__h__
