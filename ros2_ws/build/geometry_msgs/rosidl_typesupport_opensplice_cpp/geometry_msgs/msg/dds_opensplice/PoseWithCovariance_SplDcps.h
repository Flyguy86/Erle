#ifndef POSEWITHCOVARIANCE_SPLTYPES_H
#define POSEWITHCOVARIANCE_SPLTYPES_H

#include "ccpp_PoseWithCovariance_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Pose_SplDcps.h"

extern c_metaObject __PoseWithCovariance__geometry_msgs__load (c_base base);

extern c_metaObject __PoseWithCovariance__geometry_msgs_msg__load (c_base base);

extern c_metaObject __PoseWithCovariance__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__geometry_msgs__PoseWithCovariance__double_array_36__load (c_base base);
typedef c_double _geometry_msgs_msg_dds__geometry_msgs__PoseWithCovariance__double_array_36[36];

extern c_metaObject __geometry_msgs_msg_dds__PoseWithCovariance___load (c_base base);
extern const char * __geometry_msgs_msg_dds__PoseWithCovariance___keys (void);
extern const char * __geometry_msgs_msg_dds__PoseWithCovariance___name (void);
struct _geometry_msgs_msg_dds__PoseWithCovariance_ ;
extern  c_bool __geometry_msgs_msg_dds__PoseWithCovariance___copyIn(c_base base, struct geometry_msgs::msg::dds_::PoseWithCovariance_ *from, struct _geometry_msgs_msg_dds__PoseWithCovariance_ *to);
extern  void __geometry_msgs_msg_dds__PoseWithCovariance___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__PoseWithCovariance_ {
    struct _geometry_msgs_msg_dds__Pose_ pose_;
    _geometry_msgs_msg_dds__geometry_msgs__PoseWithCovariance__double_array_36 covariance_;
};

#endif
