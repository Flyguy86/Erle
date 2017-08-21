#ifndef SAMPLE_GETMAP_RESPONSE_SPLTYPES_H
#define SAMPLE_GETMAP_RESPONSE_SPLTYPES_H

#include "ccpp_Sample_GetMap_Response_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "GetMap_Response_SplDcps.h"

extern c_metaObject __Sample_GetMap_Response__nav_msgs__load (c_base base);

extern c_metaObject __Sample_GetMap_Response__nav_msgs_srv__load (c_base base);

extern c_metaObject __Sample_GetMap_Response__nav_msgs_srv_dds___load (c_base base);

extern c_metaObject __nav_msgs_srv_dds__Sample_GetMap_Response___load (c_base base);
extern const char * __nav_msgs_srv_dds__Sample_GetMap_Response___keys (void);
extern const char * __nav_msgs_srv_dds__Sample_GetMap_Response___name (void);
struct _nav_msgs_srv_dds__Sample_GetMap_Response_ ;
extern  c_bool __nav_msgs_srv_dds__Sample_GetMap_Response___copyIn(c_base base, struct nav_msgs::srv::dds_::Sample_GetMap_Response_ *from, struct _nav_msgs_srv_dds__Sample_GetMap_Response_ *to);
extern  void __nav_msgs_srv_dds__Sample_GetMap_Response___copyOut(void *_from, void *_to);
struct _nav_msgs_srv_dds__Sample_GetMap_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _nav_msgs_srv_dds__GetMap_Response_ response_;
};

#endif
