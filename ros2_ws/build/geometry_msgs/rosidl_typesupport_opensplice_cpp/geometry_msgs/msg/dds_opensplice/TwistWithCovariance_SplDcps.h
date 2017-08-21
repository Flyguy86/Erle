#ifndef TWISTWITHCOVARIANCE_SPLTYPES_H
#define TWISTWITHCOVARIANCE_SPLTYPES_H

#include "ccpp_TwistWithCovariance_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Twist_SplDcps.h"

extern c_metaObject __TwistWithCovariance__geometry_msgs__load (c_base base);

extern c_metaObject __TwistWithCovariance__geometry_msgs_msg__load (c_base base);

extern c_metaObject __TwistWithCovariance__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36__load (c_base base);
typedef c_double _geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36[36];

extern c_metaObject __geometry_msgs_msg_dds__TwistWithCovariance___load (c_base base);
extern const char * __geometry_msgs_msg_dds__TwistWithCovariance___keys (void);
extern const char * __geometry_msgs_msg_dds__TwistWithCovariance___name (void);
struct _geometry_msgs_msg_dds__TwistWithCovariance_ ;
extern  c_bool __geometry_msgs_msg_dds__TwistWithCovariance___copyIn(c_base base, struct geometry_msgs::msg::dds_::TwistWithCovariance_ *from, struct _geometry_msgs_msg_dds__TwistWithCovariance_ *to);
extern  void __geometry_msgs_msg_dds__TwistWithCovariance___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__TwistWithCovariance_ {
    struct _geometry_msgs_msg_dds__Twist_ twist_;
    _geometry_msgs_msg_dds__geometry_msgs__TwistWithCovariance__double_array_36 covariance_;
};

#endif
