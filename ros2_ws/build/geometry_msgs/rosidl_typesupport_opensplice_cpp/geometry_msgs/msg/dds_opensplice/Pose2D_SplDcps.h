#ifndef POSE2D_SPLTYPES_H
#define POSE2D_SPLTYPES_H

#include "ccpp_Pose2D_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __Pose2D__geometry_msgs__load (c_base base);

extern c_metaObject __Pose2D__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Pose2D__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__Pose2D___load (c_base base);
extern const char * __geometry_msgs_msg_dds__Pose2D___keys (void);
extern const char * __geometry_msgs_msg_dds__Pose2D___name (void);
struct _geometry_msgs_msg_dds__Pose2D_ ;
extern  c_bool __geometry_msgs_msg_dds__Pose2D___copyIn(c_base base, struct geometry_msgs::msg::dds_::Pose2D_ *from, struct _geometry_msgs_msg_dds__Pose2D_ *to);
extern  void __geometry_msgs_msg_dds__Pose2D___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__Pose2D_ {
    c_double x_;
    c_double y_;
    c_double theta_;
};

#endif
