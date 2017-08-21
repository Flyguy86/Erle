#ifndef JOY_SPLTYPES_H
#define JOY_SPLTYPES_H

#include "ccpp_Joy_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"

extern c_metaObject __Joy__sensor_msgs__load (c_base base);

extern c_metaObject __Joy__sensor_msgs_msg__load (c_base base);

extern c_metaObject __Joy__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__Joy___load (c_base base);
extern const char * __sensor_msgs_msg_dds__Joy___keys (void);
extern const char * __sensor_msgs_msg_dds__Joy___name (void);
struct _sensor_msgs_msg_dds__Joy_ ;
extern  c_bool __sensor_msgs_msg_dds__Joy___copyIn(c_base base, struct sensor_msgs::msg::dds_::Joy_ *from, struct _sensor_msgs_msg_dds__Joy_ *to);
extern  void __sensor_msgs_msg_dds__Joy___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__Joy_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_sequence axes_;
    c_sequence buttons_;
};

#endif
