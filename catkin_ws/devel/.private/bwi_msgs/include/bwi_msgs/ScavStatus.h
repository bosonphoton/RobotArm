// Generated by gencpp from file bwi_msgs/ScavStatus.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_SCAVSTATUS_H
#define BWI_MSGS_MESSAGE_SCAVSTATUS_H


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
struct ScavStatus_
{
  typedef ScavStatus_<ContainerAllocator> Type;

  ScavStatus_()
    : names()
    , statuses()
    , certificates()  {
    }
  ScavStatus_(const ContainerAllocator& _alloc)
    : names(_alloc)
    , statuses(_alloc)
    , certificates(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _names_type;
  _names_type names;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _statuses_type;
  _statuses_type statuses;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _certificates_type;
  _certificates_type certificates;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(ONGOING)
  #undef ONGOING
#endif
#if defined(_WIN32) && defined(FINISHED)
  #undef FINISHED
#endif
#if defined(_WIN32) && defined(TODO)
  #undef TODO
#endif

  enum {
    ONGOING = 1,
    FINISHED = 2,
    TODO = 3,
  };


  typedef boost::shared_ptr< ::bwi_msgs::ScavStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_msgs::ScavStatus_<ContainerAllocator> const> ConstPtr;

}; // struct ScavStatus_

typedef ::bwi_msgs::ScavStatus_<std::allocator<void> > ScavStatus;

typedef boost::shared_ptr< ::bwi_msgs::ScavStatus > ScavStatusPtr;
typedef boost::shared_ptr< ::bwi_msgs::ScavStatus const> ScavStatusConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_msgs::ScavStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_msgs::ScavStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bwi_msgs::ScavStatus_<ContainerAllocator1> & lhs, const ::bwi_msgs::ScavStatus_<ContainerAllocator2> & rhs)
{
  return lhs.names == rhs.names &&
    lhs.statuses == rhs.statuses &&
    lhs.certificates == rhs.certificates;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bwi_msgs::ScavStatus_<ContainerAllocator1> & lhs, const ::bwi_msgs::ScavStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bwi_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::ScavStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::ScavStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::ScavStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::ScavStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::ScavStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::ScavStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_msgs::ScavStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "38e2b5af66f5d641973272e8eb0ef803";
  }

  static const char* value(const ::bwi_msgs::ScavStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x38e2b5af66f5d641ULL;
  static const uint64_t static_value2 = 0x973272e8eb0ef803ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_msgs::ScavStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_msgs/ScavStatus";
  }

  static const char* value(const ::bwi_msgs::ScavStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_msgs::ScavStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 ONGOING = 1\n"
"int32 FINISHED = 2\n"
"int32 TODO = 3\n"
"\n"
"string[] names\n"
"int32[] statuses\n"
"string[] certificates\n"
;
  }

  static const char* value(const ::bwi_msgs::ScavStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_msgs::ScavStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.names);
      stream.next(m.statuses);
      stream.next(m.certificates);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ScavStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_msgs::ScavStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_msgs::ScavStatus_<ContainerAllocator>& v)
  {
    s << indent << "names[]" << std::endl;
    for (size_t i = 0; i < v.names.size(); ++i)
    {
      s << indent << "  names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.names[i]);
    }
    s << indent << "statuses[]" << std::endl;
    for (size_t i = 0; i < v.statuses.size(); ++i)
    {
      s << indent << "  statuses[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.statuses[i]);
    }
    s << indent << "certificates[]" << std::endl;
    for (size_t i = 0; i < v.certificates.size(); ++i)
    {
      s << indent << "  certificates[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.certificates[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_MSGS_MESSAGE_SCAVSTATUS_H
