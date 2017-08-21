#ifndef RELATIVEHUMIDITY_SPLTYPES_H
#define RELATIVEHUMIDITY_SPLTYPES_H

#include "ccpp_RelativeHumidity_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"

extern c_metaObject __RelativeHumidity__sensor_msgs__load (c_base base);

extern c_metaObject __RelativeHumidity__sensor_msgs_msg__load (c_base base);

extern c_metaObject __RelativeHumidity__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__RelativeHumidity___load (c_base base);
extern const char * __sensor_msgs_msg_dds__RelativeHumidity___keys (void);
extern const char * __sensor_msgs_msg_dds__RelativeHumidity___name (void);
struct _sensor_msgs_msg_dds__RelativeHumidity_ ;
extern  c_bool __sensor_msgs_msg_dds__RelativeHumidity___copyIn(c_base base, struct sensor_msgs::msg::dds_::RelativeHumidity_ *from, struct _sensor_msgs_msg_dds__RelativeHumidity_ *to);
extern  void __sensor_msgs_msg_dds__RelativeHumidity___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__RelativeHumidity_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_double relative_humidity_;
    c_double variance_;
};

#endif
