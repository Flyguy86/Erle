#ifndef POSEARRAY_SPLTYPES_H
#define POSEARRAY_SPLTYPES_H

#include "ccpp_PoseArray_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "Pose_SplDcps.h"

extern c_metaObject __PoseArray__geometry_msgs__load (c_base base);

extern c_metaObject __PoseArray__geometry_msgs_msg__load (c_base base);

extern c_metaObject __PoseArray__geometry_msgs_msg_dds___load (c_base base);

extern c_metaObject __geometry_msgs_msg_dds__PoseArray___load (c_base base);
extern const char * __geometry_msgs_msg_dds__PoseArray___keys (void);
extern const char * __geometry_msgs_msg_dds__PoseArray___name (void);
struct _geometry_msgs_msg_dds__PoseArray_ ;
extern  c_bool __geometry_msgs_msg_dds__PoseArray___copyIn(c_base base, struct geometry_msgs::msg::dds_::PoseArray_ *from, struct _geometry_msgs_msg_dds__PoseArray_ *to);
extern  void __geometry_msgs_msg_dds__PoseArray___copyOut(void *_from, void *_to);
struct _geometry_msgs_msg_dds__PoseArray_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_sequence poses_;
};

#endif
