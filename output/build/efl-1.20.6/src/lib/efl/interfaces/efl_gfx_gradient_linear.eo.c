EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_gradient_linear_start_set, EFL_FUNC_CALL(x, y), double x, double y);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_gradient_linear_start_get, EFL_FUNC_CALL(x, y), double *x, double *y);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_gradient_linear_end_set, EFL_FUNC_CALL(x, y), double x, double y);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_gradient_linear_end_get, EFL_FUNC_CALL(x, y), double *x, double *y);

static Eina_Bool
_efl_gfx_gradient_linear_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_GFX_GRADIENT_LINEAR_EXTRA_OPS
#define EFL_GFX_GRADIENT_LINEAR_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_linear_start_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_linear_start_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_linear_end_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_linear_end_get, NULL),
      EFL_GFX_GRADIENT_LINEAR_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_GFX_GRADIENT_LINEAR_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_GFX_GRADIENT_LINEAR_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_gfx_gradient_linear_class_desc = {
   EO_VERSION,
   "Efl.Gfx.Gradient.Linear",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_gfx_gradient_linear_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_gfx_gradient_linear_interface_get, &_efl_gfx_gradient_linear_class_desc, EFL_GFX_GRADIENT_INTERFACE, NULL);
