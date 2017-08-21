#ifndef SAMPLE_SETCAMERAINFO_REQUEST_SPLTYPES_H
#define SAMPLE_SETCAMERAINFO_REQUEST_SPLTYPES_H

#include "ccpp_Sample_SetCameraInfo_Request_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "SetCameraInfo_Request_SplDcps.h"

extern c_metaObject __Sample_SetCameraInfo_Request__sensor_msgs__load (c_base base);

extern c_metaObject __Sample_SetCameraInfo_Request__sensor_msgs_srv__load (c_base base);

extern c_metaObject __Sample_SetCameraInfo_Request__sensor_msgs_srv_dds___load (c_base base);

extern c_metaObject __sensor_msgs_srv_dds__Sample_SetCameraInfo_Request___load (c_base base);
extern const char * __sensor_msgs_srv_dds__Sample_SetCameraInfo_Request___keys (void);
extern const char * __sensor_msgs_srv_dds__Sample_SetCameraInfo_Request___name (void);
struct _sensor_msgs_srv_dds__Sample_SetCameraInfo_Request_ ;
extern  c_bool __sensor_msgs_srv_dds__Sample_SetCameraInfo_Request___copyIn(c_base base, struct sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_ *from, struct _sensor_msgs_srv_dds__Sample_SetCameraInfo_Request_ *to);
extern  void __sensor_msgs_srv_dds__Sample_SetCameraInfo_Request___copyOut(void *_from, void *_to);
struct _sensor_msgs_srv_dds__Sample_SetCameraInfo_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _sensor_msgs_srv_dds__SetCameraInfo_Request_ request_;
};

#endif
