// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __geometry_msgs__msg__twist_stamped__struct__hpp__
#define __geometry_msgs__msg__twist_stamped__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include <std_msgs/msg/header.hpp>
#include <geometry_msgs/msg/twist.hpp>

#ifndef _WIN32
# define DEPRECATED_geometry_msgs_msg_TwistStamped __attribute__((deprecated))
#else
# define DEPRECATED_geometry_msgs_msg_TwistStamped __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TwistStamped_
{
  using Type = TwistStamped_<ContainerAllocator>;

  TwistStamped_()
  {
  }
  TwistStamped_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _twist_type =
      geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;

  // setters for named parameter idiom
  Type * set__header(const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__twist(const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    geometry_msgs::msg::TwistStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const geometry_msgs::msg::TwistStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geometry_msgs::msg::TwistStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geometry_msgs::msg::TwistStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<geometry_msgs::msg::TwistStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::TwistStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<geometry_msgs::msg::TwistStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::TwistStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geometry_msgs::msg::TwistStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geometry_msgs::msg::TwistStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_geometry_msgs_msg_TwistStamped
    std::shared_ptr<geometry_msgs::msg::TwistStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_geometry_msgs_msg_TwistStamped
    std::shared_ptr<geometry_msgs::msg::TwistStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TwistStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    return true;
  }
  bool operator!=(const TwistStamped_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct TwistStamped_

// alias to use template instance with default allocator
using TwistStamped =
    geometry_msgs::msg::TwistStamped_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace geometry_msgs

#endif  // __geometry_msgs__msg__twist_stamped__struct__hpp__
