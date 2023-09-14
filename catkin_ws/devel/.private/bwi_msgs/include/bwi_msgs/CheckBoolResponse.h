// Generated by gencpp from file bwi_msgs/CheckBoolResponse.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_CHECKBOOLRESPONSE_H
#define BWI_MSGS_MESSAGE_CHECKBOOLRESPONSE_H


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
struct CheckBoolResponse_
{
  typedef CheckBoolResponse_<ContainerAllocator> Type;

  CheckBoolResponse_()
    : value(false)  {
    }
  CheckBoolResponse_(const ContainerAllocator& _alloc)
    : value(false)  {
  (void)_alloc;
    }



   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::bwi_msgs::CheckBoolResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_msgs::CheckBoolResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CheckBoolResponse_

typedef ::bwi_msgs::CheckBoolResponse_<std::allocator<void> > CheckBoolResponse;

typedef boost::shared_ptr< ::bwi_msgs::CheckBoolResponse > CheckBoolResponsePtr;
typedef boost::shared_ptr< ::bwi_msgs::CheckBoolResponse const> CheckBoolResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_msgs::CheckBoolResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_msgs::CheckBoolResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bwi_msgs::CheckBoolResponse_<ContainerAllocator1> & lhs, const ::bwi_msgs::CheckBoolResponse_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bwi_msgs::CheckBoolResponse_<ContainerAllocator1> & lhs, const ::bwi_msgs::CheckBoolResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bwi_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::CheckBoolResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::CheckBoolResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::CheckBoolResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::CheckBoolResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::CheckBoolResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::CheckBoolResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_msgs::CheckBoolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e431d687bf4b2c65fbd94b12ae0cb5d9";
  }

  static const char* value(const ::bwi_msgs::CheckBoolResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe431d687bf4b2c65ULL;
  static const uint64_t static_value2 = 0xfbd94b12ae0cb5d9ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_msgs::CheckBoolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_msgs/CheckBoolResponse";
  }

  static const char* value(const ::bwi_msgs::CheckBoolResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_msgs::CheckBoolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool value\n"
;
  }

  static const char* value(const ::bwi_msgs::CheckBoolResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_msgs::CheckBoolResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CheckBoolResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_msgs::CheckBoolResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_msgs::CheckBoolResponse_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_MSGS_MESSAGE_CHECKBOOLRESPONSE_H