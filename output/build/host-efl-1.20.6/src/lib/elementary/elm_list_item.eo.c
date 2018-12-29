
void _elm_list_item_separator_set(Eo *obj, Elm_List_Item_Data *pd, Eina_Bool setting);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_list_item_separator_set, EFL_FUNC_CALL(setting), Eina_Bool setting);

Eina_Bool _elm_list_item_separator_get(Eo *obj, Elm_List_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_item_separator_get, Eina_Bool, 0);

void _elm_list_item_selected_set(Eo *obj, Elm_List_Item_Data *pd, Eina_Bool selected);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_list_item_selected_set, EFL_FUNC_CALL(selected), Eina_Bool selected);

Eina_Bool _elm_list_item_selected_get(Eo *obj, Elm_List_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_item_selected_get, Eina_Bool, 0);

Efl_Canvas_Object *_elm_list_item_object_get(Eo *obj, Elm_List_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_item_object_get, Efl_Canvas_Object *, NULL);

Elm_Widget_Item *_elm_list_item_prev_get(Eo *obj, Elm_List_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_item_prev_get, Elm_Widget_Item *, NULL);

Elm_Widget_Item *_elm_list_item_next_get(Eo *obj, Elm_List_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_item_next_get, Elm_Widget_Item *, NULL);

void _elm_list_item_show(Eo *obj, Elm_List_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_list_item_show);

void _elm_list_item_bring_in(Eo *obj, Elm_List_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_list_item_bring_in);

Efl_Object *_elm_list_item_efl_object_constructor(Eo *obj, Elm_List_Item_Data *pd);


void _elm_list_item_elm_widget_item_disable(Eo *obj, Elm_List_Item_Data *pd);


Eina_Bool _elm_list_item_elm_widget_item_del_pre(Eo *obj, Elm_List_Item_Data *pd);


void _elm_list_item_elm_widget_item_signal_emit(Eo *obj, Elm_List_Item_Data *pd, const char *emission, const char *source);


void _elm_list_item_elm_widget_item_focus_set(Eo *obj, Elm_List_Item_Data *pd, Eina_Bool focused);


Eina_Bool _elm_list_item_elm_widget_item_focus_get(Eo *obj, Elm_List_Item_Data *pd);


void _elm_list_item_elm_widget_item_part_text_set(Eo *obj, Elm_List_Item_Data *pd, const char *part, const char *label);


const char *_elm_list_item_elm_widget_item_part_text_get(Eo *obj, Elm_List_Item_Data *pd, const char *part);


void _elm_list_item_elm_widget_item_part_content_set(Eo *obj, Elm_List_Item_Data *pd, const char *part, Efl_Canvas_Object *content);


Efl_Canvas_Object *_elm_list_item_elm_widget_item_part_content_get(Eo *obj, Elm_List_Item_Data *pd, const char *part);


Efl_Canvas_Object *_elm_list_item_elm_widget_item_part_content_unset(Eo *obj, Elm_List_Item_Data *pd, const char *part);


const char *_elm_list_item_elm_interface_atspi_accessible_name_get(Eo *obj, Elm_List_Item_Data *pd);


Elm_Atspi_State_Set _elm_list_item_elm_interface_atspi_accessible_state_set_get(Eo *obj, Elm_List_Item_Data *pd);


static Eina_Bool
_elm_list_item_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_LIST_ITEM_EXTRA_OPS
#define ELM_LIST_ITEM_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_list_item_separator_set, _elm_list_item_separator_set),
      EFL_OBJECT_OP_FUNC(elm_obj_list_item_separator_get, _elm_list_item_separator_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_item_selected_set, _elm_list_item_selected_set),
      EFL_OBJECT_OP_FUNC(elm_obj_list_item_selected_get, _elm_list_item_selected_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_item_object_get, _elm_list_item_object_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_item_prev_get, _elm_list_item_prev_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_item_next_get, _elm_list_item_next_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_item_show, _elm_list_item_show),
      EFL_OBJECT_OP_FUNC(elm_obj_list_item_bring_in, _elm_list_item_bring_in),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_list_item_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_disable, _elm_list_item_elm_widget_item_disable),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_del_pre, _elm_list_item_elm_widget_item_del_pre),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_signal_emit, _elm_list_item_elm_widget_item_signal_emit),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_focus_set, _elm_list_item_elm_widget_item_focus_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_focus_get, _elm_list_item_elm_widget_item_focus_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_set, _elm_list_item_elm_widget_item_part_text_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_get, _elm_list_item_elm_widget_item_part_text_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_set, _elm_list_item_elm_widget_item_part_content_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_get, _elm_list_item_elm_widget_item_part_content_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_unset, _elm_list_item_elm_widget_item_part_content_unset),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_name_get, _elm_list_item_elm_interface_atspi_accessible_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _elm_list_item_elm_interface_atspi_accessible_state_set_get),
      ELM_LIST_ITEM_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_LIST_ITEM_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_LIST_ITEM_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_list_item_class_desc = {
   EO_VERSION,
   "Elm.List.Item",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_List_Item_Data),
   _elm_list_item_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_list_item_class_get, &_elm_list_item_class_desc, ELM_WIDGET_ITEM_CLASS, NULL);

EAPI void
elm_list_item_separator_set(Elm_List_Item *obj, Eina_Bool setting)
{
   elm_obj_list_item_separator_set(obj, setting);
}

EAPI Eina_Bool
elm_list_item_separator_get(const Elm_List_Item *obj)
{
   return elm_obj_list_item_separator_get(obj);
}

EAPI void
elm_list_item_selected_set(Elm_List_Item *obj, Eina_Bool selected)
{
   elm_obj_list_item_selected_set(obj, selected);
}

EAPI Eina_Bool
elm_list_item_selected_get(const Elm_List_Item *obj)
{
   return elm_obj_list_item_selected_get(obj);
}

EAPI Efl_Canvas_Object *
elm_list_item_object_get(const Elm_List_Item *obj)
{
   return elm_obj_list_item_object_get(obj);
}

EAPI Elm_Widget_Item *
elm_list_item_prev(const Elm_List_Item *obj)
{
   return elm_obj_list_item_prev_get(obj);
}

EAPI Elm_Widget_Item *
elm_list_item_next(const Elm_List_Item *obj)
{
   return elm_obj_list_item_next_get(obj);
}

EAPI void
elm_list_item_show(Elm_List_Item *obj)
{
   elm_obj_list_item_show(obj);
}

EAPI void
elm_list_item_bring_in(Elm_List_Item *obj)
{
   elm_obj_list_item_bring_in(obj);
}
