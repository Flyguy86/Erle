#ifndef TWISTSTAMPED_SPLTYPES_H
#define TWISTSTAMPED_SPLTYPES_H

#include "ccpp_TwistStamped_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "Twist_SplDcps.h"

extern c_metaObject __TwistStamped__geometry_msgs__load (c_base base);

extern c_metaObject __TwistStamped__geometry_msgs_msg__load (c_base base);

extern c_metaObject __TwistStamped__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__TwistStamped___load (c_base base);
extern const char * __geometry_msgs_msg_dds__TwistStamped___keys (void);
extern const char * __geometry_msgs_msg_dds__TwistStamped___name (void);
struct _geometry_msgs_msg_dds__TwistStamped_ ;
extern  c_bool __geometry_msgs_msg_dds__TwistStamped___copyIn(c_base base, struct geometry_msgs::msg::dds_::TwistStamped_ *from, struct _geometry_msgs_msg_dds__TwistStamped_ *to);
extern  void __geometry_msgs_msg_dds__TwistStamped___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__TwistStamped_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _geometry_msgs_msg_dds__Twist_ twist_;
};

#endif
