EWAPI const Efl_Event_Description _EFL_IMAGE_LOAD_EVENT_LOAD_DONE =
   EFL_EVENT_DESCRIPTION("load,done");
EWAPI const Efl_Event_Description _EFL_IMAGE_LOAD_EVENT_LOAD_ERROR =
   EFL_EVENT_DESCRIPTION("load,error");
EWAPI const Efl_Event_Description _EFL_IMAGE_LOAD_EVENT_LOAD_CANCELLED =
   EFL_EVENT_DESCRIPTION("load,cancelled");
EOAPI EFL_VOID_FUNC_BODY(efl_image_load_async_start);
EOAPI EFL_VOID_FUNC_BODY(efl_image_load_async_cancel);
EOAPI EFL_VOID_FUNC_BODYV(efl_image_load_size_set, EFL_FUNC_CALL(w, h), int w, int h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_image_load_size_get, EFL_FUNC_CALL(w, h), int *w, int *h);
EOAPI EFL_VOID_FUNC_BODYV(efl_image_load_dpi_set, EFL_FUNC_CALL(dpi), double dpi);
EOAPI EFL_FUNC_BODY_CONST(efl_image_load_dpi_get, double, 0);
EOAPI EFL_FUNC_BODY_CONST(efl_image_load_region_support_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_image_load_region_set, EFL_FUNC_CALL(x, y, w, h), int x, int y, int w, int h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_image_load_region_get, EFL_FUNC_CALL(x, y, w, h), int *x, int *y, int *w, int *h);
EOAPI EFL_VOID_FUNC_BODYV(efl_image_load_orientation_set, EFL_FUNC_CALL(enable), Eina_Bool enable);
EOAPI EFL_FUNC_BODY_CONST(efl_image_load_orientation_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_image_load_scale_down_set, EFL_FUNC_CALL(div), int div);
EOAPI EFL_FUNC_BODY_CONST(efl_image_load_scale_down_get, int, 0);
EOAPI EFL_FUNC_BODY_CONST(efl_image_load_error_get, Efl_Image_Load_Error, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_image_load_skip_header_set, EFL_FUNC_CALL(skip), Eina_Bool skip);
EOAPI EFL_FUNC_BODY_CONST(efl_image_load_skip_header_get, Eina_Bool, 0);

static Eina_Bool
_efl_image_load_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IMAGE_LOAD_EXTRA_OPS
#define EFL_IMAGE_LOAD_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_image_load_async_start, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_load_async_cancel, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_load_size_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_load_size_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_load_dpi_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_load_dpi_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_load_region_support_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_load_region_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_load_region_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_load_orientation_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_load_orientation_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_load_scale_down_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_load_scale_down_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_load_error_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_load_skip_header_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_load_skip_header_get, NULL),
      EFL_IMAGE_LOAD_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IMAGE_LOAD_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IMAGE_LOAD_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_image_load_class_desc = {
   EO_VERSION,
   "Efl.Image.Load",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_image_load_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_image_load_interface_get, &_efl_image_load_class_desc, NULL, NULL);
