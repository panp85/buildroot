EWAPI const Efl_Event_Description _EFL_UI_EVENT_ZOOM_START =
   EFL_EVENT_DESCRIPTION("zoom,start");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_ZOOM_STOP =
   EFL_EVENT_DESCRIPTION("zoom,stop");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_ZOOM_CHANGE =
   EFL_EVENT_DESCRIPTION("zoom,change");
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_zoom_animation_set, EFL_FUNC_CALL(paused), Eina_Bool paused);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_zoom_animation_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_zoom_set, EFL_FUNC_CALL(zoom), double zoom);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_zoom_get, double, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_zoom_mode_set, EFL_FUNC_CALL(mode), Efl_Ui_Zoom_Mode mode);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_zoom_mode_get, Efl_Ui_Zoom_Mode, 0);

static Eina_Bool
_efl_ui_zoom_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_ZOOM_EXTRA_OPS
#define EFL_UI_ZOOM_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_zoom_animation_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_zoom_animation_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_zoom_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_zoom_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_zoom_mode_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_zoom_mode_get, NULL),
      EFL_UI_ZOOM_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_ZOOM_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_ZOOM_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_zoom_class_desc = {
   EO_VERSION,
   "Efl.Ui.Zoom",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_zoom_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_zoom_interface_get, &_efl_ui_zoom_class_desc, NULL, NULL);
