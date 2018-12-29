EWAPI const Efl_Event_Description _ELM_LAYOUT_EVENT_THEME_CHANGED =
   EFL_EVENT_DESCRIPTION("theme,changed");

Eina_Bool _elm_layout_edje_object_can_access_set(Eo *obj, Elm_Layout_Smart_Data *pd, Eina_Bool can_access);

EOAPI EFL_FUNC_BODYV(elm_obj_layout_edje_object_can_access_set, Eina_Bool, 0, EFL_FUNC_CALL(can_access), Eina_Bool can_access);

Eina_Bool _elm_layout_edje_object_can_access_get(Eo *obj, Elm_Layout_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_layout_edje_object_can_access_get, Eina_Bool, 0);

Eina_Bool _elm_layout_theme_set(Eo *obj, Elm_Layout_Smart_Data *pd, const char *klass, const char *group, const char *style);

EOAPI EFL_FUNC_BODYV(elm_obj_layout_theme_set, Eina_Bool, 0, EFL_FUNC_CALL(klass, group, style), const char *klass, const char *group, const char *style);

const Elm_Layout_Part_Alias_Description *_elm_layout_text_aliases_get(Eo *obj, Elm_Layout_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_layout_text_aliases_get, const Elm_Layout_Part_Alias_Description *, NULL);

const Elm_Layout_Part_Alias_Description *_elm_layout_content_aliases_get(Eo *obj, Elm_Layout_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_layout_content_aliases_get, const Elm_Layout_Part_Alias_Description *, NULL);

Efl_Canvas_Object *_elm_layout_edje_get(Eo *obj, Elm_Layout_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_layout_edje_get, Efl_Canvas_Object *, NULL);

Eina_Bool _elm_layout_part_cursor_engine_only_set(Eo *obj, Elm_Layout_Smart_Data *pd, const char *part_name, Eina_Bool engine_only);

EOAPI EFL_FUNC_BODYV(elm_obj_layout_part_cursor_engine_only_set, Eina_Bool, 0, EFL_FUNC_CALL(part_name, engine_only), const char *part_name, Eina_Bool engine_only);

Eina_Bool _elm_layout_part_cursor_engine_only_get(const Eo *obj, Elm_Layout_Smart_Data *pd, const char *part_name);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_layout_part_cursor_engine_only_get, Eina_Bool, 0, EFL_FUNC_CALL(part_name), const char *part_name);

int _elm_layout_freeze(Eo *obj, Elm_Layout_Smart_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_layout_freeze, int, 0);

Eina_Bool _elm_layout_theme_enable(Eo *obj, Elm_Layout_Smart_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_layout_theme_enable, Eina_Bool, 0);

void _elm_layout_sizing_eval(Eo *obj, Elm_Layout_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_layout_sizing_eval);

void _elm_layout_sizing_restricted_eval(Eo *obj, Elm_Layout_Smart_Data *pd, Eina_Bool width, Eina_Bool height);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_layout_sizing_restricted_eval, EFL_FUNC_CALL(width, height), Eina_Bool width, Eina_Bool height);

Eina_Bool _elm_layout_part_cursor_style_set(Eo *obj, Elm_Layout_Smart_Data *pd, const char *part_name, const char *style);

EOAPI EFL_FUNC_BODYV(elm_obj_layout_part_cursor_style_set, Eina_Bool, 0, EFL_FUNC_CALL(part_name, style), const char *part_name, const char *style);

const char *_elm_layout_part_cursor_style_get(const Eo *obj, Elm_Layout_Smart_Data *pd, const char *part_name);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_layout_part_cursor_style_get, const char *, NULL, EFL_FUNC_CALL(part_name), const char *part_name);

void _elm_layout_signal_callback_add(Eo *obj, Elm_Layout_Smart_Data *pd, const char *emission, const char *source, Edje_Signal_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_layout_signal_callback_add, EFL_FUNC_CALL(emission, source, func, data), const char *emission, const char *source, Edje_Signal_Cb func, void *data);

Eina_Bool _elm_layout_part_cursor_set(Eo *obj, Elm_Layout_Smart_Data *pd, const char *part_name, const char *cursor);

EOAPI EFL_FUNC_BODYV(elm_obj_layout_part_cursor_set, Eina_Bool, 0, EFL_FUNC_CALL(part_name, cursor), const char *part_name, const char *cursor);

const char *_elm_layout_part_cursor_get(const Eo *obj, Elm_Layout_Smart_Data *pd, const char *part_name);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_layout_part_cursor_get, const char *, NULL, EFL_FUNC_CALL(part_name), const char *part_name);

Eina_Bool _elm_layout_sub_object_add_enable(Eo *obj, Elm_Layout_Smart_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_layout_sub_object_add_enable, Eina_Bool, 0);

const char *_elm_layout_data_get(const Eo *obj, Elm_Layout_Smart_Data *pd, const char *key);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_layout_data_get, const char *, NULL, EFL_FUNC_CALL(key), const char *key);

void *_elm_layout_signal_callback_del(Eo *obj, Elm_Layout_Smart_Data *pd, const char *emission, const char *source, Edje_Signal_Cb func);

EOAPI EFL_FUNC_BODYV(elm_obj_layout_signal_callback_del, void *, NULL, EFL_FUNC_CALL(emission, source, func), const char *emission, const char *source, Edje_Signal_Cb func);

int _elm_layout_thaw(Eo *obj, Elm_Layout_Smart_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_layout_thaw, int, 0);

void _elm_layout_signal_emit(Eo *obj, Elm_Layout_Smart_Data *pd, const char *emission, const char *source);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_layout_signal_emit, EFL_FUNC_CALL(emission, source), const char *emission, const char *source);

Eina_Bool _elm_layout_part_cursor_unset(Eo *obj, Elm_Layout_Smart_Data *pd, const char *part_name);

EOAPI EFL_FUNC_BODYV(elm_obj_layout_part_cursor_unset, Eina_Bool, 0, EFL_FUNC_CALL(part_name), const char *part_name);

Efl_Object *_elm_layout_efl_object_constructor(Eo *obj, Elm_Layout_Smart_Data *pd);


Eina_Bool _elm_layout_efl_file_file_set(Eo *obj, Elm_Layout_Smart_Data *pd, const char *file, const char *key);


void _elm_layout_efl_file_file_get(Eo *obj, Elm_Layout_Smart_Data *pd, const char **file, const char **key);


Eina_Bool _elm_layout_efl_file_mmap_set(Eo *obj, Elm_Layout_Smart_Data *pd, const Eina_File *f, const char *key);


void _elm_layout_efl_file_mmap_get(Eo *obj, Elm_Layout_Smart_Data *pd, const Eina_File **f, const char **key);


void _elm_layout_efl_canvas_group_group_calculate(Eo *obj, Elm_Layout_Smart_Data *pd);


Eina_Bool _elm_layout_elm_widget_focus_direction(Eo *obj, Elm_Layout_Smart_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _elm_layout_elm_widget_sub_object_add(Eo *obj, Elm_Layout_Smart_Data *pd, Efl_Canvas_Object *sobj);


Elm_Theme_Apply _elm_layout_elm_widget_theme_apply(Eo *obj, Elm_Layout_Smart_Data *pd);


Eina_Bool _elm_layout_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Layout_Smart_Data *pd);


Eina_Bool _elm_layout_elm_widget_focus_next_manager_is(Eo *obj, Elm_Layout_Smart_Data *pd);


Eina_Bool _elm_layout_elm_widget_focus_next(Eo *obj, Elm_Layout_Smart_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_layout_elm_widget_disable(Eo *obj, Elm_Layout_Smart_Data *pd);


Eina_Bool _elm_layout_elm_widget_sub_object_del(Eo *obj, Elm_Layout_Smart_Data *pd, Efl_Canvas_Object *sobj);


Eina_Bool _elm_layout_elm_widget_on_focus(Eo *obj, Elm_Layout_Smart_Data *pd, Elm_Widget_Item *item);


int _elm_layout_efl_container_content_count(Eo *obj, Elm_Layout_Smart_Data *pd);


Eina_Bool _elm_layout_efl_container_content_remove(Eo *obj, Elm_Layout_Smart_Data *pd, Efl_Gfx *content);


Eina_Iterator *_elm_layout_efl_container_content_iterate(Eo *obj, Elm_Layout_Smart_Data *pd);


Eina_Bool _elm_layout_efl_container_content_set(Eo *obj, Elm_Layout_Smart_Data *pd, Efl_Gfx *content);


Efl_Gfx *_elm_layout_efl_container_content_get(Eo *obj, Elm_Layout_Smart_Data *pd);


Efl_Gfx *_elm_layout_efl_container_content_unset(Eo *obj, Elm_Layout_Smart_Data *pd);


Efl_Object *_elm_layout_efl_part_part(const Eo *obj, Elm_Layout_Smart_Data *pd, const char *name);


void _elm_layout_efl_ui_view_model_set(Eo *obj, Elm_Layout_Smart_Data *pd, Efl_Model *model);


Efl_Model *_elm_layout_efl_ui_view_model_get(Eo *obj, Elm_Layout_Smart_Data *pd);


void _elm_layout_efl_ui_model_connect_connect(Eo *obj, Elm_Layout_Smart_Data *pd, const char *name, const char *property);


void _elm_layout_efl_ui_model_factory_connect_connect(Eo *obj, Elm_Layout_Smart_Data *pd, const char *name, Efl_Ui_Factory *factory);


static Eina_Bool
_elm_layout_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_LAYOUT_EXTRA_OPS
#define ELM_LAYOUT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_layout_edje_object_can_access_set, _elm_layout_edje_object_can_access_set),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_edje_object_can_access_get, _elm_layout_edje_object_can_access_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_theme_set, _elm_layout_theme_set),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_text_aliases_get, _elm_layout_text_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_content_aliases_get, _elm_layout_content_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_edje_get, _elm_layout_edje_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_part_cursor_engine_only_set, _elm_layout_part_cursor_engine_only_set),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_part_cursor_engine_only_get, _elm_layout_part_cursor_engine_only_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_freeze, _elm_layout_freeze),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_theme_enable, _elm_layout_theme_enable),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_restricted_eval, _elm_layout_sizing_restricted_eval),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_part_cursor_style_set, _elm_layout_part_cursor_style_set),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_part_cursor_style_get, _elm_layout_part_cursor_style_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_signal_callback_add, _elm_layout_signal_callback_add),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_part_cursor_set, _elm_layout_part_cursor_set),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_part_cursor_get, _elm_layout_part_cursor_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sub_object_add_enable, _elm_layout_sub_object_add_enable),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_data_get, _elm_layout_data_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_signal_callback_del, _elm_layout_signal_callback_del),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_thaw, _elm_layout_thaw),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_signal_emit, _elm_layout_signal_emit),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_part_cursor_unset, _elm_layout_part_cursor_unset),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_layout_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_file_set, _elm_layout_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_get, _elm_layout_efl_file_file_get),
      EFL_OBJECT_OP_FUNC(efl_file_mmap_set, _elm_layout_efl_file_mmap_set),
      EFL_OBJECT_OP_FUNC(efl_file_mmap_get, _elm_layout_efl_file_mmap_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _elm_layout_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _elm_layout_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_add, _elm_layout_elm_widget_sub_object_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_layout_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_layout_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_layout_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_layout_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_disable, _elm_layout_elm_widget_disable),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _elm_layout_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _elm_layout_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(efl_content_count, _elm_layout_efl_container_content_count),
      EFL_OBJECT_OP_FUNC(efl_content_remove, _elm_layout_efl_container_content_remove),
      EFL_OBJECT_OP_FUNC(efl_content_iterate, _elm_layout_efl_container_content_iterate),
      EFL_OBJECT_OP_FUNC(efl_content_set, _elm_layout_efl_container_content_set),
      EFL_OBJECT_OP_FUNC(efl_content_get, _elm_layout_efl_container_content_get),
      EFL_OBJECT_OP_FUNC(efl_content_unset, _elm_layout_efl_container_content_unset),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_layout_efl_part_part),
      EFL_OBJECT_OP_FUNC(efl_ui_view_model_set, _elm_layout_efl_ui_view_model_set),
      EFL_OBJECT_OP_FUNC(efl_ui_view_model_get, _elm_layout_efl_ui_view_model_get),
      EFL_OBJECT_OP_FUNC(efl_ui_model_connect, _elm_layout_efl_ui_model_connect_connect),
      EFL_OBJECT_OP_FUNC(efl_ui_model_factory_connect, _elm_layout_efl_ui_model_factory_connect_connect),
      ELM_LAYOUT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_LAYOUT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_LAYOUT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_layout_class_desc = {
   EO_VERSION,
   "Elm.Layout",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Layout_Smart_Data),
   _elm_layout_class_initializer,
   _elm_layout_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_layout_class_get, &_elm_layout_class_desc, ELM_WIDGET_CLASS, EFL_PART_INTERFACE, EFL_CONTAINER_INTERFACE, EFL_FILE_INTERFACE, EFL_UI_VIEW_INTERFACE, EFL_UI_MODEL_CONNECT_INTERFACE, EFL_UI_MODEL_FACTORY_CONNECT_INTERFACE, NULL);

EAPI Eina_Bool
elm_layout_edje_object_can_access_set(Elm_Layout *obj, Eina_Bool can_access)
{
   return elm_obj_layout_edje_object_can_access_set(obj, can_access);
}

EAPI Eina_Bool
elm_layout_edje_object_can_access_get(const Elm_Layout *obj)
{
   return elm_obj_layout_edje_object_can_access_get(obj);
}

EAPI Eina_Bool
elm_layout_theme_set(Elm_Layout *obj, const char *klass, const char *group, const char *style)
{
   return elm_obj_layout_theme_set(obj, klass, group, style);
}

EAPI Efl_Canvas_Object *
elm_layout_edje_get(const Elm_Layout *obj)
{
   return elm_obj_layout_edje_get(obj);
}

EAPI Eina_Bool
elm_layout_part_cursor_engine_only_set(Elm_Layout *obj, const char *part_name, Eina_Bool engine_only)
{
   return elm_obj_layout_part_cursor_engine_only_set(obj, part_name, engine_only);
}

EAPI Eina_Bool
elm_layout_part_cursor_engine_only_get(const Elm_Layout *obj, const char *part_name)
{
   return elm_obj_layout_part_cursor_engine_only_get(obj, part_name);
}

EAPI int
elm_layout_freeze(Elm_Layout *obj)
{
   return elm_obj_layout_freeze(obj);
}

EAPI void
elm_layout_sizing_eval(Elm_Layout *obj)
{
   elm_obj_layout_sizing_eval(obj);
}

EAPI void
elm_layout_sizing_restricted_eval(Elm_Layout *obj, Eina_Bool width, Eina_Bool height)
{
   elm_obj_layout_sizing_restricted_eval(obj, width, height);
}

EAPI Eina_Bool
elm_layout_part_cursor_style_set(Elm_Layout *obj, const char *part_name, const char *style)
{
   return elm_obj_layout_part_cursor_style_set(obj, part_name, style);
}

EAPI const char *
elm_layout_part_cursor_style_get(const Elm_Layout *obj, const char *part_name)
{
   return elm_obj_layout_part_cursor_style_get(obj, part_name);
}

EAPI void
elm_layout_signal_callback_add(Elm_Layout *obj, const char *emission, const char *source, Edje_Signal_Cb func, void *data)
{
   elm_obj_layout_signal_callback_add(obj, emission, source, func, data);
}

EAPI Eina_Bool
elm_layout_part_cursor_set(Elm_Layout *obj, const char *part_name, const char *cursor)
{
   return elm_obj_layout_part_cursor_set(obj, part_name, cursor);
}

EAPI const char *
elm_layout_part_cursor_get(const Elm_Layout *obj, const char *part_name)
{
   return elm_obj_layout_part_cursor_get(obj, part_name);
}

EAPI const char *
elm_layout_data_get(const Elm_Layout *obj, const char *key)
{
   return elm_obj_layout_data_get(obj, key);
}

EAPI void *
elm_layout_signal_callback_del(Elm_Layout *obj, const char *emission, const char *source, Edje_Signal_Cb func)
{
   return elm_obj_layout_signal_callback_del(obj, emission, source, func);
}

EAPI int
elm_layout_thaw(Elm_Layout *obj)
{
   return elm_obj_layout_thaw(obj);
}

EAPI void
elm_layout_signal_emit(Elm_Layout *obj, const char *emission, const char *source)
{
   elm_obj_layout_signal_emit(obj, emission, source);
}

EAPI Eina_Bool
elm_layout_part_cursor_unset(Elm_Layout *obj, const char *part_name)
{
   return elm_obj_layout_part_cursor_unset(obj, part_name);
}
