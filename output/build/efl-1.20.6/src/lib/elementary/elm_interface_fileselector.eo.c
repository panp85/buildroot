EOAPI EFL_VOID_FUNC_BODYV(elm_interface_fileselector_folder_only_set, EFL_FUNC_CALL(only), Eina_Bool only);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_fileselector_folder_only_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(elm_interface_fileselector_thumbnail_size_set, EFL_FUNC_CALL(w, h), int w, int h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_fileselector_thumbnail_size_get, EFL_FUNC_CALL(w, h), int *w, int *h);
EOAPI EFL_VOID_FUNC_BODYV(elm_interface_fileselector_hidden_visible_set, EFL_FUNC_CALL(hidden), Eina_Bool hidden);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_fileselector_hidden_visible_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(elm_interface_fileselector_sort_method_set, EFL_FUNC_CALL(sort), Elm_Fileselector_Sort sort);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_fileselector_sort_method_get, Elm_Fileselector_Sort, 0);
EOAPI EFL_VOID_FUNC_BODYV(elm_interface_fileselector_multi_select_set, EFL_FUNC_CALL(multi), Eina_Bool multi);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_fileselector_multi_select_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(elm_interface_fileselector_expandable_set, EFL_FUNC_CALL(expand), Eina_Bool expand);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_fileselector_expandable_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(elm_interface_fileselector_model_set, EFL_FUNC_CALL(model), Efl_Model *model);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_fileselector_model_get, Efl_Model *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(elm_interface_fileselector_mode_set, EFL_FUNC_CALL(mode), Elm_Fileselector_Mode mode);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_fileselector_mode_get, Elm_Fileselector_Mode, 0);
EOAPI EFL_VOID_FUNC_BODYV(elm_interface_fileselector_is_save_set, EFL_FUNC_CALL(is_save), Eina_Bool is_save);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_fileselector_is_save_get, Eina_Bool, 0);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_fileselector_selected_models_get, const Eina_List *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(elm_interface_fileselector_current_name_set, EFL_FUNC_CALL(name), const char *name);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_fileselector_current_name_get, const char *, NULL);
EOAPI EFL_FUNC_BODYV(elm_interface_fileselector_selected_model_set, Efl_Future *, NULL, EFL_FUNC_CALL(model), Efl_Model *model);
EOAPI EFL_FUNC_BODY(elm_interface_fileselector_selected_model_get, Efl_Model *, NULL);
EOAPI EFL_FUNC_BODYV(elm_interface_fileselector_custom_filter_append, Eina_Bool, 0, EFL_FUNC_CALL(func, data, filter_name), Elm_Fileselector_Filter_Func func, void *data, const char *filter_name);
EOAPI EFL_VOID_FUNC_BODY(elm_interface_fileselector_filters_clear);
EOAPI EFL_FUNC_BODYV(elm_interface_fileselector_mime_types_filter_append, Eina_Bool, 0, EFL_FUNC_CALL(mime_types, filter_name), const char *mime_types, const char *filter_name);

static Eina_Bool
_elm_interface_fileselector_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_INTERFACE_FILESELECTOR_EXTRA_OPS
#define ELM_INTERFACE_FILESELECTOR_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_folder_only_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_folder_only_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_thumbnail_size_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_thumbnail_size_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_hidden_visible_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_hidden_visible_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_sort_method_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_sort_method_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_multi_select_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_multi_select_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_expandable_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_expandable_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_model_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_model_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_mode_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_mode_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_is_save_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_is_save_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_selected_models_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_current_name_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_current_name_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_selected_model_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_selected_model_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_custom_filter_append, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_filters_clear, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_fileselector_mime_types_filter_append, NULL),
      ELM_INTERFACE_FILESELECTOR_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_INTERFACE_FILESELECTOR_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_INTERFACE_FILESELECTOR_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_interface_fileselector_class_desc = {
   EO_VERSION,
   "Elm.Interface.Fileselector",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _elm_interface_fileselector_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_interface_fileselector_interface_get, &_elm_interface_fileselector_class_desc, NULL, NULL);
