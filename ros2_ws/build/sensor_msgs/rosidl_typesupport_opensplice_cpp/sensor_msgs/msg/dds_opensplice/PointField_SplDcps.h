#ifndef POINTFIELD_SPLTYPES_H
#define POINTFIELD_SPLTYPES_H

#include "ccpp_PointField_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __PointField__sensor_msgs__load (c_base base);

extern c_metaObject __PointField__sensor_msgs_msg__load (c_base base);

extern c_metaObject __PointField__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__PointField___load (c_base base);
extern const char * __sensor_msgs_msg_dds__PointField___keys (void);
extern const char * __sensor_msgs_msg_dds__PointField___name (void);
struct _sensor_msgs_msg_dds__PointField_ ;
extern  c_bool __sensor_msgs_msg_dds__PointField___copyIn(c_base base, struct sensor_msgs::msg::dds_::PointField_ *from, struct _sensor_msgs_msg_dds__PointField_ *to);
extern  void __sensor_msgs_msg_dds__PointField___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__PointField_ {
    c_string name_;
    c_ulong offset_;
    c_octet datatype_;
    c_ulong count_;
};

#endif
