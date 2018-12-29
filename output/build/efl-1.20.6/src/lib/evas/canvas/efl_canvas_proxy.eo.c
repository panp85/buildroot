
Eina_Bool _efl_canvas_proxy_source_set(Eo *obj, void *pd, Efl_Canvas_Object *src);

EOAPI EFL_FUNC_BODYV(efl_canvas_proxy_source_set, Eina_Bool, 0, EFL_FUNC_CALL(src), Efl_Canvas_Object *src);

Efl_Canvas_Object *_efl_canvas_proxy_source_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_proxy_source_get, Efl_Canvas_Object *, NULL);

void _efl_canvas_proxy_source_clip_set(Eo *obj, void *pd, Eina_Bool source_clip);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_proxy_source_clip_set, EFL_FUNC_CALL(source_clip), Eina_Bool source_clip);

Eina_Bool _efl_canvas_proxy_source_clip_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_proxy_source_clip_get, Eina_Bool, 0);

void _efl_canvas_proxy_source_events_set(Eo *obj, void *pd, Eina_Bool repeat);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_proxy_source_events_set, EFL_FUNC_CALL(repeat), Eina_Bool repeat);

Eina_Bool _efl_canvas_proxy_source_events_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_proxy_source_events_get, Eina_Bool, 0);

Eina_Bool _efl_canvas_proxy_efl_gfx_buffer_buffer_map(Eo *obj, void *pd, Eina_Rw_Slice *slice, Efl_Gfx_Buffer_Access_Mode mode, int x, int y, int w, int h, Efl_Gfx_Colorspace cspace, int plane, int *stride);


Eina_Bool _efl_canvas_proxy_efl_gfx_buffer_buffer_unmap(Eo *obj, void *pd, const Eina_Rw_Slice *slice);


static Eina_Bool
_efl_canvas_proxy_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_PROXY_EXTRA_OPS
#define EFL_CANVAS_PROXY_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_canvas_proxy_source_set, _efl_canvas_proxy_source_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_proxy_source_get, _efl_canvas_proxy_source_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_proxy_source_clip_set, _efl_canvas_proxy_source_clip_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_proxy_source_clip_get, _efl_canvas_proxy_source_clip_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_proxy_source_events_set, _efl_canvas_proxy_source_events_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_proxy_source_events_get, _efl_canvas_proxy_source_events_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_map, _efl_canvas_proxy_efl_gfx_buffer_buffer_map),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_unmap, _efl_canvas_proxy_efl_gfx_buffer_buffer_unmap),
      EFL_CANVAS_PROXY_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_PROXY_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_PROXY_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_proxy_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Proxy",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _efl_canvas_proxy_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_proxy_class_get, &_efl_canvas_proxy_class_desc, EFL_CANVAS_IMAGE_INTERNAL_CLASS, EFL_GFX_BUFFER_INTERFACE, NULL);
