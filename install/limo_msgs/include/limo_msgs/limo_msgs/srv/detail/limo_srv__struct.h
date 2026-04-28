// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from limo_msgs:srv/LimoSrv.idl
// generated code does not contain a copyright notice

#ifndef LIMO_MSGS__SRV__DETAIL__LIMO_SRV__STRUCT_H_
#define LIMO_MSGS__SRV__DETAIL__LIMO_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/LimoSrv in the package limo_msgs.
typedef struct limo_msgs__srv__LimoSrv_Request
{
  float x;
  float y;
  float z;
} limo_msgs__srv__LimoSrv_Request;

// Struct for a sequence of limo_msgs__srv__LimoSrv_Request.
typedef struct limo_msgs__srv__LimoSrv_Request__Sequence
{
  limo_msgs__srv__LimoSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limo_msgs__srv__LimoSrv_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/LimoSrv in the package limo_msgs.
typedef struct limo_msgs__srv__LimoSrv_Response
{
  bool success;
} limo_msgs__srv__LimoSrv_Response;

// Struct for a sequence of limo_msgs__srv__LimoSrv_Response.
typedef struct limo_msgs__srv__LimoSrv_Response__Sequence
{
  limo_msgs__srv__LimoSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limo_msgs__srv__LimoSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIMO_MSGS__SRV__DETAIL__LIMO_SRV__STRUCT_H_
