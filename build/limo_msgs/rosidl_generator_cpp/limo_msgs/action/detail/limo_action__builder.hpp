// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from limo_msgs:action/LimoAction.idl
// generated code does not contain a copyright notice

#ifndef LIMO_MSGS__ACTION__DETAIL__LIMO_ACTION__BUILDER_HPP_
#define LIMO_MSGS__ACTION__DETAIL__LIMO_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "limo_msgs/action/detail/limo_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace limo_msgs
{

namespace action
{

namespace builder
{

class Init_LimoAction_Goal_z
{
public:
  explicit Init_LimoAction_Goal_z(::limo_msgs::action::LimoAction_Goal & msg)
  : msg_(msg)
  {}
  ::limo_msgs::action::LimoAction_Goal z(::limo_msgs::action::LimoAction_Goal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limo_msgs::action::LimoAction_Goal msg_;
};

class Init_LimoAction_Goal_y
{
public:
  explicit Init_LimoAction_Goal_y(::limo_msgs::action::LimoAction_Goal & msg)
  : msg_(msg)
  {}
  Init_LimoAction_Goal_z y(::limo_msgs::action::LimoAction_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_LimoAction_Goal_z(msg_);
  }

private:
  ::limo_msgs::action::LimoAction_Goal msg_;
};

class Init_LimoAction_Goal_x
{
public:
  Init_LimoAction_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LimoAction_Goal_y x(::limo_msgs::action::LimoAction_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_LimoAction_Goal_y(msg_);
  }

private:
  ::limo_msgs::action::LimoAction_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::limo_msgs::action::LimoAction_Goal>()
{
  return limo_msgs::action::builder::Init_LimoAction_Goal_x();
}

}  // namespace limo_msgs


namespace limo_msgs
{

namespace action
{

namespace builder
{

class Init_LimoAction_Result_success
{
public:
  Init_LimoAction_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::limo_msgs::action::LimoAction_Result success(::limo_msgs::action::LimoAction_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limo_msgs::action::LimoAction_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::limo_msgs::action::LimoAction_Result>()
{
  return limo_msgs::action::builder::Init_LimoAction_Result_success();
}

}  // namespace limo_msgs


namespace limo_msgs
{

namespace action
{

namespace builder
{

class Init_LimoAction_Feedback_status
{
public:
  Init_LimoAction_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::limo_msgs::action::LimoAction_Feedback status(::limo_msgs::action::LimoAction_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limo_msgs::action::LimoAction_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::limo_msgs::action::LimoAction_Feedback>()
{
  return limo_msgs::action::builder::Init_LimoAction_Feedback_status();
}

}  // namespace limo_msgs


namespace limo_msgs
{

namespace action
{

namespace builder
{

class Init_LimoAction_SendGoal_Request_goal
{
public:
  explicit Init_LimoAction_SendGoal_Request_goal(::limo_msgs::action::LimoAction_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::limo_msgs::action::LimoAction_SendGoal_Request goal(::limo_msgs::action::LimoAction_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limo_msgs::action::LimoAction_SendGoal_Request msg_;
};

class Init_LimoAction_SendGoal_Request_goal_id
{
public:
  Init_LimoAction_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LimoAction_SendGoal_Request_goal goal_id(::limo_msgs::action::LimoAction_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LimoAction_SendGoal_Request_goal(msg_);
  }

private:
  ::limo_msgs::action::LimoAction_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::limo_msgs::action::LimoAction_SendGoal_Request>()
{
  return limo_msgs::action::builder::Init_LimoAction_SendGoal_Request_goal_id();
}

}  // namespace limo_msgs


namespace limo_msgs
{

namespace action
{

namespace builder
{

class Init_LimoAction_SendGoal_Response_stamp
{
public:
  explicit Init_LimoAction_SendGoal_Response_stamp(::limo_msgs::action::LimoAction_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::limo_msgs::action::LimoAction_SendGoal_Response stamp(::limo_msgs::action::LimoAction_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limo_msgs::action::LimoAction_SendGoal_Response msg_;
};

class Init_LimoAction_SendGoal_Response_accepted
{
public:
  Init_LimoAction_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LimoAction_SendGoal_Response_stamp accepted(::limo_msgs::action::LimoAction_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_LimoAction_SendGoal_Response_stamp(msg_);
  }

private:
  ::limo_msgs::action::LimoAction_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::limo_msgs::action::LimoAction_SendGoal_Response>()
{
  return limo_msgs::action::builder::Init_LimoAction_SendGoal_Response_accepted();
}

}  // namespace limo_msgs


namespace limo_msgs
{

namespace action
{

namespace builder
{

class Init_LimoAction_GetResult_Request_goal_id
{
public:
  Init_LimoAction_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::limo_msgs::action::LimoAction_GetResult_Request goal_id(::limo_msgs::action::LimoAction_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limo_msgs::action::LimoAction_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::limo_msgs::action::LimoAction_GetResult_Request>()
{
  return limo_msgs::action::builder::Init_LimoAction_GetResult_Request_goal_id();
}

}  // namespace limo_msgs


namespace limo_msgs
{

namespace action
{

namespace builder
{

class Init_LimoAction_GetResult_Response_result
{
public:
  explicit Init_LimoAction_GetResult_Response_result(::limo_msgs::action::LimoAction_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::limo_msgs::action::LimoAction_GetResult_Response result(::limo_msgs::action::LimoAction_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limo_msgs::action::LimoAction_GetResult_Response msg_;
};

class Init_LimoAction_GetResult_Response_status
{
public:
  Init_LimoAction_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LimoAction_GetResult_Response_result status(::limo_msgs::action::LimoAction_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LimoAction_GetResult_Response_result(msg_);
  }

private:
  ::limo_msgs::action::LimoAction_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::limo_msgs::action::LimoAction_GetResult_Response>()
{
  return limo_msgs::action::builder::Init_LimoAction_GetResult_Response_status();
}

}  // namespace limo_msgs


namespace limo_msgs
{

namespace action
{

namespace builder
{

class Init_LimoAction_FeedbackMessage_feedback
{
public:
  explicit Init_LimoAction_FeedbackMessage_feedback(::limo_msgs::action::LimoAction_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::limo_msgs::action::LimoAction_FeedbackMessage feedback(::limo_msgs::action::LimoAction_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::limo_msgs::action::LimoAction_FeedbackMessage msg_;
};

class Init_LimoAction_FeedbackMessage_goal_id
{
public:
  Init_LimoAction_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LimoAction_FeedbackMessage_feedback goal_id(::limo_msgs::action::LimoAction_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LimoAction_FeedbackMessage_feedback(msg_);
  }

private:
  ::limo_msgs::action::LimoAction_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::limo_msgs::action::LimoAction_FeedbackMessage>()
{
  return limo_msgs::action::builder::Init_LimoAction_FeedbackMessage_goal_id();
}

}  // namespace limo_msgs

#endif  // LIMO_MSGS__ACTION__DETAIL__LIMO_ACTION__BUILDER_HPP_
