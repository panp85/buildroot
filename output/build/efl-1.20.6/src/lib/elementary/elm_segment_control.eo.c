EWAPI const Efl_Event_Description _ELM_SEGMENT_CONTROL_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");

int _elm_segment_control_item_count_get(Eo *obj, Elm_Segment_Control_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_segment_control_item_count_get, int, 0);

Elm_Widget_Item *_elm_segment_control_item_selected_get(Eo *obj, Elm_Segment_Control_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_segment_control_item_selected_get, Elm_Widget_Item *, NULL);

const char *_elm_segment_control_item_label_get(const Eo *obj, Elm_Segment_Control_Data *pd, int idx);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_segment_control_item_label_get, const char *, NULL, EFL_FUNC_CALL(idx), int idx);

Elm_Widget_Item *_elm_segment_control_item_insert_at(Eo *obj, Elm_Segment_Control_Data *pd, Efl_Canvas_Object *icon, const char *label, int idx);

EOAPI EFL_FUNC_BODYV(elm_obj_segment_control_item_insert_at, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(icon, label, idx), Efl_Canvas_Object *icon, const char *label, int idx);

Elm_Widget_Item *_elm_segment_control_item_get(const Eo *obj, Elm_Segment_Control_Data *pd, int idx);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_segment_control_item_get, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(idx), int idx);

void _elm_segment_control_item_del_at(Eo *obj, Elm_Segment_Control_Data *pd, int idx);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_segment_control_item_del_at, EFL_FUNC_CALL(idx), int idx);

Elm_Widget_Item *_elm_segment_control_item_add(Eo *obj, Elm_Segment_Control_Data *pd, Efl_Canvas_Object *icon, const char *label);

EOAPI EFL_FUNC_BODYV(elm_obj_segment_control_item_add, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(icon, label), Efl_Canvas_Object *icon, const char *label);

Efl_Canvas_Object *_elm_segment_control_item_icon_get(const Eo *obj, Elm_Segment_Control_Data *pd, int idx);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_segment_control_item_icon_get, Efl_Canvas_Object *, NULL, EFL_FUNC_CALL(idx), int idx);

Efl_Object *_elm_segment_control_efl_object_constructor(Eo *obj, Elm_Segment_Control_Data *pd);


Elm_Theme_Apply _elm_segment_control_elm_widget_theme_apply(Eo *obj, Elm_Segment_Control_Data *pd);


Eina_Bool _elm_segment_control_elm_widget_focus_next_manager_is(Eo *obj, Elm_Segment_Control_Data *pd);


Eina_Bool _elm_segment_control_elm_widget_focus_next(Eo *obj, Elm_Segment_Control_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_segment_control_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Segment_Control_Data *pd);


void _elm_segment_control_elm_widget_access(Eo *obj, Elm_Segment_Control_Data *pd, Eina_Bool acs);


Eina_Bool _elm_segment_control_elm_widget_disable(Eo *obj, Elm_Segment_Control_Data *pd);


Eina_Bool _elm_segment_control_elm_widget_translate(Eo *obj, Elm_Segment_Control_Data *pd);


void _elm_segment_control_elm_layout_sizing_eval(Eo *obj, Elm_Segment_Control_Data *pd);


static Eina_Bool
_elm_segment_control_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_SEGMENT_CONTROL_EXTRA_OPS
#define ELM_SEGMENT_CONTROL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_segment_control_item_count_get, _elm_segment_control_item_count_get),
      EFL_OBJECT_OP_FUNC(elm_obj_segment_control_item_selected_get, _elm_segment_control_item_selected_get),
      EFL_OBJECT_OP_FUNC(elm_obj_segment_control_item_label_get, _elm_segment_control_item_label_get),
      EFL_OBJECT_OP_FUNC(elm_obj_segment_control_item_insert_at, _elm_segment_control_item_insert_at),
      EFL_OBJECT_OP_FUNC(elm_obj_segment_control_item_get, _elm_segment_control_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_segment_control_item_del_at, _elm_segment_control_item_del_at),
      EFL_OBJECT_OP_FUNC(elm_obj_segment_control_item_add, _elm_segment_control_item_add),
      EFL_OBJECT_OP_FUNC(elm_obj_segment_control_item_icon_get, _elm_segment_control_item_icon_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_segment_control_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_segment_control_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_segment_control_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_segment_control_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_segment_control_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_segment_control_elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_disable, _elm_segment_control_elm_widget_disable),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_translate, _elm_segment_control_elm_widget_translate),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_segment_control_elm_layout_sizing_eval),
      ELM_SEGMENT_CONTROL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_SEGMENT_CONTROL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_SEGMENT_CONTROL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_segment_control_class_desc = {
   EO_VERSION,
   "Elm.Segment_Control",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Segment_Control_Data),
   _elm_segment_control_class_initializer,
   _elm_segment_control_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_segment_control_class_get, &_elm_segment_control_class_desc, ELM_LAYOUT_CLASS, NULL);

EAPI int
elm_segment_control_item_count_get(const Elm_Segment_Control *obj)
{
   return elm_obj_segment_control_item_count_get(obj);
}

EAPI Elm_Widget_Item *
elm_segment_control_item_selected_get(const Elm_Segment_Control *obj)
{
   return elm_obj_segment_control_item_selected_get(obj);
}

EAPI const char *
elm_segment_control_item_label_get(const Elm_Segment_Control *obj, int idx)
{
   return elm_obj_segment_control_item_label_get(obj, idx);
}

EAPI Elm_Widget_Item *
elm_segment_control_item_insert_at(Elm_Segment_Control *obj, Efl_Canvas_Object *icon, const char *label, int idx)
{
   return elm_obj_segment_control_item_insert_at(obj, icon, label, idx);
}

EAPI Elm_Widget_Item *
elm_segment_control_item_get(const Elm_Segment_Control *obj, int idx)
{
   return elm_obj_segment_control_item_get(obj, idx);
}

EAPI void
elm_segment_control_item_del_at(Elm_Segment_Control *obj, int idx)
{
   elm_obj_segment_control_item_del_at(obj, idx);
}

EAPI Elm_Widget_Item *
elm_segment_control_item_add(Elm_Segment_Control *obj, Efl_Canvas_Object *icon, const char *label)
{
   return elm_obj_segment_control_item_add(obj, icon, label);
}

EAPI Efl_Canvas_Object *
elm_segment_control_item_icon_get(const Elm_Segment_Control *obj, int idx)
{
   return elm_obj_segment_control_item_icon_get(obj, idx);
}
