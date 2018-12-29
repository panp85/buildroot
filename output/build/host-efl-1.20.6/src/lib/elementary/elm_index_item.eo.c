
void _elm_index_item_selected_set(Eo *obj, Elm_Index_Item_Data *pd, Eina_Bool selected);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_index_item_selected_set, EFL_FUNC_CALL(selected), Eina_Bool selected);

void _elm_index_item_priority_set(Eo *obj, Elm_Index_Item_Data *pd, int priority);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_index_item_priority_set, EFL_FUNC_CALL(priority), int priority);

const char *_elm_index_item_letter_get(const Eo *obj, Elm_Index_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_index_item_letter_get, const char *, NULL);

Efl_Object *_elm_index_item_efl_object_constructor(Eo *obj, Elm_Index_Item_Data *pd);


void _elm_index_item_efl_object_destructor(Eo *obj, Elm_Index_Item_Data *pd);


Efl_Canvas_Object *_elm_index_item_elm_widget_item_access_register(Eo *obj, Elm_Index_Item_Data *pd);


const char *_elm_index_item_elm_interface_atspi_accessible_name_get(Eo *obj, Elm_Index_Item_Data *pd);


const Elm_Atspi_Action *_elm_index_item_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Index_Item_Data *pd);


static Eina_Bool
_elm_index_item_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_INDEX_ITEM_EXTRA_OPS
#define ELM_INDEX_ITEM_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_index_item_selected_set, _elm_index_item_selected_set),
      EFL_OBJECT_OP_FUNC(elm_obj_index_item_priority_set, _elm_index_item_priority_set),
      EFL_OBJECT_OP_FUNC(elm_obj_index_item_letter_get, _elm_index_item_letter_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_index_item_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_index_item_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_access_register, _elm_index_item_elm_widget_item_access_register),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_name_get, _elm_index_item_elm_interface_atspi_accessible_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_index_item_elm_interface_atspi_widget_action_elm_actions_get),
      ELM_INDEX_ITEM_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_INDEX_ITEM_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_INDEX_ITEM_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_index_item_class_desc = {
   EO_VERSION,
   "Elm.Index.Item",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Index_Item_Data),
   _elm_index_item_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_index_item_class_get, &_elm_index_item_class_desc, ELM_WIDGET_ITEM_CLASS, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);

EAPI void
elm_index_item_selected_set(Elm_Index_Item *obj, Eina_Bool selected)
{
   elm_obj_index_item_selected_set(obj, selected);
}

EAPI void
elm_index_item_priority_set(Elm_Index_Item *obj, int priority)
{
   elm_obj_index_item_priority_set(obj, priority);
}

EAPI const char *
elm_index_item_letter_get(const Elm_Index_Item *obj)
{
   return elm_obj_index_item_letter_get(obj);
}
