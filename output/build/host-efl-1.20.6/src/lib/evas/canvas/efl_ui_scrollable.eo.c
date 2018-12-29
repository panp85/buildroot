EWAPI const Efl_Event_Description _EFL_UI_EVENT_SCROLL =
   EFL_EVENT_DESCRIPTION("scroll");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_SCROLL_ANIM_START =
   EFL_EVENT_DESCRIPTION("scroll,anim,start");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_SCROLL_ANIM_STOP =
   EFL_EVENT_DESCRIPTION("scroll,anim,stop");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_SCROLL_DRAG_START =
   EFL_EVENT_DESCRIPTION("scroll,drag,start");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_SCROLL_DRAG_STOP =
   EFL_EVENT_DESCRIPTION("scroll,drag,stop");

static Eina_Bool
_efl_ui_scrollable_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifdef EFL_UI_SCROLLABLE_EXTRA_OPS
   EFL_OPS_DEFINE(ops, EFL_UI_SCROLLABLE_EXTRA_OPS);
   opsp = &ops;
#endif

#ifdef EFL_UI_SCROLLABLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_SCROLLABLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_scrollable_class_desc = {
   EO_VERSION,
   "Efl.Ui.Scrollable",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_scrollable_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_scrollable_interface_get, &_efl_ui_scrollable_class_desc, NULL, NULL);
