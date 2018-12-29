EWAPI const Efl_Event_Description _ELM_FILESELECTOR_ENTRY_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");
EWAPI const Efl_Event_Description _ELM_FILESELECTOR_ENTRY_EVENT_ACTIVATED =
   EFL_EVENT_DESCRIPTION("activated");
EWAPI const Efl_Event_Description _ELM_FILESELECTOR_ENTRY_EVENT_FILE_CHOSEN =
   EFL_EVENT_DESCRIPTION("file,chosen");
EWAPI const Efl_Event_Description _ELM_FILESELECTOR_ENTRY_EVENT_PRESS =
   EFL_EVENT_DESCRIPTION("press");

Efl_Object *_elm_fileselector_entry_efl_object_constructor(Eo *obj, Elm_Fileselector_Entry_Data *pd);


Elm_Theme_Apply _elm_fileselector_entry_elm_widget_theme_apply(Eo *obj, Elm_Fileselector_Entry_Data *pd);


Eina_Bool _elm_fileselector_entry_elm_widget_focus_next_manager_is(Eo *obj, Elm_Fileselector_Entry_Data *pd);


Eina_Bool _elm_fileselector_entry_elm_widget_focus_next(Eo *obj, Elm_Fileselector_Entry_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_fileselector_entry_elm_widget_disable(Eo *obj, Elm_Fileselector_Entry_Data *pd);


Eina_Bool _elm_fileselector_entry_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Fileselector_Entry_Data *pd);


void _elm_fileselector_entry_elm_layout_sizing_eval(Eo *obj, Elm_Fileselector_Entry_Data *pd);


Efl_Model *_elm_fileselector_entry_elm_interface_fileselector_selected_model_get(Eo *obj, Elm_Fileselector_Entry_Data *pd);


Efl_Future *_elm_fileselector_entry_elm_interface_fileselector_selected_model_set(Eo *obj, Elm_Fileselector_Entry_Data *pd, Efl_Model *model);


void _elm_fileselector_entry_elm_interface_fileselector_folder_only_set(Eo *obj, Elm_Fileselector_Entry_Data *pd, Eina_Bool only);


Eina_Bool _elm_fileselector_entry_elm_interface_fileselector_folder_only_get(Eo *obj, Elm_Fileselector_Entry_Data *pd);


void _elm_fileselector_entry_elm_interface_fileselector_is_save_set(Eo *obj, Elm_Fileselector_Entry_Data *pd, Eina_Bool is_save);


Eina_Bool _elm_fileselector_entry_elm_interface_fileselector_is_save_get(Eo *obj, Elm_Fileselector_Entry_Data *pd);


void _elm_fileselector_entry_elm_interface_fileselector_model_set(Eo *obj, Elm_Fileselector_Entry_Data *pd, Efl_Model *model);


Efl_Model *_elm_fileselector_entry_elm_interface_fileselector_model_get(Eo *obj, Elm_Fileselector_Entry_Data *pd);


void _elm_fileselector_entry_elm_interface_fileselector_expandable_set(Eo *obj, Elm_Fileselector_Entry_Data *pd, Eina_Bool expand);


Eina_Bool _elm_fileselector_entry_elm_interface_fileselector_expandable_get(Eo *obj, Elm_Fileselector_Entry_Data *pd);


Efl_Object *_elm_fileselector_entry_efl_part_part(const Eo *obj, Elm_Fileselector_Entry_Data *pd, const char *name);


static Eina_Bool
_elm_fileselector_entry_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_FILESELECTOR_ENTRY_EXTRA_OPS
#define ELM_FILESELECTOR_ENTRY_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_fileselector_entry_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_fileselector_entry_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_fileselector_entry_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_fileselector_entry_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_disable, _elm_fileselector_entry_elm_widget_disable),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_fileselector_entry_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_fileselector_entry_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_selected_model_get, _elm_fileselector_entry_elm_interface_fileselector_selected_model_get),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_selected_model_set, _elm_fileselector_entry_elm_interface_fileselector_selected_model_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_folder_only_set, _elm_fileselector_entry_elm_interface_fileselector_folder_only_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_folder_only_get, _elm_fileselector_entry_elm_interface_fileselector_folder_only_get),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_is_save_set, _elm_fileselector_entry_elm_interface_fileselector_is_save_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_is_save_get, _elm_fileselector_entry_elm_interface_fileselector_is_save_get),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_model_set, _elm_fileselector_entry_elm_interface_fileselector_model_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_model_get, _elm_fileselector_entry_elm_interface_fileselector_model_get),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_expandable_set, _elm_fileselector_entry_elm_interface_fileselector_expandable_set),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_expandable_get, _elm_fileselector_entry_elm_interface_fileselector_expandable_get),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_fileselector_entry_efl_part_part),
      ELM_FILESELECTOR_ENTRY_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_FILESELECTOR_ENTRY_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_FILESELECTOR_ENTRY_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_fileselector_entry_class_desc = {
   EO_VERSION,
   "Elm.Fileselector_Entry",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Fileselector_Entry_Data),
   _elm_fileselector_entry_class_initializer,
   _elm_fileselector_entry_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_fileselector_entry_class_get, &_elm_fileselector_entry_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_FILESELECTOR_INTERFACE, EFL_UI_CLICKABLE_INTERFACE, EFL_UI_SELECTABLE_INTERFACE, NULL);
