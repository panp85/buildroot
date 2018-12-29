EWAPI const Efl_Event_Description _ELM_DAYSELECTOR_EVENT_DAYSELECTOR_CHANGED =
   EFL_EVENT_DESCRIPTION("dayselector,changed");

void _elm_dayselector_week_start_set(Eo *obj, Elm_Dayselector_Data *pd, Elm_Dayselector_Day day);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_dayselector_week_start_set, EFL_FUNC_CALL(day), Elm_Dayselector_Day day);

Elm_Dayselector_Day _elm_dayselector_week_start_get(Eo *obj, Elm_Dayselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_dayselector_week_start_get, Elm_Dayselector_Day, 0);

void _elm_dayselector_weekend_length_set(Eo *obj, Elm_Dayselector_Data *pd, unsigned int length);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_dayselector_weekend_length_set, EFL_FUNC_CALL(length), unsigned int length);

unsigned int _elm_dayselector_weekend_length_get(Eo *obj, Elm_Dayselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_dayselector_weekend_length_get, unsigned int, 0);

void _elm_dayselector_weekend_start_set(Eo *obj, Elm_Dayselector_Data *pd, Elm_Dayselector_Day day);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_dayselector_weekend_start_set, EFL_FUNC_CALL(day), Elm_Dayselector_Day day);

Elm_Dayselector_Day _elm_dayselector_weekend_start_get(Eo *obj, Elm_Dayselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_dayselector_weekend_start_get, Elm_Dayselector_Day, 0);

void _elm_dayselector_weekdays_names_set(Eo *obj, Elm_Dayselector_Data *pd, const char **weekdays);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_dayselector_weekdays_names_set, EFL_FUNC_CALL(weekdays), const char **weekdays);

Eina_List *_elm_dayselector_weekdays_names_get(const Eo *obj, Elm_Dayselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_dayselector_weekdays_names_get, Eina_List *, NULL);

void _elm_dayselector_day_selected_set(Eo *obj, Elm_Dayselector_Data *pd, Elm_Dayselector_Day day, Eina_Bool selected);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_dayselector_day_selected_set, EFL_FUNC_CALL(day, selected), Elm_Dayselector_Day day, Eina_Bool selected);

Eina_Bool _elm_dayselector_day_selected_get(const Eo *obj, Elm_Dayselector_Data *pd, Elm_Dayselector_Day day);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_dayselector_day_selected_get, Eina_Bool, 0, EFL_FUNC_CALL(day), Elm_Dayselector_Day day);

Efl_Object *_elm_dayselector_efl_object_constructor(Eo *obj, Elm_Dayselector_Data *pd);


Elm_Theme_Apply _elm_dayselector_elm_widget_theme_apply(Eo *obj, Elm_Dayselector_Data *pd);


Eina_Bool _elm_dayselector_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Dayselector_Data *pd);


Eina_Bool _elm_dayselector_elm_widget_translate(Eo *obj, Elm_Dayselector_Data *pd);


void _elm_dayselector_elm_layout_sizing_eval(Eo *obj, Elm_Dayselector_Data *pd);


Efl_Object *_elm_dayselector_efl_part_part(const Eo *obj, Elm_Dayselector_Data *pd, const char *name);


static Eina_Bool
_elm_dayselector_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_DAYSELECTOR_EXTRA_OPS
#define ELM_DAYSELECTOR_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_dayselector_week_start_set, _elm_dayselector_week_start_set),
      EFL_OBJECT_OP_FUNC(elm_obj_dayselector_week_start_get, _elm_dayselector_week_start_get),
      EFL_OBJECT_OP_FUNC(elm_obj_dayselector_weekend_length_set, _elm_dayselector_weekend_length_set),
      EFL_OBJECT_OP_FUNC(elm_obj_dayselector_weekend_length_get, _elm_dayselector_weekend_length_get),
      EFL_OBJECT_OP_FUNC(elm_obj_dayselector_weekend_start_set, _elm_dayselector_weekend_start_set),
      EFL_OBJECT_OP_FUNC(elm_obj_dayselector_weekend_start_get, _elm_dayselector_weekend_start_get),
      EFL_OBJECT_OP_FUNC(elm_obj_dayselector_weekdays_names_set, _elm_dayselector_weekdays_names_set),
      EFL_OBJECT_OP_FUNC(elm_obj_dayselector_weekdays_names_get, _elm_dayselector_weekdays_names_get),
      EFL_OBJECT_OP_FUNC(elm_obj_dayselector_day_selected_set, _elm_dayselector_day_selected_set),
      EFL_OBJECT_OP_FUNC(elm_obj_dayselector_day_selected_get, _elm_dayselector_day_selected_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_dayselector_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_dayselector_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_dayselector_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_translate, _elm_dayselector_elm_widget_translate),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_dayselector_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_dayselector_efl_part_part),
      ELM_DAYSELECTOR_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_DAYSELECTOR_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_DAYSELECTOR_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_dayselector_class_desc = {
   EO_VERSION,
   "Elm.Dayselector",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Dayselector_Data),
   _elm_dayselector_class_initializer,
   _elm_dayselector_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_dayselector_class_get, &_elm_dayselector_class_desc, ELM_LAYOUT_CLASS, NULL);

EAPI void
elm_dayselector_week_start_set(Elm_Dayselector *obj, Elm_Dayselector_Day day)
{
   elm_obj_dayselector_week_start_set(obj, day);
}

EAPI Elm_Dayselector_Day
elm_dayselector_week_start_get(const Elm_Dayselector *obj)
{
   return elm_obj_dayselector_week_start_get(obj);
}

EAPI void
elm_dayselector_weekend_length_set(Elm_Dayselector *obj, unsigned int length)
{
   elm_obj_dayselector_weekend_length_set(obj, length);
}

EAPI unsigned int
elm_dayselector_weekend_length_get(const Elm_Dayselector *obj)
{
   return elm_obj_dayselector_weekend_length_get(obj);
}

EAPI void
elm_dayselector_weekend_start_set(Elm_Dayselector *obj, Elm_Dayselector_Day day)
{
   elm_obj_dayselector_weekend_start_set(obj, day);
}

EAPI Elm_Dayselector_Day
elm_dayselector_weekend_start_get(const Elm_Dayselector *obj)
{
   return elm_obj_dayselector_weekend_start_get(obj);
}

EAPI void
elm_dayselector_weekdays_names_set(Elm_Dayselector *obj, const char **weekdays)
{
   elm_obj_dayselector_weekdays_names_set(obj, weekdays);
}

EAPI Eina_List *
elm_dayselector_weekdays_names_get(const Elm_Dayselector *obj)
{
   return elm_obj_dayselector_weekdays_names_get(obj);
}

EAPI void
elm_dayselector_day_selected_set(Elm_Dayselector *obj, Elm_Dayselector_Day day, Eina_Bool selected)
{
   elm_obj_dayselector_day_selected_set(obj, day, selected);
}

EAPI Eina_Bool
elm_dayselector_day_selected_get(const Elm_Dayselector *obj, Elm_Dayselector_Day day)
{
   return elm_obj_dayselector_day_selected_get(obj, day);
}
