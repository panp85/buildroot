EWAPI const Efl_Event_Description _EFL_UI_EVENT_CLICKED =
   EFL_EVENT_DESCRIPTION("clicked");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_CLICKED_DOUBLE =
   EFL_EVENT_DESCRIPTION("clicked,double");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_CLICKED_TRIPLE =
   EFL_EVENT_DESCRIPTION("clicked,triple");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_CLICKED_RIGHT =
   EFL_EVENT_DESCRIPTION("clicked,right");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_PRESSED =
   EFL_EVENT_DESCRIPTION("pressed");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_UNPRESSED =
   EFL_EVENT_DESCRIPTION("unpressed");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_LONGPRESSED =
   EFL_EVENT_DESCRIPTION("longpressed");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_REPEATED =
   EFL_EVENT_DESCRIPTION("repeated");

static Eina_Bool
_efl_ui_clickable_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifdef EFL_UI_CLICKABLE_EXTRA_OPS
   EFL_OPS_DEFINE(ops, EFL_UI_CLICKABLE_EXTRA_OPS);
   opsp = &ops;
#endif

#ifdef EFL_UI_CLICKABLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_CLICKABLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_clickable_class_desc = {
   EO_VERSION,
   "Efl.Ui.Clickable",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_clickable_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_clickable_interface_get, &_efl_ui_clickable_class_desc, NULL, NULL);
