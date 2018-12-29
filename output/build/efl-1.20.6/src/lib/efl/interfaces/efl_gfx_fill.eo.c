EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_fill_auto_set, EFL_FUNC_CALL(filled), Eina_Bool filled);
EOAPI EFL_FUNC_BODY_CONST(efl_gfx_fill_auto_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_fill_set, EFL_FUNC_CALL(x, y, w, h), int x, int y, int w, int h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_fill_get, EFL_FUNC_CALL(x, y, w, h), int *x, int *y, int *w, int *h);

static Eina_Bool
_efl_gfx_fill_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_GFX_FILL_EXTRA_OPS
#define EFL_GFX_FILL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_fill_auto_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_fill_auto_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_fill_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_fill_get, NULL),
      EFL_GFX_FILL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_GFX_FILL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_GFX_FILL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_gfx_fill_class_desc = {
   EO_VERSION,
   "Efl.Gfx.Fill",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_gfx_fill_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_gfx_fill_interface_get, &_efl_gfx_fill_class_desc, NULL, NULL);
