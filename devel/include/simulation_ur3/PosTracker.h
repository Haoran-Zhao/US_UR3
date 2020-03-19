// Generated by gencpp from file simulation_ur3/PosTracker.msg
// DO NOT EDIT!


#ifndef SIMULATION_UR3_MESSAGE_POSTRACKER_H
#define SIMULATION_UR3_MESSAGE_POSTRACKER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace simulation_ur3
{
template <class ContainerAllocator>
struct PosTracker_
{
  typedef PosTracker_<ContainerAllocator> Type;

  PosTracker_()
    : c_X(0.0)
    , c_Y(0.0)
    , c_Z(0.0)
    , g_X(0.0)
    , g_Y(0.0)
    , g_Z(0.0)  {
    }
  PosTracker_(const ContainerAllocator& _alloc)
    : c_X(0.0)
    , c_Y(0.0)
    , c_Z(0.0)
    , g_X(0.0)
    , g_Y(0.0)
    , g_Z(0.0)  {
  (void)_alloc;
    }



   typedef double _c_X_type;
  _c_X_type c_X;

   typedef double _c_Y_type;
  _c_Y_type c_Y;

   typedef double _c_Z_type;
  _c_Z_type c_Z;

   typedef double _g_X_type;
  _g_X_type g_X;

   typedef double _g_Y_type;
  _g_Y_type g_Y;

   typedef double _g_Z_type;
  _g_Z_type g_Z;





  typedef boost::shared_ptr< ::simulation_ur3::PosTracker_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simulation_ur3::PosTracker_<ContainerAllocator> const> ConstPtr;

}; // struct PosTracker_

typedef ::simulation_ur3::PosTracker_<std::allocator<void> > PosTracker;

typedef boost::shared_ptr< ::simulation_ur3::PosTracker > PosTrackerPtr;
typedef boost::shared_ptr< ::simulation_ur3::PosTracker const> PosTrackerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simulation_ur3::PosTracker_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simulation_ur3::PosTracker_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace simulation_ur3

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'simulation_ur3': ['/home/haoran/US_UR3/src/simulation_ur3/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::simulation_ur3::PosTracker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simulation_ur3::PosTracker_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulation_ur3::PosTracker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simulation_ur3::PosTracker_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulation_ur3::PosTracker_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simulation_ur3::PosTracker_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simulation_ur3::PosTracker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "89129e0c6ca6b02f521b2e681ee9b035";
  }

  static const char* value(const ::simulation_ur3::PosTracker_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x89129e0c6ca6b02fULL;
  static const uint64_t static_value2 = 0x521b2e681ee9b035ULL;
};

template<class ContainerAllocator>
struct DataType< ::simulation_ur3::PosTracker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simulation_ur3/PosTracker";
  }

  static const char* value(const ::simulation_ur3::PosTracker_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simulation_ur3::PosTracker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# message type to describe the tracking information of the end effector\n\
# to be published as a topic\n\
\n\
float64 c_X  # current X\n\
float64 c_Y  # current Y\n\
float64 c_Z  # current Z\n\
float64 g_X  # goal X\n\
float64 g_Y  # goal Y\n\
float64 g_Z  # goal Z\n\
";
  }

  static const char* value(const ::simulation_ur3::PosTracker_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simulation_ur3::PosTracker_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.c_X);
      stream.next(m.c_Y);
      stream.next(m.c_Z);
      stream.next(m.g_X);
      stream.next(m.g_Y);
      stream.next(m.g_Z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PosTracker_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simulation_ur3::PosTracker_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simulation_ur3::PosTracker_<ContainerAllocator>& v)
  {
    s << indent << "c_X: ";
    Printer<double>::stream(s, indent + "  ", v.c_X);
    s << indent << "c_Y: ";
    Printer<double>::stream(s, indent + "  ", v.c_Y);
    s << indent << "c_Z: ";
    Printer<double>::stream(s, indent + "  ", v.c_Z);
    s << indent << "g_X: ";
    Printer<double>::stream(s, indent + "  ", v.g_X);
    s << indent << "g_Y: ";
    Printer<double>::stream(s, indent + "  ", v.g_Y);
    s << indent << "g_Z: ";
    Printer<double>::stream(s, indent + "  ", v.g_Z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMULATION_UR3_MESSAGE_POSTRACKER_H
