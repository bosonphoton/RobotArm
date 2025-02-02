// Generated by gencpp from file multi_level_map_msgs/MultiLevelMapLink.msg
// DO NOT EDIT!


#ifndef MULTI_LEVEL_MAP_MSGS_MESSAGE_MULTILEVELMAPLINK_H
#define MULTI_LEVEL_MAP_MSGS_MESSAGE_MULTILEVELMAPLINK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <multi_level_map_msgs/MultiLevelMapPoint.h>
#include <multi_level_map_msgs/MultiLevelMapPoint.h>

namespace multi_level_map_msgs
{
template <class ContainerAllocator>
struct MultiLevelMapLink_
{
  typedef MultiLevelMapLink_<ContainerAllocator> Type;

  MultiLevelMapLink_()
    : from_point()
    , to_point()
    , traversal_cost(0.0)
    , forward_message()
    , reverse_message()  {
    }
  MultiLevelMapLink_(const ContainerAllocator& _alloc)
    : from_point(_alloc)
    , to_point(_alloc)
    , traversal_cost(0.0)
    , forward_message(_alloc)
    , reverse_message(_alloc)  {
  (void)_alloc;
    }



   typedef  ::multi_level_map_msgs::MultiLevelMapPoint_<ContainerAllocator>  _from_point_type;
  _from_point_type from_point;

   typedef  ::multi_level_map_msgs::MultiLevelMapPoint_<ContainerAllocator>  _to_point_type;
  _to_point_type to_point;

   typedef double _traversal_cost_type;
  _traversal_cost_type traversal_cost;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _forward_message_type;
  _forward_message_type forward_message;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _reverse_message_type;
  _reverse_message_type reverse_message;





  typedef boost::shared_ptr< ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator> const> ConstPtr;

}; // struct MultiLevelMapLink_

typedef ::multi_level_map_msgs::MultiLevelMapLink_<std::allocator<void> > MultiLevelMapLink;

typedef boost::shared_ptr< ::multi_level_map_msgs::MultiLevelMapLink > MultiLevelMapLinkPtr;
typedef boost::shared_ptr< ::multi_level_map_msgs::MultiLevelMapLink const> MultiLevelMapLinkConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator1> & lhs, const ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator2> & rhs)
{
  return lhs.from_point == rhs.from_point &&
    lhs.to_point == rhs.to_point &&
    lhs.traversal_cost == rhs.traversal_cost &&
    lhs.forward_message == rhs.forward_message &&
    lhs.reverse_message == rhs.reverse_message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator1> & lhs, const ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace multi_level_map_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b3b52a350b899d69322587cf7b3a1268";
  }

  static const char* value(const ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb3b52a350b899d69ULL;
  static const uint64_t static_value2 = 0x322587cf7b3a1268ULL;
};

template<class ContainerAllocator>
struct DataType< ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multi_level_map_msgs/MultiLevelMapLink";
  }

  static const char* value(const ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator> >
{
  static const char* value()
  {
    return "MultiLevelMapPoint from_point\n"
"MultiLevelMapPoint to_point\n"
"float64 traversal_cost\n"
"string forward_message\n"
"string reverse_message\n"
"\n"
"================================================================================\n"
"MSG: multi_level_map_msgs/MultiLevelMapPoint\n"
"string level_id\n"
"geometry_msgs/Point point\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.from_point);
      stream.next(m.to_point);
      stream.next(m.traversal_cost);
      stream.next(m.forward_message);
      stream.next(m.reverse_message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MultiLevelMapLink_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::multi_level_map_msgs::MultiLevelMapLink_<ContainerAllocator>& v)
  {
    s << indent << "from_point: ";
    s << std::endl;
    Printer< ::multi_level_map_msgs::MultiLevelMapPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.from_point);
    s << indent << "to_point: ";
    s << std::endl;
    Printer< ::multi_level_map_msgs::MultiLevelMapPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.to_point);
    s << indent << "traversal_cost: ";
    Printer<double>::stream(s, indent + "  ", v.traversal_cost);
    s << indent << "forward_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.forward_message);
    s << indent << "reverse_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.reverse_message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MULTI_LEVEL_MAP_MSGS_MESSAGE_MULTILEVELMAPLINK_H
