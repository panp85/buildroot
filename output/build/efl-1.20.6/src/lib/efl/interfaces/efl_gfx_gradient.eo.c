EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_gradient_stop_set, EFL_FUNC_CALL(colors, length), const Efl_Gfx_Gradient_Stop *colors, unsigned int length);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_gradient_stop_get, EFL_FUNC_CALL(colors, length), const Efl_Gfx_Gradient_Stop **colors, unsigned int *length);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_gradient_spread_set, EFL_FUNC_CALL(s), Efl_Gfx_Gradient_Spread s);
EOAPI EFL_FUNC_BODY_CONST(efl_gfx_gradient_spread_get, Efl_Gfx_Gradient_Spread, 0);

static Eina_Bool
_efl_gfx_gradient_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_GFX_GRADIENT_EXTRA_OPS
#define EFL_GFX_GRADIENT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_stop_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_stop_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_spread_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_spread_get, NULL),
      EFL_GFX_GRADIENT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_GFX_GRADIENT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_GFX_GRADIENT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_gfx_gradient_class_desc = {
   EO_VERSION,
   "Efl.Gfx.Gradient",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_gfx_gradient_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_gfx_gradient_interface_get, &_efl_gfx_gradient_class_desc, NULL, NULL);
