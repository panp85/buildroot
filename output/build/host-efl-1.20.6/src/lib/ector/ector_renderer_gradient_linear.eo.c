
void _ector_renderer_gradient_linear_efl_gfx_gradient_linear_start_set(Eo *obj, Ector_Renderer_Gradient_Linear_Data *pd, double x, double y);


void _ector_renderer_gradient_linear_efl_gfx_gradient_linear_start_get(Eo *obj, Ector_Renderer_Gradient_Linear_Data *pd, double *x, double *y);


void _ector_renderer_gradient_linear_efl_gfx_gradient_linear_end_set(Eo *obj, Ector_Renderer_Gradient_Linear_Data *pd, double x, double y);


void _ector_renderer_gradient_linear_efl_gfx_gradient_linear_end_get(Eo *obj, Ector_Renderer_Gradient_Linear_Data *pd, double *x, double *y);


static Eina_Bool
_ector_renderer_gradient_linear_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_RENDERER_GRADIENT_LINEAR_EXTRA_OPS
#define ECTOR_RENDERER_GRADIENT_LINEAR_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_linear_start_set, _ector_renderer_gradient_linear_efl_gfx_gradient_linear_start_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_linear_start_get, _ector_renderer_gradient_linear_efl_gfx_gradient_linear_start_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_linear_end_set, _ector_renderer_gradient_linear_efl_gfx_gradient_linear_end_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_linear_end_get, _ector_renderer_gradient_linear_efl_gfx_gradient_linear_end_get),
      ECTOR_RENDERER_GRADIENT_LINEAR_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_RENDERER_GRADIENT_LINEAR_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_RENDERER_GRADIENT_LINEAR_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_renderer_gradient_linear_class_desc = {
   EO_VERSION,
   "Ector.Renderer.Gradient.Linear",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Ector_Renderer_Gradient_Linear_Data),
   _ector_renderer_gradient_linear_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_renderer_gradient_linear_mixin_get, &_ector_renderer_gradient_linear_class_desc, EFL_GFX_GRADIENT_LINEAR_INTERFACE, NULL);
