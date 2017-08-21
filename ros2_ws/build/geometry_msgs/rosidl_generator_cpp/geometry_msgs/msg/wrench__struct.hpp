// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __geometry_msgs__msg__wrench__struct__hpp__
#define __geometry_msgs__msg__wrench__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include <geometry_msgs/msg/vector3.hpp>
#include <geometry_msgs/msg/vector3.hpp>

#ifndef _WIN32
# define DEPRECATED_geometry_msgs_msg_Wrench __attribute__((deprecated))
#else
# define DEPRECATED_geometry_msgs_msg_Wrench __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Wrench_
{
  using Type = Wrench_<ContainerAllocator>;

  Wrench_()
  {
  }
  Wrench_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  // field types and members
  using _force_type =
      geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _force_type force;
  using _torque_type =
      geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _torque_type torque;

  // setters for named parameter idiom
  Type * set__force(const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->force = _arg;
    return this;
  }
  Type * set__torque(const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->torque = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    geometry_msgs::msg::Wrench_<ContainerAllocator> *;
  using ConstRawPtr =
    const geometry_msgs::msg::Wrench_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<geometry_msgs::msg::Wrench_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<geometry_msgs::msg::Wrench_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_geometry_msgs_msg_Wrench
    std::shared_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_geometry_msgs_msg_Wrench
    std::shared_ptr<geometry_msgs::msg::Wrench_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wrench_ & other) const
  {
    if (this->force != other.force) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wrench_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct Wrench_

// alias to use template instance with default allocator
using Wrench =
    geometry_msgs::msg::Wrench_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace geometry_msgs

#endif  // __geometry_msgs__msg__wrench__struct__hpp__
