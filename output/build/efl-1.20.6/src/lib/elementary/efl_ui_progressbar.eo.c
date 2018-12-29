EWAPI const Efl_Event_Description _EFL_UI_PROGRESSBAR_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");

void _efl_ui_progressbar_pulse_mode_set(Eo *obj, Efl_Ui_Progressbar_Data *pd, Eina_Bool pulse);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_progressbar_pulse_mode_set, EFL_FUNC_CALL(pulse), Eina_Bool pulse);

Eina_Bool _efl_ui_progressbar_pulse_mode_get(Eo *obj, Efl_Ui_Progressbar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_progressbar_pulse_mode_get, Eina_Bool, 0);

void _efl_ui_progressbar_pulse_set(Eo *obj, Efl_Ui_Progressbar_Data *pd, Eina_Bool state);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_progressbar_pulse_set, EFL_FUNC_CALL(state), Eina_Bool state);

Eina_Bool _efl_ui_progressbar_pulse_get(Eo *obj, Efl_Ui_Progressbar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_progressbar_pulse_get, Eina_Bool, 0);

Efl_Object *_efl_ui_progressbar_efl_object_constructor(Eo *obj, Efl_Ui_Progressbar_Data *pd);


Elm_Theme_Apply _efl_ui_progressbar_elm_widget_theme_apply(Eo *obj, Efl_Ui_Progressbar_Data *pd);


Eina_Bool _efl_ui_progressbar_elm_widget_focus_next_manager_is(Eo *obj, Efl_Ui_Progressbar_Data *pd);


Eina_Bool _efl_ui_progressbar_elm_widget_focus_direction_manager_is(Eo *obj, Efl_Ui_Progressbar_Data *pd);


Eina_Bool _efl_ui_progressbar_elm_widget_sub_object_del(Eo *obj, Efl_Ui_Progressbar_Data *pd, Efl_Canvas_Object *sobj);


const Elm_Layout_Part_Alias_Description *_efl_ui_progressbar_elm_layout_text_aliases_get(Eo *obj, Efl_Ui_Progressbar_Data *pd);


const Elm_Layout_Part_Alias_Description *_efl_ui_progressbar_elm_layout_content_aliases_get(Eo *obj, Efl_Ui_Progressbar_Data *pd);


void _efl_ui_progressbar_elm_layout_sizing_eval(Eo *obj, Efl_Ui_Progressbar_Data *pd);


void _efl_ui_progressbar_efl_ui_range_span_size_set(Eo *obj, Efl_Ui_Progressbar_Data *pd, int size);


int _efl_ui_progressbar_efl_ui_range_span_size_get(Eo *obj, Efl_Ui_Progressbar_Data *pd);


void _efl_ui_progressbar_efl_ui_range_range_value_set(Eo *obj, Efl_Ui_Progressbar_Data *pd, double val);


double _efl_ui_progressbar_efl_ui_range_range_value_get(Eo *obj, Efl_Ui_Progressbar_Data *pd);


void _efl_ui_progressbar_efl_ui_range_range_unit_format_set(Eo *obj, Efl_Ui_Progressbar_Data *pd, const char *units);


const char *_efl_ui_progressbar_efl_ui_range_range_unit_format_get(Eo *obj, Efl_Ui_Progressbar_Data *pd);


void _efl_ui_progressbar_efl_orientation_orientation_set(Eo *obj, Efl_Ui_Progressbar_Data *pd, Efl_Orient dir);


Efl_Orient _efl_ui_progressbar_efl_orientation_orientation_get(Eo *obj, Efl_Ui_Progressbar_Data *pd);


Efl_Object *_efl_ui_progressbar_efl_part_part(const Eo *obj, Efl_Ui_Progressbar_Data *pd, const char *name);


static Eina_Bool
_efl_ui_progressbar_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_PROGRESSBAR_EXTRA_OPS
#define EFL_UI_PROGRESSBAR_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_progressbar_pulse_mode_set, _efl_ui_progressbar_pulse_mode_set),
      EFL_OBJECT_OP_FUNC(efl_ui_progressbar_pulse_mode_get, _efl_ui_progressbar_pulse_mode_get),
      EFL_OBJECT_OP_FUNC(efl_ui_progressbar_pulse_set, _efl_ui_progressbar_pulse_set),
      EFL_OBJECT_OP_FUNC(efl_ui_progressbar_pulse_get, _efl_ui_progressbar_pulse_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_progressbar_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _efl_ui_progressbar_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _efl_ui_progressbar_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _efl_ui_progressbar_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _efl_ui_progressbar_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_text_aliases_get, _efl_ui_progressbar_elm_layout_text_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_content_aliases_get, _efl_ui_progressbar_elm_layout_content_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _efl_ui_progressbar_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(efl_ui_range_span_size_set, _efl_ui_progressbar_efl_ui_range_span_size_set),
      EFL_OBJECT_OP_FUNC(efl_ui_range_span_size_get, _efl_ui_progressbar_efl_ui_range_span_size_get),
      EFL_OBJECT_OP_FUNC(efl_ui_range_value_set, _efl_ui_progressbar_efl_ui_range_range_value_set),
      EFL_OBJECT_OP_FUNC(efl_ui_range_value_get, _efl_ui_progressbar_efl_ui_range_range_value_get),
      EFL_OBJECT_OP_FUNC(efl_ui_range_unit_format_set, _efl_ui_progressbar_efl_ui_range_range_unit_format_set),
      EFL_OBJECT_OP_FUNC(efl_ui_range_unit_format_get, _efl_ui_progressbar_efl_ui_range_range_unit_format_get),
      EFL_OBJECT_OP_FUNC(efl_orientation_set, _efl_ui_progressbar_efl_orientation_orientation_set),
      EFL_OBJECT_OP_FUNC(efl_orientation_get, _efl_ui_progressbar_efl_orientation_orientation_get),
      EFL_OBJECT_OP_FUNC(efl_part, _efl_ui_progressbar_efl_part_part),
      EFL_UI_PROGRESSBAR_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_PROGRESSBAR_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_PROGRESSBAR_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_progressbar_class_desc = {
   EO_VERSION,
   "Efl.Ui.Progressbar",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Progressbar_Data),
   _efl_ui_progressbar_class_initializer,
   _efl_ui_progressbar_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_progressbar_class_get, &_efl_ui_progressbar_class_desc, ELM_LAYOUT_CLASS, EFL_UI_RANGE_INTERFACE, EFL_ORIENTATION_INTERFACE, NULL);
