#ifndef POINT32_SPLTYPES_H
#define POINT32_SPLTYPES_H

#include "ccpp_Point32_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __Point32__geometry_msgs__load (c_base base);

extern c_metaObject __Point32__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Point32__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__Point32___load (c_base base);
extern const char * __geometry_msgs_msg_dds__Point32___keys (void);
extern const char * __geometry_msgs_msg_dds__Point32___name (void);
struct _geometry_msgs_msg_dds__Point32_ ;
extern  c_bool __geometry_msgs_msg_dds__Point32___copyIn(c_base base, struct geometry_msgs::msg::dds_::Point32_ *from, struct _geometry_msgs_msg_dds__Point32_ *to);
extern  void __geometry_msgs_msg_dds__Point32___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__Point32_ {
    c_float x_;
    c_float y_;
    c_float z_;
};

#endif
