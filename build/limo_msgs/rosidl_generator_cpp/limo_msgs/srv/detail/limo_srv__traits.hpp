// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from limo_msgs:srv/LimoSrv.idl
// generated code does not contain a copyright notice

#ifndef LIMO_MSGS__SRV__DETAIL__LIMO_SRV__TRAITS_HPP_
#define LIMO_MSGS__SRV__DETAIL__LIMO_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "limo_msgs/srv/detail/limo_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace limo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LimoSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LimoSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LimoSrv_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace limo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use limo_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const limo_msgs::srv::LimoSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  limo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use limo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const limo_msgs::srv::LimoSrv_Request & msg)
{
  return limo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<limo_msgs::srv::LimoSrv_Request>()
{
  return "limo_msgs::srv::LimoSrv_Request";
}

template<>
inline const char * name<limo_msgs::srv::LimoSrv_Request>()
{
  return "limo_msgs/srv/LimoSrv_Request";
}

template<>
struct has_fixed_size<limo_msgs::srv::LimoSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<limo_msgs::srv::LimoSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<limo_msgs::srv::LimoSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace limo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LimoSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LimoSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LimoSrv_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace limo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use limo_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const limo_msgs::srv::LimoSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  limo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use limo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const limo_msgs::srv::LimoSrv_Response & msg)
{
  return limo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<limo_msgs::srv::LimoSrv_Response>()
{
  return "limo_msgs::srv::LimoSrv_Response";
}

template<>
inline const char * name<limo_msgs::srv::LimoSrv_Response>()
{
  return "limo_msgs/srv/LimoSrv_Response";
}

template<>
struct has_fixed_size<limo_msgs::srv::LimoSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<limo_msgs::srv::LimoSrv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<limo_msgs::srv::LimoSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<limo_msgs::srv::LimoSrv>()
{
  return "limo_msgs::srv::LimoSrv";
}

template<>
inline const char * name<limo_msgs::srv::LimoSrv>()
{
  return "limo_msgs/srv/LimoSrv";
}

template<>
struct has_fixed_size<limo_msgs::srv::LimoSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<limo_msgs::srv::LimoSrv_Request>::value &&
    has_fixed_size<limo_msgs::srv::LimoSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<limo_msgs::srv::LimoSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<limo_msgs::srv::LimoSrv_Request>::value &&
    has_bounded_size<limo_msgs::srv::LimoSrv_Response>::value
  >
{
};

template<>
struct is_service<limo_msgs::srv::LimoSrv>
  : std::true_type
{
};

template<>
struct is_service_request<limo_msgs::srv::LimoSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<limo_msgs::srv::LimoSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LIMO_MSGS__SRV__DETAIL__LIMO_SRV__TRAITS_HPP_
