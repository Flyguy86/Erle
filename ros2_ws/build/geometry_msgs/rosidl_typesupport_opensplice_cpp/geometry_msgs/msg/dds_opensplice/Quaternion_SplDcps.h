#ifndef QUATERNION_SPLTYPES_H
#define QUATERNION_SPLTYPES_H

#include "ccpp_Quaternion_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __Quaternion__geometry_msgs__load (c_base base);

extern c_metaObject __Quaternion__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Quaternion__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__Quaternion___load (c_base base);
extern const char * __geometry_msgs_msg_dds__Quaternion___keys (void);
extern const char * __geometry_msgs_msg_dds__Quaternion___name (void);
struct _geometry_msgs_msg_dds__Quaternion_ ;
extern  c_bool __geometry_msgs_msg_dds__Quaternion___copyIn(c_base base, struct geometry_msgs::msg::dds_::Quaternion_ *from, struct _geometry_msgs_msg_dds__Quaternion_ *to);
extern  void __geometry_msgs_msg_dds__Quaternion___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__Quaternion_ {
    c_double x_;
    c_double y_;
    c_double z_;
    c_double w_;
};

#endif
