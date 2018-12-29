EWAPI const Efl_Event_Description _ELM_CALENDAR_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");
EWAPI const Efl_Event_Description _ELM_CALENDAR_EVENT_DISPLAY_CHANGED =
   EFL_EVENT_DESCRIPTION("display,changed");

void _elm_calendar_first_day_of_week_set(Eo *obj, Elm_Calendar_Data *pd, Elm_Calendar_Weekday day);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_calendar_first_day_of_week_set, EFL_FUNC_CALL(day), Elm_Calendar_Weekday day);

Elm_Calendar_Weekday _elm_calendar_first_day_of_week_get(Eo *obj, Elm_Calendar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_calendar_first_day_of_week_get, Elm_Calendar_Weekday, 0);

void _elm_calendar_selectable_set(Eo *obj, Elm_Calendar_Data *pd, Elm_Calendar_Selectable selectable);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_calendar_selectable_set, EFL_FUNC_CALL(selectable), Elm_Calendar_Selectable selectable);

Elm_Calendar_Selectable _elm_calendar_selectable_get(Eo *obj, Elm_Calendar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_calendar_selectable_get, Elm_Calendar_Selectable, 0);

void _elm_calendar_interval_set(Eo *obj, Elm_Calendar_Data *pd, double interval);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_calendar_interval_set, EFL_FUNC_CALL(interval), double interval);

double _elm_calendar_interval_get(Eo *obj, Elm_Calendar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_calendar_interval_get, double, 0);

void _elm_calendar_weekdays_names_set(Eo *obj, Elm_Calendar_Data *pd, const char **weekdays);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_calendar_weekdays_names_set, EFL_FUNC_CALL(weekdays), const char **weekdays);

const char **_elm_calendar_weekdays_names_get(Eo *obj, Elm_Calendar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_calendar_weekdays_names_get, const char **, NULL);

void _elm_calendar_select_mode_set(Eo *obj, Elm_Calendar_Data *pd, Elm_Calendar_Select_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_calendar_select_mode_set, EFL_FUNC_CALL(mode), Elm_Calendar_Select_Mode mode);

Elm_Calendar_Select_Mode _elm_calendar_select_mode_get(Eo *obj, Elm_Calendar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_calendar_select_mode_get, Elm_Calendar_Select_Mode, 0);

void _elm_calendar_format_function_set(Eo *obj, Elm_Calendar_Data *pd, Elm_Calendar_Format_Cb format_function);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_calendar_format_function_set, EFL_FUNC_CALL(format_function), Elm_Calendar_Format_Cb format_function);

const Eina_List *_elm_calendar_marks_get(Eo *obj, Elm_Calendar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_calendar_marks_get, const Eina_List *, NULL);

void _elm_calendar_date_min_set(Eo *obj, Elm_Calendar_Data *pd, const Efl_Time *min);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_calendar_date_min_set, EFL_FUNC_CALL(min), const Efl_Time *min);

const Efl_Time *_elm_calendar_date_min_get(Eo *obj, Elm_Calendar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_calendar_date_min_get, const Efl_Time *, NULL);

void _elm_calendar_date_max_set(Eo *obj, Elm_Calendar_Data *pd, const Efl_Time *max);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_calendar_date_max_set, EFL_FUNC_CALL(max), const Efl_Time *max);

const Efl_Time *_elm_calendar_date_max_get(Eo *obj, Elm_Calendar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_calendar_date_max_get, const Efl_Time *, NULL);

void _elm_calendar_selected_time_set(Eo *obj, Elm_Calendar_Data *pd, Efl_Time *selected_time);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_calendar_selected_time_set, EFL_FUNC_CALL(selected_time), Efl_Time *selected_time);

Eina_Bool _elm_calendar_selected_time_get(const Eo *obj, Elm_Calendar_Data *pd, Efl_Time *selected_time);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_calendar_selected_time_get, Eina_Bool, 0, EFL_FUNC_CALL(selected_time), Efl_Time *selected_time);

Elm_Calendar_Mark *_elm_calendar_mark_add(Eo *obj, Elm_Calendar_Data *pd, const char *mark_type, Efl_Time *mark_time, Elm_Calendar_Mark_Repeat_Type repeat);

EOAPI EFL_FUNC_BODYV(elm_obj_calendar_mark_add, Elm_Calendar_Mark *, NULL, EFL_FUNC_CALL(mark_type, mark_time, repeat), const char *mark_type, Efl_Time *mark_time, Elm_Calendar_Mark_Repeat_Type repeat);

void _elm_calendar_mark_del(Eo *obj, Elm_Calendar_Data *pd, Elm_Calendar_Mark *mark);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_calendar_mark_del, EFL_FUNC_CALL(mark), Elm_Calendar_Mark *mark);

void _elm_calendar_marks_clear(Eo *obj, Elm_Calendar_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_calendar_marks_clear);

void _elm_calendar_marks_draw(Eo *obj, Elm_Calendar_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_calendar_marks_draw);

Eina_Bool _elm_calendar_displayed_time_get(const Eo *obj, Elm_Calendar_Data *pd, Efl_Time *displayed_time);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_calendar_displayed_time_get, Eina_Bool, 0, EFL_FUNC_CALL(displayed_time), Efl_Time *displayed_time);

Efl_Object *_elm_calendar_efl_object_constructor(Eo *obj, Elm_Calendar_Data *pd);


void _elm_calendar_efl_canvas_group_group_calculate(Eo *obj, Elm_Calendar_Data *pd);


Elm_Theme_Apply _elm_calendar_elm_widget_theme_apply(Eo *obj, Elm_Calendar_Data *pd);


Eina_Bool _elm_calendar_elm_widget_focus_next_manager_is(Eo *obj, Elm_Calendar_Data *pd);


Eina_Bool _elm_calendar_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Calendar_Data *pd);


void _elm_calendar_elm_widget_access(Eo *obj, Elm_Calendar_Data *pd, Eina_Bool acs);


Eina_Bool _elm_calendar_elm_widget_focus_next(Eo *obj, Elm_Calendar_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_calendar_elm_widget_on_focus(Eo *obj, Elm_Calendar_Data *pd, Elm_Widget_Item *item);


Eina_Bool _elm_calendar_elm_widget_widget_event(Eo *obj, Elm_Calendar_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _elm_calendar_elm_layout_sizing_eval(Eo *obj, Elm_Calendar_Data *pd);


const Elm_Atspi_Action *_elm_calendar_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Calendar_Data *pd);


static Eina_Bool
_elm_calendar_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_CALENDAR_EXTRA_OPS
#define ELM_CALENDAR_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_first_day_of_week_set, _elm_calendar_first_day_of_week_set),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_first_day_of_week_get, _elm_calendar_first_day_of_week_get),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_selectable_set, _elm_calendar_selectable_set),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_selectable_get, _elm_calendar_selectable_get),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_interval_set, _elm_calendar_interval_set),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_interval_get, _elm_calendar_interval_get),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_weekdays_names_set, _elm_calendar_weekdays_names_set),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_weekdays_names_get, _elm_calendar_weekdays_names_get),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_select_mode_set, _elm_calendar_select_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_select_mode_get, _elm_calendar_select_mode_get),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_format_function_set, _elm_calendar_format_function_set),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_marks_get, _elm_calendar_marks_get),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_date_min_set, _elm_calendar_date_min_set),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_date_min_get, _elm_calendar_date_min_get),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_date_max_set, _elm_calendar_date_max_set),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_date_max_get, _elm_calendar_date_max_get),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_selected_time_set, _elm_calendar_selected_time_set),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_selected_time_get, _elm_calendar_selected_time_get),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_mark_add, _elm_calendar_mark_add),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_mark_del, _elm_calendar_mark_del),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_marks_clear, _elm_calendar_marks_clear),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_marks_draw, _elm_calendar_marks_draw),
      EFL_OBJECT_OP_FUNC(elm_obj_calendar_displayed_time_get, _elm_calendar_displayed_time_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_calendar_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _elm_calendar_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_calendar_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_calendar_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_calendar_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_calendar_elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_calendar_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _elm_calendar_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_calendar_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_calendar_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_calendar_elm_interface_atspi_widget_action_elm_actions_get),
      ELM_CALENDAR_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_CALENDAR_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_CALENDAR_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_calendar_class_desc = {
   EO_VERSION,
   "Elm.Calendar",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Calendar_Data),
   _elm_calendar_class_initializer,
   _elm_calendar_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_calendar_class_get, &_elm_calendar_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);

EAPI void
elm_calendar_first_day_of_week_set(Elm_Calendar *obj, Elm_Calendar_Weekday day)
{
   elm_obj_calendar_first_day_of_week_set(obj, day);
}

EAPI Elm_Calendar_Weekday
elm_calendar_first_day_of_week_get(const Elm_Calendar *obj)
{
   return elm_obj_calendar_first_day_of_week_get(obj);
}

EAPI void
elm_calendar_selectable_set(Elm_Calendar *obj, Elm_Calendar_Selectable selectable)
{
   elm_obj_calendar_selectable_set(obj, selectable);
}

EAPI Elm_Calendar_Selectable
elm_calendar_selectable_get(const Elm_Calendar *obj)
{
   return elm_obj_calendar_selectable_get(obj);
}

EAPI void
elm_calendar_interval_set(Elm_Calendar *obj, double interval)
{
   elm_obj_calendar_interval_set(obj, interval);
}

EAPI double
elm_calendar_interval_get(const Elm_Calendar *obj)
{
   return elm_obj_calendar_interval_get(obj);
}

EAPI void
elm_calendar_weekdays_names_set(Elm_Calendar *obj, const char **weekdays)
{
   elm_obj_calendar_weekdays_names_set(obj, weekdays);
}

EAPI const char **
elm_calendar_weekdays_names_get(const Elm_Calendar *obj)
{
   return elm_obj_calendar_weekdays_names_get(obj);
}

EAPI void
elm_calendar_select_mode_set(Elm_Calendar *obj, Elm_Calendar_Select_Mode mode)
{
   elm_obj_calendar_select_mode_set(obj, mode);
}

EAPI Elm_Calendar_Select_Mode
elm_calendar_select_mode_get(const Elm_Calendar *obj)
{
   return elm_obj_calendar_select_mode_get(obj);
}

EAPI void
elm_calendar_format_function_set(Elm_Calendar *obj, Elm_Calendar_Format_Cb format_function)
{
   elm_obj_calendar_format_function_set(obj, format_function);
}

EAPI const Eina_List *
elm_calendar_marks_get(const Elm_Calendar *obj)
{
   return elm_obj_calendar_marks_get(obj);
}

EAPI void
elm_calendar_date_min_set(Elm_Calendar *obj, const Efl_Time *min)
{
   elm_obj_calendar_date_min_set(obj, min);
}

EAPI const Efl_Time *
elm_calendar_date_min_get(const Elm_Calendar *obj)
{
   return elm_obj_calendar_date_min_get(obj);
}

EAPI void
elm_calendar_date_max_set(Elm_Calendar *obj, const Efl_Time *max)
{
   elm_obj_calendar_date_max_set(obj, max);
}

EAPI const Efl_Time *
elm_calendar_date_max_get(const Elm_Calendar *obj)
{
   return elm_obj_calendar_date_max_get(obj);
}

EAPI void
elm_calendar_selected_time_set(Elm_Calendar *obj, Efl_Time *selected_time)
{
   elm_obj_calendar_selected_time_set(obj, selected_time);
}

EAPI Eina_Bool
elm_calendar_selected_time_get(const Elm_Calendar *obj, Efl_Time *selected_time)
{
   return elm_obj_calendar_selected_time_get(obj, selected_time);
}

EAPI Elm_Calendar_Mark *
elm_calendar_mark_add(Elm_Calendar *obj, const char *mark_type, Efl_Time *mark_time, Elm_Calendar_Mark_Repeat_Type repeat)
{
   return elm_obj_calendar_mark_add(obj, mark_type, mark_time, repeat);
}

EAPI void
elm_calendar_marks_clear(Elm_Calendar *obj)
{
   elm_obj_calendar_marks_clear(obj);
}

EAPI void
elm_calendar_marks_draw(Elm_Calendar *obj)
{
   elm_obj_calendar_marks_draw(obj);
}

EAPI Eina_Bool
elm_calendar_displayed_time_get(const Elm_Calendar *obj, Efl_Time *displayed_time)
{
   return elm_obj_calendar_displayed_time_get(obj, displayed_time);
}
