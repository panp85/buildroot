
void _efl_vg_gradient_efl_gfx_gradient_stop_set(Eo *obj, Efl_VG_Gradient_Data *pd, const Efl_Gfx_Gradient_Stop *colors, unsigned int length);


void _efl_vg_gradient_efl_gfx_gradient_stop_get(Eo *obj, Efl_VG_Gradient_Data *pd, const Efl_Gfx_Gradient_Stop **colors, unsigned int *length);


void _efl_vg_gradient_efl_gfx_gradient_spread_set(Eo *obj, Efl_VG_Gradient_Data *pd, Efl_Gfx_Gradient_Spread s);


Efl_Gfx_Gradient_Spread _efl_vg_gradient_efl_gfx_gradient_spread_get(Eo *obj, Efl_VG_Gradient_Data *pd);


Eina_Bool _efl_vg_gradient_efl_vg_interpolate(Eo *obj, Efl_VG_Gradient_Data *pd, const Efl_VG *from, const Efl_VG *to, double pos_map);


void _efl_vg_gradient_efl_vg_dup(Eo *obj, Efl_VG_Gradient_Data *pd, const Efl_VG *from);


static Eina_Bool
_efl_vg_gradient_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_VG_GRADIENT_EXTRA_OPS
#define EFL_VG_GRADIENT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_stop_set, _efl_vg_gradient_efl_gfx_gradient_stop_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_stop_get, _efl_vg_gradient_efl_gfx_gradient_stop_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_spread_set, _efl_vg_gradient_efl_gfx_gradient_spread_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_spread_get, _efl_vg_gradient_efl_gfx_gradient_spread_get),
      EFL_OBJECT_OP_FUNC(efl_vg_interpolate, _efl_vg_gradient_efl_vg_interpolate),
      EFL_OBJECT_OP_FUNC(efl_vg_dup, _efl_vg_gradient_efl_vg_dup),
      EFL_VG_GRADIENT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_VG_GRADIENT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_VG_GRADIENT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_vg_gradient_class_desc = {
   EO_VERSION,
   "Efl.VG.Gradient",
   EFL_CLASS_TYPE_REGULAR_NO_INSTANT,
   sizeof(Efl_VG_Gradient_Data),
   _efl_vg_gradient_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_vg_gradient_class_get, &_efl_vg_gradient_class_desc, EFL_VG_CLASS, EFL_GFX_GRADIENT_INTERFACE, NULL);
