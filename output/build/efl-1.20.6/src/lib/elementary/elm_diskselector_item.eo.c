
Elm_Widget_Item *_elm_diskselector_item_prev_get(Eo *obj, Elm_Diskselector_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_diskselector_item_prev_get, Elm_Widget_Item *, NULL);

Elm_Widget_Item *_elm_diskselector_item_next_get(Eo *obj, Elm_Diskselector_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_diskselector_item_next_get, Elm_Widget_Item *, NULL);

void _elm_diskselector_item_selected_set(Eo *obj, Elm_Diskselector_Item_Data *pd, Eina_Bool selected);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_diskselector_item_selected_set, EFL_FUNC_CALL(selected), Eina_Bool selected);

Eina_Bool _elm_diskselector_item_selected_get(Eo *obj, Elm_Diskselector_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_diskselector_item_selected_get, Eina_Bool, 0);

Efl_Object *_elm_diskselector_item_efl_object_constructor(Eo *obj, Elm_Diskselector_Item_Data *pd);


void _elm_diskselector_item_efl_object_destructor(Eo *obj, Elm_Diskselector_Item_Data *pd);


void _elm_diskselector_item_elm_widget_item_part_text_set(Eo *obj, Elm_Diskselector_Item_Data *pd, const char *part, const char *label);


const char *_elm_diskselector_item_elm_widget_item_part_text_get(Eo *obj, Elm_Diskselector_Item_Data *pd, const char *part);


void _elm_diskselector_item_elm_widget_item_part_content_set(Eo *obj, Elm_Diskselector_Item_Data *pd, const char *part, Efl_Canvas_Object *content);


Efl_Canvas_Object *_elm_diskselector_item_elm_widget_item_part_content_get(Eo *obj, Elm_Diskselector_Item_Data *pd, const char *part);


static Eina_Bool
_elm_diskselector_item_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_DISKSELECTOR_ITEM_EXTRA_OPS
#define ELM_DISKSELECTOR_ITEM_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_item_prev_get, _elm_diskselector_item_prev_get),
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_item_next_get, _elm_diskselector_item_next_get),
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_item_selected_set, _elm_diskselector_item_selected_set),
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_item_selected_get, _elm_diskselector_item_selected_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_diskselector_item_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_diskselector_item_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_set, _elm_diskselector_item_elm_widget_item_part_text_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_get, _elm_diskselector_item_elm_widget_item_part_text_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_set, _elm_diskselector_item_elm_widget_item_part_content_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_get, _elm_diskselector_item_elm_widget_item_part_content_get),
      ELM_DISKSELECTOR_ITEM_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_DISKSELECTOR_ITEM_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_DISKSELECTOR_ITEM_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_diskselector_item_class_desc = {
   EO_VERSION,
   "Elm.Diskselector.Item",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Diskselector_Item_Data),
   _elm_diskselector_item_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_diskselector_item_class_get, &_elm_diskselector_item_class_desc, ELM_WIDGET_ITEM_CLASS, NULL);

EAPI Elm_Widget_Item *
elm_diskselector_item_prev_get(const Elm_Diskselector_Item *obj)
{
   return elm_obj_diskselector_item_prev_get(obj);
}

EAPI Elm_Widget_Item *
elm_diskselector_item_next_get(const Elm_Diskselector_Item *obj)
{
   return elm_obj_diskselector_item_next_get(obj);
}

EAPI void
elm_diskselector_item_selected_set(Elm_Diskselector_Item *obj, Eina_Bool selected)
{
   elm_obj_diskselector_item_selected_set(obj, selected);
}

EAPI Eina_Bool
elm_diskselector_item_selected_get(const Elm_Diskselector_Item *obj)
{
   return elm_obj_diskselector_item_selected_get(obj);
}
