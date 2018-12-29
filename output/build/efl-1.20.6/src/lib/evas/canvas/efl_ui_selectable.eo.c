EWAPI const Efl_Event_Description _EFL_UI_EVENT_SELECTED =
   EFL_EVENT_DESCRIPTION("selected");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_UNSELECTED =
   EFL_EVENT_DESCRIPTION("unselected");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_SELECTION_PASTE =
   EFL_EVENT_DESCRIPTION("selection,paste");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_SELECTION_COPY =
   EFL_EVENT_DESCRIPTION("selection,copy");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_SELECTION_CUT =
   EFL_EVENT_DESCRIPTION("selection,cut");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_SELECTION_START =
   EFL_EVENT_DESCRIPTION("selection,start");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_SELECTION_CHANGED =
   EFL_EVENT_DESCRIPTION("selection,changed");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_SELECTION_CLEARED =
   EFL_EVENT_DESCRIPTION("selection,cleared");

static Eina_Bool
_efl_ui_selectable_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifdef EFL_UI_SELECTABLE_EXTRA_OPS
   EFL_OPS_DEFINE(ops, EFL_UI_SELECTABLE_EXTRA_OPS);
   opsp = &ops;
#endif

#ifdef EFL_UI_SELECTABLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_SELECTABLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_selectable_class_desc = {
   EO_VERSION,
   "Efl.Ui.Selectable",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_selectable_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_selectable_interface_get, &_efl_ui_selectable_class_desc, NULL, NULL);
