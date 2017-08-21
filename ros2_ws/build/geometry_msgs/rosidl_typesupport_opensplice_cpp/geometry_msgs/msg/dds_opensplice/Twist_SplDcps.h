#ifndef TWIST_SPLTYPES_H
#define TWIST_SPLTYPES_H

#include "ccpp_Twist_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Vector3_SplDcps.h"

extern c_metaObject __Twist__geometry_msgs__load (c_base base);

extern c_metaObject __Twist__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Twist__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__Twist___load (c_base base);
extern const char * __geometry_msgs_msg_dds__Twist___keys (void);
extern const char * __geometry_msgs_msg_dds__Twist___name (void);
struct _geometry_msgs_msg_dds__Twist_ ;
extern  c_bool __geometry_msgs_msg_dds__Twist___copyIn(c_base base, struct geometry_msgs::msg::dds_::Twist_ *from, struct _geometry_msgs_msg_dds__Twist_ *to);
extern  void __geometry_msgs_msg_dds__Twist___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__Twist_ {
    struct _geometry_msgs_msg_dds__Vector3_ linear_;
    struct _geometry_msgs_msg_dds__Vector3_ angular_;
};

#endif
