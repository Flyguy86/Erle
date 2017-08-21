// generated from rosidl_typesupport_opensplice_cpp/resource/visibility_control.h.in

#ifndef __pendulum_msgs__msg__dds_opensplice__visibility_control__h__
#define __pendulum_msgs__msg__dds_opensplice__visibility_control__h__

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_pendulum_msgs \
      __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_pendulum_msgs \
      __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_pendulum_msgs \
      __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_pendulum_msgs \
      __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_BUILDING_DLL_pendulum_msgs
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs \
      ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_pendulum_msgs
  #else
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs \
      ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_pendulum_msgs
  #endif
#else
  #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_pendulum_msgs
  #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs
#endif

#if __cplusplus
}
#endif

#endif  // __pendulum_msgs__msg__dds_opensplice__visibility_control__h__
