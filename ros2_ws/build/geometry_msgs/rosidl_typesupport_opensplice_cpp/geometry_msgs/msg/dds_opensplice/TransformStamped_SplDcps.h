#ifndef TRANSFORMSTAMPED_SPLTYPES_H
#define TRANSFORMSTAMPED_SPLTYPES_H

#include "ccpp_TransformStamped_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "Transform_SplDcps.h"

extern c_metaObject __TransformStamped__geometry_msgs__load (c_base base);

extern c_metaObject __TransformStamped__geometry_msgs_msg__load (c_base base);

extern c_metaObject __TransformStamped__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__TransformStamped___load (c_base base);
extern const char * __geometry_msgs_msg_dds__TransformStamped___keys (void);
extern const char * __geometry_msgs_msg_dds__TransformStamped___name (void);
struct _geometry_msgs_msg_dds__TransformStamped_ ;
extern  c_bool __geometry_msgs_msg_dds__TransformStamped___copyIn(c_base base, struct geometry_msgs::msg::dds_::TransformStamped_ *from, struct _geometry_msgs_msg_dds__TransformStamped_ *to);
extern  void __geometry_msgs_msg_dds__TransformStamped___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__TransformStamped_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_string child_frame_id_;
    struct _geometry_msgs_msg_dds__Transform_ transform_;
};

#endif
