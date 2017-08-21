#ifndef FLUIDPRESSURE_SPLTYPES_H
#define FLUIDPRESSURE_SPLTYPES_H

#include "ccpp_FluidPressure_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"

extern c_metaObject __FluidPressure__sensor_msgs__load (c_base base);

extern c_metaObject __FluidPressure__sensor_msgs_msg__load (c_base base);

extern c_metaObject __FluidPressure__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__FluidPressure___load (c_base base);
extern const char * __sensor_msgs_msg_dds__FluidPressure___keys (void);
extern const char * __sensor_msgs_msg_dds__FluidPressure___name (void);
struct _sensor_msgs_msg_dds__FluidPressure_ ;
extern  c_bool __sensor_msgs_msg_dds__FluidPressure___copyIn(c_base base, struct sensor_msgs::msg::dds_::FluidPressure_ *from, struct _sensor_msgs_msg_dds__FluidPressure_ *to);
extern  void __sensor_msgs_msg_dds__FluidPressure___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__FluidPressure_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_double fluid_pressure_;
    c_double variance_;
};

#endif
