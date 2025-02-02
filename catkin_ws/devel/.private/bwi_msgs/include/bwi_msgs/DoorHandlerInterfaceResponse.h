// Generated by gencpp from file bwi_msgs/DoorHandlerInterfaceResponse.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_DOORHANDLERINTERFACERESPONSE_H
#define BWI_MSGS_MESSAGE_DOORHANDLERINTERFACERESPONSE_H


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
struct DoorHandlerInterfaceResponse_
{
  typedef DoorHandlerInterfaceResponse_<ContainerAllocator> Type;

  DoorHandlerInterfaceResponse_()
    : success(false)
    , status()  {
    }
  DoorHandlerInterfaceResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , status(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DoorHandlerInterfaceResponse_

typedef ::bwi_msgs::DoorHandlerInterfaceResponse_<std::allocator<void> > DoorHandlerInterfaceResponse;

typedef boost::shared_ptr< ::bwi_msgs::DoorHandlerInterfaceResponse > DoorHandlerInterfaceResponsePtr;
typedef boost::shared_ptr< ::bwi_msgs::DoorHandlerInterfaceResponse const> DoorHandlerInterfaceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator1> & lhs, const ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator1> & lhs, const ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bwi_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "38b8954d32a849f31d78416b12bff5d1";
  }

  static const char* value(const ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x38b8954d32a849f3ULL;
  static const uint64_t static_value2 = 0x1d78416b12bff5d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_msgs/DoorHandlerInterfaceResponse";
  }

  static const char* value(const ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"string status\n"
"\n"
;
  }

  static const char* value(const ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DoorHandlerInterfaceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_msgs::DoorHandlerInterfaceResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_MSGS_MESSAGE_DOORHANDLERINTERFACERESPONSE_H
