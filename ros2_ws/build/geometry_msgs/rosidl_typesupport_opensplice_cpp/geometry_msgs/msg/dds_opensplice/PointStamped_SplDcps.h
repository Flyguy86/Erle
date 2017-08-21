#ifndef POINTSTAMPED_SPLTYPES_H
#define POINTSTAMPED_SPLTYPES_H

#include "ccpp_PointStamped_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "Point_SplDcps.h"

extern c_metaObject __PointStamped__geometry_msgs__load (c_base base);

extern c_metaObject __PointStamped__geometry_msgs_msg__load (c_base base);

extern c_metaObject __PointStamped__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__PointStamped___load (c_base base);
extern const char * __geometry_msgs_msg_dds__PointStamped___keys (void);
extern const char * __geometry_msgs_msg_dds__PointStamped___name (void);
struct _geometry_msgs_msg_dds__PointStamped_ ;
extern  c_bool __geometry_msgs_msg_dds__PointStamped___copyIn(c_base base, struct geometry_msgs::msg::dds_::PointStamped_ *from, struct _geometry_msgs_msg_dds__PointStamped_ *to);
extern  void __geometry_msgs_msg_dds__PointStamped___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__PointStamped_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _geometry_msgs_msg_dds__Point_ point_;
};

#endif
