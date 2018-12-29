EWAPI const Efl_Event_Description _ECTOR_BUFFER_EVENT_DETACHED =
   EFL_EVENT_DESCRIPTION("detached");

void _ector_buffer_size_get(Eo *obj, Ector_Buffer_Data *pd, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(ector_buffer_size_get, EFL_FUNC_CALL(w, h), int *w, int *h);

Efl_Gfx_Colorspace _ector_buffer_cspace_get(Eo *obj, Ector_Buffer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(ector_buffer_cspace_get, Efl_Gfx_Colorspace, 0);
EOAPI EFL_FUNC_BODYV(ector_buffer_map, void *, NULL, EFL_FUNC_CALL(length, mode, x, y, w, h, cspace, stride), unsigned int *length, Ector_Buffer_Access_Flag mode, unsigned int x, unsigned int y, unsigned int w, unsigned int h, Efl_Gfx_Colorspace cspace, unsigned int *stride);
EOAPI EFL_VOID_FUNC_BODYV(ector_buffer_unmap, EFL_FUNC_CALL(data, length), void *data, unsigned int length);
EOAPI EFL_FUNC_BODYV(ector_buffer_pixels_set, Eina_Bool, 0, EFL_FUNC_CALL(pixels, width, height, cspace, writable), void *pixels, int width, int height, Efl_Gfx_Colorspace cspace, Eina_Bool writable);

Ector_Buffer_Flag _ector_buffer_flags_get(Eo *obj, Ector_Buffer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(ector_buffer_flags_get, Ector_Buffer_Flag, 0);

static Eina_Bool
_ector_buffer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_BUFFER_EXTRA_OPS
#define ECTOR_BUFFER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ector_buffer_size_get, _ector_buffer_size_get),
      EFL_OBJECT_OP_FUNC(ector_buffer_cspace_get, _ector_buffer_cspace_get),
      EFL_OBJECT_OP_FUNC(ector_buffer_map, NULL),
      EFL_OBJECT_OP_FUNC(ector_buffer_unmap, NULL),
      EFL_OBJECT_OP_FUNC(ector_buffer_pixels_set, NULL),
      EFL_OBJECT_OP_FUNC(ector_buffer_flags_get, _ector_buffer_flags_get),
      ECTOR_BUFFER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_BUFFER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_BUFFER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_buffer_class_desc = {
   EO_VERSION,
   "Ector.Buffer",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Ector_Buffer_Data),
   _ector_buffer_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_buffer_mixin_get, &_ector_buffer_class_desc, NULL, NULL);
