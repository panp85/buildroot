EWAPI const Efl_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_ITEM_SELECTED =
   EFL_EVENT_DESCRIPTION("item,selected");
EWAPI const Efl_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_ITEM_ADDED =
   EFL_EVENT_DESCRIPTION("item,added");
EWAPI const Efl_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_ITEM_DELETED =
   EFL_EVENT_DESCRIPTION("item,deleted");
EWAPI const Efl_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_ITEM_CLICKED =
   EFL_EVENT_DESCRIPTION("item,clicked");
EWAPI const Efl_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_ITEM_LONGPRESSED =
   EFL_EVENT_DESCRIPTION("item,longpressed");
EWAPI const Efl_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_EXPANDED =
   EFL_EVENT_DESCRIPTION("expanded");
EWAPI const Efl_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_CONTRACTED =
   EFL_EVENT_DESCRIPTION("contracted");
EWAPI const Efl_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_EXPAND_STATE_CHANGED =
   EFL_EVENT_DESCRIPTION("expand,state,changed");

void _elm_multibuttonentry_editable_set(Eo *obj, Elm_Multibuttonentry_Data *pd, Eina_Bool editable);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_multibuttonentry_editable_set, EFL_FUNC_CALL(editable), Eina_Bool editable);

Eina_Bool _elm_multibuttonentry_editable_get(Eo *obj, Elm_Multibuttonentry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_multibuttonentry_editable_get, Eina_Bool, 0);

void _elm_multibuttonentry_expanded_set(Eo *obj, Elm_Multibuttonentry_Data *pd, Eina_Bool expanded);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_multibuttonentry_expanded_set, EFL_FUNC_CALL(expanded), Eina_Bool expanded);

Eina_Bool _elm_multibuttonentry_expanded_get(Eo *obj, Elm_Multibuttonentry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_multibuttonentry_expanded_get, Eina_Bool, 0);

void _elm_multibuttonentry_format_function_set(Eo *obj, Elm_Multibuttonentry_Data *pd, Elm_Multibuttonentry_Format_Cb format_function, const void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_multibuttonentry_format_function_set, EFL_FUNC_CALL(format_function, data), Elm_Multibuttonentry_Format_Cb format_function, const void *data);

const Eina_List *_elm_multibuttonentry_items_get(Eo *obj, Elm_Multibuttonentry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_multibuttonentry_items_get, const Eina_List *, NULL);

Elm_Widget_Item *_elm_multibuttonentry_first_item_get(Eo *obj, Elm_Multibuttonentry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_multibuttonentry_first_item_get, Elm_Widget_Item *, NULL);

Elm_Widget_Item *_elm_multibuttonentry_last_item_get(Eo *obj, Elm_Multibuttonentry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_multibuttonentry_last_item_get, Elm_Widget_Item *, NULL);

Efl_Canvas_Object *_elm_multibuttonentry_entry_get(Eo *obj, Elm_Multibuttonentry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_multibuttonentry_entry_get, Efl_Canvas_Object *, NULL);

Elm_Widget_Item *_elm_multibuttonentry_selected_item_get(Eo *obj, Elm_Multibuttonentry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_multibuttonentry_selected_item_get, Elm_Widget_Item *, NULL);

Elm_Widget_Item *_elm_multibuttonentry_item_prepend(Eo *obj, Elm_Multibuttonentry_Data *pd, const char *label, Evas_Smart_Cb func, void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_multibuttonentry_item_prepend, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(label, func, data), const char *label, Evas_Smart_Cb func, void *data);

void _elm_multibuttonentry_clear(Eo *obj, Elm_Multibuttonentry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_multibuttonentry_clear);

void _elm_multibuttonentry_item_filter_remove(Eo *obj, Elm_Multibuttonentry_Data *pd, Elm_Multibuttonentry_Item_Filter_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_multibuttonentry_item_filter_remove, EFL_FUNC_CALL(func, data), Elm_Multibuttonentry_Item_Filter_Cb func, void *data);

Elm_Widget_Item *_elm_multibuttonentry_item_insert_before(Eo *obj, Elm_Multibuttonentry_Data *pd, Elm_Widget_Item *before, const char *label, Evas_Smart_Cb func, void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_multibuttonentry_item_insert_before, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(before, label, func, data), Elm_Widget_Item *before, const char *label, Evas_Smart_Cb func, void *data);

Elm_Widget_Item *_elm_multibuttonentry_item_append(Eo *obj, Elm_Multibuttonentry_Data *pd, const char *label, Evas_Smart_Cb func, void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_multibuttonentry_item_append, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(label, func, data), const char *label, Evas_Smart_Cb func, void *data);

void _elm_multibuttonentry_item_filter_prepend(Eo *obj, Elm_Multibuttonentry_Data *pd, Elm_Multibuttonentry_Item_Filter_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_multibuttonentry_item_filter_prepend, EFL_FUNC_CALL(func, data), Elm_Multibuttonentry_Item_Filter_Cb func, void *data);

void _elm_multibuttonentry_item_filter_append(Eo *obj, Elm_Multibuttonentry_Data *pd, Elm_Multibuttonentry_Item_Filter_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_multibuttonentry_item_filter_append, EFL_FUNC_CALL(func, data), Elm_Multibuttonentry_Item_Filter_Cb func, void *data);

Elm_Widget_Item *_elm_multibuttonentry_item_insert_after(Eo *obj, Elm_Multibuttonentry_Data *pd, Elm_Widget_Item *after, const char *label, Evas_Smart_Cb func, void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_multibuttonentry_item_insert_after, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(after, label, func, data), Elm_Widget_Item *after, const char *label, Evas_Smart_Cb func, void *data);

Efl_Object *_elm_multibuttonentry_efl_object_constructor(Eo *obj, Elm_Multibuttonentry_Data *pd);


Elm_Theme_Apply _elm_multibuttonentry_elm_widget_theme_apply(Eo *obj, Elm_Multibuttonentry_Data *pd);


Eina_Bool _elm_multibuttonentry_elm_widget_focus_next_manager_is(Eo *obj, Elm_Multibuttonentry_Data *pd);


Eina_Bool _elm_multibuttonentry_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Multibuttonentry_Data *pd);


void _elm_multibuttonentry_elm_widget_access(Eo *obj, Elm_Multibuttonentry_Data *pd, Eina_Bool acs);


Eina_Bool _elm_multibuttonentry_elm_widget_focus_direction(Eo *obj, Elm_Multibuttonentry_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _elm_multibuttonentry_elm_widget_focus_next(Eo *obj, Elm_Multibuttonentry_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_multibuttonentry_elm_widget_on_focus(Eo *obj, Elm_Multibuttonentry_Data *pd, Elm_Widget_Item *item);


Eina_Bool _elm_multibuttonentry_elm_widget_translate(Eo *obj, Elm_Multibuttonentry_Data *pd);


Eina_Bool _elm_multibuttonentry_elm_widget_widget_event(Eo *obj, Elm_Multibuttonentry_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _elm_multibuttonentry_elm_layout_sizing_eval(Eo *obj, Elm_Multibuttonentry_Data *pd);


Eina_List *_elm_multibuttonentry_elm_interface_atspi_accessible_children_get(Eo *obj, Elm_Multibuttonentry_Data *pd);


Efl_Object *_elm_multibuttonentry_efl_part_part(const Eo *obj, Elm_Multibuttonentry_Data *pd, const char *name);


static Eina_Bool
_elm_multibuttonentry_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_MULTIBUTTONENTRY_EXTRA_OPS
#define ELM_MULTIBUTTONENTRY_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_editable_set, _elm_multibuttonentry_editable_set),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_editable_get, _elm_multibuttonentry_editable_get),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_expanded_set, _elm_multibuttonentry_expanded_set),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_expanded_get, _elm_multibuttonentry_expanded_get),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_format_function_set, _elm_multibuttonentry_format_function_set),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_items_get, _elm_multibuttonentry_items_get),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_first_item_get, _elm_multibuttonentry_first_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_last_item_get, _elm_multibuttonentry_last_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_entry_get, _elm_multibuttonentry_entry_get),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_selected_item_get, _elm_multibuttonentry_selected_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_item_prepend, _elm_multibuttonentry_item_prepend),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_clear, _elm_multibuttonentry_clear),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_item_filter_remove, _elm_multibuttonentry_item_filter_remove),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_item_insert_before, _elm_multibuttonentry_item_insert_before),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_item_append, _elm_multibuttonentry_item_append),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_item_filter_prepend, _elm_multibuttonentry_item_filter_prepend),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_item_filter_append, _elm_multibuttonentry_item_filter_append),
      EFL_OBJECT_OP_FUNC(elm_obj_multibuttonentry_item_insert_after, _elm_multibuttonentry_item_insert_after),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_multibuttonentry_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_multibuttonentry_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_multibuttonentry_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_multibuttonentry_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_multibuttonentry_elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _elm_multibuttonentry_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_multibuttonentry_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _elm_multibuttonentry_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_translate, _elm_multibuttonentry_elm_widget_translate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_multibuttonentry_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_multibuttonentry_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_children_get, _elm_multibuttonentry_elm_interface_atspi_accessible_children_get),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_multibuttonentry_efl_part_part),
      ELM_MULTIBUTTONENTRY_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_MULTIBUTTONENTRY_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_MULTIBUTTONENTRY_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_multibuttonentry_class_desc = {
   EO_VERSION,
   "Elm.Multibuttonentry",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Multibuttonentry_Data),
   _elm_multibuttonentry_class_initializer,
   _elm_multibuttonentry_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_multibuttonentry_class_get, &_elm_multibuttonentry_class_desc, ELM_LAYOUT_CLASS, NULL);

EAPI void
elm_multibuttonentry_editable_set(Elm_Multibuttonentry *obj, Eina_Bool editable)
{
   elm_obj_multibuttonentry_editable_set(obj, editable);
}

EAPI Eina_Bool
elm_multibuttonentry_editable_get(const Elm_Multibuttonentry *obj)
{
   return elm_obj_multibuttonentry_editable_get(obj);
}

EAPI void
elm_multibuttonentry_expanded_set(Elm_Multibuttonentry *obj, Eina_Bool expanded)
{
   elm_obj_multibuttonentry_expanded_set(obj, expanded);
}

EAPI Eina_Bool
elm_multibuttonentry_expanded_get(const Elm_Multibuttonentry *obj)
{
   return elm_obj_multibuttonentry_expanded_get(obj);
}

EAPI void
elm_multibuttonentry_format_function_set(Elm_Multibuttonentry *obj, Elm_Multibuttonentry_Format_Cb format_function, const void *data)
{
   elm_obj_multibuttonentry_format_function_set(obj, format_function, data);
}

EAPI const Eina_List *
elm_multibuttonentry_items_get(const Elm_Multibuttonentry *obj)
{
   return elm_obj_multibuttonentry_items_get(obj);
}

EAPI Elm_Widget_Item *
elm_multibuttonentry_first_item_get(const Elm_Multibuttonentry *obj)
{
   return elm_obj_multibuttonentry_first_item_get(obj);
}

EAPI Elm_Widget_Item *
elm_multibuttonentry_last_item_get(const Elm_Multibuttonentry *obj)
{
   return elm_obj_multibuttonentry_last_item_get(obj);
}

EAPI Efl_Canvas_Object *
elm_multibuttonentry_entry_get(const Elm_Multibuttonentry *obj)
{
   return elm_obj_multibuttonentry_entry_get(obj);
}

EAPI Elm_Widget_Item *
elm_multibuttonentry_selected_item_get(const Elm_Multibuttonentry *obj)
{
   return elm_obj_multibuttonentry_selected_item_get(obj);
}

EAPI Elm_Widget_Item *
elm_multibuttonentry_item_prepend(Elm_Multibuttonentry *obj, const char *label, Evas_Smart_Cb func, void *data)
{
   return elm_obj_multibuttonentry_item_prepend(obj, label, func, data);
}

EAPI void
elm_multibuttonentry_clear(Elm_Multibuttonentry *obj)
{
   elm_obj_multibuttonentry_clear(obj);
}

EAPI void
elm_multibuttonentry_item_filter_remove(Elm_Multibuttonentry *obj, Elm_Multibuttonentry_Item_Filter_Cb func, void *data)
{
   elm_obj_multibuttonentry_item_filter_remove(obj, func, data);
}

EAPI Elm_Widget_Item *
elm_multibuttonentry_item_insert_before(Elm_Multibuttonentry *obj, Elm_Widget_Item *before, const char *label, Evas_Smart_Cb func, void *data)
{
   return elm_obj_multibuttonentry_item_insert_before(obj, before, label, func, data);
}

EAPI Elm_Widget_Item *
elm_multibuttonentry_item_append(Elm_Multibuttonentry *obj, const char *label, Evas_Smart_Cb func, void *data)
{
   return elm_obj_multibuttonentry_item_append(obj, label, func, data);
}

EAPI void
elm_multibuttonentry_item_filter_prepend(Elm_Multibuttonentry *obj, Elm_Multibuttonentry_Item_Filter_Cb func, void *data)
{
   elm_obj_multibuttonentry_item_filter_prepend(obj, func, data);
}

EAPI void
elm_multibuttonentry_item_filter_append(Elm_Multibuttonentry *obj, Elm_Multibuttonentry_Item_Filter_Cb func, void *data)
{
   elm_obj_multibuttonentry_item_filter_append(obj, func, data);
}

EAPI Elm_Widget_Item *
elm_multibuttonentry_item_insert_after(Elm_Multibuttonentry *obj, Elm_Widget_Item *after, const char *label, Evas_Smart_Cb func, void *data)
{
   return elm_obj_multibuttonentry_item_insert_after(obj, after, label, func, data);
}
