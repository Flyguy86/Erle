// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.template

#ifndef __sensor_msgs__msg__point_cloud__type_support__h__
#define __sensor_msgs__msg__point_cloud__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>

#include "sensor_msgs/msg/point_cloud__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sensor_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__PointCloud__points(const void * untyped_member)
{
  const std::vector<geometry_msgs::msg::Point32> * member =
    reinterpret_cast<const std::vector<geometry_msgs::msg::Point32> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PointCloud__points(const void * untyped_member, size_t index)
{
  const std::vector<geometry_msgs::msg::Point32> & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point32> *>(untyped_member);
  return &member[index];
}

void * get_function__PointCloud__points(void * untyped_member, size_t index)
{
  std::vector<geometry_msgs::msg::Point32> & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point32> *>(untyped_member);
  return &member[index];
}

void resize_function__PointCloud__points(void * untyped_member, size_t size)
{
  std::vector<geometry_msgs::msg::Point32> * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point32> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PointCloud__channels(const void * untyped_member)
{
  const std::vector<sensor_msgs::msg::ChannelFloat32> * member =
    reinterpret_cast<const std::vector<sensor_msgs::msg::ChannelFloat32> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PointCloud__channels(const void * untyped_member, size_t index)
{
  const std::vector<sensor_msgs::msg::ChannelFloat32> & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::ChannelFloat32> *>(untyped_member);
  return &member[index];
}

void * get_function__PointCloud__channels(void * untyped_member, size_t index)
{
  std::vector<sensor_msgs::msg::ChannelFloat32> & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::ChannelFloat32> *>(untyped_member);
  return &member[index];
}

void resize_function__PointCloud__channels(void * untyped_member, size_t size)
{
  std::vector<sensor_msgs::msg::ChannelFloat32> * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::ChannelFloat32> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PointCloud_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle_introspection<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::PointCloud, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle_introspection<geometry_msgs::msg::Point32>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::PointCloud, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__PointCloud__points,  // size() function pointer
    get_const_function__PointCloud__points,  // get_const(index) function pointer
    get_function__PointCloud__points,  // get(index) function pointer
    resize_function__PointCloud__points  // resize(index) function pointer
  },
  {
    "channels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle_introspection<sensor_msgs::msg::ChannelFloat32>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::PointCloud, channels),  // bytes offset in struct
    nullptr,  // default value
    size_function__PointCloud__channels,  // size() function pointer
    get_const_function__PointCloud__channels,  // get_const(index) function pointer
    get_function__PointCloud__channels,  // get(index) function pointer
    resize_function__PointCloud__channels  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PointCloud_message_members = {
  "sensor_msgs",  // package name
  "PointCloud",  // message name
  3,  // number of fields
  PointCloud_message_member_array  // message members
};

static const rosidl_message_type_support_t PointCloud_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &PointCloud_message_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sensor_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle_introspection<sensor_msgs::msg::PointCloud>()
{
  return &::sensor_msgs::msg::rosidl_typesupport_introspection_cpp::PointCloud_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __sensor_msgs__msg__point_cloud__type_support__h__
