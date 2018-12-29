EWAPI const Efl_Event_Description _EFL_IMAGE_EVENT_PRELOAD =
   EFL_EVENT_DESCRIPTION("preload");
EWAPI const Efl_Event_Description _EFL_IMAGE_EVENT_RESIZE =
   EFL_EVENT_DESCRIPTION("resize");
EWAPI const Efl_Event_Description _EFL_IMAGE_EVENT_UNLOAD =
   EFL_EVENT_DESCRIPTION("unload");
EOAPI EFL_VOID_FUNC_BODYV(efl_image_smooth_scale_set, EFL_FUNC_CALL(smooth_scale), Eina_Bool smooth_scale);
EOAPI EFL_FUNC_BODY_CONST(efl_image_smooth_scale_get, Eina_Bool, 0);
EOAPI EFL_FUNC_BODY_CONST(efl_image_ratio_get, double, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_image_border_set, EFL_FUNC_CALL(l, r, t, b), int l, int r, int t, int b);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_image_border_get, EFL_FUNC_CALL(l, r, t, b), int *l, int *r, int *t, int *b);
EOAPI EFL_VOID_FUNC_BODYV(efl_image_border_scale_set, EFL_FUNC_CALL(scale), double scale);
EOAPI EFL_FUNC_BODY_CONST(efl_image_border_scale_get, double, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_image_border_center_fill_set, EFL_FUNC_CALL(fill), Efl_Gfx_Border_Fill_Mode fill);
EOAPI EFL_FUNC_BODY_CONST(efl_image_border_center_fill_get, Efl_Gfx_Border_Fill_Mode, 0);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_image_size_get, EFL_FUNC_CALL(w, h), int *w, int *h);
EOAPI EFL_VOID_FUNC_BODYV(efl_image_content_hint_set, EFL_FUNC_CALL(hint), Efl_Image_Content_Hint hint);
EOAPI EFL_FUNC_BODY_CONST(efl_image_content_hint_get, Efl_Image_Content_Hint, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_image_scale_hint_set, EFL_FUNC_CALL(hint), Efl_Image_Scale_Hint hint);
EOAPI EFL_FUNC_BODY_CONST(efl_image_scale_hint_get, Efl_Image_Scale_Hint, 0);

static Eina_Bool
_efl_image_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IMAGE_EXTRA_OPS
#define EFL_IMAGE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_image_smooth_scale_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_smooth_scale_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_ratio_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_border_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_border_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_border_scale_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_border_scale_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_border_center_fill_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_border_center_fill_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_size_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_content_hint_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_content_hint_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_scale_hint_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_scale_hint_get, NULL),
      EFL_IMAGE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IMAGE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IMAGE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_image_class_desc = {
   EO_VERSION,
   "Efl.Image",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_image_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_image_interface_get, &_efl_image_class_desc, NULL, NULL);
