#ifndef WRENCHSTAMPED_SPLTYPES_H
#define WRENCHSTAMPED_SPLTYPES_H

#include "ccpp_WrenchStamped_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "Wrench_SplDcps.h"

extern c_metaObject __WrenchStamped__geometry_msgs__load (c_base base);

extern c_metaObject __WrenchStamped__geometry_msgs_msg__load (c_base base);

extern c_metaObject __WrenchStamped__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__WrenchStamped___load (c_base base);
extern const char * __geometry_msgs_msg_dds__WrenchStamped___keys (void);
extern const char * __geometry_msgs_msg_dds__WrenchStamped___name (void);
struct _geometry_msgs_msg_dds__WrenchStamped_ ;
extern  c_bool __geometry_msgs_msg_dds__WrenchStamped___copyIn(c_base base, struct geometry_msgs::msg::dds_::WrenchStamped_ *from, struct _geometry_msgs_msg_dds__WrenchStamped_ *to);
extern  void __geometry_msgs_msg_dds__WrenchStamped___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__WrenchStamped_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _geometry_msgs_msg_dds__Wrench_ wrench_;
};

#endif
