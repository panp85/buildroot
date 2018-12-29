EOAPI EFL_FUNC_BODYV(efl_canvas_surface_native_buffer_set, Eina_Bool, 0, EFL_FUNC_CALL(buffer), void *buffer);

void *_efl_canvas_surface_native_buffer_get(Eo *obj, Efl_Canvas_Surface_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_surface_native_buffer_get, void *, NULL);

Efl_Object *_efl_canvas_surface_efl_object_constructor(Eo *obj, Efl_Canvas_Surface_Data *pd);


static Eina_Bool
_efl_canvas_surface_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_SURFACE_EXTRA_OPS
#define EFL_CANVAS_SURFACE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_canvas_surface_native_buffer_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_canvas_surface_native_buffer_get, _efl_canvas_surface_native_buffer_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_canvas_surface_efl_object_constructor),
      EFL_CANVAS_SURFACE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_SURFACE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_SURFACE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_surface_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Surface",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Efl_Canvas_Surface_Data),
   _efl_canvas_surface_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_surface_mixin_get, &_efl_canvas_surface_class_desc, EFL_INTERFACE_INTERFACE, EFL_CANVAS_IMAGE_INTERNAL_CLASS, NULL);
