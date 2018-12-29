EWAPI const Efl_Event_Description _EFL_UI_SLIDER_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");
EWAPI const Efl_Event_Description _EFL_UI_SLIDER_EVENT_DELAY_CHANGED =
   EFL_EVENT_DESCRIPTION("delay,changed");
EWAPI const Efl_Event_Description _EFL_UI_SLIDER_EVENT_SLIDER_DRAG_START =
   EFL_EVENT_DESCRIPTION("slider,drag,start");
EWAPI const Efl_Event_Description _EFL_UI_SLIDER_EVENT_SLIDER_DRAG_STOP =
   EFL_EVENT_DESCRIPTION("slider,drag,stop");

void _efl_ui_slider_indicator_format_set(Eo *obj, Efl_Ui_Slider_Data *pd, const char *indicator);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_slider_indicator_format_set, EFL_FUNC_CALL(indicator), const char *indicator);

const char *_efl_ui_slider_indicator_format_get(Eo *obj, Efl_Ui_Slider_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_slider_indicator_format_get, const char *, NULL);

void _efl_ui_slider_indicator_show_set(Eo *obj, Efl_Ui_Slider_Data *pd, Eina_Bool show);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_slider_indicator_show_set, EFL_FUNC_CALL(show), Eina_Bool show);

Eina_Bool _efl_ui_slider_indicator_show_get(Eo *obj, Efl_Ui_Slider_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_slider_indicator_show_get, Eina_Bool, 0);

void _efl_ui_slider_indicator_show_on_focus_set(Eo *obj, Efl_Ui_Slider_Data *pd, Eina_Bool flag);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_slider_indicator_show_on_focus_set, EFL_FUNC_CALL(flag), Eina_Bool flag);

Eina_Bool _efl_ui_slider_indicator_show_on_focus_get(Eo *obj, Efl_Ui_Slider_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_slider_indicator_show_on_focus_get, Eina_Bool, 0);

void _efl_ui_slider_step_set(Eo *obj, Efl_Ui_Slider_Data *pd, double step);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_slider_step_set, EFL_FUNC_CALL(step), double step);

double _efl_ui_slider_step_get(Eo *obj, Efl_Ui_Slider_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_slider_step_get, double, 0);

void _efl_ui_slider_indicator_visible_mode_set(Eo *obj, Efl_Ui_Slider_Data *pd, Efl_Ui_Slider_Indicator_Visible_Mode indicator_visible_mode);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_slider_indicator_visible_mode_set, EFL_FUNC_CALL(indicator_visible_mode), Efl_Ui_Slider_Indicator_Visible_Mode indicator_visible_mode);

Efl_Ui_Slider_Indicator_Visible_Mode _efl_ui_slider_indicator_visible_mode_get(Eo *obj, Efl_Ui_Slider_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_slider_indicator_visible_mode_get, Efl_Ui_Slider_Indicator_Visible_Mode, 0);

void _efl_ui_slider_indicator_format_function_set(Eo *obj, Efl_Ui_Slider_Data *pd, slider_func_type func, slider_freefunc_type free_func);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_slider_indicator_format_function_set, EFL_FUNC_CALL(func, free_func), slider_func_type func, slider_freefunc_type free_func);

Efl_Object *_efl_ui_slider_efl_object_constructor(Eo *obj, Efl_Ui_Slider_Data *pd);


void _efl_ui_slider_efl_canvas_group_group_calculate(Eo *obj, Efl_Ui_Slider_Data *pd);


Elm_Theme_Apply _efl_ui_slider_elm_widget_theme_apply(Eo *obj, Efl_Ui_Slider_Data *pd);


Eina_Bool _efl_ui_slider_elm_widget_activate(Eo *obj, Efl_Ui_Slider_Data *pd, Elm_Activate act);


Eina_Bool _efl_ui_slider_elm_widget_focus_next_manager_is(Eo *obj, Efl_Ui_Slider_Data *pd);


Eina_Bool _efl_ui_slider_elm_widget_focus_direction_manager_is(Eo *obj, Efl_Ui_Slider_Data *pd);


Eina_Bool _efl_ui_slider_elm_widget_on_focus(Eo *obj, Efl_Ui_Slider_Data *pd, Elm_Widget_Item *item);


Eina_Bool _efl_ui_slider_elm_widget_widget_event(Eo *obj, Efl_Ui_Slider_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


const Elm_Layout_Part_Alias_Description *_efl_ui_slider_elm_layout_text_aliases_get(Eo *obj, Efl_Ui_Slider_Data *pd);


const Elm_Layout_Part_Alias_Description *_efl_ui_slider_elm_layout_content_aliases_get(Eo *obj, Efl_Ui_Slider_Data *pd);


void _efl_ui_slider_elm_layout_sizing_eval(Eo *obj, Efl_Ui_Slider_Data *pd);


void _efl_ui_slider_efl_ui_range_span_size_set(Eo *obj, Efl_Ui_Slider_Data *pd, int size);


int _efl_ui_slider_efl_ui_range_span_size_get(Eo *obj, Efl_Ui_Slider_Data *pd);


void _efl_ui_slider_efl_ui_range_range_value_set(Eo *obj, Efl_Ui_Slider_Data *pd, double val);


double _efl_ui_slider_efl_ui_range_range_value_get(Eo *obj, Efl_Ui_Slider_Data *pd);


void _efl_ui_slider_efl_ui_range_range_unit_format_set(Eo *obj, Efl_Ui_Slider_Data *pd, const char *units);


const char *_efl_ui_slider_efl_ui_range_range_unit_format_get(Eo *obj, Efl_Ui_Slider_Data *pd);


void _efl_ui_slider_efl_ui_range_range_min_max_set(Eo *obj, Efl_Ui_Slider_Data *pd, double min, double max);


void _efl_ui_slider_efl_ui_range_range_min_max_get(Eo *obj, Efl_Ui_Slider_Data *pd, double *min, double *max);


void _efl_ui_slider_efl_ui_range_range_interval_enabled_set(Eo *obj, Efl_Ui_Slider_Data *pd, Eina_Bool enable);


Eina_Bool _efl_ui_slider_efl_ui_range_range_interval_enabled_get(Eo *obj, Efl_Ui_Slider_Data *pd);


void _efl_ui_slider_efl_ui_range_range_interval_set(Eo *obj, Efl_Ui_Slider_Data *pd, double from, double to);


void _efl_ui_slider_efl_ui_range_range_interval_get(Eo *obj, Efl_Ui_Slider_Data *pd, double *from, double *to);


void _efl_ui_slider_efl_orientation_orientation_set(Eo *obj, Efl_Ui_Slider_Data *pd, Efl_Orient dir);


Efl_Orient _efl_ui_slider_efl_orientation_orientation_get(Eo *obj, Efl_Ui_Slider_Data *pd);


Eina_Bool _efl_ui_slider_elm_interface_atspi_value_value_and_text_set(Eo *obj, Efl_Ui_Slider_Data *pd, double value, const char *text);


void _efl_ui_slider_elm_interface_atspi_value_value_and_text_get(Eo *obj, Efl_Ui_Slider_Data *pd, double *value, const char **text);


void _efl_ui_slider_elm_interface_atspi_value_range_get(Eo *obj, Efl_Ui_Slider_Data *pd, double *lower_limit, double *upper_limit, const char **description);


double _efl_ui_slider_elm_interface_atspi_value_increment_get(Eo *obj, Efl_Ui_Slider_Data *pd);


const Elm_Atspi_Action *_efl_ui_slider_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Efl_Ui_Slider_Data *pd);


Efl_Object *_efl_ui_slider_efl_part_part(const Eo *obj, Efl_Ui_Slider_Data *pd, const char *name);


static Eina_Bool
_efl_ui_slider_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_SLIDER_EXTRA_OPS
#define EFL_UI_SLIDER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_slider_indicator_format_set, _efl_ui_slider_indicator_format_set),
      EFL_OBJECT_OP_FUNC(efl_ui_slider_indicator_format_get, _efl_ui_slider_indicator_format_get),
      EFL_OBJECT_OP_FUNC(efl_ui_slider_indicator_show_set, _efl_ui_slider_indicator_show_set),
      EFL_OBJECT_OP_FUNC(efl_ui_slider_indicator_show_get, _efl_ui_slider_indicator_show_get),
      EFL_OBJECT_OP_FUNC(efl_ui_slider_indicator_show_on_focus_set, _efl_ui_slider_indicator_show_on_focus_set),
      EFL_OBJECT_OP_FUNC(efl_ui_slider_indicator_show_on_focus_get, _efl_ui_slider_indicator_show_on_focus_get),
      EFL_OBJECT_OP_FUNC(efl_ui_slider_step_set, _efl_ui_slider_step_set),
      EFL_OBJECT_OP_FUNC(efl_ui_slider_step_get, _efl_ui_slider_step_get),
      EFL_OBJECT_OP_FUNC(efl_ui_slider_indicator_visible_mode_set, _efl_ui_slider_indicator_visible_mode_set),
      EFL_OBJECT_OP_FUNC(efl_ui_slider_indicator_visible_mode_get, _efl_ui_slider_indicator_visible_mode_get),
      EFL_OBJECT_OP_FUNC(efl_ui_slider_indicator_format_function_set, _efl_ui_slider_indicator_format_function_set),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_slider_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _efl_ui_slider_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _efl_ui_slider_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_activate, _efl_ui_slider_elm_widget_activate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _efl_ui_slider_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _efl_ui_slider_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _efl_ui_slider_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _efl_ui_slider_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_text_aliases_get, _efl_ui_slider_elm_layout_text_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_content_aliases_get, _efl_ui_slider_elm_layout_content_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _efl_ui_slider_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(efl_ui_range_span_size_set, _efl_ui_slider_efl_ui_range_span_size_set),
      EFL_OBJECT_OP_FUNC(efl_ui_range_span_size_get, _efl_ui_slider_efl_ui_range_span_size_get),
      EFL_OBJECT_OP_FUNC(efl_ui_range_value_set, _efl_ui_slider_efl_ui_range_range_value_set),
      EFL_OBJECT_OP_FUNC(efl_ui_range_value_get, _efl_ui_slider_efl_ui_range_range_value_get),
      EFL_OBJECT_OP_FUNC(efl_ui_range_unit_format_set, _efl_ui_slider_efl_ui_range_range_unit_format_set),
      EFL_OBJECT_OP_FUNC(efl_ui_range_unit_format_get, _efl_ui_slider_efl_ui_range_range_unit_format_get),
      EFL_OBJECT_OP_FUNC(efl_ui_range_min_max_set, _efl_ui_slider_efl_ui_range_range_min_max_set),
      EFL_OBJECT_OP_FUNC(efl_ui_range_min_max_get, _efl_ui_slider_efl_ui_range_range_min_max_get),
      EFL_OBJECT_OP_FUNC(efl_ui_range_interval_enabled_set, _efl_ui_slider_efl_ui_range_range_interval_enabled_set),
      EFL_OBJECT_OP_FUNC(efl_ui_range_interval_enabled_get, _efl_ui_slider_efl_ui_range_range_interval_enabled_get),
      EFL_OBJECT_OP_FUNC(efl_ui_range_interval_set, _efl_ui_slider_efl_ui_range_range_interval_set),
      EFL_OBJECT_OP_FUNC(efl_ui_range_interval_get, _efl_ui_slider_efl_ui_range_range_interval_get),
      EFL_OBJECT_OP_FUNC(efl_orientation_set, _efl_ui_slider_efl_orientation_orientation_set),
      EFL_OBJECT_OP_FUNC(efl_orientation_get, _efl_ui_slider_efl_orientation_orientation_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_value_and_text_set, _efl_ui_slider_elm_interface_atspi_value_value_and_text_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_value_and_text_get, _efl_ui_slider_elm_interface_atspi_value_value_and_text_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_value_range_get, _efl_ui_slider_elm_interface_atspi_value_range_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_value_increment_get, _efl_ui_slider_elm_interface_atspi_value_increment_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _efl_ui_slider_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(efl_part, _efl_ui_slider_efl_part_part),
      EFL_UI_SLIDER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_SLIDER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_SLIDER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_slider_class_desc = {
   EO_VERSION,
   "Efl.Ui.Slider",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Slider_Data),
   _efl_ui_slider_class_initializer,
   _efl_ui_slider_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_slider_class_get, &_efl_ui_slider_class_desc, ELM_LAYOUT_CLASS, EFL_UI_RANGE_INTERFACE, EFL_ORIENTATION_INTERFACE, ELM_INTERFACE_ATSPI_VALUE_INTERFACE, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);

EAPI void
elm_slider_indicator_format_set(Efl_Ui_Slider *obj, const char *indicator)
{
   efl_ui_slider_indicator_format_set(obj, indicator);
}

EAPI const char *
elm_slider_indicator_format_get(const Efl_Ui_Slider *obj)
{
   return efl_ui_slider_indicator_format_get(obj);
}

EAPI void
elm_slider_indicator_show_set(Efl_Ui_Slider *obj, Eina_Bool show)
{
   efl_ui_slider_indicator_show_set(obj, show);
}

EAPI Eina_Bool
elm_slider_indicator_show_get(const Efl_Ui_Slider *obj)
{
   return efl_ui_slider_indicator_show_get(obj);
}

EAPI void
elm_slider_indicator_show_on_focus_set(Efl_Ui_Slider *obj, Eina_Bool flag)
{
   efl_ui_slider_indicator_show_on_focus_set(obj, flag);
}

EAPI Eina_Bool
elm_slider_indicator_show_on_focus_get(const Efl_Ui_Slider *obj)
{
   return efl_ui_slider_indicator_show_on_focus_get(obj);
}

EAPI void
elm_slider_step_set(Efl_Ui_Slider *obj, double step)
{
   efl_ui_slider_step_set(obj, step);
}

EAPI double
elm_slider_step_get(const Efl_Ui_Slider *obj)
{
   return efl_ui_slider_step_get(obj);
}

EAPI void
elm_slider_indicator_visible_mode_set(Efl_Ui_Slider *obj, Efl_Ui_Slider_Indicator_Visible_Mode indicator_visible_mode)
{
   efl_ui_slider_indicator_visible_mode_set(obj, indicator_visible_mode);
}

EAPI Efl_Ui_Slider_Indicator_Visible_Mode
elm_slider_indicator_visible_mode_get(const Efl_Ui_Slider *obj)
{
   return efl_ui_slider_indicator_visible_mode_get(obj);
}

EAPI void
elm_slider_indicator_format_function_set(Efl_Ui_Slider *obj, slider_func_type func, slider_freefunc_type free_func)
{
   efl_ui_slider_indicator_format_function_set(obj, func, free_func);
}
