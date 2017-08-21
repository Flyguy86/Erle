#ifndef LASERECHO_SPLTYPES_H
#define LASERECHO_SPLTYPES_H

#include "ccpp_LaserEcho_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __LaserEcho__sensor_msgs__load (c_base base);

extern c_metaObject __LaserEcho__sensor_msgs_msg__load (c_base base);

extern c_metaObject __LaserEcho__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__LaserEcho___load (c_base base);
extern const char * __sensor_msgs_msg_dds__LaserEcho___keys (void);
extern const char * __sensor_msgs_msg_dds__LaserEcho___name (void);
struct _sensor_msgs_msg_dds__LaserEcho_ ;
extern  c_bool __sensor_msgs_msg_dds__LaserEcho___copyIn(c_base base, struct sensor_msgs::msg::dds_::LaserEcho_ *from, struct _sensor_msgs_msg_dds__LaserEcho_ *to);
extern  void __sensor_msgs_msg_dds__LaserEcho___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__LaserEcho_ {
    c_sequence echoes_;
};

#endif
