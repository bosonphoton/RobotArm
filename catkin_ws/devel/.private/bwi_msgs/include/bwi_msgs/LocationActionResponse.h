// Generated by gencpp from file bwi_msgs/LocationActionResponse.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_LOCATIONACTIONRESPONSE_H
#define BWI_MSGS_MESSAGE_LOCATIONACTIONRESPONSE_H


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
struct LocationActionResponse_
{
  typedef LocationActionResponse_<ContainerAllocator> Type;

  LocationActionResponse_()
    : ask_question(false)
    , location()  {
    }
  LocationActionResponse_(const ContainerAllocator& _alloc)
    : ask_question(false)
    , location(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _ask_question_type;
  _ask_question_type ask_question;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _location_type;
  _location_type location;





  typedef boost::shared_ptr< ::bwi_msgs::LocationActionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_msgs::LocationActionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct LocationActionResponse_

typedef ::bwi_msgs::LocationActionResponse_<std::allocator<void> > LocationActionResponse;

typedef boost::shared_ptr< ::bwi_msgs::LocationActionResponse > LocationActionResponsePtr;
typedef boost::shared_ptr< ::bwi_msgs::LocationActionResponse const> LocationActionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_msgs::LocationActionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_msgs::LocationActionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bwi_msgs::LocationActionResponse_<ContainerAllocator1> & lhs, const ::bwi_msgs::LocationActionResponse_<ContainerAllocator2> & rhs)
{
  return lhs.ask_question == rhs.ask_question &&
    lhs.location == rhs.location;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bwi_msgs::LocationActionResponse_<ContainerAllocator1> & lhs, const ::bwi_msgs::LocationActionResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bwi_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::LocationActionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::LocationActionResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::LocationActionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::LocationActionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::LocationActionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::LocationActionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_msgs::LocationActionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5b5bda663c321f211fbf03b3fda40267";
  }

  static const char* value(const ::bwi_msgs::LocationActionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5b5bda663c321f21ULL;
  static const uint64_t static_value2 = 0x1fbf03b3fda40267ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_msgs::LocationActionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_msgs/LocationActionResponse";
  }

  static const char* value(const ::bwi_msgs::LocationActionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_msgs::LocationActionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool ask_question\n"
"string location\n"
;
  }

  static const char* value(const ::bwi_msgs::LocationActionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_msgs::LocationActionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ask_question);
      stream.next(m.location);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LocationActionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_msgs::LocationActionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_msgs::LocationActionResponse_<ContainerAllocator>& v)
  {
    s << indent << "ask_question: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ask_question);
    s << indent << "location: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.location);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_MSGS_MESSAGE_LOCATIONACTIONRESPONSE_H