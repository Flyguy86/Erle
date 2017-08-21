// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.template

#ifndef __sensor_msgs__msg__point_cloud2__type_support__h__
#define __sensor_msgs__msg__point_cloud2__type_support__h__

// providing offsetof()
#include <cstddef>

#include <rosidl_generator_c/message_type_support.h>
// this is defined in the rosidl_typesupport_introspection_cpp package and
// is in the include/rosidl_typesupport_introspection_cpp/impl folder
#include <rosidl_generator_cpp/message_type_support.hpp>

#include "sensor_msgs/msg/point_cloud2__struct.hpp"
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

size_t size_function__PointCloud2__fields(const void * untyped_member)
{
  const std::vector<sensor_msgs::msg::PointField> * member =
    reinterpret_cast<const std::vector<sensor_msgs::msg::PointField> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PointCloud2__fields(const void * untyped_member, size_t index)
{
  const std::vector<sensor_msgs::msg::PointField> & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::PointField> *>(untyped_member);
  return &member[index];
}

void * get_function__PointCloud2__fields(void * untyped_member, size_t index)
{
  std::vector<sensor_msgs::msg::PointField> & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::PointField> *>(untyped_member);
  return &member[index];
}

void resize_function__PointCloud2__fields(void * untyped_member, size_t size)
{
  std::vector<sensor_msgs::msg::PointField> * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::PointField> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PointCloud2_message_member_array[9] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle_introspection<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::PointCloud2, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::PointCloud2, height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::PointCloud2, width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fields",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle_introspection<sensor_msgs::msg::PointField>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::PointCloud2, fields),  // bytes offset in struct
    nullptr,  // default value
    size_function__PointCloud2__fields,  // size() function pointer
    get_const_function__PointCloud2__fields,  // get_const(index) function pointer
    get_function__PointCloud2__fields,  // get(index) function pointer
    resize_function__PointCloud2__fields  // resize(index) function pointer
  },
  {
    "is_bigendian",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOL,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::PointCloud2, is_bigendian),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "point_step",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::PointCloud2, point_step),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "row_step",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::PointCloud2, row_step),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::PointCloud2, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_dense",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOL,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::PointCloud2, is_dense),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PointCloud2_message_members = {
  "sensor_msgs",  // package name
  "PointCloud2",  // message name
  9,  // number of fields
  PointCloud2_message_member_array  // message members
};

static const rosidl_message_type_support_t PointCloud2_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_introspection_identifier,
  &PointCloud2_message_members
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sensor_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle_introspection<sensor_msgs::msg::PointCloud2>()
{
  return &::sensor_msgs::msg::rosidl_typesupport_introspection_cpp::PointCloud2_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __sensor_msgs__msg__point_cloud2__type_support__h__
