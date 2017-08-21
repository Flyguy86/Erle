// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __pendulum_msgs__msg__joint_command__struct__hpp__
#define __pendulum_msgs__msg__joint_command__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_pendulum_msgs_msg_JointCommand __attribute__((deprecated))
#else
# define DEPRECATED_pendulum_msgs_msg_JointCommand __declspec(deprecated)
#endif

namespace pendulum_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointCommand_
{
  using Type = JointCommand_<ContainerAllocator>;

  JointCommand_()
  {
  }
  JointCommand_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  // field types and members
  using _position_type =
      double;
  _position_type position;

  // setters for named parameter idiom
  Type * set__position(const double & _arg)
  {
    this->position = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    pendulum_msgs::msg::JointCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const pendulum_msgs::msg::JointCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pendulum_msgs::msg::JointCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pendulum_msgs::msg::JointCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<pendulum_msgs::msg::JointCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pendulum_msgs::msg::JointCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<pendulum_msgs::msg::JointCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pendulum_msgs::msg::JointCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pendulum_msgs::msg::JointCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pendulum_msgs::msg::JointCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_pendulum_msgs_msg_JointCommand
    std::shared_ptr<pendulum_msgs::msg::JointCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_pendulum_msgs_msg_JointCommand
    std::shared_ptr<pendulum_msgs::msg::JointCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointCommand_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointCommand_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct JointCommand_

// alias to use template instance with default allocator
using JointCommand =
    pendulum_msgs::msg::JointCommand_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace pendulum_msgs

#endif  // __pendulum_msgs__msg__joint_command__struct__hpp__
