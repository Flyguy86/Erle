#ifndef CHANNELFLOAT32_SPLTYPES_H
#define CHANNELFLOAT32_SPLTYPES_H

#include "ccpp_ChannelFloat32_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __ChannelFloat32__sensor_msgs__load (c_base base);

extern c_metaObject __ChannelFloat32__sensor_msgs_msg__load (c_base base);

extern c_metaObject __ChannelFloat32__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__ChannelFloat32___load (c_base base);
extern const char * __sensor_msgs_msg_dds__ChannelFloat32___keys (void);
extern const char * __sensor_msgs_msg_dds__ChannelFloat32___name (void);
struct _sensor_msgs_msg_dds__ChannelFloat32_ ;
extern  c_bool __sensor_msgs_msg_dds__ChannelFloat32___copyIn(c_base base, struct sensor_msgs::msg::dds_::ChannelFloat32_ *from, struct _sensor_msgs_msg_dds__ChannelFloat32_ *to);
extern  void __sensor_msgs_msg_dds__ChannelFloat32___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__ChannelFloat32_ {
    c_string name_;
    c_sequence values_;
};

#endif
