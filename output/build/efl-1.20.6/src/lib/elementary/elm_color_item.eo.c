
void _elm_color_item_color_set(Eo *obj, Elm_Color_Item_Data *pd, int r, int g, int b, int a);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_color_item_color_set, EFL_FUNC_CALL(r, g, b, a), int r, int g, int b, int a);

void _elm_color_item_color_get(Eo *obj, Elm_Color_Item_Data *pd, int *r, int *g, int *b, int *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_color_item_color_get, EFL_FUNC_CALL(r, g, b, a), int *r, int *g, int *b, int *a);

void _elm_color_item_selected_set(Eo *obj, Elm_Color_Item_Data *pd, Eina_Bool selected);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_color_item_selected_set, EFL_FUNC_CALL(selected), Eina_Bool selected);

Eina_Bool _elm_color_item_selected_get(Eo *obj, Elm_Color_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_color_item_selected_get, Eina_Bool, 0);

Efl_Object *_elm_color_item_efl_object_constructor(Eo *obj, Elm_Color_Item_Data *pd);


void _elm_color_item_efl_object_destructor(Eo *obj, Elm_Color_Item_Data *pd);


Efl_Canvas_Object *_elm_color_item_elm_widget_item_access_register(Eo *obj, Elm_Color_Item_Data *pd);


void _elm_color_item_elm_widget_item_signal_emit(Eo *obj, Elm_Color_Item_Data *pd, const char *emission, const char *source);


void _elm_color_item_elm_widget_item_focus_set(Eo *obj, Elm_Color_Item_Data *pd, Eina_Bool focused);


Eina_Bool _elm_color_item_elm_widget_item_focus_get(Eo *obj, Elm_Color_Item_Data *pd);


Elm_Atspi_State_Set _elm_color_item_elm_interface_atspi_accessible_state_set_get(Eo *obj, Elm_Color_Item_Data *pd);


const char *_elm_color_item_elm_interface_atspi_accessible_name_get(Eo *obj, Elm_Color_Item_Data *pd);


const Elm_Atspi_Action *_elm_color_item_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Color_Item_Data *pd);


static Eina_Bool
_elm_color_item_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_COLOR_ITEM_EXTRA_OPS
#define ELM_COLOR_ITEM_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_color_item_color_set, _elm_color_item_color_set),
      EFL_OBJECT_OP_FUNC(elm_obj_color_item_color_get, _elm_color_item_color_get),
      EFL_OBJECT_OP_FUNC(elm_obj_color_item_selected_set, _elm_color_item_selected_set),
      EFL_OBJECT_OP_FUNC(elm_obj_color_item_selected_get, _elm_color_item_selected_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_color_item_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_color_item_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_access_register, _elm_color_item_elm_widget_item_access_register),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_signal_emit, _elm_color_item_elm_widget_item_signal_emit),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_focus_set, _elm_color_item_elm_widget_item_focus_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_focus_get, _elm_color_item_elm_widget_item_focus_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _elm_color_item_elm_interface_atspi_accessible_state_set_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_name_get, _elm_color_item_elm_interface_atspi_accessible_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_color_item_elm_interface_atspi_widget_action_elm_actions_get),
      ELM_COLOR_ITEM_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_COLOR_ITEM_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_COLOR_ITEM_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_color_item_class_desc = {
   EO_VERSION,
   "Elm.Color.Item",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Color_Item_Data),
   _elm_color_item_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_color_item_class_get, &_elm_color_item_class_desc, ELM_WIDGET_ITEM_CLASS, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);

EAPI void
elm_color_item_color_set(Elm_Color_Item *obj, int r, int g, int b, int a)
{
   elm_obj_color_item_color_set(obj, r, g, b, a);
}

EAPI void
elm_color_item_color_get(const Elm_Color_Item *obj, int *r, int *g, int *b, int *a)
{
   elm_obj_color_item_color_get(obj, r, g, b, a);
}

EAPI void
elm_color_item_selected_set(Elm_Color_Item *obj, Eina_Bool selected)
{
   elm_obj_color_item_selected_set(obj, selected);
}

EAPI Eina_Bool
elm_color_item_selected_get(const Elm_Color_Item *obj)
{
   return elm_obj_color_item_selected_get(obj);
}
