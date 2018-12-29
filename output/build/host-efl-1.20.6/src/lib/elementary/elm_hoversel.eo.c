EWAPI const Efl_Event_Description _ELM_HOVERSEL_EVENT_DISMISSED =
   EFL_EVENT_DESCRIPTION("dismissed");
EWAPI const Efl_Event_Description _ELM_HOVERSEL_EVENT_EXPANDED =
   EFL_EVENT_DESCRIPTION("expanded");
EWAPI const Efl_Event_Description _ELM_HOVERSEL_EVENT_ITEM_FOCUSED =
   EFL_EVENT_DESCRIPTION("item,focused");
EWAPI const Efl_Event_Description _ELM_HOVERSEL_EVENT_ITEM_UNFOCUSED =
   EFL_EVENT_DESCRIPTION("item,unfocused");

void _elm_hoversel_horizontal_set(Eo *obj, Elm_Hoversel_Data *pd, Eina_Bool horizontal);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_hoversel_horizontal_set, EFL_FUNC_CALL(horizontal), Eina_Bool horizontal);

Eina_Bool _elm_hoversel_horizontal_get(Eo *obj, Elm_Hoversel_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_hoversel_horizontal_get, Eina_Bool, 0);

void _elm_hoversel_hover_parent_set(Eo *obj, Elm_Hoversel_Data *pd, Efl_Canvas_Object *parent);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_hoversel_hover_parent_set, EFL_FUNC_CALL(parent), Efl_Canvas_Object *parent);

Efl_Canvas_Object *_elm_hoversel_hover_parent_get(Eo *obj, Elm_Hoversel_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_hoversel_hover_parent_get, Efl_Canvas_Object *, NULL);

Eina_Bool _elm_hoversel_expanded_get(Eo *obj, Elm_Hoversel_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_hoversel_expanded_get, Eina_Bool, 0);

const Eina_List *_elm_hoversel_items_get(Eo *obj, Elm_Hoversel_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_hoversel_items_get, const Eina_List *, NULL);

void _elm_hoversel_auto_update_set(Eo *obj, Elm_Hoversel_Data *pd, Eina_Bool auto_update);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_hoversel_auto_update_set, EFL_FUNC_CALL(auto_update), Eina_Bool auto_update);

Eina_Bool _elm_hoversel_auto_update_get(Eo *obj, Elm_Hoversel_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_hoversel_auto_update_get, Eina_Bool, 0);

void _elm_hoversel_hover_begin(Eo *obj, Elm_Hoversel_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_hoversel_hover_begin);

void _elm_hoversel_clear(Eo *obj, Elm_Hoversel_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_hoversel_clear);

void _elm_hoversel_hover_end(Eo *obj, Elm_Hoversel_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_hoversel_hover_end);

Elm_Widget_Item *_elm_hoversel_item_add(Eo *obj, Elm_Hoversel_Data *pd, const char *label, const char *icon_file, Elm_Icon_Type icon_type, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_hoversel_item_add, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(label, icon_file, icon_type, func, data), const char *label, const char *icon_file, Elm_Icon_Type icon_type, Evas_Smart_Cb func, const void *data);

Efl_Object *_elm_hoversel_efl_object_constructor(Eo *obj, Elm_Hoversel_Data *pd);


void _elm_hoversel_efl_object_destructor(Eo *obj, Elm_Hoversel_Data *pd);


void _elm_hoversel_efl_gfx_visible_set(Eo *obj, Elm_Hoversel_Data *pd, Eina_Bool v);


void _elm_hoversel_elm_widget_widget_parent_set(Eo *obj, Elm_Hoversel_Data *pd, Efl_Canvas_Object *parent);


Elm_Theme_Apply _elm_hoversel_elm_widget_theme_apply(Eo *obj, Elm_Hoversel_Data *pd);


Eina_Bool _elm_hoversel_elm_widget_translate(Eo *obj, Elm_Hoversel_Data *pd);


Eina_Bool _elm_hoversel_elm_widget_widget_event(Eo *obj, Elm_Hoversel_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


Eina_Bool _elm_hoversel_efl_ui_autorepeat_autorepeat_supported_get(Eo *obj, Elm_Hoversel_Data *pd);


const Elm_Atspi_Action *_elm_hoversel_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Hoversel_Data *pd);


static Eina_Bool
_elm_hoversel_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_HOVERSEL_EXTRA_OPS
#define ELM_HOVERSEL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_hoversel_horizontal_set, _elm_hoversel_horizontal_set),
      EFL_OBJECT_OP_FUNC(elm_obj_hoversel_horizontal_get, _elm_hoversel_horizontal_get),
      EFL_OBJECT_OP_FUNC(elm_obj_hoversel_hover_parent_set, _elm_hoversel_hover_parent_set),
      EFL_OBJECT_OP_FUNC(elm_obj_hoversel_hover_parent_get, _elm_hoversel_hover_parent_get),
      EFL_OBJECT_OP_FUNC(elm_obj_hoversel_expanded_get, _elm_hoversel_expanded_get),
      EFL_OBJECT_OP_FUNC(elm_obj_hoversel_items_get, _elm_hoversel_items_get),
      EFL_OBJECT_OP_FUNC(elm_obj_hoversel_auto_update_set, _elm_hoversel_auto_update_set),
      EFL_OBJECT_OP_FUNC(elm_obj_hoversel_auto_update_get, _elm_hoversel_auto_update_get),
      EFL_OBJECT_OP_FUNC(elm_obj_hoversel_hover_begin, _elm_hoversel_hover_begin),
      EFL_OBJECT_OP_FUNC(elm_obj_hoversel_clear, _elm_hoversel_clear),
      EFL_OBJECT_OP_FUNC(elm_obj_hoversel_hover_end, _elm_hoversel_hover_end),
      EFL_OBJECT_OP_FUNC(elm_obj_hoversel_item_add, _elm_hoversel_item_add),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_hoversel_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_hoversel_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _elm_hoversel_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent_set, _elm_hoversel_elm_widget_widget_parent_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_hoversel_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_translate, _elm_hoversel_elm_widget_translate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_hoversel_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_supported_get, _elm_hoversel_efl_ui_autorepeat_autorepeat_supported_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_hoversel_elm_interface_atspi_widget_action_elm_actions_get),
      ELM_HOVERSEL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_HOVERSEL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_HOVERSEL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_hoversel_class_desc = {
   EO_VERSION,
   "Elm.Hoversel",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Hoversel_Data),
   _elm_hoversel_class_initializer,
   _elm_hoversel_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_hoversel_class_get, &_elm_hoversel_class_desc, EFL_UI_BUTTON_CLASS, EFL_UI_SELECTABLE_INTERFACE, EFL_UI_CLICKABLE_INTERFACE, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);

EAPI void
elm_hoversel_horizontal_set(Elm_Hoversel *obj, Eina_Bool horizontal)
{
   elm_obj_hoversel_horizontal_set(obj, horizontal);
}

EAPI Eina_Bool
elm_hoversel_horizontal_get(const Elm_Hoversel *obj)
{
   return elm_obj_hoversel_horizontal_get(obj);
}

EAPI void
elm_hoversel_hover_parent_set(Elm_Hoversel *obj, Efl_Canvas_Object *parent)
{
   elm_obj_hoversel_hover_parent_set(obj, parent);
}

EAPI Efl_Canvas_Object *
elm_hoversel_hover_parent_get(const Elm_Hoversel *obj)
{
   return elm_obj_hoversel_hover_parent_get(obj);
}

EAPI Eina_Bool
elm_hoversel_expanded_get(const Elm_Hoversel *obj)
{
   return elm_obj_hoversel_expanded_get(obj);
}

EAPI const Eina_List *
elm_hoversel_items_get(const Elm_Hoversel *obj)
{
   return elm_obj_hoversel_items_get(obj);
}

EAPI void
elm_hoversel_auto_update_set(Elm_Hoversel *obj, Eina_Bool auto_update)
{
   elm_obj_hoversel_auto_update_set(obj, auto_update);
}

EAPI Eina_Bool
elm_hoversel_auto_update_get(const Elm_Hoversel *obj)
{
   return elm_obj_hoversel_auto_update_get(obj);
}

EAPI void
elm_hoversel_hover_begin(Elm_Hoversel *obj)
{
   elm_obj_hoversel_hover_begin(obj);
}

EAPI void
elm_hoversel_clear(Elm_Hoversel *obj)
{
   elm_obj_hoversel_clear(obj);
}

EAPI void
elm_hoversel_hover_end(Elm_Hoversel *obj)
{
   elm_obj_hoversel_hover_end(obj);
}

EAPI Elm_Widget_Item *
elm_hoversel_item_add(Elm_Hoversel *obj, const char *label, const char *icon_file, Elm_Icon_Type icon_type, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_hoversel_item_add(obj, label, icon_file, icon_type, func, data);
}
