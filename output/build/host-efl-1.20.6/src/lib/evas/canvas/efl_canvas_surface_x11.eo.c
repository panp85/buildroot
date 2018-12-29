
Eina_Bool _efl_canvas_surface_x11_pixmap_set(Eo *obj, Efl_Canvas_Surface_X11_Data *pd, void *visual, unsigned long pixmap);

EOAPI EFL_FUNC_BODYV(efl_canvas_surface_x11_pixmap_set, Eina_Bool, 0, EFL_FUNC_CALL(visual, pixmap), void *visual, unsigned long pixmap);

void _efl_canvas_surface_x11_pixmap_get(Eo *obj, Efl_Canvas_Surface_X11_Data *pd, void **visual, unsigned long *pixmap);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_canvas_surface_x11_pixmap_get, EFL_FUNC_CALL(visual, pixmap), void **visual, unsigned long *pixmap);

Efl_Object *_efl_canvas_surface_x11_efl_object_constructor(Eo *obj, Efl_Canvas_Surface_X11_Data *pd);


void _efl_canvas_surface_x11_efl_object_destructor(Eo *obj, Efl_Canvas_Surface_X11_Data *pd);


Eina_Bool _efl_canvas_surface_x11_efl_canvas_surface_native_buffer_set(Eo *obj, Efl_Canvas_Surface_X11_Data *pd, void *buffer);


static Eina_Bool
_efl_canvas_surface_x11_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_SURFACE_X11_EXTRA_OPS
#define EFL_CANVAS_SURFACE_X11_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_canvas_surface_x11_pixmap_set, _efl_canvas_surface_x11_pixmap_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_surface_x11_pixmap_get, _efl_canvas_surface_x11_pixmap_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_canvas_surface_x11_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_canvas_surface_x11_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_canvas_surface_native_buffer_set, _efl_canvas_surface_x11_efl_canvas_surface_native_buffer_set),
      EFL_CANVAS_SURFACE_X11_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_SURFACE_X11_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_SURFACE_X11_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_surface_x11_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Surface.X11",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Canvas_Surface_X11_Data),
   _efl_canvas_surface_x11_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_surface_x11_class_get, &_efl_canvas_surface_x11_class_desc, EFL_OBJECT_CLASS, EFL_CANVAS_SURFACE_MIXIN, NULL);
