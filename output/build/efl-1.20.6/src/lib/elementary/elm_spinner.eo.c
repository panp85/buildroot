EWAPI const Efl_Event_Description _ELM_SPINNER_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");
EWAPI const Efl_Event_Description _ELM_SPINNER_EVENT_DELAY_CHANGED =
   EFL_EVENT_DESCRIPTION("delay,changed");
EWAPI const Efl_Event_Description _ELM_SPINNER_EVENT_SPINNER_DRAG_START =
   EFL_EVENT_DESCRIPTION("spinner,drag,start");
EWAPI const Efl_Event_Description _ELM_SPINNER_EVENT_SPINNER_DRAG_STOP =
   EFL_EVENT_DESCRIPTION("spinner,drag,stop");
EWAPI const Efl_Event_Description _ELM_SPINNER_EVENT_MIN_REACHED =
   EFL_EVENT_DESCRIPTION("min,reached");
EWAPI const Efl_Event_Description _ELM_SPINNER_EVENT_MAX_REACHED =
   EFL_EVENT_DESCRIPTION("max,reached");

void _elm_spinner_wrap_set(Eo *obj, Elm_Spinner_Data *pd, Eina_Bool wrap);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_spinner_wrap_set, EFL_FUNC_CALL(wrap), Eina_Bool wrap);

Eina_Bool _elm_spinner_wrap_get(Eo *obj, Elm_Spinner_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_spinner_wrap_get, Eina_Bool, 0);

void _elm_spinner_round_set(Eo *obj, Elm_Spinner_Data *pd, int rnd);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_spinner_round_set, EFL_FUNC_CALL(rnd), int rnd);

int _elm_spinner_round_get(Eo *obj, Elm_Spinner_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_spinner_round_get, int, 0);

void _elm_spinner_editable_set(Eo *obj, Elm_Spinner_Data *pd, Eina_Bool editable);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_spinner_editable_set, EFL_FUNC_CALL(editable), Eina_Bool editable);

Eina_Bool _elm_spinner_editable_get(Eo *obj, Elm_Spinner_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_spinner_editable_get, Eina_Bool, 0);

void _elm_spinner_base_set(Eo *obj, Elm_Spinner_Data *pd, double base);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_spinner_base_set, EFL_FUNC_CALL(base), double base);

double _elm_spinner_base_get(Eo *obj, Elm_Spinner_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_spinner_base_get, double, 0);

void _elm_spinner_label_format_set(Eo *obj, Elm_Spinner_Data *pd, const char *fmt);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_spinner_label_format_set, EFL_FUNC_CALL(fmt), const char *fmt);

const char *_elm_spinner_label_format_get(Eo *obj, Elm_Spinner_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_spinner_label_format_get, const char *, NULL);

void _elm_spinner_special_value_add(Eo *obj, Elm_Spinner_Data *pd, double value, const char *label);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_spinner_special_value_add, EFL_FUNC_CALL(value, label), double value, const char *label);

Efl_Object *_elm_spinner_efl_object_constructor(Eo *obj, Elm_Spinner_Data *pd);


Elm_Theme_Apply _elm_spinner_elm_widget_theme_apply(Eo *obj, Elm_Spinner_Data *pd);


Eina_Bool _elm_spinner_elm_widget_focus_next_manager_is(Eo *obj, Elm_Spinner_Data *pd);


Eina_Bool _elm_spinner_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Spinner_Data *pd);


void _elm_spinner_elm_widget_access(Eo *obj, Elm_Spinner_Data *pd, Eina_Bool acs);


Eina_Bool _elm_spinner_elm_widget_focus_next(Eo *obj, Elm_Spinner_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_spinner_elm_widget_focus_direction(Eo *obj, Elm_Spinner_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _elm_spinner_elm_widget_on_focus(Eo *obj, Elm_Spinner_Data *pd, Elm_Widget_Item *item);


Eina_Bool _elm_spinner_elm_widget_widget_event(Eo *obj, Elm_Spinner_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _elm_spinner_elm_layout_sizing_eval(Eo *obj, Elm_Spinner_Data *pd);


void _elm_spinner_efl_ui_spin_min_max_set(Eo *obj, Elm_Spinner_Data *pd, double min, double max);


void _elm_spinner_efl_ui_spin_min_max_get(Eo *obj, Elm_Spinner_Data *pd, double *min, double *max);


void _elm_spinner_efl_ui_spin_step_set(Eo *obj, Elm_Spinner_Data *pd, double step);


double _elm_spinner_efl_ui_spin_step_get(Eo *obj, Elm_Spinner_Data *pd);


void _elm_spinner_efl_ui_spin_value_set(Eo *obj, Elm_Spinner_Data *pd, double val);


double _elm_spinner_efl_ui_spin_value_get(Eo *obj, Elm_Spinner_Data *pd);


void _elm_spinner_efl_ui_spin_interval_set(Eo *obj, Elm_Spinner_Data *pd, double interval);


double _elm_spinner_efl_ui_spin_interval_get(Eo *obj, Elm_Spinner_Data *pd);


const char *_elm_spinner_elm_interface_atspi_accessible_name_get(Eo *obj, Elm_Spinner_Data *pd);


Eina_Bool _elm_spinner_elm_interface_atspi_value_value_and_text_set(Eo *obj, Elm_Spinner_Data *pd, double value, const char *text);


void _elm_spinner_elm_interface_atspi_value_value_and_text_get(Eo *obj, Elm_Spinner_Data *pd, double *value, const char **text);


void _elm_spinner_elm_interface_atspi_value_range_get(Eo *obj, Elm_Spinner_Data *pd, double *lower_limit, double *upper_limit, const char **description);


double _elm_spinner_elm_interface_atspi_value_increment_get(Eo *obj, Elm_Spinner_Data *pd);


const Elm_Atspi_Action *_elm_spinner_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Spinner_Data *pd);


static Eina_Bool
_elm_spinner_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_SPINNER_EXTRA_OPS
#define ELM_SPINNER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_spinner_wrap_set, _elm_spinner_wrap_set),
      EFL_OBJECT_OP_FUNC(elm_obj_spinner_wrap_get, _elm_spinner_wrap_get),
      EFL_OBJECT_OP_FUNC(elm_obj_spinner_round_set, _elm_spinner_round_set),
      EFL_OBJECT_OP_FUNC(elm_obj_spinner_round_get, _elm_spinner_round_get),
      EFL_OBJECT_OP_FUNC(elm_obj_spinner_editable_set, _elm_spinner_editable_set),
      EFL_OBJECT_OP_FUNC(elm_obj_spinner_editable_get, _elm_spinner_editable_get),
      EFL_OBJECT_OP_FUNC(elm_obj_spinner_base_set, _elm_spinner_base_set),
      EFL_OBJECT_OP_FUNC(elm_obj_spinner_base_get, _elm_spinner_base_get),
      EFL_OBJECT_OP_FUNC(elm_obj_spinner_label_format_set, _elm_spinner_label_format_set),
      EFL_OBJECT_OP_FUNC(elm_obj_spinner_label_format_get, _elm_spinner_label_format_get),
      EFL_OBJECT_OP_FUNC(elm_obj_spinner_special_value_add, _elm_spinner_special_value_add),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_spinner_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_spinner_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_spinner_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_spinner_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_spinner_elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_spinner_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _elm_spinner_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _elm_spinner_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_spinner_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_spinner_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_min_max_set, _elm_spinner_efl_ui_spin_min_max_set),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_min_max_get, _elm_spinner_efl_ui_spin_min_max_get),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_step_set, _elm_spinner_efl_ui_spin_step_set),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_step_get, _elm_spinner_efl_ui_spin_step_get),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_value_set, _elm_spinner_efl_ui_spin_value_set),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_value_get, _elm_spinner_efl_ui_spin_value_get),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_interval_set, _elm_spinner_efl_ui_spin_interval_set),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_interval_get, _elm_spinner_efl_ui_spin_interval_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_name_get, _elm_spinner_elm_interface_atspi_accessible_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_value_and_text_set, _elm_spinner_elm_interface_atspi_value_value_and_text_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_value_and_text_get, _elm_spinner_elm_interface_atspi_value_value_and_text_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_value_range_get, _elm_spinner_elm_interface_atspi_value_range_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_value_increment_get, _elm_spinner_elm_interface_atspi_value_increment_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_spinner_elm_interface_atspi_widget_action_elm_actions_get),
      ELM_SPINNER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_SPINNER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_SPINNER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_spinner_class_desc = {
   EO_VERSION,
   "Elm.Spinner",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Spinner_Data),
   _elm_spinner_class_initializer,
   _elm_spinner_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_spinner_class_get, &_elm_spinner_class_desc, ELM_LAYOUT_CLASS, EFL_UI_SPIN_INTERFACE, ELM_INTERFACE_ATSPI_VALUE_INTERFACE, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);

EAPI void
elm_spinner_wrap_set(Elm_Spinner *obj, Eina_Bool wrap)
{
   elm_obj_spinner_wrap_set(obj, wrap);
}

EAPI Eina_Bool
elm_spinner_wrap_get(const Elm_Spinner *obj)
{
   return elm_obj_spinner_wrap_get(obj);
}

EAPI void
elm_spinner_round_set(Elm_Spinner *obj, int rnd)
{
   elm_obj_spinner_round_set(obj, rnd);
}

EAPI int
elm_spinner_round_get(const Elm_Spinner *obj)
{
   return elm_obj_spinner_round_get(obj);
}

EAPI void
elm_spinner_editable_set(Elm_Spinner *obj, Eina_Bool editable)
{
   elm_obj_spinner_editable_set(obj, editable);
}

EAPI Eina_Bool
elm_spinner_editable_get(const Elm_Spinner *obj)
{
   return elm_obj_spinner_editable_get(obj);
}

EAPI void
elm_spinner_base_set(Elm_Spinner *obj, double base)
{
   elm_obj_spinner_base_set(obj, base);
}

EAPI double
elm_spinner_base_get(const Elm_Spinner *obj)
{
   return elm_obj_spinner_base_get(obj);
}

EAPI void
elm_spinner_label_format_set(Elm_Spinner *obj, const char *fmt)
{
   elm_obj_spinner_label_format_set(obj, fmt);
}

EAPI const char *
elm_spinner_label_format_get(const Elm_Spinner *obj)
{
   return elm_obj_spinner_label_format_get(obj);
}

EAPI void
elm_spinner_special_value_add(Elm_Spinner *obj, double value, const char *label)
{
   elm_obj_spinner_special_value_add(obj, value, label);
}
