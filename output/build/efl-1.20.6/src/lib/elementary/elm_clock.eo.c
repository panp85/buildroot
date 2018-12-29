EWAPI const Efl_Event_Description _ELM_CLOCK_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");

void _elm_clock_show_am_pm_set(Eo *obj, Elm_Clock_Data *pd, Eina_Bool am_pm);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_clock_show_am_pm_set, EFL_FUNC_CALL(am_pm), Eina_Bool am_pm);

Eina_Bool _elm_clock_show_am_pm_get(Eo *obj, Elm_Clock_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_clock_show_am_pm_get, Eina_Bool, 0);

void _elm_clock_first_interval_set(Eo *obj, Elm_Clock_Data *pd, double interval);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_clock_first_interval_set, EFL_FUNC_CALL(interval), double interval);

double _elm_clock_first_interval_get(Eo *obj, Elm_Clock_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_clock_first_interval_get, double, 0);

void _elm_clock_show_seconds_set(Eo *obj, Elm_Clock_Data *pd, Eina_Bool seconds);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_clock_show_seconds_set, EFL_FUNC_CALL(seconds), Eina_Bool seconds);

Eina_Bool _elm_clock_show_seconds_get(Eo *obj, Elm_Clock_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_clock_show_seconds_get, Eina_Bool, 0);

void _elm_clock_edit_set(Eo *obj, Elm_Clock_Data *pd, Eina_Bool edit);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_clock_edit_set, EFL_FUNC_CALL(edit), Eina_Bool edit);

Eina_Bool _elm_clock_edit_get(Eo *obj, Elm_Clock_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_clock_edit_get, Eina_Bool, 0);

void _elm_clock_pause_set(Eo *obj, Elm_Clock_Data *pd, Eina_Bool paused);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_clock_pause_set, EFL_FUNC_CALL(paused), Eina_Bool paused);

Eina_Bool _elm_clock_pause_get(Eo *obj, Elm_Clock_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_clock_pause_get, Eina_Bool, 0);

void _elm_clock_time_set(Eo *obj, Elm_Clock_Data *pd, int hrs, int min, int sec);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_clock_time_set, EFL_FUNC_CALL(hrs, min, sec), int hrs, int min, int sec);

void _elm_clock_time_get(Eo *obj, Elm_Clock_Data *pd, int *hrs, int *min, int *sec);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_clock_time_get, EFL_FUNC_CALL(hrs, min, sec), int *hrs, int *min, int *sec);

void _elm_clock_edit_mode_set(Eo *obj, Elm_Clock_Data *pd, Elm_Clock_Edit_Mode digedit);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_clock_edit_mode_set, EFL_FUNC_CALL(digedit), Elm_Clock_Edit_Mode digedit);

Elm_Clock_Edit_Mode _elm_clock_edit_mode_get(Eo *obj, Elm_Clock_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_clock_edit_mode_get, Elm_Clock_Edit_Mode, 0);

Efl_Object *_elm_clock_efl_object_constructor(Eo *obj, Elm_Clock_Data *pd);


Eina_Bool _elm_clock_elm_widget_focus_next_manager_is(Eo *obj, Elm_Clock_Data *pd);


Eina_Bool _elm_clock_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Clock_Data *pd);


void _elm_clock_elm_widget_access(Eo *obj, Elm_Clock_Data *pd, Eina_Bool acs);


Eina_Bool _elm_clock_elm_widget_focus_next(Eo *obj, Elm_Clock_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Elm_Theme_Apply _elm_clock_elm_widget_theme_apply(Eo *obj, Elm_Clock_Data *pd);


static Eina_Bool
_elm_clock_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_CLOCK_EXTRA_OPS
#define ELM_CLOCK_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_clock_show_am_pm_set, _elm_clock_show_am_pm_set),
      EFL_OBJECT_OP_FUNC(elm_obj_clock_show_am_pm_get, _elm_clock_show_am_pm_get),
      EFL_OBJECT_OP_FUNC(elm_obj_clock_first_interval_set, _elm_clock_first_interval_set),
      EFL_OBJECT_OP_FUNC(elm_obj_clock_first_interval_get, _elm_clock_first_interval_get),
      EFL_OBJECT_OP_FUNC(elm_obj_clock_show_seconds_set, _elm_clock_show_seconds_set),
      EFL_OBJECT_OP_FUNC(elm_obj_clock_show_seconds_get, _elm_clock_show_seconds_get),
      EFL_OBJECT_OP_FUNC(elm_obj_clock_edit_set, _elm_clock_edit_set),
      EFL_OBJECT_OP_FUNC(elm_obj_clock_edit_get, _elm_clock_edit_get),
      EFL_OBJECT_OP_FUNC(elm_obj_clock_pause_set, _elm_clock_pause_set),
      EFL_OBJECT_OP_FUNC(elm_obj_clock_pause_get, _elm_clock_pause_get),
      EFL_OBJECT_OP_FUNC(elm_obj_clock_time_set, _elm_clock_time_set),
      EFL_OBJECT_OP_FUNC(elm_obj_clock_time_get, _elm_clock_time_get),
      EFL_OBJECT_OP_FUNC(elm_obj_clock_edit_mode_set, _elm_clock_edit_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_clock_edit_mode_get, _elm_clock_edit_mode_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_clock_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_clock_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_clock_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_clock_elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_clock_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_clock_elm_widget_theme_apply),
      ELM_CLOCK_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_CLOCK_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_CLOCK_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_clock_class_desc = {
   EO_VERSION,
   "Elm.Clock",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Clock_Data),
   _elm_clock_class_initializer,
   _elm_clock_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_clock_class_get, &_elm_clock_class_desc, ELM_LAYOUT_CLASS, NULL);

EAPI void
elm_clock_show_am_pm_set(Elm_Clock *obj, Eina_Bool am_pm)
{
   elm_obj_clock_show_am_pm_set(obj, am_pm);
}

EAPI Eina_Bool
elm_clock_show_am_pm_get(const Elm_Clock *obj)
{
   return elm_obj_clock_show_am_pm_get(obj);
}

EAPI void
elm_clock_first_interval_set(Elm_Clock *obj, double interval)
{
   elm_obj_clock_first_interval_set(obj, interval);
}

EAPI double
elm_clock_first_interval_get(const Elm_Clock *obj)
{
   return elm_obj_clock_first_interval_get(obj);
}

EAPI void
elm_clock_show_seconds_set(Elm_Clock *obj, Eina_Bool seconds)
{
   elm_obj_clock_show_seconds_set(obj, seconds);
}

EAPI Eina_Bool
elm_clock_show_seconds_get(const Elm_Clock *obj)
{
   return elm_obj_clock_show_seconds_get(obj);
}

EAPI void
elm_clock_edit_set(Elm_Clock *obj, Eina_Bool edit)
{
   elm_obj_clock_edit_set(obj, edit);
}

EAPI Eina_Bool
elm_clock_edit_get(const Elm_Clock *obj)
{
   return elm_obj_clock_edit_get(obj);
}

EAPI void
elm_clock_pause_set(Elm_Clock *obj, Eina_Bool paused)
{
   elm_obj_clock_pause_set(obj, paused);
}

EAPI Eina_Bool
elm_clock_pause_get(const Elm_Clock *obj)
{
   return elm_obj_clock_pause_get(obj);
}

EAPI void
elm_clock_time_set(Elm_Clock *obj, int hrs, int min, int sec)
{
   elm_obj_clock_time_set(obj, hrs, min, sec);
}

EAPI void
elm_clock_time_get(const Elm_Clock *obj, int *hrs, int *min, int *sec)
{
   elm_obj_clock_time_get(obj, hrs, min, sec);
}

EAPI void
elm_clock_edit_mode_set(Elm_Clock *obj, Elm_Clock_Edit_Mode digedit)
{
   elm_obj_clock_edit_mode_set(obj, digedit);
}

EAPI Elm_Clock_Edit_Mode
elm_clock_edit_mode_get(const Elm_Clock *obj)
{
   return elm_obj_clock_edit_mode_get(obj);
}
