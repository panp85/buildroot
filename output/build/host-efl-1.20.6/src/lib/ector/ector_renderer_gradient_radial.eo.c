
void _ector_renderer_gradient_radial_efl_gfx_gradient_radial_center_set(Eo *obj, Ector_Renderer_Gradient_Radial_Data *pd, double x, double y);


void _ector_renderer_gradient_radial_efl_gfx_gradient_radial_center_get(Eo *obj, Ector_Renderer_Gradient_Radial_Data *pd, double *x, double *y);


void _ector_renderer_gradient_radial_efl_gfx_gradient_radial_radius_set(Eo *obj, Ector_Renderer_Gradient_Radial_Data *pd, double r);


double _ector_renderer_gradient_radial_efl_gfx_gradient_radial_radius_get(Eo *obj, Ector_Renderer_Gradient_Radial_Data *pd);


void _ector_renderer_gradient_radial_efl_gfx_gradient_radial_focal_set(Eo *obj, Ector_Renderer_Gradient_Radial_Data *pd, double x, double y);


void _ector_renderer_gradient_radial_efl_gfx_gradient_radial_focal_get(Eo *obj, Ector_Renderer_Gradient_Radial_Data *pd, double *x, double *y);


static Eina_Bool
_ector_renderer_gradient_radial_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_RENDERER_GRADIENT_RADIAL_EXTRA_OPS
#define ECTOR_RENDERER_GRADIENT_RADIAL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_radial_center_set, _ector_renderer_gradient_radial_efl_gfx_gradient_radial_center_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_radial_center_get, _ector_renderer_gradient_radial_efl_gfx_gradient_radial_center_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_radial_radius_set, _ector_renderer_gradient_radial_efl_gfx_gradient_radial_radius_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_radial_radius_get, _ector_renderer_gradient_radial_efl_gfx_gradient_radial_radius_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_radial_focal_set, _ector_renderer_gradient_radial_efl_gfx_gradient_radial_focal_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_radial_focal_get, _ector_renderer_gradient_radial_efl_gfx_gradient_radial_focal_get),
      ECTOR_RENDERER_GRADIENT_RADIAL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_RENDERER_GRADIENT_RADIAL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_RENDERER_GRADIENT_RADIAL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_renderer_gradient_radial_class_desc = {
   EO_VERSION,
   "Ector.Renderer.Gradient.Radial",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Ector_Renderer_Gradient_Radial_Data),
   _ector_renderer_gradient_radial_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_renderer_gradient_radial_mixin_get, &_ector_renderer_gradient_radial_class_desc, EFL_GFX_GRADIENT_RADIAL_INTERFACE, NULL);
