
void _ector_renderer_gradient_efl_gfx_gradient_stop_set(Eo *obj, Ector_Renderer_Gradient_Data *pd, const Efl_Gfx_Gradient_Stop *colors, unsigned int length);


void _ector_renderer_gradient_efl_gfx_gradient_stop_get(Eo *obj, Ector_Renderer_Gradient_Data *pd, const Efl_Gfx_Gradient_Stop **colors, unsigned int *length);


void _ector_renderer_gradient_efl_gfx_gradient_spread_set(Eo *obj, Ector_Renderer_Gradient_Data *pd, Efl_Gfx_Gradient_Spread s);


Efl_Gfx_Gradient_Spread _ector_renderer_gradient_efl_gfx_gradient_spread_get(Eo *obj, Ector_Renderer_Gradient_Data *pd);


static Eina_Bool
_ector_renderer_gradient_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_RENDERER_GRADIENT_EXTRA_OPS
#define ECTOR_RENDERER_GRADIENT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_stop_set, _ector_renderer_gradient_efl_gfx_gradient_stop_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_stop_get, _ector_renderer_gradient_efl_gfx_gradient_stop_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_spread_set, _ector_renderer_gradient_efl_gfx_gradient_spread_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_spread_get, _ector_renderer_gradient_efl_gfx_gradient_spread_get),
      ECTOR_RENDERER_GRADIENT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_RENDERER_GRADIENT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_RENDERER_GRADIENT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_renderer_gradient_class_desc = {
   EO_VERSION,
   "Ector.Renderer.Gradient",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Ector_Renderer_Gradient_Data),
   _ector_renderer_gradient_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_renderer_gradient_mixin_get, &_ector_renderer_gradient_class_desc, EFL_GFX_GRADIENT_INTERFACE, NULL);
