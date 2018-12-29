EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_buffer_size_set, EFL_FUNC_CALL(w, h), int w, int h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_buffer_size_get, EFL_FUNC_CALL(w, h), int *w, int *h);
EOAPI EFL_FUNC_BODY_CONST(efl_gfx_buffer_colorspace_get, Efl_Gfx_Colorspace, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_buffer_alpha_set, EFL_FUNC_CALL(alpha), Eina_Bool alpha);
EOAPI EFL_FUNC_BODY_CONST(efl_gfx_buffer_alpha_get, Eina_Bool, 0);
EOAPI EFL_FUNC_BODY_CONST(efl_gfx_buffer_stride_get, int, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_buffer_update_add, EFL_FUNC_CALL(x, y, w, h), int x, int y, int w, int h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_buffer_borders_get, EFL_FUNC_CALL(l, r, t, b), unsigned int *l, unsigned int *r, unsigned int *t, unsigned int *b);
EOAPI EFL_FUNC_BODYV(efl_gfx_buffer_map, Eina_Bool, 0, EFL_FUNC_CALL(slice, mode, x, y, w, h, cspace, plane, stride), Eina_Rw_Slice *slice, Efl_Gfx_Buffer_Access_Mode mode, int x, int y, int w, int h, Efl_Gfx_Colorspace cspace, int plane, int *stride);
EOAPI EFL_FUNC_BODYV(efl_gfx_buffer_unmap, Eina_Bool, 0, EFL_FUNC_CALL(slice), const Eina_Rw_Slice *slice);
EOAPI EFL_FUNC_BODYV(efl_gfx_buffer_copy_set, Eina_Bool, 0, EFL_FUNC_CALL(slice, width, height, stride, cspace, plane), const Eina_Slice *slice, int width, int height, int stride, Efl_Gfx_Colorspace cspace, int plane);
EOAPI EFL_FUNC_BODYV(efl_gfx_buffer_managed_set, Eina_Bool, 0, EFL_FUNC_CALL(slice, width, height, stride, cspace, plane), const Eina_Slice *slice, int width, int height, int stride, Efl_Gfx_Colorspace cspace, int plane);
EOAPI EFL_FUNC_BODYV(efl_gfx_buffer_managed_get, Eina_Bool, 0, EFL_FUNC_CALL(slice, plane), Eina_Slice *slice, int plane);

static Eina_Bool
_efl_gfx_buffer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_GFX_BUFFER_EXTRA_OPS
#define EFL_GFX_BUFFER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_size_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_size_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_colorspace_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_alpha_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_alpha_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_stride_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_update_add, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_borders_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_map, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_unmap, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_copy_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_managed_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_managed_get, NULL),
      EFL_GFX_BUFFER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_GFX_BUFFER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_GFX_BUFFER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_gfx_buffer_class_desc = {
   EO_VERSION,
   "Efl.Gfx.Buffer",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_gfx_buffer_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_gfx_buffer_interface_get, &_efl_gfx_buffer_class_desc, NULL, NULL);
