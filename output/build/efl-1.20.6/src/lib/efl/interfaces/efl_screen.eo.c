EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_screen_size_get, EFL_FUNC_CALL(w, h), int *w, int *h);
EOAPI EFL_FUNC_BODY_CONST(efl_screen_rotation_get, int, 0);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_screen_dpi_get, EFL_FUNC_CALL(xdpi, ydpi), int *xdpi, int *ydpi);

static Eina_Bool
_efl_screen_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_SCREEN_EXTRA_OPS
#define EFL_SCREEN_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_screen_size_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_screen_rotation_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_screen_dpi_get, NULL),
      EFL_SCREEN_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_SCREEN_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_SCREEN_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_screen_class_desc = {
   EO_VERSION,
   "Efl.Screen",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_screen_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_screen_interface_get, &_efl_screen_class_desc, NULL, NULL);
