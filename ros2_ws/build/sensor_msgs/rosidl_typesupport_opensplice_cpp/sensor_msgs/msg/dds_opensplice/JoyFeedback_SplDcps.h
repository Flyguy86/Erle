#ifndef JOYFEEDBACK_SPLTYPES_H
#define JOYFEEDBACK_SPLTYPES_H

#include "ccpp_JoyFeedback_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __JoyFeedback__sensor_msgs__load (c_base base);

extern c_metaObject __JoyFeedback__sensor_msgs_msg__load (c_base base);

extern c_metaObject __JoyFeedback__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__JoyFeedback___load (c_base base);
extern const char * __sensor_msgs_msg_dds__JoyFeedback___keys (void);
extern const char * __sensor_msgs_msg_dds__JoyFeedback___name (void);
struct _sensor_msgs_msg_dds__JoyFeedback_ ;
extern  c_bool __sensor_msgs_msg_dds__JoyFeedback___copyIn(c_base base, struct sensor_msgs::msg::dds_::JoyFeedback_ *from, struct _sensor_msgs_msg_dds__JoyFeedback_ *to);
extern  void __sensor_msgs_msg_dds__JoyFeedback___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__JoyFeedback_ {
    c_octet type_;
    c_octet id_;
    c_float intensity_;
};

#endif
