EOAPI EFL_VOID_FUNC_BODYV(efl_ui_model_connect, EFL_FUNC_CALL(name, property), const char *name, const char *property);

static Eina_Bool
_efl_ui_model_connect_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_MODEL_CONNECT_EXTRA_OPS
#define EFL_UI_MODEL_CONNECT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_model_connect, NULL),
      EFL_UI_MODEL_CONNECT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_MODEL_CONNECT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_MODEL_CONNECT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_model_connect_class_desc = {
   EO_VERSION,
   "Efl.Ui.Model.Connect",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_model_connect_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_model_connect_interface_get, &_efl_ui_model_connect_class_desc, NULL, NULL);
