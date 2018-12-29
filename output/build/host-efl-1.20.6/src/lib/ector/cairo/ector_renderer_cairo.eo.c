EOAPI EFL_FUNC_BODYV(ector_renderer_cairo_fill, Eina_Bool, 0, EFL_FUNC_CALL(mul_col), unsigned int mul_col);

Eina_Bool _ector_renderer_cairo_ector_renderer_prepare(Eo *obj, Ector_Renderer_Cairo_Data *pd);


Eina_Bool _ector_renderer_cairo_ector_renderer_draw(Eo *obj, Ector_Renderer_Cairo_Data *pd, Efl_Gfx_Render_Op op, Eina_Array *clips, unsigned int mul_col);


void _ector_renderer_cairo_ector_renderer_color_set(Eo *obj, Ector_Renderer_Cairo_Data *pd, int r, int g, int b, int a);


void _ector_renderer_cairo_ector_renderer_color_get(Eo *obj, Ector_Renderer_Cairo_Data *pd, int *r, int *g, int *b, int *a);


Efl_Object *_ector_renderer_cairo_efl_object_constructor(Eo *obj, Ector_Renderer_Cairo_Data *pd);


Efl_Object *_ector_renderer_cairo_efl_object_finalize(Eo *obj, Ector_Renderer_Cairo_Data *pd);


void _ector_renderer_cairo_efl_object_destructor(Eo *obj, Ector_Renderer_Cairo_Data *pd);


static Eina_Bool
_ector_renderer_cairo_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_RENDERER_CAIRO_EXTRA_OPS
#define ECTOR_RENDERER_CAIRO_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ector_renderer_cairo_fill, NULL),
      EFL_OBJECT_OP_FUNC(ector_renderer_prepare, _ector_renderer_cairo_ector_renderer_prepare),
      EFL_OBJECT_OP_FUNC(ector_renderer_draw, _ector_renderer_cairo_ector_renderer_draw),
      EFL_OBJECT_OP_FUNC(ector_renderer_color_set, _ector_renderer_cairo_ector_renderer_color_set),
      EFL_OBJECT_OP_FUNC(ector_renderer_color_get, _ector_renderer_cairo_ector_renderer_color_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _ector_renderer_cairo_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _ector_renderer_cairo_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_destructor, _ector_renderer_cairo_efl_object_destructor),
      ECTOR_RENDERER_CAIRO_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_RENDERER_CAIRO_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_RENDERER_CAIRO_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_renderer_cairo_class_desc = {
   EO_VERSION,
   "Ector.Renderer.Cairo",
   EFL_CLASS_TYPE_REGULAR_NO_INSTANT,
   sizeof(Ector_Renderer_Cairo_Data),
   _ector_renderer_cairo_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_renderer_cairo_class_get, &_ector_renderer_cairo_class_desc, ECTOR_RENDERER_CLASS, NULL);
