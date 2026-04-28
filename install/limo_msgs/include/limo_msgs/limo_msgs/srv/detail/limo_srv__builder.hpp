// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from limo_msgs:srv/LimoSrv.idl
// generated code does not contain a copyright notice

#ifndef LIMO_MSGS__SRV__DETAIL__LIMO_SRV__BUILDER_HPP_
#define LIMO_MSGS__SRV__DETAIL__LIMO_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "limo_msgs/srv/detail/limo_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace limo_msgs
{

namespace srv
{

namespace builder
{

class Init_LimoSrv_Request_z
{
public:
  explicit Init_LimoSrv_Request_z(::limo_msgs::srv::LimoSrv_Request & msg)
  : msg_(msg)
  {}
  ::limo_msgs::srv::LimoSrv_Request z(::limo_msgs::srv::LimoSrv_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limo_msgs::srv::LimoSrv_Request msg_;
};

class Init_LimoSrv_Request_y
{
public:
  explicit Init_LimoSrv_Request_y(::limo_msgs::srv::LimoSrv_Request & msg)
  : msg_(msg)
  {}
  Init_LimoSrv_Request_z y(::limo_msgs::srv::LimoSrv_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_LimoSrv_Request_z(msg_);
  }

private:
  ::limo_msgs::srv::LimoSrv_Request msg_;
};

class Init_LimoSrv_Request_x
{
public:
  Init_LimoSrv_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LimoSrv_Request_y x(::limo_msgs::srv::LimoSrv_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_LimoSrv_Request_y(msg_);
  }

private:
  ::limo_msgs::srv::LimoSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::limo_msgs::srv::LimoSrv_Request>()
{
  return limo_msgs::srv::builder::Init_LimoSrv_Request_x();
}

}  // namespace limo_msgs


namespace limo_msgs
{

namespace srv
{

namespace builder
{

class Init_LimoSrv_Response_success
{
public:
  Init_LimoSrv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::limo_msgs::srv::LimoSrv_Response success(::limo_msgs::srv::LimoSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limo_msgs::srv::LimoSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::limo_msgs::srv::LimoSrv_Response>()
{
  return limo_msgs::srv::builder::Init_LimoSrv_Response_success();
}

}  // namespace limo_msgs

#endif  // LIMO_MSGS__SRV__DETAIL__LIMO_SRV__BUILDER_HPP_
