EWAPI const Efl_Event_Description _EFL_UI_FOCUS_USER_EVENT_MANAGER_CHANGED =
   EFL_EVENT_DESCRIPTION("manager,changed");
EWAPI const Efl_Event_Description _EFL_UI_FOCUS_USER_EVENT_LOGICAL_CHANGED =
   EFL_EVENT_DESCRIPTION("logical,changed");
EOAPI EFL_FUNC_BODY_CONST(efl_ui_focus_user_manager_get, Efl_Ui_Focus_Manager *, NULL);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_focus_user_parent_get, Efl_Ui_Focus_Object *, NULL);

static Eina_Bool
_efl_ui_focus_user_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_FOCUS_USER_EXTRA_OPS
#define EFL_UI_FOCUS_USER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_focus_user_manager_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_user_parent_get, NULL),
      EFL_UI_FOCUS_USER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_FOCUS_USER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_FOCUS_USER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_focus_user_class_desc = {
   EO_VERSION,
   "Efl.Ui.Focus.User",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_focus_user_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_focus_user_interface_get, &_efl_ui_focus_user_class_desc, NULL, NULL);
