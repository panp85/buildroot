
int _elm_segment_control_item_index_get(const Eo *obj, Elm_Segment_Control_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_segment_control_item_index_get, int, -1 /* +1 */);

Efl_Canvas_Object *_elm_segment_control_item_object_get(const Eo *obj, Elm_Segment_Control_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_segment_control_item_object_get, Efl_Canvas_Object *, NULL);

void _elm_segment_control_item_selected_set(Eo *obj, Elm_Segment_Control_Item_Data *pd, Eina_Bool selected);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_segment_control_item_selected_set, EFL_FUNC_CALL(selected), Eina_Bool selected);

Efl_Object *_elm_segment_control_item_efl_object_constructor(Eo *obj, Elm_Segment_Control_Item_Data *pd);


void _elm_segment_control_item_efl_object_destructor(Eo *obj, Elm_Segment_Control_Item_Data *pd);


Efl_Canvas_Object *_elm_segment_control_item_elm_widget_item_access_register(Eo *obj, Elm_Segment_Control_Item_Data *pd);


void _elm_segment_control_item_elm_widget_item_part_text_set(Eo *obj, Elm_Segment_Control_Item_Data *pd, const char *part, const char *label);


const char *_elm_segment_control_item_elm_widget_item_part_text_get(Eo *obj, Elm_Segment_Control_Item_Data *pd, const char *part);


void _elm_segment_control_item_elm_widget_item_part_content_set(Eo *obj, Elm_Segment_Control_Item_Data *pd, const char *part, Efl_Canvas_Object *content);


Efl_Canvas_Object *_elm_segment_control_item_elm_widget_item_part_content_get(Eo *obj, Elm_Segment_Control_Item_Data *pd, const char *part);


static Eina_Bool
_elm_segment_control_item_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_SEGMENT_CONTROL_ITEM_EXTRA_OPS
#define ELM_SEGMENT_CONTROL_ITEM_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_segment_control_item_index_get, _elm_segment_control_item_index_get),
      EFL_OBJECT_OP_FUNC(elm_obj_segment_control_item_object_get, _elm_segment_control_item_object_get),
      EFL_OBJECT_OP_FUNC(elm_obj_segment_control_item_selected_set, _elm_segment_control_item_selected_set),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_segment_control_item_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_segment_control_item_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_access_register, _elm_segment_control_item_elm_widget_item_access_register),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_set, _elm_segment_control_item_elm_widget_item_part_text_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_get, _elm_segment_control_item_elm_widget_item_part_text_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_set, _elm_segment_control_item_elm_widget_item_part_content_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_get, _elm_segment_control_item_elm_widget_item_part_content_get),
      ELM_SEGMENT_CONTROL_ITEM_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_SEGMENT_CONTROL_ITEM_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_SEGMENT_CONTROL_ITEM_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_segment_control_item_class_desc = {
   EO_VERSION,
   "Elm.Segment_Control.Item",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Segment_Control_Item_Data),
   _elm_segment_control_item_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_segment_control_item_class_get, &_elm_segment_control_item_class_desc, ELM_WIDGET_ITEM_CLASS, NULL);

EAPI int
elm_segment_control_item_index_get(const Elm_Segment_Control_Item *obj)
{
   return elm_obj_segment_control_item_index_get(obj);
}

EAPI Efl_Canvas_Object *
elm_segment_control_item_object_get(const Elm_Segment_Control_Item *obj)
{
   return elm_obj_segment_control_item_object_get(obj);
}

EAPI void
elm_segment_control_item_selected_set(Elm_Segment_Control_Item *obj, Eina_Bool selected)
{
   elm_obj_segment_control_item_selected_set(obj, selected);
}
