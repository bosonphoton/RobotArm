// Generated by gencpp from file bwi_msgs/WeekTime.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_WEEKTIME_H
#define BWI_MSGS_MESSAGE_WEEKTIME_H


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
struct WeekTime_
{
  typedef WeekTime_<ContainerAllocator> Type;

  WeekTime_()
    : time_seconds(0)
    , day_of_week(0)  {
    }
  WeekTime_(const ContainerAllocator& _alloc)
    : time_seconds(0)
    , day_of_week(0)  {
  (void)_alloc;
    }



   typedef int32_t _time_seconds_type;
  _time_seconds_type time_seconds;

   typedef int32_t _day_of_week_type;
  _day_of_week_type day_of_week;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(MONDAY)
  #undef MONDAY
#endif
#if defined(_WIN32) && defined(TUESDAY)
  #undef TUESDAY
#endif
#if defined(_WIN32) && defined(WEDNESDAY)
  #undef WEDNESDAY
#endif
#if defined(_WIN32) && defined(THURSDAY)
  #undef THURSDAY
#endif
#if defined(_WIN32) && defined(FRIDAY)
  #undef FRIDAY
#endif
#if defined(_WIN32) && defined(SATURDAY)
  #undef SATURDAY
#endif
#if defined(_WIN32) && defined(SUNDAY)
  #undef SUNDAY
#endif

  enum {
    MONDAY = 0,
    TUESDAY = 1,
    WEDNESDAY = 2,
    THURSDAY = 3,
    FRIDAY = 4,
    SATURDAY = 5,
    SUNDAY = 6,
  };


  typedef boost::shared_ptr< ::bwi_msgs::WeekTime_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_msgs::WeekTime_<ContainerAllocator> const> ConstPtr;

}; // struct WeekTime_

typedef ::bwi_msgs::WeekTime_<std::allocator<void> > WeekTime;

typedef boost::shared_ptr< ::bwi_msgs::WeekTime > WeekTimePtr;
typedef boost::shared_ptr< ::bwi_msgs::WeekTime const> WeekTimeConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_msgs::WeekTime_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_msgs::WeekTime_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bwi_msgs::WeekTime_<ContainerAllocator1> & lhs, const ::bwi_msgs::WeekTime_<ContainerAllocator2> & rhs)
{
  return lhs.time_seconds == rhs.time_seconds &&
    lhs.day_of_week == rhs.day_of_week;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bwi_msgs::WeekTime_<ContainerAllocator1> & lhs, const ::bwi_msgs::WeekTime_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bwi_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::WeekTime_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::WeekTime_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::WeekTime_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::WeekTime_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::WeekTime_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::WeekTime_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_msgs::WeekTime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "128bbf0c1abd22da3f2eb8d4ab1ad941";
  }

  static const char* value(const ::bwi_msgs::WeekTime_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x128bbf0c1abd22daULL;
  static const uint64_t static_value2 = 0x3f2eb8d4ab1ad941ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_msgs::WeekTime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_msgs/WeekTime";
  }

  static const char* value(const ::bwi_msgs::WeekTime_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_msgs::WeekTime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Constants defining day of week\n"
"int32 MONDAY=0\n"
"int32 TUESDAY=1\n"
"int32 WEDNESDAY=2\n"
"int32 THURSDAY=3\n"
"int32 FRIDAY=4\n"
"int32 SATURDAY=5\n"
"int32 SUNDAY=6\n"
"\n"
"int32 time_seconds\n"
"int32 day_of_week\n"
;
  }

  static const char* value(const ::bwi_msgs::WeekTime_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_msgs::WeekTime_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time_seconds);
      stream.next(m.day_of_week);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WeekTime_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_msgs::WeekTime_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_msgs::WeekTime_<ContainerAllocator>& v)
  {
    s << indent << "time_seconds: ";
    Printer<int32_t>::stream(s, indent + "  ", v.time_seconds);
    s << indent << "day_of_week: ";
    Printer<int32_t>::stream(s, indent + "  ", v.day_of_week);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_MSGS_MESSAGE_WEEKTIME_H
