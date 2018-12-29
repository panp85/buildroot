EOAPI EFL_FUNC_BODYV(efl_ui_factory_create, Efl_Gfx *, NULL, EFL_FUNC_CALL(model, parent), Efl_Model *model, Efl_Gfx *parent);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_factory_release, EFL_FUNC_CALL(ui_view), Efl_Gfx *ui_view);

static Eina_Bool
_efl_ui_factory_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_FACTORY_EXTRA_OPS
#define EFL_UI_FACTORY_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_factory_create, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_factory_release, NULL),
      EFL_UI_FACTORY_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_FACTORY_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_FACTORY_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_factory_class_desc = {
   EO_VERSION,
   "Efl.Ui.Factory",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_factory_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_factory_interface_get, &_efl_ui_factory_class_desc, EFL_UI_MODEL_CONNECT_INTERFACE, NULL);
