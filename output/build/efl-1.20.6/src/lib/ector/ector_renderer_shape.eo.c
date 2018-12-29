
void _ector_renderer_shape_fill_set(Eo *obj, Ector_Renderer_Shape_Data *pd, const Ector_Renderer *r);

EOAPI EFL_VOID_FUNC_BODYV(ector_renderer_shape_fill_set, EFL_FUNC_CALL(r), const Ector_Renderer *r);

const Ector_Renderer *_ector_renderer_shape_fill_get(Eo *obj, Ector_Renderer_Shape_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(ector_renderer_shape_fill_get, const Ector_Renderer *, NULL);

void _ector_renderer_shape_stroke_fill_set(Eo *obj, Ector_Renderer_Shape_Data *pd, const Ector_Renderer *r);

EOAPI EFL_VOID_FUNC_BODYV(ector_renderer_shape_stroke_fill_set, EFL_FUNC_CALL(r), const Ector_Renderer *r);

const Ector_Renderer *_ector_renderer_shape_stroke_fill_get(Eo *obj, Ector_Renderer_Shape_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(ector_renderer_shape_stroke_fill_get, const Ector_Renderer *, NULL);

void _ector_renderer_shape_stroke_marker_set(Eo *obj, Ector_Renderer_Shape_Data *pd, const Ector_Renderer *r);

EOAPI EFL_VOID_FUNC_BODYV(ector_renderer_shape_stroke_marker_set, EFL_FUNC_CALL(r), const Ector_Renderer *r);

const Ector_Renderer *_ector_renderer_shape_stroke_marker_get(Eo *obj, Ector_Renderer_Shape_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(ector_renderer_shape_stroke_marker_get, const Ector_Renderer *, NULL);

static Eina_Bool
_ector_renderer_shape_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_RENDERER_SHAPE_EXTRA_OPS
#define ECTOR_RENDERER_SHAPE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ector_renderer_shape_fill_set, _ector_renderer_shape_fill_set),
      EFL_OBJECT_OP_FUNC(ector_renderer_shape_fill_get, _ector_renderer_shape_fill_get),
      EFL_OBJECT_OP_FUNC(ector_renderer_shape_stroke_fill_set, _ector_renderer_shape_stroke_fill_set),
      EFL_OBJECT_OP_FUNC(ector_renderer_shape_stroke_fill_get, _ector_renderer_shape_stroke_fill_get),
      EFL_OBJECT_OP_FUNC(ector_renderer_shape_stroke_marker_set, _ector_renderer_shape_stroke_marker_set),
      EFL_OBJECT_OP_FUNC(ector_renderer_shape_stroke_marker_get, _ector_renderer_shape_stroke_marker_get),
      ECTOR_RENDERER_SHAPE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_RENDERER_SHAPE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_RENDERER_SHAPE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_renderer_shape_class_desc = {
   EO_VERSION,
   "Ector.Renderer.Shape",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Ector_Renderer_Shape_Data),
   _ector_renderer_shape_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_renderer_shape_mixin_get, &_ector_renderer_shape_class_desc, EFL_GFX_SHAPE_MIXIN, NULL);
