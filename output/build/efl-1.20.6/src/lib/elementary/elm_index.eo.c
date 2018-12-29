EWAPI const Efl_Event_Description _ELM_INDEX_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");
EWAPI const Efl_Event_Description _ELM_INDEX_EVENT_DELAY_CHANGED =
   EFL_EVENT_DESCRIPTION("delay,changed");
EWAPI const Efl_Event_Description _ELM_INDEX_EVENT_LEVEL_UP =
   EFL_EVENT_DESCRIPTION("level,up");
EWAPI const Efl_Event_Description _ELM_INDEX_EVENT_LEVEL_DOWN =
   EFL_EVENT_DESCRIPTION("level,down");

void _elm_index_autohide_disabled_set(Eo *obj, Elm_Index_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_index_autohide_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _elm_index_autohide_disabled_get(Eo *obj, Elm_Index_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_index_autohide_disabled_get, Eina_Bool, 0);

void _elm_index_omit_enabled_set(Eo *obj, Elm_Index_Data *pd, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_index_omit_enabled_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);

Eina_Bool _elm_index_omit_enabled_get(Eo *obj, Elm_Index_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_index_omit_enabled_get, Eina_Bool, 0);

void _elm_index_standard_priority_set(Eo *obj, Elm_Index_Data *pd, int priority);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_index_standard_priority_set, EFL_FUNC_CALL(priority), int priority);

int _elm_index_standard_priority_get(Eo *obj, Elm_Index_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_index_standard_priority_get, int, 0);

void _elm_index_delay_change_time_set(Eo *obj, Elm_Index_Data *pd, double dtime);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_index_delay_change_time_set, EFL_FUNC_CALL(dtime), double dtime);

double _elm_index_delay_change_time_get(Eo *obj, Elm_Index_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_index_delay_change_time_get, double, 0);

void _elm_index_indicator_disabled_set(Eo *obj, Elm_Index_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_index_indicator_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _elm_index_indicator_disabled_get(Eo *obj, Elm_Index_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_index_indicator_disabled_get, Eina_Bool, 0);

void _elm_index_item_level_set(Eo *obj, Elm_Index_Data *pd, int level);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_index_item_level_set, EFL_FUNC_CALL(level), int level);

int _elm_index_item_level_get(Eo *obj, Elm_Index_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_index_item_level_get, int, 0);

void _elm_index_level_go(Eo *obj, Elm_Index_Data *pd, int level);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_index_level_go, EFL_FUNC_CALL(level), int level);

Elm_Widget_Item *_elm_index_item_prepend(Eo *obj, Elm_Index_Data *pd, const char *letter, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_index_item_prepend, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(letter, func, data), const char *letter, Evas_Smart_Cb func, const void *data);

void _elm_index_item_clear(Eo *obj, Elm_Index_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_index_item_clear);

Elm_Widget_Item *_elm_index_item_insert_after(Eo *obj, Elm_Index_Data *pd, Elm_Widget_Item *after, const char *letter, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_index_item_insert_after, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(after, letter, func, data), Elm_Widget_Item *after, const char *letter, Evas_Smart_Cb func, const void *data);

Elm_Widget_Item *_elm_index_item_find(Eo *obj, Elm_Index_Data *pd, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_index_item_find, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(data), const void *data);

Elm_Widget_Item *_elm_index_item_insert_before(Eo *obj, Elm_Index_Data *pd, Elm_Widget_Item *before, const char *letter, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_index_item_insert_before, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(before, letter, func, data), Elm_Widget_Item *before, const char *letter, Evas_Smart_Cb func, const void *data);

Elm_Widget_Item *_elm_index_item_append(Eo *obj, Elm_Index_Data *pd, const char *letter, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_index_item_append, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(letter, func, data), const char *letter, Evas_Smart_Cb func, const void *data);

Elm_Widget_Item *_elm_index_selected_item_get(const Eo *obj, Elm_Index_Data *pd, int level);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_index_selected_item_get, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(level), int level);

Elm_Widget_Item *_elm_index_item_sorted_insert(Eo *obj, Elm_Index_Data *pd, const char *letter, Evas_Smart_Cb func, const void *data, Eina_Compare_Cb cmp_func, Eina_Compare_Cb cmp_data_func);

EOAPI EFL_FUNC_BODYV(elm_obj_index_item_sorted_insert, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(letter, func, data, cmp_func, cmp_data_func), const char *letter, Evas_Smart_Cb func, const void *data, Eina_Compare_Cb cmp_func, Eina_Compare_Cb cmp_data_func);

Efl_Object *_elm_index_efl_object_constructor(Eo *obj, Elm_Index_Data *pd);


Elm_Theme_Apply _elm_index_elm_widget_theme_apply(Eo *obj, Elm_Index_Data *pd);


Eina_Bool _elm_index_elm_widget_focus_next_manager_is(Eo *obj, Elm_Index_Data *pd);


Eina_Bool _elm_index_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Index_Data *pd);


void _elm_index_elm_widget_access(Eo *obj, Elm_Index_Data *pd, Eina_Bool acs);


Eina_Bool _elm_index_elm_widget_focus_next(Eo *obj, Elm_Index_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


void _elm_index_efl_orientation_orientation_set(Eo *obj, Elm_Index_Data *pd, Efl_Orient dir);


Efl_Orient _elm_index_efl_orientation_orientation_get(Eo *obj, Elm_Index_Data *pd);


void _elm_index_elm_layout_sizing_eval(Eo *obj, Elm_Index_Data *pd);


Eina_List *_elm_index_elm_interface_atspi_accessible_children_get(Eo *obj, Elm_Index_Data *pd);


static Eina_Bool
_elm_index_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_INDEX_EXTRA_OPS
#define ELM_INDEX_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_index_autohide_disabled_set, _elm_index_autohide_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_index_autohide_disabled_get, _elm_index_autohide_disabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_index_omit_enabled_set, _elm_index_omit_enabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_index_omit_enabled_get, _elm_index_omit_enabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_index_standard_priority_set, _elm_index_standard_priority_set),
      EFL_OBJECT_OP_FUNC(elm_obj_index_standard_priority_get, _elm_index_standard_priority_get),
      EFL_OBJECT_OP_FUNC(elm_obj_index_delay_change_time_set, _elm_index_delay_change_time_set),
      EFL_OBJECT_OP_FUNC(elm_obj_index_delay_change_time_get, _elm_index_delay_change_time_get),
      EFL_OBJECT_OP_FUNC(elm_obj_index_indicator_disabled_set, _elm_index_indicator_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_index_indicator_disabled_get, _elm_index_indicator_disabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_index_item_level_set, _elm_index_item_level_set),
      EFL_OBJECT_OP_FUNC(elm_obj_index_item_level_get, _elm_index_item_level_get),
      EFL_OBJECT_OP_FUNC(elm_obj_index_level_go, _elm_index_level_go),
      EFL_OBJECT_OP_FUNC(elm_obj_index_item_prepend, _elm_index_item_prepend),
      EFL_OBJECT_OP_FUNC(elm_obj_index_item_clear, _elm_index_item_clear),
      EFL_OBJECT_OP_FUNC(elm_obj_index_item_insert_after, _elm_index_item_insert_after),
      EFL_OBJECT_OP_FUNC(elm_obj_index_item_find, _elm_index_item_find),
      EFL_OBJECT_OP_FUNC(elm_obj_index_item_insert_before, _elm_index_item_insert_before),
      EFL_OBJECT_OP_FUNC(elm_obj_index_item_append, _elm_index_item_append),
      EFL_OBJECT_OP_FUNC(elm_obj_index_selected_item_get, _elm_index_selected_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_index_item_sorted_insert, _elm_index_item_sorted_insert),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_index_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_index_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_index_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_index_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_index_elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_index_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(efl_orientation_set, _elm_index_efl_orientation_orientation_set),
      EFL_OBJECT_OP_FUNC(efl_orientation_get, _elm_index_efl_orientation_orientation_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_index_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_children_get, _elm_index_elm_interface_atspi_accessible_children_get),
      ELM_INDEX_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_INDEX_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_INDEX_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_index_class_desc = {
   EO_VERSION,
   "Elm.Index",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Index_Data),
   _elm_index_class_initializer,
   _elm_index_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_index_class_get, &_elm_index_class_desc, ELM_LAYOUT_CLASS, EFL_ORIENTATION_INTERFACE, EFL_UI_CLICKABLE_INTERFACE, EFL_UI_SELECTABLE_INTERFACE, NULL);

EAPI void
elm_index_autohide_disabled_set(Elm_Index *obj, Eina_Bool disabled)
{
   elm_obj_index_autohide_disabled_set(obj, disabled);
}

EAPI Eina_Bool
elm_index_autohide_disabled_get(const Elm_Index *obj)
{
   return elm_obj_index_autohide_disabled_get(obj);
}

EAPI void
elm_index_omit_enabled_set(Elm_Index *obj, Eina_Bool enabled)
{
   elm_obj_index_omit_enabled_set(obj, enabled);
}

EAPI Eina_Bool
elm_index_omit_enabled_get(const Elm_Index *obj)
{
   return elm_obj_index_omit_enabled_get(obj);
}

EAPI void
elm_index_standard_priority_set(Elm_Index *obj, int priority)
{
   elm_obj_index_standard_priority_set(obj, priority);
}

EAPI int
elm_index_standard_priority_get(const Elm_Index *obj)
{
   return elm_obj_index_standard_priority_get(obj);
}

EAPI void
elm_index_delay_change_time_set(Elm_Index *obj, double dtime)
{
   elm_obj_index_delay_change_time_set(obj, dtime);
}

EAPI double
elm_index_delay_change_time_get(const Elm_Index *obj)
{
   return elm_obj_index_delay_change_time_get(obj);
}

EAPI void
elm_index_indicator_disabled_set(Elm_Index *obj, Eina_Bool disabled)
{
   elm_obj_index_indicator_disabled_set(obj, disabled);
}

EAPI Eina_Bool
elm_index_indicator_disabled_get(const Elm_Index *obj)
{
   return elm_obj_index_indicator_disabled_get(obj);
}

EAPI void
elm_index_item_level_set(Elm_Index *obj, int level)
{
   elm_obj_index_item_level_set(obj, level);
}

EAPI int
elm_index_item_level_get(const Elm_Index *obj)
{
   return elm_obj_index_item_level_get(obj);
}

EAPI void
elm_index_level_go(Elm_Index *obj, int level)
{
   elm_obj_index_level_go(obj, level);
}

EAPI Elm_Widget_Item *
elm_index_item_prepend(Elm_Index *obj, const char *letter, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_index_item_prepend(obj, letter, func, data);
}

EAPI void
elm_index_item_clear(Elm_Index *obj)
{
   elm_obj_index_item_clear(obj);
}

EAPI Elm_Widget_Item *
elm_index_item_insert_after(Elm_Index *obj, Elm_Widget_Item *after, const char *letter, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_index_item_insert_after(obj, after, letter, func, data);
}

EAPI Elm_Widget_Item *
elm_index_item_find(Elm_Index *obj, const void *data)
{
   return elm_obj_index_item_find(obj, data);
}

EAPI Elm_Widget_Item *
elm_index_item_insert_before(Elm_Index *obj, Elm_Widget_Item *before, const char *letter, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_index_item_insert_before(obj, before, letter, func, data);
}

EAPI Elm_Widget_Item *
elm_index_item_append(Elm_Index *obj, const char *letter, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_index_item_append(obj, letter, func, data);
}

EAPI Elm_Widget_Item *
elm_index_selected_item_get(const Elm_Index *obj, int level)
{
   return elm_obj_index_selected_item_get(obj, level);
}

EAPI Elm_Widget_Item *
elm_index_item_sorted_insert(Elm_Index *obj, const char *letter, Evas_Smart_Cb func, const void *data, Eina_Compare_Cb cmp_func, Eina_Compare_Cb cmp_data_func)
{
   return elm_obj_index_item_sorted_insert(obj, letter, func, data, cmp_func, cmp_data_func);
}
