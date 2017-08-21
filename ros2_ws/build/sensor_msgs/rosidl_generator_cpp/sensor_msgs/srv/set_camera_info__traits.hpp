// generated from rosidl_generator_cpp/resource/srv__traits.hpp.template


#include "sensor_msgs/srv/set_camera_info__struct.hpp"

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size {};

#endif  /* __ROSIDL_GENERATOR_CPP_TRAITS */

#ifndef __sensor_msgs__srv__set_camera_info__traits__hpp__
#define __sensor_msgs__srv__set_camera_info__traits__hpp__
template <>
struct has_fixed_size<sensor_msgs::srv::SetCameraInfo>
{
  static const bool value = has_fixed_size<sensor_msgs::srv::SetCameraInfo_Request>::value
    && has_fixed_size<sensor_msgs::srv::SetCameraInfo_Response>::value;
};

#endif  // __sensor_msgs__srv__set_camera_info__traits__hpp__
}  /* rosidl_generator_traits */
