EOAPI EFL_FUNC_BODY_CONST(efl_ui_menu_selected_item_get, Efl_Ui_Item *, NULL);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_menu_first_item_get, Efl_Ui_Item *, NULL);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_menu_last_item_get, Efl_Ui_Item *, NULL);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_menu_items_get, Eina_Iterator *, NULL);

static Eina_Bool
_efl_ui_menu_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_MENU_EXTRA_OPS
#define EFL_UI_MENU_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_menu_selected_item_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_menu_first_item_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_menu_last_item_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_menu_items_get, NULL),
      EFL_UI_MENU_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_MENU_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_MENU_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_menu_class_desc = {
   EO_VERSION,
   "Efl.Ui.Menu",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_menu_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_menu_interface_get, &_efl_ui_menu_class_desc, NULL, NULL);

EAPI Efl_Ui_Item *
null_selected_item_get(const Efl_Ui_Menu *obj)
{
   return efl_ui_menu_selected_item_get(obj);
}

EAPI Efl_Ui_Item *
null_first_item_get(const Efl_Ui_Menu *obj)
{
   return efl_ui_menu_first_item_get(obj);
}

EAPI Efl_Ui_Item *
null_last_item_get(const Efl_Ui_Menu *obj)
{
   return efl_ui_menu_last_item_get(obj);
}

EAPI Eina_Iterator *
null_items_get(const Efl_Ui_Menu *obj)
{
   return efl_ui_menu_items_get(obj);
}
