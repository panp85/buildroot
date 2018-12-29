EWAPI const Efl_Event_Description _EFL_UI_EVENT_DRAG =
   EFL_EVENT_DESCRIPTION("drag");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_DRAG_START =
   EFL_EVENT_DESCRIPTION("drag,start");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_DRAG_STOP =
   EFL_EVENT_DESCRIPTION("drag,stop");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_DRAG_END =
   EFL_EVENT_DESCRIPTION("drag,end");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_DRAG_START_UP =
   EFL_EVENT_DESCRIPTION("drag,start,up");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_DRAG_START_DOWN =
   EFL_EVENT_DESCRIPTION("drag,start,down");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_DRAG_START_RIGHT =
   EFL_EVENT_DESCRIPTION("drag,start,right");
EWAPI const Efl_Event_Description _EFL_UI_EVENT_DRAG_START_LEFT =
   EFL_EVENT_DESCRIPTION("drag,start,left");
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_draggable_drag_target_set, EFL_FUNC_CALL(set), Eina_Bool set);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_draggable_drag_target_get, Eina_Bool, 0);

static Eina_Bool
_efl_ui_draggable_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_DRAGGABLE_EXTRA_OPS
#define EFL_UI_DRAGGABLE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_draggable_drag_target_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_draggable_drag_target_get, NULL),
      EFL_UI_DRAGGABLE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_DRAGGABLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_DRAGGABLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_draggable_class_desc = {
   EO_VERSION,
   "Efl.Ui.Draggable",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_draggable_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_draggable_interface_get, &_efl_ui_draggable_class_desc, NULL, NULL);
