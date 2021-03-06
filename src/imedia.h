#ifndef __IMEDIA_H__
#define __IMEDIA_H__

#include <base_app.h>
#include <json-glib/json-glib.h>
#include "stream_descriptor.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define IPCAM_IMEDIA_TYPE (ipcam_imedia_get_type())
#define IPCAM_IMEDIA(obj) (G_TYPE_CHECK_INSTANCE_CAST((obj), IPCAM_IMEDIA_TYPE, IpcamIMedia))
#define IPCAM_IMEDIA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST((klass), IPCAM_IMEDIA_TYPE, IpcamIMediaClass))
#define IPCAM_IS_IMEDIA(obj) (G_TYPE_CHECK_INSTANCE_TYPE((obj), IPCAM_IMEDIA_TYPE))
#define IPCAM_IS_IMEDIA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass), IPCAM_IMEDIA_TYPE))
#define IPCAM_IMEDIA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS((obj), IPCAM_IMEDIA_TYPE, IpcamIMediaClass))

typedef struct _IpcamIMedia IpcamIMedia;
typedef struct _IpcamIMediaClass IpcamIMediaClass;

struct _IpcamIMedia
{
    IpcamBaseApp parent;
};

struct _IpcamIMediaClass
{
    IpcamBaseAppClass parent_class;
};

GType ipcam_imedia_get_type(void);
void ipcam_imedia_got_od_param(IpcamIMedia *imedia, JsonNode *body, gboolean is_notice);
void ipcam_imedia_got_video_param(IpcamIMedia *imedia, JsonNode *body, gboolean is_notice);
void ipcam_imedia_got_image_parameter(IpcamIMedia *imedia, JsonNode *body);
void ipcam_imedia_got_baseinfo_parameter(IpcamIMedia *imedia, JsonNode *body);
void ipcam_imedia_got_osd_parameter(IpcamIMedia *imedia, JsonNode *body);
void ipcam_imedia_got_szyc_parameter(IpcamIMedia *imedia, JsonNode *body);
void ipcam_imedia_got_day_night_mode_param(IpcamIMedia *imedia, JsonNode *body);
void ipcam_imedia_got_misc_parameter(IpcamIMedia *imedia, JsonNode *body);
void ipcam_imedia_got_set_users_parameter(IpcamIMedia *imedia, JsonNode *body);
void ipcam_imedia_got_del_users_parameter(IpcamIMedia *imedia, JsonNode *body);
void ipcam_imedia_got_day_night_mode_parameter(IpcamIMedia *imedia, JsonNode *body);
StreamDescriptor *ipcam_imedia_get_stream_info(IpcamIMedia *imedia, StreamChannel chn);


#ifdef __cplusplus
}
#endif

#endif /* __IMEDIA_H__ */
