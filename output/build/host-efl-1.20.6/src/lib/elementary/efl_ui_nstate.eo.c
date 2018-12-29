EWAPI const Efl_Event_Description _EFL_UI_NSTATE_EVENT_STATE_CHANGED =
   EFL_EVENT_DESCRIPTION("state,changed");

void _efl_ui_nstate_activate(Eo *obj, Efl_Ui_Nstate_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_ui_nstate_activate);

void _efl_ui_nstate_count_set(Eo *obj, Efl_Ui_Nstate_Data *pd, int nstate);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_nstate_count_set, EFL_FUNC_CALL(nstate), int nstate);

int _efl_ui_nstate_count_get(Eo *obj, Efl_Ui_Nstate_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_nstate_count_get, int, 0);

void _efl_ui_nstate_value_set(Eo *obj, Efl_Ui_Nstate_Data *pd, int state);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_nstate_value_set, EFL_FUNC_CALL(state), int state);

int _efl_ui_nstate_value_get(Eo *obj, Efl_Ui_Nstate_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_nstate_value_get, int, 0);

Efl_Object *_efl_ui_nstate_efl_object_constructor(Eo *obj, Efl_Ui_Nstate_Data *pd);


Elm_Theme_Apply _efl_ui_nstate_elm_widget_theme_apply(Eo *obj, Efl_Ui_Nstate_Data *pd);


Eina_Bool _efl_ui_nstate_elm_widget_widget_event(Eo *obj, Efl_Ui_Nstate_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


static Eina_Bool
_efl_ui_nstate_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_NSTATE_EXTRA_OPS
#define EFL_UI_NSTATE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_nstate_activate, _efl_ui_nstate_activate),
      EFL_OBJECT_OP_FUNC(efl_ui_nstate_count_set, _efl_ui_nstate_count_set),
      EFL_OBJECT_OP_FUNC(efl_ui_nstate_count_get, _efl_ui_nstate_count_get),
      EFL_OBJECT_OP_FUNC(efl_ui_nstate_value_set, _efl_ui_nstate_value_set),
      EFL_OBJECT_OP_FUNC(efl_ui_nstate_value_get, _efl_ui_nstate_value_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_nstate_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _efl_ui_nstate_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _efl_ui_nstate_elm_widget_widget_event),
      EFL_UI_NSTATE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_NSTATE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_NSTATE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_nstate_class_desc = {
   EO_VERSION,
   "Efl.Ui.Nstate",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Nstate_Data),
   _efl_ui_nstate_class_initializer,
   _efl_ui_nstate_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_nstate_class_get, &_efl_ui_nstate_class_desc, EFL_UI_BUTTON_CLASS, NULL);
