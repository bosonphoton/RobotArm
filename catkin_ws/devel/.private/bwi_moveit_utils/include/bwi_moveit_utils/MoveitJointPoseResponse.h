// Generated by gencpp from file bwi_moveit_utils/MoveitJointPoseResponse.msg
// DO NOT EDIT!


#ifndef BWI_MOVEIT_UTILS_MESSAGE_MOVEITJOINTPOSERESPONSE_H
#define BWI_MOVEIT_UTILS_MESSAGE_MOVEITJOINTPOSERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace bwi_moveit_utils
{
template <class ContainerAllocator>
struct MoveitJointPoseResponse_
{
  typedef MoveitJointPoseResponse_<ContainerAllocator> Type;

  MoveitJointPoseResponse_()
    : completed(false)  {
    }
  MoveitJointPoseResponse_(const ContainerAllocator& _alloc)
    : completed(false)  {
  (void)_alloc;
    }



   typedef uint8_t _completed_type;
  _completed_type completed;





  typedef boost::shared_ptr< ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MoveitJointPoseResponse_

typedef ::bwi_moveit_utils::MoveitJointPoseResponse_<std::allocator<void> > MoveitJointPoseResponse;

typedef boost::shared_ptr< ::bwi_moveit_utils::MoveitJointPoseResponse > MoveitJointPoseResponsePtr;
typedef boost::shared_ptr< ::bwi_moveit_utils::MoveitJointPoseResponse const> MoveitJointPoseResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator1> & lhs, const ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator2> & rhs)
{
  return lhs.completed == rhs.completed;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator1> & lhs, const ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bwi_moveit_utils

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9e58faa17a4877a1efc0e251b503c53b";
  }

  static const char* value(const ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9e58faa17a4877a1ULL;
  static const uint64_t static_value2 = 0xefc0e251b503c53bULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_moveit_utils/MoveitJointPoseResponse";
  }

  static const char* value(const ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool completed\n"
"\n"
;
  }

  static const char* value(const ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.completed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveitJointPoseResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_moveit_utils::MoveitJointPoseResponse_<ContainerAllocator>& v)
  {
    s << indent << "completed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.completed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_MOVEIT_UTILS_MESSAGE_MOVEITJOINTPOSERESPONSE_H
