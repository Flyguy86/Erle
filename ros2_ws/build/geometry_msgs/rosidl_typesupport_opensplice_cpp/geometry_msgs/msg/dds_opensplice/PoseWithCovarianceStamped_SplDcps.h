#ifndef POSEWITHCOVARIANCESTAMPED_SPLTYPES_H
#define POSEWITHCOVARIANCESTAMPED_SPLTYPES_H

#include "ccpp_PoseWithCovarianceStamped_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "PoseWithCovariance_SplDcps.h"

extern c_metaObject __PoseWithCovarianceStamped__geometry_msgs__load (c_base base);

extern c_metaObject __PoseWithCovarianceStamped__geometry_msgs_msg__load (c_base base);

extern c_metaObject __PoseWithCovarianceStamped__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__PoseWithCovarianceStamped___load (c_base base);
extern const char * __geometry_msgs_msg_dds__PoseWithCovarianceStamped___keys (void);
extern const char * __geometry_msgs_msg_dds__PoseWithCovarianceStamped___name (void);
struct _geometry_msgs_msg_dds__PoseWithCovarianceStamped_ ;
extern  c_bool __geometry_msgs_msg_dds__PoseWithCovarianceStamped___copyIn(c_base base, struct geometry_msgs::msg::dds_::PoseWithCovarianceStamped_ *from, struct _geometry_msgs_msg_dds__PoseWithCovarianceStamped_ *to);
extern  void __geometry_msgs_msg_dds__PoseWithCovarianceStamped___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__PoseWithCovarianceStamped_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _geometry_msgs_msg_dds__PoseWithCovariance_ pose_;
};

#endif
