#ifndef POSE_SPLTYPES_H
#define POSE_SPLTYPES_H

#include "ccpp_Pose_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Point_SplDcps.h"
#include "Quaternion_SplDcps.h"

extern c_metaObject __Pose__geometry_msgs__load (c_base base);

extern c_metaObject __Pose__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Pose__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__Pose___load (c_base base);
extern const char * __geometry_msgs_msg_dds__Pose___keys (void);
extern const char * __geometry_msgs_msg_dds__Pose___name (void);
struct _geometry_msgs_msg_dds__Pose_ ;
extern  c_bool __geometry_msgs_msg_dds__Pose___copyIn(c_base base, struct geometry_msgs::msg::dds_::Pose_ *from, struct _geometry_msgs_msg_dds__Pose_ *to);
extern  void __geometry_msgs_msg_dds__Pose___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__Pose_ {
    struct _geometry_msgs_msg_dds__Point_ position_;
    struct _geometry_msgs_msg_dds__Quaternion_ orientation_;
};

#endif
