EWAPI const Efl_Event_Description _EFL_UI_CLOCK_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");

void _efl_ui_clock_format_set(Eo *obj, Efl_Ui_Clock_Data *pd, const char *fmt);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_clock_format_set, EFL_FUNC_CALL(fmt), const char *fmt);

const char *_efl_ui_clock_format_get(Eo *obj, Efl_Ui_Clock_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_clock_format_get, const char *, NULL);

void _efl_ui_clock_pause_set(Eo *obj, Efl_Ui_Clock_Data *pd, Eina_Bool paused);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_clock_pause_set, EFL_FUNC_CALL(paused), Eina_Bool paused);

Eina_Bool _efl_ui_clock_pause_get(Eo *obj, Efl_Ui_Clock_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_clock_pause_get, Eina_Bool, 0);

void _efl_ui_clock_edit_mode_set(Eo *obj, Efl_Ui_Clock_Data *pd, Eina_Bool value);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_clock_edit_mode_set, EFL_FUNC_CALL(value), Eina_Bool value);

Eina_Bool _efl_ui_clock_edit_mode_get(Eo *obj, Efl_Ui_Clock_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_clock_edit_mode_get, Eina_Bool, 0);

Eina_Bool _efl_ui_clock_value_min_set(Eo *obj, Efl_Ui_Clock_Data *pd, Efl_Time *mintime);

EOAPI EFL_FUNC_BODYV(efl_ui_clock_value_min_set, Eina_Bool, 0, EFL_FUNC_CALL(mintime), Efl_Time *mintime);

Eina_Bool _efl_ui_clock_value_min_get(Eo *obj, Efl_Ui_Clock_Data *pd, Efl_Time *mintime);

EOAPI EFL_FUNC_BODYV_CONST(efl_ui_clock_value_min_get, Eina_Bool, 0, EFL_FUNC_CALL(mintime), Efl_Time *mintime);

Eina_Bool _efl_ui_clock_value_max_set(Eo *obj, Efl_Ui_Clock_Data *pd, Efl_Time *maxtime);

EOAPI EFL_FUNC_BODYV(efl_ui_clock_value_max_set, Eina_Bool, 0, EFL_FUNC_CALL(maxtime), Efl_Time *maxtime);

Eina_Bool _efl_ui_clock_value_max_get(Eo *obj, Efl_Ui_Clock_Data *pd, Efl_Time *maxtime);

EOAPI EFL_FUNC_BODYV_CONST(efl_ui_clock_value_max_get, Eina_Bool, 0, EFL_FUNC_CALL(maxtime), Efl_Time *maxtime);

Eina_Bool _efl_ui_clock_value_set(Eo *obj, Efl_Ui_Clock_Data *pd, Efl_Time *curtime);

EOAPI EFL_FUNC_BODYV(efl_ui_clock_value_set, Eina_Bool, 0, EFL_FUNC_CALL(curtime), Efl_Time *curtime);

Eina_Bool _efl_ui_clock_value_get(Eo *obj, Efl_Ui_Clock_Data *pd, Efl_Time *curtime);

EOAPI EFL_FUNC_BODYV_CONST(efl_ui_clock_value_get, Eina_Bool, 0, EFL_FUNC_CALL(curtime), Efl_Time *curtime);

void _efl_ui_clock_field_visible_set(Eo *obj, Efl_Ui_Clock_Data *pd, Efl_Ui_Clock_Type fieldtype, Eina_Bool visible);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_clock_field_visible_set, EFL_FUNC_CALL(fieldtype, visible), Efl_Ui_Clock_Type fieldtype, Eina_Bool visible);

Eina_Bool _efl_ui_clock_field_visible_get(Eo *obj, Efl_Ui_Clock_Data *pd, Efl_Ui_Clock_Type fieldtype);

EOAPI EFL_FUNC_BODYV_CONST(efl_ui_clock_field_visible_get, Eina_Bool, 0, EFL_FUNC_CALL(fieldtype), Efl_Ui_Clock_Type fieldtype);

void _efl_ui_clock_field_limit_set(Eo *obj, Efl_Ui_Clock_Data *pd, Efl_Ui_Clock_Type fieldtype, int min, int max);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_clock_field_limit_set, EFL_FUNC_CALL(fieldtype, min, max), Efl_Ui_Clock_Type fieldtype, int min, int max);

void _efl_ui_clock_field_limit_get(Eo *obj, Efl_Ui_Clock_Data *pd, Efl_Ui_Clock_Type fieldtype, int *min, int *max);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_ui_clock_field_limit_get, EFL_FUNC_CALL(fieldtype, min, max), Efl_Ui_Clock_Type fieldtype, int *min, int *max);

Efl_Object *_efl_ui_clock_efl_object_constructor(Eo *obj, Efl_Ui_Clock_Data *pd);


Elm_Theme_Apply _efl_ui_clock_elm_widget_theme_apply(Eo *obj, Efl_Ui_Clock_Data *pd);


Eina_Bool _efl_ui_clock_elm_widget_focus_next_manager_is(Eo *obj, Efl_Ui_Clock_Data *pd);


Eina_Bool _efl_ui_clock_elm_widget_focus_next(Eo *obj, Efl_Ui_Clock_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _efl_ui_clock_elm_widget_disable(Eo *obj, Efl_Ui_Clock_Data *pd);


Eina_Bool _efl_ui_clock_elm_widget_on_focus(Eo *obj, Efl_Ui_Clock_Data *pd, Elm_Widget_Item *item);


Eina_Bool _efl_ui_clock_elm_widget_translate(Eo *obj, Efl_Ui_Clock_Data *pd);


void _efl_ui_clock_elm_layout_sizing_eval(Eo *obj, Efl_Ui_Clock_Data *pd);


static Eina_Bool
_efl_ui_clock_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_CLOCK_EXTRA_OPS
#define EFL_UI_CLOCK_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_clock_format_set, _efl_ui_clock_format_set),
      EFL_OBJECT_OP_FUNC(efl_ui_clock_format_get, _efl_ui_clock_format_get),
      EFL_OBJECT_OP_FUNC(efl_ui_clock_pause_set, _efl_ui_clock_pause_set),
      EFL_OBJECT_OP_FUNC(efl_ui_clock_pause_get, _efl_ui_clock_pause_get),
      EFL_OBJECT_OP_FUNC(efl_ui_clock_edit_mode_set, _efl_ui_clock_edit_mode_set),
      EFL_OBJECT_OP_FUNC(efl_ui_clock_edit_mode_get, _efl_ui_clock_edit_mode_get),
      EFL_OBJECT_OP_FUNC(efl_ui_clock_value_min_set, _efl_ui_clock_value_min_set),
      EFL_OBJECT_OP_FUNC(efl_ui_clock_value_min_get, _efl_ui_clock_value_min_get),
      EFL_OBJECT_OP_FUNC(efl_ui_clock_value_max_set, _efl_ui_clock_value_max_set),
      EFL_OBJECT_OP_FUNC(efl_ui_clock_value_max_get, _efl_ui_clock_value_max_get),
      EFL_OBJECT_OP_FUNC(efl_ui_clock_value_set, _efl_ui_clock_value_set),
      EFL_OBJECT_OP_FUNC(efl_ui_clock_value_get, _efl_ui_clock_value_get),
      EFL_OBJECT_OP_FUNC(efl_ui_clock_field_visible_set, _efl_ui_clock_field_visible_set),
      EFL_OBJECT_OP_FUNC(efl_ui_clock_field_visible_get, _efl_ui_clock_field_visible_get),
      EFL_OBJECT_OP_FUNC(efl_ui_clock_field_limit_set, _efl_ui_clock_field_limit_set),
      EFL_OBJECT_OP_FUNC(efl_ui_clock_field_limit_get, _efl_ui_clock_field_limit_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_clock_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _efl_ui_clock_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _efl_ui_clock_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _efl_ui_clock_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_disable, _efl_ui_clock_elm_widget_disable),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _efl_ui_clock_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_translate, _efl_ui_clock_elm_widget_translate),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _efl_ui_clock_elm_layout_sizing_eval),
      EFL_UI_CLOCK_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_CLOCK_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_CLOCK_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_clock_class_desc = {
   EO_VERSION,
   "Efl.Ui.Clock",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Clock_Data),
   _efl_ui_clock_class_initializer,
   _efl_ui_clock_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_clock_class_get, &_efl_ui_clock_class_desc, ELM_LAYOUT_CLASS, NULL);
