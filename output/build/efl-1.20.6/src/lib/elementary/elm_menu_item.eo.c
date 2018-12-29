
void _elm_menu_item_icon_name_set(Eo *obj, Elm_Menu_Item_Data *pd, const char *icon);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_menu_item_icon_name_set, EFL_FUNC_CALL(icon), const char *icon);

const char *_elm_menu_item_icon_name_get(Eo *obj, Elm_Menu_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_menu_item_icon_name_get, const char *, NULL);

unsigned int _elm_menu_item_index_get(const Eo *obj, Elm_Menu_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_menu_item_index_get, unsigned int, 0);

void _elm_menu_item_subitems_clear(Eo *obj, Elm_Menu_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_menu_item_subitems_clear);

const Eina_List *_elm_menu_item_subitems_get(const Eo *obj, Elm_Menu_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_menu_item_subitems_get, const Eina_List *, NULL);

Eina_Bool _elm_menu_item_is_separator(const Eo *obj, Elm_Menu_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_menu_item_is_separator, Eina_Bool, 0);

Efl_Canvas_Object *_elm_menu_item_object_get(const Eo *obj, Elm_Menu_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_menu_item_object_get, Efl_Canvas_Object *, NULL);

Efl_Object *_elm_menu_item_efl_object_constructor(Eo *obj, Elm_Menu_Item_Data *pd);


void _elm_menu_item_efl_object_destructor(Eo *obj, Elm_Menu_Item_Data *pd);


void _elm_menu_item_elm_widget_item_disable(Eo *obj, Elm_Menu_Item_Data *pd);


void _elm_menu_item_elm_widget_item_signal_emit(Eo *obj, Elm_Menu_Item_Data *pd, const char *emission, const char *source);


void _elm_menu_item_elm_widget_item_part_text_set(Eo *obj, Elm_Menu_Item_Data *pd, const char *part, const char *label);


const char *_elm_menu_item_elm_widget_item_part_text_get(Eo *obj, Elm_Menu_Item_Data *pd, const char *part);


void _elm_menu_item_elm_widget_item_part_content_set(Eo *obj, Elm_Menu_Item_Data *pd, const char *part, Efl_Canvas_Object *content);


Efl_Canvas_Object *_elm_menu_item_elm_widget_item_part_content_get(Eo *obj, Elm_Menu_Item_Data *pd, const char *part);


Eina_List *_elm_menu_item_elm_interface_atspi_accessible_children_get(Eo *obj, Elm_Menu_Item_Data *pd);


Elm_Interface_Atspi_Accessible *_elm_menu_item_elm_interface_atspi_accessible_parent_get(Eo *obj, Elm_Menu_Item_Data *pd);


Elm_Atspi_Role _elm_menu_item_elm_interface_atspi_accessible_role_get(Eo *obj, Elm_Menu_Item_Data *pd);


const char *_elm_menu_item_elm_interface_atspi_accessible_name_get(Eo *obj, Elm_Menu_Item_Data *pd);


Elm_Atspi_State_Set _elm_menu_item_elm_interface_atspi_accessible_state_set_get(Eo *obj, Elm_Menu_Item_Data *pd);


int _elm_menu_item_elm_interface_atspi_selection_selected_children_count_get(Eo *obj, Elm_Menu_Item_Data *pd);


Efl_Object *_elm_menu_item_elm_interface_atspi_selection_selected_child_get(Eo *obj, Elm_Menu_Item_Data *pd, int selected_child_index);


void _elm_menu_item_efl_ui_item_selected_set(Eo *obj, Elm_Menu_Item_Data *pd, Eina_Bool selected);


Eina_Bool _elm_menu_item_efl_ui_item_selected_get(Eo *obj, Elm_Menu_Item_Data *pd);


Efl_Ui_Item *_elm_menu_item_efl_ui_item_prev_get(Eo *obj, Elm_Menu_Item_Data *pd);


Efl_Ui_Item *_elm_menu_item_efl_ui_item_next_get(Eo *obj, Elm_Menu_Item_Data *pd);


static Eina_Bool
_elm_menu_item_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_MENU_ITEM_EXTRA_OPS
#define ELM_MENU_ITEM_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_menu_item_icon_name_set, _elm_menu_item_icon_name_set),
      EFL_OBJECT_OP_FUNC(elm_obj_menu_item_icon_name_get, _elm_menu_item_icon_name_get),
      EFL_OBJECT_OP_FUNC(elm_obj_menu_item_index_get, _elm_menu_item_index_get),
      EFL_OBJECT_OP_FUNC(elm_obj_menu_item_subitems_clear, _elm_menu_item_subitems_clear),
      EFL_OBJECT_OP_FUNC(elm_obj_menu_item_subitems_get, _elm_menu_item_subitems_get),
      EFL_OBJECT_OP_FUNC(elm_obj_menu_item_is_separator, _elm_menu_item_is_separator),
      EFL_OBJECT_OP_FUNC(elm_obj_menu_item_object_get, _elm_menu_item_object_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_menu_item_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_menu_item_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_disable, _elm_menu_item_elm_widget_item_disable),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_signal_emit, _elm_menu_item_elm_widget_item_signal_emit),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_set, _elm_menu_item_elm_widget_item_part_text_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_get, _elm_menu_item_elm_widget_item_part_text_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_set, _elm_menu_item_elm_widget_item_part_content_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_get, _elm_menu_item_elm_widget_item_part_content_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_children_get, _elm_menu_item_elm_interface_atspi_accessible_children_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_parent_get, _elm_menu_item_elm_interface_atspi_accessible_parent_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_role_get, _elm_menu_item_elm_interface_atspi_accessible_role_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_name_get, _elm_menu_item_elm_interface_atspi_accessible_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _elm_menu_item_elm_interface_atspi_accessible_state_set_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_children_count_get, _elm_menu_item_elm_interface_atspi_selection_selected_children_count_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_child_get, _elm_menu_item_elm_interface_atspi_selection_selected_child_get),
      EFL_OBJECT_OP_FUNC(efl_ui_item_selected_set, _elm_menu_item_efl_ui_item_selected_set),
      EFL_OBJECT_OP_FUNC(efl_ui_item_selected_get, _elm_menu_item_efl_ui_item_selected_get),
      EFL_OBJECT_OP_FUNC(efl_ui_item_prev_get, _elm_menu_item_efl_ui_item_prev_get),
      EFL_OBJECT_OP_FUNC(efl_ui_item_next_get, _elm_menu_item_efl_ui_item_next_get),
      ELM_MENU_ITEM_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_MENU_ITEM_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_MENU_ITEM_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_menu_item_class_desc = {
   EO_VERSION,
   "Elm.Menu.Item",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Menu_Item_Data),
   _elm_menu_item_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_menu_item_class_get, &_elm_menu_item_class_desc, ELM_WIDGET_ITEM_CLASS, ELM_INTERFACE_ATSPI_SELECTION_INTERFACE, EFL_UI_ITEM_INTERFACE, NULL);

EAPI void
elm_menu_item_icon_name_set(Elm_Menu_Item *obj, const char *icon)
{
   elm_obj_menu_item_icon_name_set(obj, icon);
}

EAPI const char *
elm_menu_item_icon_name_get(const Elm_Menu_Item *obj)
{
   return elm_obj_menu_item_icon_name_get(obj);
}

EAPI unsigned int
elm_menu_item_index_get(const Elm_Menu_Item *obj)
{
   return elm_obj_menu_item_index_get(obj);
}

EAPI void
elm_menu_item_subitems_clear(Elm_Menu_Item *obj)
{
   elm_obj_menu_item_subitems_clear(obj);
}

EAPI const Eina_List *
elm_menu_item_subitems_get(const Elm_Menu_Item *obj)
{
   return elm_obj_menu_item_subitems_get(obj);
}

EAPI Eina_Bool
elm_menu_item_is_separator(const Elm_Menu_Item *obj)
{
   return elm_obj_menu_item_is_separator(obj);
}

EAPI Efl_Canvas_Object *
elm_menu_item_object_get(const Elm_Menu_Item *obj)
{
   return elm_obj_menu_item_object_get(obj);
}
