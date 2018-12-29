EWAPI const Efl_Event_Description _ELM_FILESELECTOR_EVENT_DONE =
   EFL_EVENT_DESCRIPTION("done");
EWAPI const Efl_Event_Description _ELM_FILESELECTOR_EVENT_ACTIVATED =
   EFL_EVENT_DESCRIPTION("activated");
EWAPI const Efl_Event_Description _ELM_FILESELECTOR_EVENT_SELECTED_INVALID =
   EFL_EVENT_DESCRIPTION("selected,invalid");
EWAPI const Efl_Event_Description _ELM_FILESELECTOR_EVENT_DIRECTORY_OPEN =
   EFL_EVENT_DESCRIPTION("directory,open");

void _elm_fileselector_buttons_ok_cancel_set(Eo *obj, Elm_Fileselector_Data *pd, Eina_Bool visible);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_fileselector_buttons_ok_cancel_set, EFL_FUNC_CALL(visible), Eina_Bool visible);

Eina_Bool _elm_fileselector_buttons_ok_cancel_get(Eo *obj, Elm_Fileselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_fileselector_buttons_ok_cancel_get, Eina_Bool, 0);

Efl_Object *_elm_fileselector_efl_object_constructor(Eo *obj, Elm_Fileselector_Data *pd);


Eina_Bool _elm_fileselector_elm_widget_focus_next(Eo *obj, Elm_Fileselector_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_fileselector_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Fileselector_Data *pd);


Eina_Bool _elm_fileselector_elm_widget_focus_direction(Eo *obj, Elm_Fileselector_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _elm_fileselector_elm_widget_widget_event(Eo *obj, Elm_Fileselector_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


Elm_Theme_Apply _elm_fileselector_elm_widget_theme_apply(Eo *obj, Elm_Fileselector_Data *pd);


Eina_Bool _elm_fileselector_elm_widget_focus_next_manager_is(Eo *obj, Elm_Fileselector_Data *pd);


Eina_Bool _elm_fileselector_elm_widget_focus_register(Eo *obj, Elm_Fileselector_Data *pd, Efl_Ui_Focus_Manager *manager, Efl_Ui_Focus_Object *logical, Eina_Bool *logical_flag);


const Eina_List *_elm_fileselector_elm_interface_fileselector_selected_models_get(Eo *obj, Elm_Fileselector_Data *pd);


Efl_Model *_elm_fileselector_elm_interface_fileselector_selected_model_get(Eo *obj, Elm_Fileselector_Data *pd);


Efl_Future *_elm_fileselector_elm_interface_fileselector_selected_model_set(Eo *obj, Elm_Fileselector_Data *pd, Efl_Model *model);


Eina_Bool _elm_fileselector_elm_interface_fileselector_custom_filter_append(Eo *obj, Elm_Fileselector_Data *pd, Elm_Fileselector_Filter_Func func, void *data, const char *filter_name);


void _elm_fileselector_elm_interface_fileselector_expandable_set(Eo *obj, Elm_Fileselector_Data *pd, Eina_Bool expand);


Eina_Bool _elm_fileselector_elm_interface_fileselector_expandable_get(Eo *obj, Elm_Fileselector_Data *pd);


void _elm_fileselector_elm_interface_fileselector_thumbnail_size_set(Eo *obj, Elm_Fileselector_Data *pd, int w, int h);


void _elm_fileselector_elm_interface_fileselector_thumbnail_size_get(Eo *obj, Elm_Fileselector_Data *pd, int *w, int *h);


Eina_Bool _elm_fileselector_elm_interface_fileselector_mime_types_filter_append(Eo *obj, Elm_Fileselector_Data *pd, const char *mime_types, const char *filter_name);


void _elm_fileselector_elm_interface_fileselector_hidden_visible_set(Eo *obj, Elm_Fileselector_Data *pd, Eina_Bool hidden);


Eina_Bool _elm_fileselector_elm_interface_fileselector_hidden_visible_get(Eo *obj, Elm_Fileselector_Data *pd);


void _elm_fileselector_elm_interface_fileselector_filters_clear(Eo *obj, Elm_Fileselector_Data *pd);


void _elm_fileselector_elm_interface_fileselector_is_save_set(Eo *obj, Elm_Fileselector_Data *pd, Eina_Bool is_save);


Eina_Bool _elm_fileselector_elm_interface_fileselector_is_save_get(Eo *obj, Elm_Fileselector_Data *pd);


void _elm_fileselector_elm_interface_fileselector_model_set(Eo *obj, Elm_Fileselector_Data *pd, Efl_Model *model);


Efl_Model *_elm_fileselector_elm_interface_fileselector_model_get(Eo *obj, Elm_Fileselector_Data *pd);


void _elm_fileselector_elm_interface_fileselector_sort_method_set(Eo *obj, Elm_Fileselector_Data *pd, Elm_Fileselector_Sort sort);


Elm_Fileselector_Sort _elm_fileselector_elm_interface_fileselector_sort_method_get(Eo *obj, Elm_Fileselector_Data *pd);


void _elm_fileselector_elm_interface_fileselector_multi_select_set(Eo *obj, Elm_Fileselector_Data *pd, Eina_Bool multi);


Eina_Bool _elm_fileselector_elm_interface_fileselector_multi_select_get(Eo *obj, Elm_Fileselector_Data *pd);


void _elm_fileselector_elm_interface_fileselector_folder_only_set(Eo *obj, Elm_Fileselector_Data *pd, Eina_Bool only);


Eina_Bool _elm_fileselector_elm_interface_fileselector_folder_only_get(Eo *obj, Elm_Fileselector_Data *pd);


void _elm_fileselector_elm_interface_fileselector_mode_set(Eo *obj, Elm_Fileselector_Data *pd, Elm_Fileselector_Mode mode);


Elm_Fileselector_Mode _elm_fileselector_elm_interface_fileselector_mode_get(Eo *obj, Elm_Fileselector_Data *pd);


void _elm_fileselector_elm_interface_fileselector_current_name_set(Eo *obj, Elm_Fileselector_Data *pd, const char *name);


const char *_elm_fileselector_elm_interface_fileselector_current_name_get(Eo *obj, Elm_Fileselector_Data *pd);


const Elm_Atspi_Action *_elm_fileselector_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Fileselector_Data *pd);


Efl_Object *_elm_fileselector_efl_part_part(const Eo *obj, Elm_Fileselector_Data *pd, const char *name);


static Eina_Bool
_elm_fileselector_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_FILESELECTOR_EXTRA_OPS
#define ELM_FILESELECTOR_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_fileselector_buttons_ok_cancel_set, _elm_fileselector_buttons_ok_cancel_set),
      EFL_OBJECT_OP_FUNC(elm_obj_fileselector_buttons_ok_cancel_get, _elm_fileselector_buttons_ok_cancel_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_fileselector_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_fileselector_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_fileselector_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _elm_fileselector_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_fileselector_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_fileselector_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_fileselector_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_register, _elm_fileselector_elm_widget_focus_register),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_selected_models_get, _elm_fileselector_elm_interface_fileselector_selected_models_get),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_selected_model_get, _elm_fileselector_elm_interface_fileselector_selected_model_get),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_selected_model_set, _elm_fileselector_elm_interface_fileselector_selected_model_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_custom_filter_append, _elm_fileselector_elm_interface_fileselector_custom_filter_append),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_expandable_set, _elm_fileselector_elm_interface_fileselector_expandable_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_expandable_get, _elm_fileselector_elm_interface_fileselector_expandable_get),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_thumbnail_size_set, _elm_fileselector_elm_interface_fileselector_thumbnail_size_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_thumbnail_size_get, _elm_fileselector_elm_interface_fileselector_thumbnail_size_get),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_mime_types_filter_append, _elm_fileselector_elm_interface_fileselector_mime_types_filter_append),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_hidden_visible_set, _elm_fileselector_elm_interface_fileselector_hidden_visible_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_hidden_visible_get, _elm_fileselector_elm_interface_fileselector_hidden_visible_get),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_filters_clear, _elm_fileselector_elm_interface_fileselector_filters_clear),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_is_save_set, _elm_fileselector_elm_interface_fileselector_is_save_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_is_save_get, _elm_fileselector_elm_interface_fileselector_is_save_get),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_model_set, _elm_fileselector_elm_interface_fileselector_model_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_model_get, _elm_fileselector_elm_interface_fileselector_model_get),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_sort_method_set, _elm_fileselector_elm_interface_fileselector_sort_method_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_sort_method_get, _elm_fileselector_elm_interface_fileselector_sort_method_get),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_multi_select_set, _elm_fileselector_elm_interface_fileselector_multi_select_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_multi_select_get, _elm_fileselector_elm_interface_fileselector_multi_select_get),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_folder_only_set, _elm_fileselector_elm_interface_fileselector_folder_only_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_folder_only_get, _elm_fileselector_elm_interface_fileselector_folder_only_get),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_mode_set, _elm_fileselector_elm_interface_fileselector_mode_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_mode_get, _elm_fileselector_elm_interface_fileselector_mode_get),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_current_name_set, _elm_fileselector_elm_interface_fileselector_current_name_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_current_name_get, _elm_fileselector_elm_interface_fileselector_current_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_fileselector_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_fileselector_efl_part_part),
      ELM_FILESELECTOR_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_FILESELECTOR_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_FILESELECTOR_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_fileselector_class_desc = {
   EO_VERSION,
   "Elm.Fileselector",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Fileselector_Data),
   _elm_fileselector_class_initializer,
   _elm_fileselector_class_constructor,
   _elm_fileselector_class_destructor
};

EFL_DEFINE_CLASS(elm_fileselector_class_get, &_elm_fileselector_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_FILESELECTOR_INTERFACE, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, EFL_UI_CLICKABLE_INTERFACE, EFL_UI_SELECTABLE_INTERFACE, NULL);

EAPI void
elm_fileselector_buttons_ok_cancel_set(Elm_Fileselector *obj, Eina_Bool visible)
{
   elm_obj_fileselector_buttons_ok_cancel_set(obj, visible);
}

EAPI Eina_Bool
elm_fileselector_buttons_ok_cancel_get(const Elm_Fileselector *obj)
{
   return elm_obj_fileselector_buttons_ok_cancel_get(obj);
}
