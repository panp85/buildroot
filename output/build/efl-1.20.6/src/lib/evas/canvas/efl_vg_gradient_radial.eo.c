
void _efl_vg_gradient_radial_efl_gfx_gradient_radial_center_set(Eo *obj, Efl_VG_Gradient_Radial_Data *pd, double x, double y);


void _efl_vg_gradient_radial_efl_gfx_gradient_radial_center_get(Eo *obj, Efl_VG_Gradient_Radial_Data *pd, double *x, double *y);


void _efl_vg_gradient_radial_efl_gfx_gradient_radial_radius_set(Eo *obj, Efl_VG_Gradient_Radial_Data *pd, double r);


double _efl_vg_gradient_radial_efl_gfx_gradient_radial_radius_get(Eo *obj, Efl_VG_Gradient_Radial_Data *pd);


void _efl_vg_gradient_radial_efl_gfx_gradient_radial_focal_set(Eo *obj, Efl_VG_Gradient_Radial_Data *pd, double x, double y);


void _efl_vg_gradient_radial_efl_gfx_gradient_radial_focal_get(Eo *obj, Efl_VG_Gradient_Radial_Data *pd, double *x, double *y);


void _efl_vg_gradient_radial_efl_vg_bounds_get(Eo *obj, Efl_VG_Gradient_Radial_Data *pd, Eina_Rectangle *r);


Eina_Bool _efl_vg_gradient_radial_efl_vg_interpolate(Eo *obj, Efl_VG_Gradient_Radial_Data *pd, const Efl_VG *from, const Efl_VG *to, double pos_map);


void _efl_vg_gradient_radial_efl_vg_dup(Eo *obj, Efl_VG_Gradient_Radial_Data *pd, const Efl_VG *from);


Efl_Object *_efl_vg_gradient_radial_efl_object_constructor(Eo *obj, Efl_VG_Gradient_Radial_Data *pd);


void _efl_vg_gradient_radial_efl_object_destructor(Eo *obj, Efl_VG_Gradient_Radial_Data *pd);


static Eina_Bool
_efl_vg_gradient_radial_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_VG_GRADIENT_RADIAL_EXTRA_OPS
#define EFL_VG_GRADIENT_RADIAL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_radial_center_set, _efl_vg_gradient_radial_efl_gfx_gradient_radial_center_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_radial_center_get, _efl_vg_gradient_radial_efl_gfx_gradient_radial_center_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_radial_radius_set, _efl_vg_gradient_radial_efl_gfx_gradient_radial_radius_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_radial_radius_get, _efl_vg_gradient_radial_efl_gfx_gradient_radial_radius_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_radial_focal_set, _efl_vg_gradient_radial_efl_gfx_gradient_radial_focal_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_radial_focal_get, _efl_vg_gradient_radial_efl_gfx_gradient_radial_focal_get),
      EFL_OBJECT_OP_FUNC(efl_vg_bounds_get, _efl_vg_gradient_radial_efl_vg_bounds_get),
      EFL_OBJECT_OP_FUNC(efl_vg_interpolate, _efl_vg_gradient_radial_efl_vg_interpolate),
      EFL_OBJECT_OP_FUNC(efl_vg_dup, _efl_vg_gradient_radial_efl_vg_dup),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_vg_gradient_radial_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_vg_gradient_radial_efl_object_destructor),
      EFL_VG_GRADIENT_RADIAL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_VG_GRADIENT_RADIAL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_VG_GRADIENT_RADIAL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_vg_gradient_radial_class_desc = {
   EO_VERSION,
   "Efl.VG.Gradient.Radial",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_VG_Gradient_Radial_Data),
   _efl_vg_gradient_radial_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_vg_gradient_radial_class_get, &_efl_vg_gradient_radial_class_desc, EFL_VG_GRADIENT_CLASS, EFL_GFX_GRADIENT_RADIAL_INTERFACE, NULL);
