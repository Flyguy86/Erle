// generated from rosidl_typesupport_opensplice_cpp/resource/visibility_control.h.in

#ifndef __std_srvs__msg__dds_opensplice__visibility_control__h__
#define __std_srvs__msg__dds_opensplice__visibility_control__h__

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_std_srvs \
      __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_std_srvs \
      __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_std_srvs \
      __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_std_srvs \
      __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_BUILDING_DLL_std_srvs
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs \
      ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_std_srvs
  #else
    #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs \
      ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_IMPORT_std_srvs
  #endif
#else
  #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_std_srvs
  #define ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs
#endif

#if __cplusplus
}
#endif

#endif  // __std_srvs__msg__dds_opensplice__visibility_control__h__
