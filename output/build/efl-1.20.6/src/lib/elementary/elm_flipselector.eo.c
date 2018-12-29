EWAPI const Efl_Event_Description _ELM_FLIPSELECTOR_EVENT_UNDERFLOWED =
   EFL_EVENT_DESCRIPTION("underflowed");
EWAPI const Efl_Event_Description _ELM_FLIPSELECTOR_EVENT_OVERFLOWED =
   EFL_EVENT_DESCRIPTION("overflowed");

const Eina_List *_elm_flipselector_items_get(Eo *obj, Elm_Flipselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_flipselector_items_get, const Eina_List *, NULL);

Elm_Widget_Item *_elm_flipselector_first_item_get(Eo *obj, Elm_Flipselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_flipselector_first_item_get, Elm_Widget_Item *, NULL);

Elm_Widget_Item *_elm_flipselector_last_item_get(Eo *obj, Elm_Flipselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_flipselector_last_item_get, Elm_Widget_Item *, NULL);

Elm_Widget_Item *_elm_flipselector_selected_item_get(Eo *obj, Elm_Flipselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_flipselector_selected_item_get, Elm_Widget_Item *, NULL);

Elm_Widget_Item *_elm_flipselector_item_prepend(Eo *obj, Elm_Flipselector_Data *pd, const char *label, Evas_Smart_Cb func, void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_flipselector_item_prepend, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(label, func, data), const char *label, Evas_Smart_Cb func, void *data);

void _elm_flipselector_flip_next(Eo *obj, Elm_Flipselector_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_flipselector_flip_next);

Elm_Widget_Item *_elm_flipselector_item_append(Eo *obj, Elm_Flipselector_Data *pd, const char *label, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_flipselector_item_append, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(label, func, data), const char *label, Evas_Smart_Cb func, const void *data);

void _elm_flipselector_flip_prev(Eo *obj, Elm_Flipselector_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_flipselector_flip_prev);

Efl_Object *_elm_flipselector_efl_object_constructor(Eo *obj, Elm_Flipselector_Data *pd);


Elm_Theme_Apply _elm_flipselector_elm_widget_theme_apply(Eo *obj, Elm_Flipselector_Data *pd);


Eina_Bool _elm_flipselector_elm_widget_focus_next_manager_is(Eo *obj, Elm_Flipselector_Data *pd);


Eina_Bool _elm_flipselector_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Flipselector_Data *pd);


Eina_Bool _elm_flipselector_elm_widget_widget_event(Eo *obj, Elm_Flipselector_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _elm_flipselector_elm_layout_sizing_eval(Eo *obj, Elm_Flipselector_Data *pd);


void _elm_flipselector_efl_ui_spin_min_max_set(Eo *obj, Elm_Flipselector_Data *pd, double min, double max);


void _elm_flipselector_efl_ui_spin_min_max_get(Eo *obj, Elm_Flipselector_Data *pd, double *min, double *max);


void _elm_flipselector_efl_ui_spin_step_set(Eo *obj, Elm_Flipselector_Data *pd, double step);


double _elm_flipselector_efl_ui_spin_step_get(Eo *obj, Elm_Flipselector_Data *pd);


void _elm_flipselector_efl_ui_spin_value_set(Eo *obj, Elm_Flipselector_Data *pd, double val);


double _elm_flipselector_efl_ui_spin_value_get(Eo *obj, Elm_Flipselector_Data *pd);


void _elm_flipselector_efl_ui_spin_interval_set(Eo *obj, Elm_Flipselector_Data *pd, double interval);


double _elm_flipselector_efl_ui_spin_interval_get(Eo *obj, Elm_Flipselector_Data *pd);


const Elm_Atspi_Action *_elm_flipselector_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Flipselector_Data *pd);


static Eina_Bool
_elm_flipselector_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_FLIPSELECTOR_EXTRA_OPS
#define ELM_FLIPSELECTOR_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_flipselector_items_get, _elm_flipselector_items_get),
      EFL_OBJECT_OP_FUNC(elm_obj_flipselector_first_item_get, _elm_flipselector_first_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_flipselector_last_item_get, _elm_flipselector_last_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_flipselector_selected_item_get, _elm_flipselector_selected_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_flipselector_item_prepend, _elm_flipselector_item_prepend),
      EFL_OBJECT_OP_FUNC(elm_obj_flipselector_flip_next, _elm_flipselector_flip_next),
      EFL_OBJECT_OP_FUNC(elm_obj_flipselector_item_append, _elm_flipselector_item_append),
      EFL_OBJECT_OP_FUNC(elm_obj_flipselector_flip_prev, _elm_flipselector_flip_prev),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_flipselector_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_flipselector_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_flipselector_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_flipselector_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_flipselector_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_flipselector_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_min_max_set, _elm_flipselector_efl_ui_spin_min_max_set),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_min_max_get, _elm_flipselector_efl_ui_spin_min_max_get),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_step_set, _elm_flipselector_efl_ui_spin_step_set),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_step_get, _elm_flipselector_efl_ui_spin_step_get),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_value_set, _elm_flipselector_efl_ui_spin_value_set),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_value_get, _elm_flipselector_efl_ui_spin_value_get),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_interval_set, _elm_flipselector_efl_ui_spin_interval_set),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_interval_get, _elm_flipselector_efl_ui_spin_interval_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_flipselector_elm_interface_atspi_widget_action_elm_actions_get),
      ELM_FLIPSELECTOR_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_FLIPSELECTOR_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_FLIPSELECTOR_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_flipselector_class_desc = {
   EO_VERSION,
   "Elm.Flipselector",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Flipselector_Data),
   _elm_flipselector_class_initializer,
   _elm_flipselector_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_flipselector_class_get, &_elm_flipselector_class_desc, ELM_LAYOUT_CLASS, EFL_UI_SPIN_INTERFACE, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, EFL_UI_SELECTABLE_INTERFACE, NULL);

EAPI const Eina_List *
elm_flipselector_items_get(const Elm_Flipselector *obj)
{
   return elm_obj_flipselector_items_get(obj);
}

EAPI Elm_Widget_Item *
elm_flipselector_first_item_get(const Elm_Flipselector *obj)
{
   return elm_obj_flipselector_first_item_get(obj);
}

EAPI Elm_Widget_Item *
elm_flipselector_last_item_get(const Elm_Flipselector *obj)
{
   return elm_obj_flipselector_last_item_get(obj);
}

EAPI Elm_Widget_Item *
elm_flipselector_selected_item_get(const Elm_Flipselector *obj)
{
   return elm_obj_flipselector_selected_item_get(obj);
}

EAPI Elm_Widget_Item *
elm_flipselector_item_prepend(Elm_Flipselector *obj, const char *label, Evas_Smart_Cb func, void *data)
{
   return elm_obj_flipselector_item_prepend(obj, label, func, data);
}

EAPI void
elm_flipselector_flip_next(Elm_Flipselector *obj)
{
   elm_obj_flipselector_flip_next(obj);
}

EAPI Elm_Widget_Item *
elm_flipselector_item_append(Elm_Flipselector *obj, const char *label, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_flipselector_item_append(obj, label, func, data);
}

EAPI void
elm_flipselector_flip_prev(Elm_Flipselector *obj)
{
   elm_obj_flipselector_flip_prev(obj);
}
