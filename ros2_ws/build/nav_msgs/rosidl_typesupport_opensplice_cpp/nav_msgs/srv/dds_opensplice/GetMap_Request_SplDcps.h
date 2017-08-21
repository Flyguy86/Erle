#ifndef GETMAP_REQUEST_SPLTYPES_H
#define GETMAP_REQUEST_SPLTYPES_H

#include "ccpp_GetMap_Request_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __GetMap_Request__nav_msgs__load (c_base base);

extern c_metaObject __GetMap_Request__nav_msgs_srv__load (c_base base);

extern c_metaObject __GetMap_Request__nav_msgs_srv_dds___load (c_base base);

extern c_metaObject __nav_msgs_srv_dds__GetMap_Request___load (c_base base);
extern const char * __nav_msgs_srv_dds__GetMap_Request___keys (void);
extern const char * __nav_msgs_srv_dds__GetMap_Request___name (void);
struct _nav_msgs_srv_dds__GetMap_Request_ ;
extern  c_bool __nav_msgs_srv_dds__GetMap_Request___copyIn(c_base base, struct nav_msgs::srv::dds_::GetMap_Request_ *from, struct _nav_msgs_srv_dds__GetMap_Request_ *to);
extern  void __nav_msgs_srv_dds__GetMap_Request___copyOut(void *_from, void *_to);
struct _nav_msgs_srv_dds__GetMap_Request_ {
    c_bool dummy;
};

#endif
