EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_PRESS =
   EFL_EVENT_DESCRIPTION("press");
EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD =
   EFL_EVENT_DESCRIPTION("load");
EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED =
   EFL_EVENT_DESCRIPTION("loaded");
EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD_DETAIL =
   EFL_EVENT_DESCRIPTION("load,detail");
EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED_DETAIL =
   EFL_EVENT_DESCRIPTION("loaded,detail");
EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_START =
   EFL_EVENT_DESCRIPTION("download,start");
EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_PROGRESS =
   EFL_EVENT_DESCRIPTION("download,progress");
EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_DONE =
   EFL_EVENT_DESCRIPTION("download,done");
EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_ERROR =
   EFL_EVENT_DESCRIPTION("download,error");

void _efl_ui_image_zoomable_gesture_enabled_set(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, Eina_Bool gesture);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_image_zoomable_gesture_enabled_set, EFL_FUNC_CALL(gesture), Eina_Bool gesture);

Eina_Bool _efl_ui_image_zoomable_gesture_enabled_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_image_zoomable_gesture_enabled_get, Eina_Bool, 0);

void _efl_ui_image_zoomable_image_region_set(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, int x, int y, int w, int h);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_image_zoomable_image_region_set, EFL_FUNC_CALL(x, y, w, h), int x, int y, int w, int h);

void _efl_ui_image_zoomable_image_region_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, int *x, int *y, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_ui_image_zoomable_image_region_get, EFL_FUNC_CALL(x, y, w, h), int *x, int *y, int *w, int *h);

Efl_Object *_efl_ui_image_zoomable_efl_object_constructor(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd);


void _efl_ui_image_zoomable_efl_gfx_position_set(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, int x, int y);


void _efl_ui_image_zoomable_efl_gfx_size_set(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, int w, int h);


void _efl_ui_image_zoomable_efl_gfx_view_view_size_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, int *w, int *h);


void _efl_ui_image_zoomable_efl_image_image_size_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, int *w, int *h);


Eina_Bool _efl_ui_image_zoomable_efl_ui_image_icon_set(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, const char *name);


const char *_efl_ui_image_zoomable_efl_ui_image_icon_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd);


Eina_Bool _efl_ui_image_zoomable_efl_player_playable_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd);


void _efl_ui_image_zoomable_efl_player_play_set(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, Eina_Bool play);


Eina_Bool _efl_ui_image_zoomable_efl_player_play_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd);


void _efl_ui_image_zoomable_efl_ui_zoom_zoom_animation_set(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, Eina_Bool paused);


Eina_Bool _efl_ui_image_zoomable_efl_ui_zoom_zoom_animation_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd);


void _efl_ui_image_zoomable_efl_ui_zoom_zoom_set(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, double zoom);


double _efl_ui_image_zoomable_efl_ui_zoom_zoom_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd);


void _efl_ui_image_zoomable_efl_ui_zoom_zoom_mode_set(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, Efl_Ui_Zoom_Mode mode);


Efl_Ui_Zoom_Mode _efl_ui_image_zoomable_efl_ui_zoom_zoom_mode_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd);


void _efl_ui_image_zoomable_efl_canvas_group_group_member_add(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, Efl_Canvas_Object *sub_obj);


Elm_Theme_Apply _efl_ui_image_zoomable_elm_widget_theme_apply(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd);


Eina_Bool _efl_ui_image_zoomable_elm_widget_on_focus(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, Elm_Widget_Item *item);


Eina_Bool _efl_ui_image_zoomable_elm_widget_widget_event(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _efl_ui_image_zoomable_elm_interface_scrollable_region_bring_in(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, int x, int y, int w, int h);


const Elm_Atspi_Action *_efl_ui_image_zoomable_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd);


Eina_Bool _efl_ui_image_zoomable_efl_file_file_set(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, const char *file, const char *key);


void _efl_ui_image_zoomable_efl_file_file_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, const char **file, const char **key);


void _efl_ui_image_zoomable_efl_orientation_orientation_set(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, Efl_Orient dir);


Efl_Orient _efl_ui_image_zoomable_efl_orientation_orientation_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd);


void _efl_ui_image_zoomable_efl_flipable_flip_set(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, Efl_Flip flip);


Efl_Flip _efl_ui_image_zoomable_efl_flipable_flip_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd);


void _efl_ui_image_zoomable_edje_object_group_size_min_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, int *minw, int *minh);


void _efl_ui_image_zoomable_edje_object_group_size_max_get(Eo *obj, Efl_Ui_Image_Zoomable_Data *pd, int *maxw, int *maxh);


static Eina_Bool
_efl_ui_image_zoomable_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_IMAGE_ZOOMABLE_EXTRA_OPS
#define EFL_UI_IMAGE_ZOOMABLE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_image_zoomable_gesture_enabled_set, _efl_ui_image_zoomable_gesture_enabled_set),
      EFL_OBJECT_OP_FUNC(efl_ui_image_zoomable_gesture_enabled_get, _efl_ui_image_zoomable_gesture_enabled_get),
      EFL_OBJECT_OP_FUNC(efl_ui_image_zoomable_image_region_set, _efl_ui_image_zoomable_image_region_set),
      EFL_OBJECT_OP_FUNC(efl_ui_image_zoomable_image_region_get, _efl_ui_image_zoomable_image_region_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_image_zoomable_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _efl_ui_image_zoomable_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _efl_ui_image_zoomable_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_view_size_get, _efl_ui_image_zoomable_efl_gfx_view_view_size_get),
      EFL_OBJECT_OP_FUNC(efl_image_size_get, _efl_ui_image_zoomable_efl_image_image_size_get),
      EFL_OBJECT_OP_FUNC(efl_ui_image_icon_set, _efl_ui_image_zoomable_efl_ui_image_icon_set),
      EFL_OBJECT_OP_FUNC(efl_ui_image_icon_get, _efl_ui_image_zoomable_efl_ui_image_icon_get),
      EFL_OBJECT_OP_FUNC(efl_player_playable_get, _efl_ui_image_zoomable_efl_player_playable_get),
      EFL_OBJECT_OP_FUNC(efl_player_play_set, _efl_ui_image_zoomable_efl_player_play_set),
      EFL_OBJECT_OP_FUNC(efl_player_play_get, _efl_ui_image_zoomable_efl_player_play_get),
      EFL_OBJECT_OP_FUNC(efl_ui_zoom_animation_set, _efl_ui_image_zoomable_efl_ui_zoom_zoom_animation_set),
      EFL_OBJECT_OP_FUNC(efl_ui_zoom_animation_get, _efl_ui_image_zoomable_efl_ui_zoom_zoom_animation_get),
      EFL_OBJECT_OP_FUNC(efl_ui_zoom_set, _efl_ui_image_zoomable_efl_ui_zoom_zoom_set),
      EFL_OBJECT_OP_FUNC(efl_ui_zoom_get, _efl_ui_image_zoomable_efl_ui_zoom_zoom_get),
      EFL_OBJECT_OP_FUNC(efl_ui_zoom_mode_set, _efl_ui_image_zoomable_efl_ui_zoom_zoom_mode_set),
      EFL_OBJECT_OP_FUNC(efl_ui_zoom_mode_get, _efl_ui_image_zoomable_efl_ui_zoom_zoom_mode_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_add, _efl_ui_image_zoomable_efl_canvas_group_group_member_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _efl_ui_image_zoomable_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _efl_ui_image_zoomable_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _efl_ui_image_zoomable_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_region_bring_in, _efl_ui_image_zoomable_elm_interface_scrollable_region_bring_in),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _efl_ui_image_zoomable_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(efl_file_set, _efl_ui_image_zoomable_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_get, _efl_ui_image_zoomable_efl_file_file_get),
      EFL_OBJECT_OP_FUNC(efl_orientation_set, _efl_ui_image_zoomable_efl_orientation_orientation_set),
      EFL_OBJECT_OP_FUNC(efl_orientation_get, _efl_ui_image_zoomable_efl_orientation_orientation_get),
      EFL_OBJECT_OP_FUNC(efl_flip_set, _efl_ui_image_zoomable_efl_flipable_flip_set),
      EFL_OBJECT_OP_FUNC(efl_flip_get, _efl_ui_image_zoomable_efl_flipable_flip_get),
      EFL_OBJECT_OP_FUNC(edje_obj_group_size_min_get, _efl_ui_image_zoomable_edje_object_group_size_min_get),
      EFL_OBJECT_OP_FUNC(edje_obj_group_size_max_get, _efl_ui_image_zoomable_edje_object_group_size_max_get),
      EFL_UI_IMAGE_ZOOMABLE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_IMAGE_ZOOMABLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_IMAGE_ZOOMABLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_image_zoomable_class_desc = {
   EO_VERSION,
   "Efl.Ui.Image.Zoomable",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Image_Zoomable_Data),
   _efl_ui_image_zoomable_class_initializer,
   _efl_ui_image_zoomable_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_image_zoomable_class_get, &_efl_ui_image_zoomable_class_desc, ELM_WIDGET_CLASS, EFL_UI_IMAGE_CLASS, EFL_UI_ZOOM_INTERFACE, ELM_INTERFACE_SCROLLABLE_MIXIN, EFL_UI_SCROLLABLE_INTERFACE, NULL);

EAPI void
elm_photocam_gesture_enabled_set(Efl_Ui_Image_Zoomable *obj, Eina_Bool gesture)
{
   efl_ui_image_zoomable_gesture_enabled_set(obj, gesture);
}

EAPI Eina_Bool
elm_photocam_gesture_enabled_get(const Efl_Ui_Image_Zoomable *obj)
{
   return efl_ui_image_zoomable_gesture_enabled_get(obj);
}

EAPI void
elm_photocam_image_region_get(const Efl_Ui_Image_Zoomable *obj, int *x, int *y, int *w, int *h)
{
   efl_ui_image_zoomable_image_region_get(obj, x, y, w, h);
}
