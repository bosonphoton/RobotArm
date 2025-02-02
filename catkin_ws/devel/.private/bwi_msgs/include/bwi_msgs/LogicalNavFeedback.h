// Generated by gencpp from file bwi_msgs/LogicalNavFeedback.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_LOGICALNAVFEEDBACK_H
#define BWI_MSGS_MESSAGE_LOGICALNAVFEEDBACK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace bwi_msgs
{
template <class ContainerAllocator>
struct LogicalNavFeedback_
{
  typedef LogicalNavFeedback_<ContainerAllocator> Type;

  LogicalNavFeedback_()
    {
    }
  LogicalNavFeedback_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct LogicalNavFeedback_

typedef ::bwi_msgs::LogicalNavFeedback_<std::allocator<void> > LogicalNavFeedback;

typedef boost::shared_ptr< ::bwi_msgs::LogicalNavFeedback > LogicalNavFeedbackPtr;
typedef boost::shared_ptr< ::bwi_msgs::LogicalNavFeedback const> LogicalNavFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace bwi_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_msgs/LogicalNavFeedback";
  }

  static const char* value(const ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
;
  }

  static const char* value(const ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LogicalNavFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::bwi_msgs::LogicalNavFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // BWI_MSGS_MESSAGE_LOGICALNAVFEEDBACK_H
