// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __std_srvs__srv__trigger__request__struct__hpp__
#define __std_srvs__srv__trigger__request__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_std_srvs_srv_Trigger_Request __attribute__((deprecated))
#else
# define DEPRECATED_std_srvs_srv_Trigger_Request __declspec(deprecated)
#endif

namespace std_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Trigger_Request_
{
  using Type = Trigger_Request_<ContainerAllocator>;

  Trigger_Request_()
  {
  }
  Trigger_Request_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  // field types and members

  // setters for named parameter idiom

  // constants

  // pointer types
  using RawPtr =
    std_srvs::srv::Trigger_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const std_srvs::srv::Trigger_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<std_srvs::srv::Trigger_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<std_srvs::srv::Trigger_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_std_srvs_srv_Trigger_Request
    std::shared_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_std_srvs_srv_Trigger_Request
    std::shared_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trigger_Request_ & other) const
  {
    (void)other;
    return true;
  }
  bool operator!=(const Trigger_Request_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct Trigger_Request_

// alias to use template instance with default allocator
using Trigger_Request =
    std_srvs::srv::Trigger_Request_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace std_srvs

#endif  // __std_srvs__srv__trigger__request__struct__hpp__
