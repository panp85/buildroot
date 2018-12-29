EOAPI EFL_VOID_FUNC_BODYV(efl_text_set, EFL_FUNC_CALL(text), const char *text);
EOAPI EFL_FUNC_BODY_CONST(efl_text_get, const char *, NULL);

static Eina_Bool
_efl_text_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_TEXT_EXTRA_OPS
#define EFL_TEXT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_text_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_get, NULL),
      EFL_TEXT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_TEXT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_TEXT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_text_class_desc = {
   EO_VERSION,
   "Efl.Text",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_text_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_text_interface_get, &_efl_text_class_desc, NULL, NULL);
