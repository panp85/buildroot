EWAPI const Efl_Event_Description _EFL_CANVAS_EVENT_FOCUS_IN =
   EFL_EVENT_DESCRIPTION("focus,in");
EWAPI const Efl_Event_Description _EFL_CANVAS_EVENT_FOCUS_OUT =
   EFL_EVENT_DESCRIPTION("focus,out");
EWAPI const Efl_Event_Description _EFL_CANVAS_EVENT_OBJECT_FOCUS_IN =
   EFL_EVENT_DESCRIPTION("object,focus,in");
EWAPI const Efl_Event_Description _EFL_CANVAS_EVENT_OBJECT_FOCUS_OUT =
   EFL_EVENT_DESCRIPTION("object,focus,out");
EWAPI const Efl_Event_Description _EFL_CANVAS_EVENT_RENDER_PRE =
   EFL_EVENT_DESCRIPTION("render,pre");
EWAPI const Efl_Event_Description _EFL_CANVAS_EVENT_RENDER_POST =
   EFL_EVENT_DESCRIPTION("render,post");
EWAPI const Efl_Event_Description _EFL_CANVAS_EVENT_DEVICE_CHANGED =
   EFL_EVENT_DESCRIPTION("device,changed");
EWAPI const Efl_Event_Description _EFL_CANVAS_EVENT_DEVICE_ADDED =
   EFL_EVENT_DESCRIPTION("device,added");
EWAPI const Efl_Event_Description _EFL_CANVAS_EVENT_DEVICE_REMOVED =
   EFL_EVENT_DESCRIPTION("device,removed");
EOAPI EFL_FUNC_BODYV_CONST(efl_canvas_image_max_size_get, Eina_Bool, 0, EFL_FUNC_CALL(maxw, maxh), int *maxw, int *maxh);
EOAPI EFL_VOID_FUNC_BODY(efl_canvas_smart_objects_calculate);
EOAPI EFL_FUNC_BODYV_CONST(efl_canvas_objects_at_xy_get, Eina_Iterator *, NULL, EFL_FUNC_CALL(x, y, include_pass_events_objects, include_hidden_objects), int x, int y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
EOAPI EFL_FUNC_BODYV_CONST(efl_canvas_object_top_at_xy_get, Efl_Gfx *, NULL, EFL_FUNC_CALL(x, y, include_pass_events_objects, include_hidden_objects), int x, int y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
EOAPI EFL_FUNC_BODYV_CONST(efl_canvas_objects_in_rectangle_get, Eina_Iterator *, NULL, EFL_FUNC_CALL(x, y, w, h, include_pass_events_objects, include_hidden_objects), int x, int y, int w, int h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
EOAPI EFL_FUNC_BODYV_CONST(efl_canvas_object_top_in_rectangle_get, Efl_Gfx *, NULL, EFL_FUNC_CALL(x, y, w, h, include_pass_events_objects, include_hidden_objects), int x, int y, int w, int h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
EOAPI EFL_FUNC_BODY(efl_canvas_seats, Eina_Iterator *, NULL);
EOAPI EFL_FUNC_BODYV_CONST(efl_canvas_device_get, Efl_Input_Device *, NULL, EFL_FUNC_CALL(name), const char *name);
EOAPI EFL_FUNC_BODYV_CONST(efl_canvas_seat_get, Efl_Input_Device *, NULL, EFL_FUNC_CALL(id), int id);

static Eina_Bool
_efl_canvas_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_EXTRA_OPS
#define EFL_CANVAS_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_canvas_image_max_size_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_canvas_smart_objects_calculate, NULL),
      EFL_OBJECT_OP_FUNC(efl_canvas_objects_at_xy_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_top_at_xy_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_canvas_objects_in_rectangle_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_top_in_rectangle_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_canvas_seats, NULL),
      EFL_OBJECT_OP_FUNC(efl_canvas_device_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_canvas_seat_get, NULL),
      EFL_CANVAS_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_class_desc = {
   EO_VERSION,
   "Efl.Canvas",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_canvas_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_interface_get, &_efl_canvas_class_desc, NULL, NULL);
