EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOAD =
   EFL_EVENT_DESCRIPTION("load");
EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOADED =
   EFL_EVENT_DESCRIPTION("loaded");
EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOAD_DETAIL =
   EFL_EVENT_DESCRIPTION("load,detail");
EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOADED_DETAIL =
   EFL_EVENT_DESCRIPTION("loaded,detail");
EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_START =
   EFL_EVENT_DESCRIPTION("download,start");
EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_PROGRESS =
   EFL_EVENT_DESCRIPTION("download,progress");
EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_DONE =
   EFL_EVENT_DESCRIPTION("download,done");
EWAPI const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_ERROR =
   EFL_EVENT_DESCRIPTION("download,error");

void _efl_ui_image_zoomable_pan_efl_object_destructor(Eo *obj, Efl_Ui_Image_Zoomable_Pan_Data *pd);


void _efl_ui_image_zoomable_pan_efl_gfx_position_set(Eo *obj, Efl_Ui_Image_Zoomable_Pan_Data *pd, int x, int y);


void _efl_ui_image_zoomable_pan_efl_gfx_size_set(Eo *obj, Efl_Ui_Image_Zoomable_Pan_Data *pd, int w, int h);


void _efl_ui_image_zoomable_pan_efl_canvas_group_group_calculate(Eo *obj, Efl_Ui_Image_Zoomable_Pan_Data *pd);


void _efl_ui_image_zoomable_pan_elm_pan_content_size_get(Eo *obj, Efl_Ui_Image_Zoomable_Pan_Data *pd, int *w, int *h);


void _efl_ui_image_zoomable_pan_elm_pan_pos_set(Eo *obj, Efl_Ui_Image_Zoomable_Pan_Data *pd, int x, int y);


void _efl_ui_image_zoomable_pan_elm_pan_pos_get(Eo *obj, Efl_Ui_Image_Zoomable_Pan_Data *pd, int *x, int *y);


void _efl_ui_image_zoomable_pan_elm_pan_pos_min_get(Eo *obj, Efl_Ui_Image_Zoomable_Pan_Data *pd, int *x, int *y);


void _efl_ui_image_zoomable_pan_elm_pan_pos_max_get(Eo *obj, Efl_Ui_Image_Zoomable_Pan_Data *pd, int *x, int *y);


static Eina_Bool
_efl_ui_image_zoomable_pan_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_IMAGE_ZOOMABLE_PAN_EXTRA_OPS
#define EFL_UI_IMAGE_ZOOMABLE_PAN_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_ui_image_zoomable_pan_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _efl_ui_image_zoomable_pan_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _efl_ui_image_zoomable_pan_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _efl_ui_image_zoomable_pan_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(elm_obj_pan_content_size_get, _efl_ui_image_zoomable_pan_elm_pan_content_size_get),
      EFL_OBJECT_OP_FUNC(elm_obj_pan_pos_set, _efl_ui_image_zoomable_pan_elm_pan_pos_set),
      EFL_OBJECT_OP_FUNC(elm_obj_pan_pos_get, _efl_ui_image_zoomable_pan_elm_pan_pos_get),
      EFL_OBJECT_OP_FUNC(elm_obj_pan_pos_min_get, _efl_ui_image_zoomable_pan_elm_pan_pos_min_get),
      EFL_OBJECT_OP_FUNC(elm_obj_pan_pos_max_get, _efl_ui_image_zoomable_pan_elm_pan_pos_max_get),
      EFL_UI_IMAGE_ZOOMABLE_PAN_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_IMAGE_ZOOMABLE_PAN_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_IMAGE_ZOOMABLE_PAN_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_image_zoomable_pan_class_desc = {
   EO_VERSION,
   "Efl.Ui.Image.Zoomable.Pan",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Image_Zoomable_Pan_Data),
   _efl_ui_image_zoomable_pan_class_initializer,
   _efl_ui_image_zoomable_pan_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_image_zoomable_pan_class_get, &_efl_ui_image_zoomable_pan_class_desc, ELM_PAN_CLASS, NULL);
