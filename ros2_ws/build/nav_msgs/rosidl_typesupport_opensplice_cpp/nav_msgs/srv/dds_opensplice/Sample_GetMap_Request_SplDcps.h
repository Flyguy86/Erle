#ifndef SAMPLE_GETMAP_REQUEST_SPLTYPES_H
#define SAMPLE_GETMAP_REQUEST_SPLTYPES_H

#include "ccpp_Sample_GetMap_Request_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "GetMap_Request_SplDcps.h"

extern c_metaObject __Sample_GetMap_Request__nav_msgs__load (c_base base);

extern c_metaObject __Sample_GetMap_Request__nav_msgs_srv__load (c_base base);

extern c_metaObject __Sample_GetMap_Request__nav_msgs_srv_dds___load (c_base base);

extern c_metaObject __nav_msgs_srv_dds__Sample_GetMap_Request___load (c_base base);
extern const char * __nav_msgs_srv_dds__Sample_GetMap_Request___keys (void);
extern const char * __nav_msgs_srv_dds__Sample_GetMap_Request___name (void);
struct _nav_msgs_srv_dds__Sample_GetMap_Request_ ;
extern  c_bool __nav_msgs_srv_dds__Sample_GetMap_Request___copyIn(c_base base, struct nav_msgs::srv::dds_::Sample_GetMap_Request_ *from, struct _nav_msgs_srv_dds__Sample_GetMap_Request_ *to);
extern  void __nav_msgs_srv_dds__Sample_GetMap_Request___copyOut(void *_from, void *_to);
struct _nav_msgs_srv_dds__Sample_GetMap_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _nav_msgs_srv_dds__GetMap_Request_ request_;
};

#endif
