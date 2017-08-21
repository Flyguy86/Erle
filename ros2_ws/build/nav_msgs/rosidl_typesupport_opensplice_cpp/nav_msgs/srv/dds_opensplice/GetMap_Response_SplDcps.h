#ifndef GETMAP_RESPONSE_SPLTYPES_H
#define GETMAP_RESPONSE_SPLTYPES_H

#include "ccpp_GetMap_Response_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "OccupancyGrid_SplDcps.h"

extern c_metaObject __GetMap_Response__nav_msgs__load (c_base base);

extern c_metaObject __GetMap_Response__nav_msgs_srv__load (c_base base);

extern c_metaObject __GetMap_Response__nav_msgs_srv_dds___load (c_base base);

extern c_metaObject __nav_msgs_srv_dds__GetMap_Response___load (c_base base);
extern const char * __nav_msgs_srv_dds__GetMap_Response___keys (void);
extern const char * __nav_msgs_srv_dds__GetMap_Response___name (void);
struct _nav_msgs_srv_dds__GetMap_Response_ ;
extern  c_bool __nav_msgs_srv_dds__GetMap_Response___copyIn(c_base base, struct nav_msgs::srv::dds_::GetMap_Response_ *from, struct _nav_msgs_srv_dds__GetMap_Response_ *to);
extern  void __nav_msgs_srv_dds__GetMap_Response___copyOut(void *_from, void *_to);
struct _nav_msgs_srv_dds__GetMap_Response_ {
    struct _nav_msgs_msg_dds__OccupancyGrid_ map_;
};

#endif
