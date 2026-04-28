// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from limo_msgs:action/LimoAction.idl
// generated code does not contain a copyright notice

#ifndef LIMO_MSGS__ACTION__DETAIL__LIMO_ACTION__STRUCT_H_
#define LIMO_MSGS__ACTION__DETAIL__LIMO_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/LimoAction in the package limo_msgs.
typedef struct limo_msgs__action__LimoAction_Goal
{
  float x;
  float y;
  float z;
} limo_msgs__action__LimoAction_Goal;

// Struct for a sequence of limo_msgs__action__LimoAction_Goal.
typedef struct limo_msgs__action__LimoAction_Goal__Sequence
{
  limo_msgs__action__LimoAction_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limo_msgs__action__LimoAction_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/LimoAction in the package limo_msgs.
typedef struct limo_msgs__action__LimoAction_Result
{
  bool success;
} limo_msgs__action__LimoAction_Result;

// Struct for a sequence of limo_msgs__action__LimoAction_Result.
typedef struct limo_msgs__action__LimoAction_Result__Sequence
{
  limo_msgs__action__LimoAction_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limo_msgs__action__LimoAction_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/LimoAction in the package limo_msgs.
typedef struct limo_msgs__action__LimoAction_Feedback
{
  uint32_t status;
} limo_msgs__action__LimoAction_Feedback;

// Struct for a sequence of limo_msgs__action__LimoAction_Feedback.
typedef struct limo_msgs__action__LimoAction_Feedback__Sequence
{
  limo_msgs__action__LimoAction_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limo_msgs__action__LimoAction_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "limo_msgs/action/detail/limo_action__struct.h"

/// Struct defined in action/LimoAction in the package limo_msgs.
typedef struct limo_msgs__action__LimoAction_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  limo_msgs__action__LimoAction_Goal goal;
} limo_msgs__action__LimoAction_SendGoal_Request;

// Struct for a sequence of limo_msgs__action__LimoAction_SendGoal_Request.
typedef struct limo_msgs__action__LimoAction_SendGoal_Request__Sequence
{
  limo_msgs__action__LimoAction_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limo_msgs__action__LimoAction_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/LimoAction in the package limo_msgs.
typedef struct limo_msgs__action__LimoAction_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} limo_msgs__action__LimoAction_SendGoal_Response;

// Struct for a sequence of limo_msgs__action__LimoAction_SendGoal_Response.
typedef struct limo_msgs__action__LimoAction_SendGoal_Response__Sequence
{
  limo_msgs__action__LimoAction_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limo_msgs__action__LimoAction_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/LimoAction in the package limo_msgs.
typedef struct limo_msgs__action__LimoAction_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} limo_msgs__action__LimoAction_GetResult_Request;

// Struct for a sequence of limo_msgs__action__LimoAction_GetResult_Request.
typedef struct limo_msgs__action__LimoAction_GetResult_Request__Sequence
{
  limo_msgs__action__LimoAction_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limo_msgs__action__LimoAction_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "limo_msgs/action/detail/limo_action__struct.h"

/// Struct defined in action/LimoAction in the package limo_msgs.
typedef struct limo_msgs__action__LimoAction_GetResult_Response
{
  int8_t status;
  limo_msgs__action__LimoAction_Result result;
} limo_msgs__action__LimoAction_GetResult_Response;

// Struct for a sequence of limo_msgs__action__LimoAction_GetResult_Response.
typedef struct limo_msgs__action__LimoAction_GetResult_Response__Sequence
{
  limo_msgs__action__LimoAction_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limo_msgs__action__LimoAction_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "limo_msgs/action/detail/limo_action__struct.h"

/// Struct defined in action/LimoAction in the package limo_msgs.
typedef struct limo_msgs__action__LimoAction_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  limo_msgs__action__LimoAction_Feedback feedback;
} limo_msgs__action__LimoAction_FeedbackMessage;

// Struct for a sequence of limo_msgs__action__LimoAction_FeedbackMessage.
typedef struct limo_msgs__action__LimoAction_FeedbackMessage__Sequence
{
  limo_msgs__action__LimoAction_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limo_msgs__action__LimoAction_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIMO_MSGS__ACTION__DETAIL__LIMO_ACTION__STRUCT_H_
