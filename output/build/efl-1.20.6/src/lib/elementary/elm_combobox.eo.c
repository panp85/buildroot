EWAPI const Efl_Event_Description _ELM_COMBOBOX_EVENT_DISMISSED =
   EFL_EVENT_DESCRIPTION("dismissed");
EWAPI const Efl_Event_Description _ELM_COMBOBOX_EVENT_EXPANDED =
   EFL_EVENT_DESCRIPTION("expanded");
EWAPI const Efl_Event_Description _ELM_COMBOBOX_EVENT_CLICKED =
   EFL_EVENT_DESCRIPTION("clicked");
EWAPI const Efl_Event_Description _ELM_COMBOBOX_EVENT_ITEM_SELECTED =
   EFL_EVENT_DESCRIPTION("item,selected");
EWAPI const Efl_Event_Description _ELM_COMBOBOX_EVENT_ITEM_PRESSED =
   EFL_EVENT_DESCRIPTION("item,pressed");
EWAPI const Efl_Event_Description _ELM_COMBOBOX_EVENT_FILTER_DONE =
   EFL_EVENT_DESCRIPTION("filter,done");

Eina_Bool _elm_combobox_expanded_get(Eo *obj, Elm_Combobox_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_combobox_expanded_get, Eina_Bool, 0);

void _elm_combobox_hover_begin(Eo *obj, Elm_Combobox_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_combobox_hover_begin);

void _elm_combobox_hover_end(Eo *obj, Elm_Combobox_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_combobox_hover_end);

Efl_Object *_elm_combobox_efl_object_constructor(Eo *obj, Elm_Combobox_Data *pd);


void _elm_combobox_efl_gfx_visible_set(Eo *obj, Elm_Combobox_Data *pd, Eina_Bool v);


void _elm_combobox_efl_gfx_size_set(Eo *obj, Elm_Combobox_Data *pd, int w, int h);


void _elm_combobox_elm_widget_part_text_set(Eo *obj, Elm_Combobox_Data *pd, const char *part, const char *label);


const char *_elm_combobox_elm_widget_part_text_get(Eo *obj, Elm_Combobox_Data *pd, const char *part);


Elm_Theme_Apply _elm_combobox_elm_widget_theme_apply(Eo *obj, Elm_Combobox_Data *pd);


Eina_Bool _elm_combobox_elm_widget_translate(Eo *obj, Elm_Combobox_Data *pd);


Eina_Bool _elm_combobox_elm_widget_widget_event(Eo *obj, Elm_Combobox_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


Eina_Bool _elm_combobox_efl_ui_autorepeat_autorepeat_supported_get(Eo *obj, Elm_Combobox_Data *pd);


void _elm_combobox_elm_genlist_filter_set(Eo *obj, Elm_Combobox_Data *pd, void *key);


const Elm_Atspi_Action *_elm_combobox_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Combobox_Data *pd);


static Eina_Bool
_elm_combobox_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_COMBOBOX_EXTRA_OPS
#define ELM_COMBOBOX_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_combobox_expanded_get, _elm_combobox_expanded_get),
      EFL_OBJECT_OP_FUNC(elm_obj_combobox_hover_begin, _elm_combobox_hover_begin),
      EFL_OBJECT_OP_FUNC(elm_obj_combobox_hover_end, _elm_combobox_hover_end),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_combobox_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _elm_combobox_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _elm_combobox_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_part_text_set, _elm_combobox_elm_widget_part_text_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_part_text_get, _elm_combobox_elm_widget_part_text_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_combobox_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_translate, _elm_combobox_elm_widget_translate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_combobox_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_supported_get, _elm_combobox_efl_ui_autorepeat_autorepeat_supported_get),
      EFL_OBJECT_OP_FUNC(elm_obj_genlist_filter_set, _elm_combobox_elm_genlist_filter_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_combobox_elm_interface_atspi_widget_action_elm_actions_get),
      ELM_COMBOBOX_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_COMBOBOX_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_COMBOBOX_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_combobox_class_desc = {
   EO_VERSION,
   "Elm.Combobox",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Combobox_Data),
   _elm_combobox_class_initializer,
   _elm_combobox_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_combobox_class_get, &_elm_combobox_class_desc, EFL_UI_BUTTON_CLASS, EFL_UI_SELECTABLE_INTERFACE, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, ELM_ENTRY_CLASS, ELM_GENLIST_CLASS, ELM_HOVER_CLASS, NULL);

EAPI Eina_Bool
elm_combobox_expanded_get(const Elm_Combobox *obj)
{
   return elm_obj_combobox_expanded_get(obj);
}

EAPI void
elm_combobox_hover_begin(Elm_Combobox *obj)
{
   elm_obj_combobox_hover_begin(obj);
}

EAPI void
elm_combobox_hover_end(Elm_Combobox *obj)
{
   elm_obj_combobox_hover_end(obj);
}
