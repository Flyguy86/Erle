// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __sensor_msgs__msg__joy_feedback_array__struct__hpp__
#define __sensor_msgs__msg__joy_feedback_array__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include <sensor_msgs/msg/joy_feedback.hpp>

#ifndef _WIN32
# define DEPRECATED_sensor_msgs_msg_JoyFeedbackArray __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_JoyFeedbackArray __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JoyFeedbackArray_
{
  using Type = JoyFeedbackArray_<ContainerAllocator>;

  JoyFeedbackArray_()
  {
  }
  JoyFeedbackArray_(const ContainerAllocator & _alloc)
  : array(_alloc)
  {
  }

  // field types and members
  using _array_type =
      std::vector<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>::other>;
  _array_type array;

  // setters for named parameter idiom
  Type * set__array(const std::vector<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::JoyFeedback_<ContainerAllocator>>::other> & _arg)
  {
    this->array = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_JoyFeedbackArray
    std::shared_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_JoyFeedbackArray
    std::shared_ptr<sensor_msgs::msg::JoyFeedbackArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JoyFeedbackArray_ & other) const
  {
    if (this->array != other.array) {
      return false;
    }
    return true;
  }
  bool operator!=(const JoyFeedbackArray_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct JoyFeedbackArray_

// alias to use template instance with default allocator
using JoyFeedbackArray =
    sensor_msgs::msg::JoyFeedbackArray_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // __sensor_msgs__msg__joy_feedback_array__struct__hpp__
