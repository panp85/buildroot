EOAPI EFL_VOID_FUNC_BODYV(efl_orientation_set, EFL_FUNC_CALL(dir), Efl_Orient dir);
EOAPI EFL_FUNC_BODY_CONST(efl_orientation_get, Efl_Orient, 0);

static Eina_Bool
_efl_orientation_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_ORIENTATION_EXTRA_OPS
#define EFL_ORIENTATION_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_orientation_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_orientation_get, NULL),
      EFL_ORIENTATION_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_ORIENTATION_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_ORIENTATION_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_orientation_class_desc = {
   EO_VERSION,
   "Efl.Orientation",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_orientation_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_orientation_interface_get, &_efl_orientation_class_desc, NULL, NULL);
