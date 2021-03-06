// Generated by gencpp from file crab_msgs/GetLegIKSolverResponse.msg
// DO NOT EDIT!


#ifndef CRAB_MSGS_MESSAGE_GETLEGIKSOLVERRESPONSE_H
#define CRAB_MSGS_MESSAGE_GETLEGIKSOLVERRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <crab_msgs/LegJointsState.h>

namespace crab_msgs
{
template <class ContainerAllocator>
struct GetLegIKSolverResponse_
{
  typedef GetLegIKSolverResponse_<ContainerAllocator> Type;

  GetLegIKSolverResponse_()
    : target_joints()
    , error_codes(0)  {
    }
  GetLegIKSolverResponse_(const ContainerAllocator& _alloc)
    : target_joints(_alloc)
    , error_codes(0)  {
    }



   typedef std::vector< ::crab_msgs::LegJointsState_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::crab_msgs::LegJointsState_<ContainerAllocator> >::other >  _target_joints_type;
  _target_joints_type target_joints;

   typedef int32_t _error_codes_type;
  _error_codes_type error_codes;


    enum { IK_FOUND = 1 };
     enum { IK_NOT_FOUND = -1 };
     enum { TIMED_OUT = -2 };
 

  typedef boost::shared_ptr< ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetLegIKSolverResponse_

typedef ::crab_msgs::GetLegIKSolverResponse_<std::allocator<void> > GetLegIKSolverResponse;

typedef boost::shared_ptr< ::crab_msgs::GetLegIKSolverResponse > GetLegIKSolverResponsePtr;
typedef boost::shared_ptr< ::crab_msgs::GetLegIKSolverResponse const> GetLegIKSolverResponseConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace crab_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/home/erle/ros_catkin_ws/install_isolated/share/std_msgs/cmake/../msg'], 'crab_msgs': ['/home/erle/spider_ws/src/crab_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "785ad427ec459cc9764f9f826c9ded18";
  }

  static const char* value(const ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x785ad427ec459cc9ULL;
  static const uint64_t static_value2 = 0x764f9f826c9ded18ULL;
};

template<class ContainerAllocator>
struct DataType< ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crab_msgs/GetLegIKSolverResponse";
  }

  static const char* value(const ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crab_msgs/LegJointsState[] target_joints\n\
int32 error_codes\n\
\n\
int32 IK_FOUND=1\n\
int32 IK_NOT_FOUND=-1\n\
int32 TIMED_OUT=-2\n\
\n\
\n\
================================================================================\n\
MSG: crab_msgs/LegJointsState\n\
float64[3] joint\n\
";
  }

  static const char* value(const ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.target_joints);
      stream.next(m.error_codes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GetLegIKSolverResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::crab_msgs::GetLegIKSolverResponse_<ContainerAllocator>& v)
  {
    s << indent << "target_joints[]" << std::endl;
    for (size_t i = 0; i < v.target_joints.size(); ++i)
    {
      s << indent << "  target_joints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::crab_msgs::LegJointsState_<ContainerAllocator> >::stream(s, indent + "    ", v.target_joints[i]);
    }
    s << indent << "error_codes: ";
    Printer<int32_t>::stream(s, indent + "  ", v.error_codes);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRAB_MSGS_MESSAGE_GETLEGIKSOLVERRESPONSE_H
