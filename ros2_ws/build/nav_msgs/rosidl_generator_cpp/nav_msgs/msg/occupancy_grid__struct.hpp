// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __nav_msgs__msg__occupancy_grid__struct__hpp__
#define __nav_msgs__msg__occupancy_grid__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include <std_msgs/msg/header.hpp>
#include <nav_msgs/msg/map_meta_data.hpp>

#ifndef _WIN32
# define DEPRECATED_nav_msgs_msg_OccupancyGrid __attribute__((deprecated))
#else
# define DEPRECATED_nav_msgs_msg_OccupancyGrid __declspec(deprecated)
#endif

namespace nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OccupancyGrid_
{
  using Type = OccupancyGrid_<ContainerAllocator>;

  OccupancyGrid_()
  {
  }
  OccupancyGrid_(const ContainerAllocator & _alloc)
  : data(_alloc)
  {
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _info_type =
      nav_msgs::msg::MapMetaData_<ContainerAllocator>;
  _info_type info;
  using _data_type =
      std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type * set__header(const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__info(const nav_msgs::msg::MapMetaData_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return this;
  }
  Type * set__data(const std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other> & _arg)
  {
    this->data = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    nav_msgs::msg::OccupancyGrid_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav_msgs::msg::OccupancyGrid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav_msgs::msg::OccupancyGrid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav_msgs::msg::OccupancyGrid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<nav_msgs::msg::OccupancyGrid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav_msgs::msg::OccupancyGrid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<nav_msgs::msg::OccupancyGrid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav_msgs::msg::OccupancyGrid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav_msgs::msg::OccupancyGrid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav_msgs::msg::OccupancyGrid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_nav_msgs_msg_OccupancyGrid
    std::shared_ptr<nav_msgs::msg::OccupancyGrid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_nav_msgs_msg_OccupancyGrid
    std::shared_ptr<nav_msgs::msg::OccupancyGrid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OccupancyGrid_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const OccupancyGrid_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct OccupancyGrid_

// alias to use template instance with default allocator
using OccupancyGrid =
    nav_msgs::msg::OccupancyGrid_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace nav_msgs

#endif  // __nav_msgs__msg__occupancy_grid__struct__hpp__
