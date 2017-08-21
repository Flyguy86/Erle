#ifndef PATH_SPLTYPES_H
#define PATH_SPLTYPES_H

#include "ccpp_Path_.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "Header_SplDcps.h"
#include "PoseStamped_SplDcps.h"

extern c_metaObject __Path__nav_msgs__load (c_base base);

extern c_metaObject __Path__nav_msgs_msg__load (c_base base);

extern c_metaObject __Path__nav_msgs_msg_dds___load (c_base base);

extern c_metaObject __nav_msgs_msg_dds__Path___load (c_base base);
extern const char * __nav_msgs_msg_dds__Path___keys (void);
extern const char * __nav_msgs_msg_dds__Path___name (void);
struct _nav_msgs_msg_dds__Path_ ;
extern  c_bool __nav_msgs_msg_dds__Path___copyIn(c_base base, struct nav_msgs::msg::dds_::Path_ *from, struct _nav_msgs_msg_dds__Path_ *to);
extern  void __nav_msgs_msg_dds__Path___copyOut(void *_from, void *_to);
struct _nav_msgs_msg_dds__Path_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_sequence poses_;
};

#endif
