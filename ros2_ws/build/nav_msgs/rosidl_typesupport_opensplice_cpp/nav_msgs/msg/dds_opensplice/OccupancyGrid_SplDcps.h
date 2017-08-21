#ifndef OCCUPANCYGRID_SPLTYPES_H
#define OCCUPANCYGRID_SPLTYPES_H

#include "ccpp_OccupancyGrid_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "MapMetaData_SplDcps.h"

extern c_metaObject __OccupancyGrid__nav_msgs__load (c_base base);

extern c_metaObject __OccupancyGrid__nav_msgs_msg__load (c_base base);

extern c_metaObject __OccupancyGrid__nav_msgs_msg_dds___load (c_base base);

extern c_metaObject __nav_msgs_msg_dds__OccupancyGrid___load (c_base base);
extern const char * __nav_msgs_msg_dds__OccupancyGrid___keys (void);
extern const char * __nav_msgs_msg_dds__OccupancyGrid___name (void);
struct _nav_msgs_msg_dds__OccupancyGrid_ ;
extern  c_bool __nav_msgs_msg_dds__OccupancyGrid___copyIn(c_base base, struct nav_msgs::msg::dds_::OccupancyGrid_ *from, struct _nav_msgs_msg_dds__OccupancyGrid_ *to);
extern  void __nav_msgs_msg_dds__OccupancyGrid___copyOut(void *_from, void *_to);
struct _nav_msgs_msg_dds__OccupancyGrid_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _nav_msgs_msg_dds__MapMetaData_ info_;
    c_sequence data_;
};

#endif
