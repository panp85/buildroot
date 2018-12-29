
void _elm_gesture_layer_zoom_step_set(Eo *obj, Elm_Gesture_Layer_Data *pd, double step);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gesture_layer_zoom_step_set, EFL_FUNC_CALL(step), double step);

double _elm_gesture_layer_zoom_step_get(Eo *obj, Elm_Gesture_Layer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gesture_layer_zoom_step_get, double, 0);

void _elm_gesture_layer_tap_finger_size_set(Eo *obj, Elm_Gesture_Layer_Data *pd, int sz);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gesture_layer_tap_finger_size_set, EFL_FUNC_CALL(sz), int sz);

int _elm_gesture_layer_tap_finger_size_get(Eo *obj, Elm_Gesture_Layer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gesture_layer_tap_finger_size_get, int, 0);

void _elm_gesture_layer_hold_events_set(Eo *obj, Elm_Gesture_Layer_Data *pd, Eina_Bool hold_events);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gesture_layer_hold_events_set, EFL_FUNC_CALL(hold_events), Eina_Bool hold_events);

Eina_Bool _elm_gesture_layer_hold_events_get(Eo *obj, Elm_Gesture_Layer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gesture_layer_hold_events_get, Eina_Bool, 0);

void _elm_gesture_layer_rotate_step_set(Eo *obj, Elm_Gesture_Layer_Data *pd, double step);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gesture_layer_rotate_step_set, EFL_FUNC_CALL(step), double step);

double _elm_gesture_layer_rotate_step_get(Eo *obj, Elm_Gesture_Layer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gesture_layer_rotate_step_get, double, 0);

void _elm_gesture_layer_cb_set(Eo *obj, Elm_Gesture_Layer_Data *pd, Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gesture_layer_cb_set, EFL_FUNC_CALL(idx, cb_type, cb, data), Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void *data);

Eina_Bool _elm_gesture_layer_attach(Eo *obj, Elm_Gesture_Layer_Data *pd, Efl_Canvas_Object *target);

EOAPI EFL_FUNC_BODYV(elm_obj_gesture_layer_attach, Eina_Bool, 0, EFL_FUNC_CALL(target), Efl_Canvas_Object *target);

void _elm_gesture_layer_cb_del(Eo *obj, Elm_Gesture_Layer_Data *pd, Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gesture_layer_cb_del, EFL_FUNC_CALL(idx, cb_type, cb, data), Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void *data);

void _elm_gesture_layer_cb_add(Eo *obj, Elm_Gesture_Layer_Data *pd, Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gesture_layer_cb_add, EFL_FUNC_CALL(idx, cb_type, cb, data), Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void *data);

Efl_Object *_elm_gesture_layer_efl_object_constructor(Eo *obj, Elm_Gesture_Layer_Data *pd);


Eina_Bool _elm_gesture_layer_elm_widget_disable(Eo *obj, Elm_Gesture_Layer_Data *pd);


static Eina_Bool
_elm_gesture_layer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_GESTURE_LAYER_EXTRA_OPS
#define ELM_GESTURE_LAYER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_gesture_layer_zoom_step_set, _elm_gesture_layer_zoom_step_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gesture_layer_zoom_step_get, _elm_gesture_layer_zoom_step_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gesture_layer_tap_finger_size_set, _elm_gesture_layer_tap_finger_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gesture_layer_tap_finger_size_get, _elm_gesture_layer_tap_finger_size_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gesture_layer_hold_events_set, _elm_gesture_layer_hold_events_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gesture_layer_hold_events_get, _elm_gesture_layer_hold_events_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gesture_layer_rotate_step_set, _elm_gesture_layer_rotate_step_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gesture_layer_rotate_step_get, _elm_gesture_layer_rotate_step_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gesture_layer_cb_set, _elm_gesture_layer_cb_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gesture_layer_attach, _elm_gesture_layer_attach),
      EFL_OBJECT_OP_FUNC(elm_obj_gesture_layer_cb_del, _elm_gesture_layer_cb_del),
      EFL_OBJECT_OP_FUNC(elm_obj_gesture_layer_cb_add, _elm_gesture_layer_cb_add),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_gesture_layer_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_disable, _elm_gesture_layer_elm_widget_disable),
      ELM_GESTURE_LAYER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_GESTURE_LAYER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_GESTURE_LAYER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_gesture_layer_class_desc = {
   EO_VERSION,
   "Elm.Gesture_Layer",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Gesture_Layer_Data),
   _elm_gesture_layer_class_initializer,
   _elm_gesture_layer_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_gesture_layer_class_get, &_elm_gesture_layer_class_desc, ELM_WIDGET_CLASS, NULL);

EAPI void
elm_gesture_layer_zoom_step_set(Elm_Gesture_Layer *obj, double step)
{
   elm_obj_gesture_layer_zoom_step_set(obj, step);
}

EAPI double
elm_gesture_layer_zoom_step_get(const Elm_Gesture_Layer *obj)
{
   return elm_obj_gesture_layer_zoom_step_get(obj);
}

EAPI void
elm_gesture_layer_tap_finger_size_set(Elm_Gesture_Layer *obj, int sz)
{
   elm_obj_gesture_layer_tap_finger_size_set(obj, sz);
}

EAPI int
elm_gesture_layer_tap_finger_size_get(const Elm_Gesture_Layer *obj)
{
   return elm_obj_gesture_layer_tap_finger_size_get(obj);
}

EAPI void
elm_gesture_layer_hold_events_set(Elm_Gesture_Layer *obj, Eina_Bool hold_events)
{
   elm_obj_gesture_layer_hold_events_set(obj, hold_events);
}

EAPI Eina_Bool
elm_gesture_layer_hold_events_get(const Elm_Gesture_Layer *obj)
{
   return elm_obj_gesture_layer_hold_events_get(obj);
}

EAPI void
elm_gesture_layer_rotate_step_set(Elm_Gesture_Layer *obj, double step)
{
   elm_obj_gesture_layer_rotate_step_set(obj, step);
}

EAPI double
elm_gesture_layer_rotate_step_get(const Elm_Gesture_Layer *obj)
{
   return elm_obj_gesture_layer_rotate_step_get(obj);
}

EAPI void
elm_gesture_layer_cb_set(Elm_Gesture_Layer *obj, Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void *data)
{
   elm_obj_gesture_layer_cb_set(obj, idx, cb_type, cb, data);
}

EAPI Eina_Bool
elm_gesture_layer_attach(Elm_Gesture_Layer *obj, Efl_Canvas_Object *target)
{
   return elm_obj_gesture_layer_attach(obj, target);
}

EAPI void
elm_gesture_layer_cb_del(Elm_Gesture_Layer *obj, Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void *data)
{
   elm_obj_gesture_layer_cb_del(obj, idx, cb_type, cb, data);
}

EAPI void
elm_gesture_layer_cb_add(Elm_Gesture_Layer *obj, Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void *data)
{
   elm_obj_gesture_layer_cb_add(obj, idx, cb_type, cb, data);
}
