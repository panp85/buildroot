
void _efl_canvas_object_event_grabber_freeze_when_visible_set(Eo *obj, Efl_Object_Event_Grabber_Data *pd, Eina_Bool set);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_object_event_grabber_freeze_when_visible_set, EFL_FUNC_CALL(set), Eina_Bool set);

Eina_Bool _efl_canvas_object_event_grabber_freeze_when_visible_get(Eo *obj, Efl_Object_Event_Grabber_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_event_grabber_freeze_when_visible_get, Eina_Bool, 0);

Efl_Object *_efl_canvas_object_event_grabber_efl_object_constructor(Eo *obj, Efl_Object_Event_Grabber_Data *pd);


void _efl_canvas_object_event_grabber_efl_object_destructor(Eo *obj, Efl_Object_Event_Grabber_Data *pd);


void _efl_canvas_object_event_grabber_efl_canvas_group_group_member_add(Eo *obj, Efl_Object_Event_Grabber_Data *pd, Efl_Canvas_Object *sub_obj);


void _efl_canvas_object_event_grabber_efl_canvas_group_group_member_del(Eo *obj, Efl_Object_Event_Grabber_Data *pd, Efl_Canvas_Object *sub_obj);


Eina_Iterator *_efl_canvas_object_event_grabber_efl_canvas_group_group_children_iterate(const Eo *obj, Efl_Object_Event_Grabber_Data *pd);


void _efl_canvas_object_event_grabber_efl_canvas_group_group_calculate(Eo *obj, Efl_Object_Event_Grabber_Data *pd);


void _efl_canvas_object_event_grabber_efl_canvas_group_group_change(Eo *obj, Efl_Object_Event_Grabber_Data *pd);


void _efl_canvas_object_event_grabber_efl_canvas_group_group_need_recalculate_set(Eo *obj, Efl_Object_Event_Grabber_Data *pd, Eina_Bool value);


Eina_Bool _efl_canvas_object_event_grabber_efl_canvas_group_group_need_recalculate_get(Eo *obj, Efl_Object_Event_Grabber_Data *pd);


void _efl_canvas_object_event_grabber_efl_gfx_position_set(Eo *obj, Efl_Object_Event_Grabber_Data *pd, int x, int y);


void _efl_canvas_object_event_grabber_efl_gfx_size_set(Eo *obj, Efl_Object_Event_Grabber_Data *pd, int w, int h);


void _efl_canvas_object_event_grabber_efl_gfx_visible_set(Eo *obj, Efl_Object_Event_Grabber_Data *pd, Eina_Bool v);


Eina_Bool _efl_canvas_object_event_grabber_efl_gfx_visible_get(Eo *obj, Efl_Object_Event_Grabber_Data *pd);


void _efl_canvas_object_event_grabber_efl_gfx_stack_layer_set(Eo *obj, Efl_Object_Event_Grabber_Data *pd, short l);


static Eina_Bool
_efl_canvas_object_event_grabber_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_OBJECT_EVENT_GRABBER_EXTRA_OPS
#define EFL_CANVAS_OBJECT_EVENT_GRABBER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_canvas_object_event_grabber_freeze_when_visible_set, _efl_canvas_object_event_grabber_freeze_when_visible_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_event_grabber_freeze_when_visible_get, _efl_canvas_object_event_grabber_freeze_when_visible_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_canvas_object_event_grabber_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_canvas_object_event_grabber_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_add, _efl_canvas_object_event_grabber_efl_canvas_group_group_member_add),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_del, _efl_canvas_object_event_grabber_efl_canvas_group_group_member_del),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_children_iterate, _efl_canvas_object_event_grabber_efl_canvas_group_group_children_iterate),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _efl_canvas_object_event_grabber_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_change, _efl_canvas_object_event_grabber_efl_canvas_group_group_change),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_need_recalculate_set, _efl_canvas_object_event_grabber_efl_canvas_group_group_need_recalculate_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_need_recalculate_get, _efl_canvas_object_event_grabber_efl_canvas_group_group_need_recalculate_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _efl_canvas_object_event_grabber_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _efl_canvas_object_event_grabber_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _efl_canvas_object_event_grabber_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_get, _efl_canvas_object_event_grabber_efl_gfx_visible_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_layer_set, _efl_canvas_object_event_grabber_efl_gfx_stack_layer_set),
      EFL_CANVAS_OBJECT_EVENT_GRABBER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_OBJECT_EVENT_GRABBER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_OBJECT_EVENT_GRABBER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_object_event_grabber_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Object.Event.Grabber",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Object_Event_Grabber_Data),
   _efl_canvas_object_event_grabber_class_initializer,
   _efl_canvas_object_event_grabber_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_object_event_grabber_class_get, &_efl_canvas_object_event_grabber_class_desc, EFL_CANVAS_GROUP_CLASS, NULL);

EAPI void
evas_object_event_grabber_freeze_when_visible_set(Efl_Canvas_Object_Event_Grabber *obj, Eina_Bool set)
{
   efl_canvas_object_event_grabber_freeze_when_visible_set(obj, set);
}

EAPI Eina_Bool
evas_object_event_grabber_freeze_when_visible_get(const Efl_Canvas_Object_Event_Grabber *obj)
{
   return efl_canvas_object_event_grabber_freeze_when_visible_get(obj);
}
