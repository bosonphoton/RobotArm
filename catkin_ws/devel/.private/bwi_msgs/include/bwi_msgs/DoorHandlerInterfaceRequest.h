// Generated by gencpp from file bwi_msgs/DoorHandlerInterfaceRequest.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_DOORHANDLERINTERFACEREQUEST_H
#define BWI_MSGS_MESSAGE_DOORHANDLERINTERFACEREQUEST_H


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
struct DoorHandlerInterfaceRequest_
{
  typedef DoorHandlerInterfaceRequest_<ContainerAllocator> Type;

  DoorHandlerInterfaceRequest_()
    : door()
    , open(false)
    , all_doors(false)
    , open_timeout(0.0)  {
    }
  DoorHandlerInterfaceRequest_(const ContainerAllocator& _alloc)
    : door(_alloc)
    , open(false)
    , all_doors(false)
    , open_timeout(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _door_type;
  _door_type door;

   typedef uint8_t _open_type;
  _open_type open;

   typedef uint8_t _all_doors_type;
  _all_doors_type all_doors;

   typedef float _open_timeout_type;
  _open_timeout_type open_timeout;





  typedef boost::shared_ptr< ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DoorHandlerInterfaceRequest_

typedef ::bwi_msgs::DoorHandlerInterfaceRequest_<std::allocator<void> > DoorHandlerInterfaceRequest;

typedef boost::shared_ptr< ::bwi_msgs::DoorHandlerInterfaceRequest > DoorHandlerInterfaceRequestPtr;
typedef boost::shared_ptr< ::bwi_msgs::DoorHandlerInterfaceRequest const> DoorHandlerInterfaceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator1> & lhs, const ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator2> & rhs)
{
  return lhs.door == rhs.door &&
    lhs.open == rhs.open &&
    lhs.all_doors == rhs.all_doors &&
    lhs.open_timeout == rhs.open_timeout;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator1> & lhs, const ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bwi_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c8bfaa7e29605477bf4fe7ef4f304e74";
  }

  static const char* value(const ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc8bfaa7e29605477ULL;
  static const uint64_t static_value2 = 0xbf4fe7ef4f304e74ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_msgs/DoorHandlerInterfaceRequest";
  }

  static const char* value(const ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string door\n"
"bool open\n"
"bool all_doors\n"
"float32 open_timeout\n"
;
  }

  static const char* value(const ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.door);
      stream.next(m.open);
      stream.next(m.all_doors);
      stream.next(m.open_timeout);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DoorHandlerInterfaceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_msgs::DoorHandlerInterfaceRequest_<ContainerAllocator>& v)
  {
    s << indent << "door: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.door);
    s << indent << "open: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.open);
    s << indent << "all_doors: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.all_doors);
    s << indent << "open_timeout: ";
    Printer<float>::stream(s, indent + "  ", v.open_timeout);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_MSGS_MESSAGE_DOORHANDLERINTERFACEREQUEST_H
