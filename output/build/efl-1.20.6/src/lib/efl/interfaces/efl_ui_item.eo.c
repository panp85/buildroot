EOAPI EFL_FUNC_BODY_CONST(efl_ui_item_prev_get, Efl_Ui_Item *, NULL);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_item_next_get, Efl_Ui_Item *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_item_selected_set, EFL_FUNC_CALL(selected), Eina_Bool selected);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_item_selected_get, Eina_Bool, 0);

static Eina_Bool
_efl_ui_item_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_ITEM_EXTRA_OPS
#define EFL_UI_ITEM_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_item_prev_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_item_next_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_item_selected_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_item_selected_get, NULL),
      EFL_UI_ITEM_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_ITEM_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_ITEM_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_item_class_desc = {
   EO_VERSION,
   "Efl.Ui.Item",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_item_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_item_interface_get, &_efl_ui_item_class_desc, NULL, NULL);

EAPI Efl_Ui_Item *
null_prev_get(const Efl_Ui_Item *obj)
{
   return efl_ui_item_prev_get(obj);
}

EAPI Efl_Ui_Item *
null_next_get(const Efl_Ui_Item *obj)
{
   return efl_ui_item_next_get(obj);
}

EAPI void
null_selected_set(Efl_Ui_Item *obj, Eina_Bool selected)
{
   efl_ui_item_selected_set(obj, selected);
}

EAPI Eina_Bool
null_selected_get(const Efl_Ui_Item *obj)
{
   return efl_ui_item_selected_get(obj);
}
