#ifndef ODOMETRY_SPLTYPES_H
#define ODOMETRY_SPLTYPES_H

#include "ccpp_Odometry_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "PoseWithCovariance_SplDcps.h"
#include "TwistWithCovariance_SplDcps.h"

extern c_metaObject __Odometry__nav_msgs__load (c_base base);

extern c_metaObject __Odometry__nav_msgs_msg__load (c_base base);

extern c_metaObject __Odometry__nav_msgs_msg_dds___load (c_base base);

extern c_metaObject __nav_msgs_msg_dds__Odometry___load (c_base base);
extern const char * __nav_msgs_msg_dds__Odometry___keys (void);
extern const char * __nav_msgs_msg_dds__Odometry___name (void);
struct _nav_msgs_msg_dds__Odometry_ ;
extern  c_bool __nav_msgs_msg_dds__Odometry___copyIn(c_base base, struct nav_msgs::msg::dds_::Odometry_ *from, struct _nav_msgs_msg_dds__Odometry_ *to);
extern  void __nav_msgs_msg_dds__Odometry___copyOut(void *_from, void *_to);
struct _nav_msgs_msg_dds__Odometry_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_string child_frame_id_;
    struct _geometry_msgs_msg_dds__PoseWithCovariance_ pose_;
    struct _geometry_msgs_msg_dds__TwistWithCovariance_ twist_;
};

#endif
