EOAPI EFL_VOID_FUNC_BODYV(efl_flip_set, EFL_FUNC_CALL(flip), Efl_Flip flip);
EOAPI EFL_FUNC_BODY_CONST(efl_flip_get, Efl_Flip, 0);

static Eina_Bool
_efl_flipable_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_FLIPABLE_EXTRA_OPS
#define EFL_FLIPABLE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_flip_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_flip_get, NULL),
      EFL_FLIPABLE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_FLIPABLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_FLIPABLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_flipable_class_desc = {
   EO_VERSION,
   "Efl.Flipable",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_flipable_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_flipable_interface_get, &_efl_flipable_class_desc, NULL, NULL);
