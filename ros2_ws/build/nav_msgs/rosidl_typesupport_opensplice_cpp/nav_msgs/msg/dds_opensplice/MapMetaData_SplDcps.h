#ifndef MAPMETADATA_SPLTYPES_H
#define MAPMETADATA_SPLTYPES_H

#include "ccpp_MapMetaData_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "dds_dcps_builtintopicsSplDcps.h"
#include "Pose_SplDcps.h"

extern c_metaObject __MapMetaData__nav_msgs__load (c_base base);

extern c_metaObject __MapMetaData__nav_msgs_msg__load (c_base base);

extern c_metaObject __MapMetaData__nav_msgs_msg_dds___load (c_base base);

extern c_metaObject __nav_msgs_msg_dds__MapMetaData___load (c_base base);
extern const char * __nav_msgs_msg_dds__MapMetaData___keys (void);
extern const char * __nav_msgs_msg_dds__MapMetaData___name (void);
struct _nav_msgs_msg_dds__MapMetaData_ ;
extern  c_bool __nav_msgs_msg_dds__MapMetaData___copyIn(c_base base, struct nav_msgs::msg::dds_::MapMetaData_ *from, struct _nav_msgs_msg_dds__MapMetaData_ *to);
extern  void __nav_msgs_msg_dds__MapMetaData___copyOut(void *_from, void *_to);
struct _nav_msgs_msg_dds__MapMetaData_ {
    struct _DDS_Time_t map_load_time_;
    c_float resolution_;
    c_ulong width_;
    c_ulong height_;
    struct _geometry_msgs_msg_dds__Pose_ origin_;
};

#endif
