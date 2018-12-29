EWAPI const Efl_Event_Description _EFL_UI_IMAGE_EVENT_DROP =
   EFL_EVENT_DESCRIPTION("drop");

void _efl_ui_image_scale_type_set(Eo *obj, Efl_Ui_Image_Data *pd, Efl_Ui_Image_Scale_Type scale_type);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_image_scale_type_set, EFL_FUNC_CALL(scale_type), Efl_Ui_Image_Scale_Type scale_type);

Efl_Ui_Image_Scale_Type _efl_ui_image_scale_type_get(Eo *obj, Efl_Ui_Image_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_image_scale_type_get, Efl_Ui_Image_Scale_Type, 0);

void _efl_ui_image_scalable_set(Eo *obj, Efl_Ui_Image_Data *pd, Eina_Bool scale_up, Eina_Bool scale_down);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_image_scalable_set, EFL_FUNC_CALL(scale_up, scale_down), Eina_Bool scale_up, Eina_Bool scale_down);

void _efl_ui_image_scalable_get(Eo *obj, Efl_Ui_Image_Data *pd, Eina_Bool *scale_up, Eina_Bool *scale_down);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_ui_image_scalable_get, EFL_FUNC_CALL(scale_up, scale_down), Eina_Bool *scale_up, Eina_Bool *scale_down);

void _efl_ui_image_align_set(Eo *obj, Efl_Ui_Image_Data *pd, double align_x, double align_y);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_image_align_set, EFL_FUNC_CALL(align_x, align_y), double align_x, double align_y);

void _efl_ui_image_align_get(Eo *obj, Efl_Ui_Image_Data *pd, double *align_x, double *align_y);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_ui_image_align_get, EFL_FUNC_CALL(align_x, align_y), double *align_x, double *align_y);

Eina_Bool _efl_ui_image_icon_set(Eo *obj, Efl_Ui_Image_Data *pd, const char *name);

EOAPI EFL_FUNC_BODYV(efl_ui_image_icon_set, Eina_Bool, 0, EFL_FUNC_CALL(name), const char *name);

const char *_efl_ui_image_icon_get(Eo *obj, Efl_Ui_Image_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_image_icon_get, const char *, NULL);

Efl_Object *_efl_ui_image_efl_object_constructor(Eo *obj, Efl_Ui_Image_Data *pd);


Eina_Bool _efl_ui_image_efl_file_file_set(Eo *obj, Efl_Ui_Image_Data *pd, const char *file, const char *key);


void _efl_ui_image_efl_file_file_get(Eo *obj, Efl_Ui_Image_Data *pd, const char **file, const char **key);


Eina_Bool _efl_ui_image_efl_file_mmap_set(Eo *obj, Efl_Ui_Image_Data *pd, const Eina_File *f, const char *key);


void _efl_ui_image_efl_gfx_color_set(Eo *obj, Efl_Ui_Image_Data *pd, int r, int g, int b, int a);


void _efl_ui_image_efl_gfx_visible_set(Eo *obj, Efl_Ui_Image_Data *pd, Eina_Bool v);


void _efl_ui_image_efl_gfx_position_set(Eo *obj, Efl_Ui_Image_Data *pd, int x, int y);


void _efl_ui_image_efl_gfx_size_set(Eo *obj, Efl_Ui_Image_Data *pd, int w, int h);


void _efl_ui_image_efl_gfx_view_view_size_get(Eo *obj, Efl_Ui_Image_Data *pd, int *w, int *h);


void _efl_ui_image_efl_image_image_size_get(Eo *obj, Efl_Ui_Image_Data *pd, int *w, int *h);


void _efl_ui_image_efl_image_load_load_size_set(Eo *obj, Efl_Ui_Image_Data *pd, int w, int h);


void _efl_ui_image_efl_image_load_load_size_get(Eo *obj, Efl_Ui_Image_Data *pd, int *w, int *h);


void _efl_ui_image_efl_image_smooth_scale_set(Eo *obj, Efl_Ui_Image_Data *pd, Eina_Bool smooth_scale);


Eina_Bool _efl_ui_image_efl_image_smooth_scale_get(Eo *obj, Efl_Ui_Image_Data *pd);


void _efl_ui_image_efl_orientation_orientation_set(Eo *obj, Efl_Ui_Image_Data *pd, Efl_Orient dir);


Efl_Orient _efl_ui_image_efl_orientation_orientation_get(Eo *obj, Efl_Ui_Image_Data *pd);


void _efl_ui_image_efl_flipable_flip_set(Eo *obj, Efl_Ui_Image_Data *pd, Efl_Flip flip);


Efl_Flip _efl_ui_image_efl_flipable_flip_get(Eo *obj, Efl_Ui_Image_Data *pd);


Eina_Bool _efl_ui_image_efl_player_playable_get(Eo *obj, Efl_Ui_Image_Data *pd);


void _efl_ui_image_efl_player_play_set(Eo *obj, Efl_Ui_Image_Data *pd, Eina_Bool play);


Eina_Bool _efl_ui_image_efl_player_play_get(Eo *obj, Efl_Ui_Image_Data *pd);


void _efl_ui_image_edje_object_signal_emit(Eo *obj, Efl_Ui_Image_Data *pd, const char *emission, const char *source);


void _efl_ui_image_edje_object_group_size_min_get(Eo *obj, Efl_Ui_Image_Data *pd, int *minw, int *minh);


void _efl_ui_image_edje_object_group_size_max_get(Eo *obj, Efl_Ui_Image_Data *pd, int *maxw, int *maxh);


void _efl_ui_image_edje_object_size_min_calc(Eo *obj, Efl_Ui_Image_Data *pd, int *minw, int *minh);


void _efl_ui_image_edje_object_calc_force(Eo *obj, Efl_Ui_Image_Data *pd);


void _efl_ui_image_efl_canvas_object_clip_set(Eo *obj, Efl_Ui_Image_Data *pd, Efl_Canvas_Object *clip);


void _efl_ui_image_efl_canvas_group_group_member_add(Eo *obj, Efl_Ui_Image_Data *pd, Efl_Canvas_Object *sub_obj);


void _efl_ui_image_efl_ui_draggable_drag_target_set(Eo *obj, Efl_Ui_Image_Data *pd, Eina_Bool set);


Eina_Bool _efl_ui_image_efl_ui_draggable_drag_target_get(Eo *obj, Efl_Ui_Image_Data *pd);


void _efl_ui_image_efl_ui_model_connect_connect(Eo *obj, Efl_Ui_Image_Data *pd, const char *name, const char *property);


void _efl_ui_image_efl_ui_view_model_set(Eo *obj, Efl_Ui_Image_Data *pd, Efl_Model *model);


Efl_Model *_efl_ui_image_efl_ui_view_model_get(Eo *obj, Efl_Ui_Image_Data *pd);


Elm_Theme_Apply _efl_ui_image_elm_widget_theme_apply(Eo *obj, Efl_Ui_Image_Data *pd);


Eina_Bool _efl_ui_image_elm_widget_widget_event(Eo *obj, Efl_Ui_Image_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _efl_ui_image_elm_interface_atspi_image_extents_get(Eo *obj, Efl_Ui_Image_Data *pd, Eina_Bool screen_coords, int *x, int *y, int *width, int *height);


const Elm_Atspi_Action *_efl_ui_image_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Efl_Ui_Image_Data *pd);


static Eina_Bool
_efl_ui_image_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_IMAGE_EXTRA_OPS
#define EFL_UI_IMAGE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_image_scale_type_set, _efl_ui_image_scale_type_set),
      EFL_OBJECT_OP_FUNC(efl_ui_image_scale_type_get, _efl_ui_image_scale_type_get),
      EFL_OBJECT_OP_FUNC(efl_ui_image_scalable_set, _efl_ui_image_scalable_set),
      EFL_OBJECT_OP_FUNC(efl_ui_image_scalable_get, _efl_ui_image_scalable_get),
      EFL_OBJECT_OP_FUNC(efl_ui_image_align_set, _efl_ui_image_align_set),
      EFL_OBJECT_OP_FUNC(efl_ui_image_align_get, _efl_ui_image_align_get),
      EFL_OBJECT_OP_FUNC(efl_ui_image_icon_set, _efl_ui_image_icon_set),
      EFL_OBJECT_OP_FUNC(efl_ui_image_icon_get, _efl_ui_image_icon_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_image_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_file_set, _efl_ui_image_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_get, _efl_ui_image_efl_file_file_get),
      EFL_OBJECT_OP_FUNC(efl_file_mmap_set, _efl_ui_image_efl_file_mmap_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_set, _efl_ui_image_efl_gfx_color_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _efl_ui_image_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _efl_ui_image_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _efl_ui_image_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_view_size_get, _efl_ui_image_efl_gfx_view_view_size_get),
      EFL_OBJECT_OP_FUNC(efl_image_size_get, _efl_ui_image_efl_image_image_size_get),
      EFL_OBJECT_OP_FUNC(efl_image_load_size_set, _efl_ui_image_efl_image_load_load_size_set),
      EFL_OBJECT_OP_FUNC(efl_image_load_size_get, _efl_ui_image_efl_image_load_load_size_get),
      EFL_OBJECT_OP_FUNC(efl_image_smooth_scale_set, _efl_ui_image_efl_image_smooth_scale_set),
      EFL_OBJECT_OP_FUNC(efl_image_smooth_scale_get, _efl_ui_image_efl_image_smooth_scale_get),
      EFL_OBJECT_OP_FUNC(efl_orientation_set, _efl_ui_image_efl_orientation_orientation_set),
      EFL_OBJECT_OP_FUNC(efl_orientation_get, _efl_ui_image_efl_orientation_orientation_get),
      EFL_OBJECT_OP_FUNC(efl_flip_set, _efl_ui_image_efl_flipable_flip_set),
      EFL_OBJECT_OP_FUNC(efl_flip_get, _efl_ui_image_efl_flipable_flip_get),
      EFL_OBJECT_OP_FUNC(efl_player_playable_get, _efl_ui_image_efl_player_playable_get),
      EFL_OBJECT_OP_FUNC(efl_player_play_set, _efl_ui_image_efl_player_play_set),
      EFL_OBJECT_OP_FUNC(efl_player_play_get, _efl_ui_image_efl_player_play_get),
      EFL_OBJECT_OP_FUNC(edje_obj_signal_emit, _efl_ui_image_edje_object_signal_emit),
      EFL_OBJECT_OP_FUNC(edje_obj_group_size_min_get, _efl_ui_image_edje_object_group_size_min_get),
      EFL_OBJECT_OP_FUNC(edje_obj_group_size_max_get, _efl_ui_image_edje_object_group_size_max_get),
      EFL_OBJECT_OP_FUNC(edje_obj_size_min_calc, _efl_ui_image_edje_object_size_min_calc),
      EFL_OBJECT_OP_FUNC(edje_obj_calc_force, _efl_ui_image_edje_object_calc_force),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_clip_set, _efl_ui_image_efl_canvas_object_clip_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_add, _efl_ui_image_efl_canvas_group_group_member_add),
      EFL_OBJECT_OP_FUNC(efl_ui_draggable_drag_target_set, _efl_ui_image_efl_ui_draggable_drag_target_set),
      EFL_OBJECT_OP_FUNC(efl_ui_draggable_drag_target_get, _efl_ui_image_efl_ui_draggable_drag_target_get),
      EFL_OBJECT_OP_FUNC(efl_ui_model_connect, _efl_ui_image_efl_ui_model_connect_connect),
      EFL_OBJECT_OP_FUNC(efl_ui_view_model_set, _efl_ui_image_efl_ui_view_model_set),
      EFL_OBJECT_OP_FUNC(efl_ui_view_model_get, _efl_ui_image_efl_ui_view_model_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _efl_ui_image_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _efl_ui_image_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_image_extents_get, _efl_ui_image_elm_interface_atspi_image_extents_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _efl_ui_image_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_UI_IMAGE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_IMAGE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_IMAGE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_image_class_desc = {
   EO_VERSION,
   "Efl.Ui.Image",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Image_Data),
   _efl_ui_image_class_initializer,
   _efl_ui_image_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_image_class_get, &_efl_ui_image_class_desc, ELM_WIDGET_CLASS, EFL_UI_CLICKABLE_INTERFACE, EFL_UI_DRAGGABLE_INTERFACE, EFL_FILE_INTERFACE, EFL_IMAGE_INTERFACE, EFL_IMAGE_LOAD_INTERFACE, EFL_PLAYER_INTERFACE, EFL_GFX_VIEW_INTERFACE, ELM_INTERFACE_ATSPI_IMAGE_MIXIN, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, EDJE_OBJECT_CLASS, EFL_ORIENTATION_INTERFACE, EFL_FLIPABLE_INTERFACE, EFL_UI_VIEW_INTERFACE, EFL_UI_MODEL_CONNECT_INTERFACE, NULL);
