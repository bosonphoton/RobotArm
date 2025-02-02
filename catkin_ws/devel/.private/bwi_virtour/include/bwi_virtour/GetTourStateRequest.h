// Generated by gencpp from file bwi_virtour/GetTourStateRequest.msg
// DO NOT EDIT!


#ifndef BWI_VIRTOUR_MESSAGE_GETTOURSTATEREQUEST_H
#define BWI_VIRTOUR_MESSAGE_GETTOURSTATEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace bwi_virtour
{
template <class ContainerAllocator>
struct GetTourStateRequest_
{
  typedef GetTourStateRequest_<ContainerAllocator> Type;

  GetTourStateRequest_()
    {
    }
  GetTourStateRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::bwi_virtour::GetTourStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_virtour::GetTourStateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetTourStateRequest_

typedef ::bwi_virtour::GetTourStateRequest_<std::allocator<void> > GetTourStateRequest;

typedef boost::shared_ptr< ::bwi_virtour::GetTourStateRequest > GetTourStateRequestPtr;
typedef boost::shared_ptr< ::bwi_virtour::GetTourStateRequest const> GetTourStateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_virtour::GetTourStateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_virtour::GetTourStateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace bwi_virtour

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::bwi_virtour::GetTourStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_virtour::GetTourStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_virtour::GetTourStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_virtour::GetTourStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_virtour::GetTourStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_virtour::GetTourStateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_virtour::GetTourStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::bwi_virtour::GetTourStateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_virtour::GetTourStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_virtour/GetTourStateRequest";
  }

  static const char* value(const ::bwi_virtour::GetTourStateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_virtour::GetTourStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::bwi_virtour::GetTourStateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_virtour::GetTourStateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetTourStateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_virtour::GetTourStateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::bwi_virtour::GetTourStateRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // BWI_VIRTOUR_MESSAGE_GETTOURSTATEREQUEST_H
