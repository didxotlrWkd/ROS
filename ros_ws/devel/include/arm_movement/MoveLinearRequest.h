// Generated by gencpp from file arm_movement/MoveLinearRequest.msg
// DO NOT EDIT!


#ifndef ARM_MOVEMENT_MESSAGE_MOVELINEARREQUEST_H
#define ARM_MOVEMENT_MESSAGE_MOVELINEARREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace arm_movement
{
template <class ContainerAllocator>
struct MoveLinearRequest_
{
  typedef MoveLinearRequest_<ContainerAllocator> Type;

  MoveLinearRequest_()
    : command()  {
    }
  MoveLinearRequest_(const ContainerAllocator& _alloc)
    : command(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;





  typedef boost::shared_ptr< ::arm_movement::MoveLinearRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_movement::MoveLinearRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveLinearRequest_

typedef ::arm_movement::MoveLinearRequest_<std::allocator<void> > MoveLinearRequest;

typedef boost::shared_ptr< ::arm_movement::MoveLinearRequest > MoveLinearRequestPtr;
typedef boost::shared_ptr< ::arm_movement::MoveLinearRequest const> MoveLinearRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::arm_movement::MoveLinearRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::arm_movement::MoveLinearRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::arm_movement::MoveLinearRequest_<ContainerAllocator1> & lhs, const ::arm_movement::MoveLinearRequest_<ContainerAllocator2> & rhs)
{
  return lhs.command == rhs.command;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::arm_movement::MoveLinearRequest_<ContainerAllocator1> & lhs, const ::arm_movement::MoveLinearRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace arm_movement

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::arm_movement::MoveLinearRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::arm_movement::MoveLinearRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arm_movement::MoveLinearRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arm_movement::MoveLinearRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arm_movement::MoveLinearRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arm_movement::MoveLinearRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::arm_movement::MoveLinearRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cba5e21e920a3a2b7b375cb65b64cdea";
  }

  static const char* value(const ::arm_movement::MoveLinearRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcba5e21e920a3a2bULL;
  static const uint64_t static_value2 = 0x7b375cb65b64cdeaULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_movement::MoveLinearRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "arm_movement/MoveLinearRequest";
  }

  static const char* value(const ::arm_movement::MoveLinearRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::arm_movement::MoveLinearRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string command\n"
;
  }

  static const char* value(const ::arm_movement::MoveLinearRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::arm_movement::MoveLinearRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveLinearRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_movement::MoveLinearRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::arm_movement::MoveLinearRequest_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARM_MOVEMENT_MESSAGE_MOVELINEARREQUEST_H
