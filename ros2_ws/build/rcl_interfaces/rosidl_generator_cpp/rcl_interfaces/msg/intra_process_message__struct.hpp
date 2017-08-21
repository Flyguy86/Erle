// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __rcl_interfaces__msg__intra_process_message__struct__hpp__
#define __rcl_interfaces__msg__intra_process_message__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_rcl_interfaces_msg_IntraProcessMessage __attribute__((deprecated))
#else
# define DEPRECATED_rcl_interfaces_msg_IntraProcessMessage __declspec(deprecated)
#endif

namespace rcl_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntraProcessMessage_
{
  using Type = IntraProcessMessage_<ContainerAllocator>;

  IntraProcessMessage_()
  {
  }
  IntraProcessMessage_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  // field types and members
  using _publisher_id_type =
      uint64_t;
  _publisher_id_type publisher_id;
  using _message_sequence_type =
      uint64_t;
  _message_sequence_type message_sequence;

  // setters for named parameter idiom
  Type * set__publisher_id(const uint64_t & _arg)
  {
    this->publisher_id = _arg;
    return this;
  }
  Type * set__message_sequence(const uint64_t & _arg)
  {
    this->message_sequence = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    rcl_interfaces::msg::IntraProcessMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const rcl_interfaces::msg::IntraProcessMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rcl_interfaces::msg::IntraProcessMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rcl_interfaces::msg::IntraProcessMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<rcl_interfaces::msg::IntraProcessMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::msg::IntraProcessMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<rcl_interfaces::msg::IntraProcessMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::msg::IntraProcessMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rcl_interfaces::msg::IntraProcessMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rcl_interfaces::msg::IntraProcessMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_rcl_interfaces_msg_IntraProcessMessage
    std::shared_ptr<rcl_interfaces::msg::IntraProcessMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_rcl_interfaces_msg_IntraProcessMessage
    std::shared_ptr<rcl_interfaces::msg::IntraProcessMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntraProcessMessage_ & other) const
  {
    if (this->publisher_id != other.publisher_id) {
      return false;
    }
    if (this->message_sequence != other.message_sequence) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntraProcessMessage_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct IntraProcessMessage_

// alias to use template instance with default allocator
using IntraProcessMessage =
    rcl_interfaces::msg::IntraProcessMessage_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace rcl_interfaces

#endif  // __rcl_interfaces__msg__intra_process_message__struct__hpp__
