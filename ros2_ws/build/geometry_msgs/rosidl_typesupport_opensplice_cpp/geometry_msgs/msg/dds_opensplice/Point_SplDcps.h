#ifndef POINT_SPLTYPES_H
#define POINT_SPLTYPES_H

#include "ccpp_Point_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __Point__geometry_msgs__load (c_base base);

extern c_metaObject __Point__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Point__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__Point___load (c_base base);
extern const char * __geometry_msgs_msg_dds__Point___keys (void);
extern const char * __geometry_msgs_msg_dds__Point___name (void);
struct _geometry_msgs_msg_dds__Point_ ;
extern  c_bool __geometry_msgs_msg_dds__Point___copyIn(c_base base, struct geometry_msgs::msg::dds_::Point_ *from, struct _geometry_msgs_msg_dds__Point_ *to);
extern  void __geometry_msgs_msg_dds__Point___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__Point_ {
    c_double x_;
    c_double y_;
    c_double z_;
};

#endif
