#ifndef JOYFEEDBACKARRAY_SPLTYPES_H
#define JOYFEEDBACKARRAY_SPLTYPES_H

#include "ccpp_JoyFeedbackArray_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "JoyFeedback_SplDcps.h"

extern c_metaObject __JoyFeedbackArray__sensor_msgs__load (c_base base);

extern c_metaObject __JoyFeedbackArray__sensor_msgs_msg__load (c_base base);

extern c_metaObject __JoyFeedbackArray__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__JoyFeedbackArray___load (c_base base);
extern const char * __sensor_msgs_msg_dds__JoyFeedbackArray___keys (void);
extern const char * __sensor_msgs_msg_dds__JoyFeedbackArray___name (void);
struct _sensor_msgs_msg_dds__JoyFeedbackArray_ ;
extern  c_bool __sensor_msgs_msg_dds__JoyFeedbackArray___copyIn(c_base base, struct sensor_msgs::msg::dds_::JoyFeedbackArray_ *from, struct _sensor_msgs_msg_dds__JoyFeedbackArray_ *to);
extern  void __sensor_msgs_msg_dds__JoyFeedbackArray___copyOut(void *_from, void *_to);
struct _sensor_msgs_msg_dds__JoyFeedbackArray_ {
    c_sequence array_;
};

#endif
