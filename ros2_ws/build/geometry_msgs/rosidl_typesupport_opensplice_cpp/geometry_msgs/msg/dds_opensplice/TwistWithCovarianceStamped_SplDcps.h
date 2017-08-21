#ifndef TWISTWITHCOVARIANCESTAMPED_SPLTYPES_H
#define TWISTWITHCOVARIANCESTAMPED_SPLTYPES_H

#include "ccpp_TwistWithCovarianceStamped_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "TwistWithCovariance_SplDcps.h"

extern c_metaObject __TwistWithCovarianceStamped__geometry_msgs__load (c_base base);

extern c_metaObject __TwistWithCovarianceStamped__geometry_msgs_msg__load (c_base base);

extern c_metaObject __TwistWithCovarianceStamped__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__TwistWithCovarianceStamped___load (c_base base);
extern const char * __geometry_msgs_msg_dds__TwistWithCovarianceStamped___keys (void);
extern const char * __geometry_msgs_msg_dds__TwistWithCovarianceStamped___name (void);
struct _geometry_msgs_msg_dds__TwistWithCovarianceStamped_ ;
extern  c_bool __geometry_msgs_msg_dds__TwistWithCovarianceStamped___copyIn(c_base base, struct geometry_msgs::msg::dds_::TwistWithCovarianceStamped_ *from, struct _geometry_msgs_msg_dds__TwistWithCovarianceStamped_ *to);
extern  void __geometry_msgs_msg_dds__TwistWithCovarianceStamped___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__TwistWithCovarianceStamped_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _geometry_msgs_msg_dds__TwistWithCovariance_ twist_;
};

#endif
