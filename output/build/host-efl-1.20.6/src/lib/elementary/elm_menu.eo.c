EWAPI const Efl_Event_Description _ELM_MENU_EVENT_DISMISSED =
   EFL_EVENT_DESCRIPTION("dismissed");
EWAPI const Efl_Event_Description _ELM_MENU_EVENT_ELM_ACTION_BLOCK_MENU =
   EFL_EVENT_DESCRIPTION("elm,action,block_menu");
EWAPI const Efl_Event_Description _ELM_MENU_EVENT_ELM_ACTION_UNBLOCK_MENU =
   EFL_EVENT_DESCRIPTION("elm,action,unblock_menu");

void _elm_menu_move(Eo *obj, Elm_Menu_Data *pd, int x, int y);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_menu_move, EFL_FUNC_CALL(x, y), int x, int y);

Elm_Widget_Item *_elm_menu_item_add(Eo *obj, Elm_Menu_Data *pd, Elm_Widget_Item *parent, const char *icon, const char *label, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_menu_item_add, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(parent, icon, label, func, data), Elm_Widget_Item *parent, const char *icon, const char *label, Evas_Smart_Cb func, const void *data);

void _elm_menu_open(Eo *obj, Elm_Menu_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_menu_open);

void _elm_menu_close(Eo *obj, Elm_Menu_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_menu_close);

Elm_Widget_Item *_elm_menu_item_separator_add(Eo *obj, Elm_Menu_Data *pd, Elm_Widget_Item *parent);

EOAPI EFL_FUNC_BODYV(elm_obj_menu_item_separator_add, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(parent), Elm_Widget_Item *parent);

Efl_Object *_elm_menu_efl_object_constructor(Eo *obj, Elm_Menu_Data *pd);


void _elm_menu_efl_object_destructor(Eo *obj, Elm_Menu_Data *pd);


void _elm_menu_efl_gfx_visible_set(Eo *obj, Elm_Menu_Data *pd, Eina_Bool v);


void _elm_menu_elm_widget_widget_parent_set(Eo *obj, Elm_Menu_Data *pd, Efl_Canvas_Object *parent);


Efl_Canvas_Object *_elm_menu_elm_widget_widget_parent_get(Eo *obj, Elm_Menu_Data *pd);


Elm_Theme_Apply _elm_menu_elm_widget_theme_apply(Eo *obj, Elm_Menu_Data *pd);


Eina_Bool _elm_menu_elm_widget_translate(Eo *obj, Elm_Menu_Data *pd);


Efl_Ui_Focus_Manager *_elm_menu_elm_widget_focus_manager_factory(Eo *obj, Elm_Menu_Data *pd, Efl_Ui_Focus_Object *root);


Eina_List *_elm_menu_elm_interface_atspi_accessible_children_get(Eo *obj, Elm_Menu_Data *pd);


int _elm_menu_elm_interface_atspi_selection_selected_children_count_get(Eo *obj, Elm_Menu_Data *pd);


Efl_Object *_elm_menu_elm_interface_atspi_selection_selected_child_get(Eo *obj, Elm_Menu_Data *pd, int selected_child_index);


Efl_Ui_Item *_elm_menu_efl_ui_menu_selected_item_get(Eo *obj, Elm_Menu_Data *pd);


Efl_Ui_Item *_elm_menu_efl_ui_menu_first_item_get(Eo *obj, Elm_Menu_Data *pd);


Efl_Ui_Item *_elm_menu_efl_ui_menu_last_item_get(Eo *obj, Elm_Menu_Data *pd);


Eina_Iterator *_elm_menu_efl_ui_menu_items_get(Eo *obj, Elm_Menu_Data *pd);


static Eina_Bool
_elm_menu_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_MENU_EXTRA_OPS
#define ELM_MENU_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_menu_move, _elm_menu_move),
      EFL_OBJECT_OP_FUNC(elm_obj_menu_item_add, _elm_menu_item_add),
      EFL_OBJECT_OP_FUNC(elm_obj_menu_open, _elm_menu_open),
      EFL_OBJECT_OP_FUNC(elm_obj_menu_close, _elm_menu_close),
      EFL_OBJECT_OP_FUNC(elm_obj_menu_item_separator_add, _elm_menu_item_separator_add),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_menu_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_menu_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _elm_menu_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent_set, _elm_menu_elm_widget_widget_parent_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent_get, _elm_menu_elm_widget_widget_parent_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_menu_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_translate, _elm_menu_elm_widget_translate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_manager_factory, _elm_menu_elm_widget_focus_manager_factory),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_children_get, _elm_menu_elm_interface_atspi_accessible_children_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_children_count_get, _elm_menu_elm_interface_atspi_selection_selected_children_count_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_child_get, _elm_menu_elm_interface_atspi_selection_selected_child_get),
      EFL_OBJECT_OP_FUNC(efl_ui_menu_selected_item_get, _elm_menu_efl_ui_menu_selected_item_get),
      EFL_OBJECT_OP_FUNC(efl_ui_menu_first_item_get, _elm_menu_efl_ui_menu_first_item_get),
      EFL_OBJECT_OP_FUNC(efl_ui_menu_last_item_get, _elm_menu_efl_ui_menu_last_item_get),
      EFL_OBJECT_OP_FUNC(efl_ui_menu_items_get, _elm_menu_efl_ui_menu_items_get),
      ELM_MENU_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_MENU_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_MENU_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_menu_class_desc = {
   EO_VERSION,
   "Elm.Menu",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Menu_Data),
   _elm_menu_class_initializer,
   _elm_menu_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_menu_class_get, &_elm_menu_class_desc, ELM_WIDGET_CLASS, EFL_UI_CLICKABLE_INTERFACE, EFL_UI_MENU_INTERFACE, ELM_INTERFACE_ATSPI_SELECTION_INTERFACE, EFL_UI_FOCUS_MANAGER_CLASS, NULL);

EAPI void
elm_menu_move(Elm_Menu *obj, int x, int y)
{
   elm_obj_menu_move(obj, x, y);
}

EAPI Elm_Widget_Item *
elm_menu_item_add(Elm_Menu *obj, Elm_Widget_Item *parent, const char *icon, const char *label, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_menu_item_add(obj, parent, icon, label, func, data);
}

EAPI void
elm_menu_open(Elm_Menu *obj)
{
   elm_obj_menu_open(obj);
}

EAPI void
elm_menu_close(Elm_Menu *obj)
{
   elm_obj_menu_close(obj);
}

EAPI Elm_Widget_Item *
elm_menu_item_separator_add(Elm_Menu *obj, Elm_Widget_Item *parent)
{
   return elm_obj_menu_item_separator_add(obj, parent);
}
