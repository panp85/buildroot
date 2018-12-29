EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_CREATED =
   EFL_EVENT_DESCRIPTION("window,created");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_DESTROYED =
   EFL_EVENT_DESCRIPTION("window,destroyed");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_ACTIVATED =
   EFL_EVENT_DESCRIPTION("window,activated");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_DEACTIVATED =
   EFL_EVENT_DESCRIPTION("window,deactivated");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_MAXIMIZED =
   EFL_EVENT_DESCRIPTION("window,maximized");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_MINIMIZED =
   EFL_EVENT_DESCRIPTION("window,minimized");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_RESTORED =
   EFL_EVENT_DESCRIPTION("window,restored");

static Eina_Bool
_elm_interface_atspi_window_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifdef ELM_INTERFACE_ATSPI_WINDOW_EXTRA_OPS
   EFL_OPS_DEFINE(ops, ELM_INTERFACE_ATSPI_WINDOW_EXTRA_OPS);
   opsp = &ops;
#endif

#ifdef ELM_INTERFACE_ATSPI_WINDOW_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_INTERFACE_ATSPI_WINDOW_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_interface_atspi_window_class_desc = {
   EO_VERSION,
   "Elm.Interface.Atspi.Window",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _elm_interface_atspi_window_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_interface_atspi_window_interface_get, &_elm_interface_atspi_window_class_desc, NULL, NULL);
