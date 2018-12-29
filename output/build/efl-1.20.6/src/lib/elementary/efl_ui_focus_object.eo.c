EWAPI const Efl_Event_Description _EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_CHANGED =
   EFL_EVENT_DESCRIPTION("focus,changed");

static Eina_Rectangle __eolian_efl_ui_focus_object_focus_geometry_get(Eo *obj EINA_UNUSED, Efl_Ui_Focus_Object_Data *pd EINA_UNUSED)
{
   return ((Eina_Rectangle){0});
}

EOAPI EFL_FUNC_BODY_CONST(efl_ui_focus_object_focus_geometry_get, Eina_Rectangle, ((Eina_Rectangle){0}));

void _efl_ui_focus_object_focus_set(Eo *obj, Efl_Ui_Focus_Object_Data *pd, Eina_Bool focus);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_focus_object_focus_set, EFL_FUNC_CALL(focus), Eina_Bool focus);

static Eina_Bool __eolian_efl_ui_focus_object_focus_get(Eo *obj EINA_UNUSED, Efl_Ui_Focus_Object_Data *pd EINA_UNUSED)
{
   return 0;
}

EOAPI EFL_FUNC_BODY_CONST(efl_ui_focus_object_focus_get, Eina_Bool, 0);

static Eina_Bool
_efl_ui_focus_object_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_FOCUS_OBJECT_EXTRA_OPS
#define EFL_UI_FOCUS_OBJECT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_focus_object_focus_geometry_get, __eolian_efl_ui_focus_object_focus_geometry_get),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_object_focus_set, _efl_ui_focus_object_focus_set),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_object_focus_get, __eolian_efl_ui_focus_object_focus_get),
      EFL_UI_FOCUS_OBJECT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_FOCUS_OBJECT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_FOCUS_OBJECT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_focus_object_class_desc = {
   EO_VERSION,
   "Efl.Ui.Focus.Object",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Efl_Ui_Focus_Object_Data),
   _efl_ui_focus_object_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_focus_object_mixin_get, &_efl_ui_focus_object_class_desc, NULL, NULL);
