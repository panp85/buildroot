EWAPI const Efl_Event_Description _ELM_PREFS_EVENT_PAGE_CHANGED =
   EFL_EVENT_DESCRIPTION("page,changed");
EWAPI const Efl_Event_Description _ELM_PREFS_EVENT_PAGE_SAVED =
   EFL_EVENT_DESCRIPTION("page,saved");
EWAPI const Efl_Event_Description _ELM_PREFS_EVENT_PAGE_RESET =
   EFL_EVENT_DESCRIPTION("page,reset");
EWAPI const Efl_Event_Description _ELM_PREFS_EVENT_PAGE_LOADED =
   EFL_EVENT_DESCRIPTION("page,loaded");
EWAPI const Efl_Event_Description _ELM_PREFS_EVENT_ITEM_CHANGED =
   EFL_EVENT_DESCRIPTION("item,changed");
EWAPI const Efl_Event_Description _ELM_PREFS_EVENT_ACTION =
   EFL_EVENT_DESCRIPTION("action");

Eina_Bool _elm_prefs_data_set(Eo *obj, Elm_Prefs_Data *pd, Elm_Prefs_Data *data);

EOAPI EFL_FUNC_BODYV(elm_obj_prefs_data_set, Eina_Bool, 0, EFL_FUNC_CALL(data), Elm_Prefs_Data *data);

Elm_Prefs_Data *_elm_prefs_data_get(Eo *obj, Elm_Prefs_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_prefs_data_get, Elm_Prefs_Data *, NULL);

void _elm_prefs_autosave_set(Eo *obj, Elm_Prefs_Data *pd, Eina_Bool autosave);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_prefs_autosave_set, EFL_FUNC_CALL(autosave), Eina_Bool autosave);

Eina_Bool _elm_prefs_autosave_get(Eo *obj, Elm_Prefs_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_prefs_autosave_get, Eina_Bool, 0);

void _elm_prefs_reset(Eo *obj, Elm_Prefs_Data *pd, Elm_Prefs_Reset_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_prefs_reset, EFL_FUNC_CALL(mode), Elm_Prefs_Reset_Mode mode);

Eina_Bool _elm_prefs_item_value_set(Eo *obj, Elm_Prefs_Data *pd, const char *name, const Eina_Value *value);

EOAPI EFL_FUNC_BODYV(elm_obj_prefs_item_value_set, Eina_Bool, 0, EFL_FUNC_CALL(name, value), const char *name, const Eina_Value *value);

Eina_Bool _elm_prefs_item_value_get(const Eo *obj, Elm_Prefs_Data *pd, const char *name, Eina_Value *value);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_prefs_item_value_get, Eina_Bool, 0, EFL_FUNC_CALL(name, value), const char *name, Eina_Value *value);

const Efl_Canvas_Object *_elm_prefs_item_object_get(Eo *obj, Elm_Prefs_Data *pd, const char *name);

EOAPI EFL_FUNC_BODYV(elm_obj_prefs_item_object_get, const Efl_Canvas_Object *, NULL, EFL_FUNC_CALL(name), const char *name);

void _elm_prefs_item_disabled_set(Eo *obj, Elm_Prefs_Data *pd, const char *name, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_prefs_item_disabled_set, EFL_FUNC_CALL(name, disabled), const char *name, Eina_Bool disabled);

Eina_Bool _elm_prefs_item_disabled_get(const Eo *obj, Elm_Prefs_Data *pd, const char *name);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_prefs_item_disabled_get, Eina_Bool, 0, EFL_FUNC_CALL(name), const char *name);

Eina_Bool _elm_prefs_item_swallow(Eo *obj, Elm_Prefs_Data *pd, const char *name, Efl_Canvas_Object *child);

EOAPI EFL_FUNC_BODYV(elm_obj_prefs_item_swallow, Eina_Bool, 0, EFL_FUNC_CALL(name, child), const char *name, Efl_Canvas_Object *child);

void _elm_prefs_item_editable_set(Eo *obj, Elm_Prefs_Data *pd, const char *name, Eina_Bool editable);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_prefs_item_editable_set, EFL_FUNC_CALL(name, editable), const char *name, Eina_Bool editable);

Eina_Bool _elm_prefs_item_editable_get(const Eo *obj, Elm_Prefs_Data *pd, const char *name);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_prefs_item_editable_get, Eina_Bool, 0, EFL_FUNC_CALL(name), const char *name);

Efl_Canvas_Object *_elm_prefs_item_unswallow(Eo *obj, Elm_Prefs_Data *pd, const char *name);

EOAPI EFL_FUNC_BODYV(elm_obj_prefs_item_unswallow, Efl_Canvas_Object *, NULL, EFL_FUNC_CALL(name), const char *name);

void _elm_prefs_item_visible_set(Eo *obj, Elm_Prefs_Data *pd, const char *name, Eina_Bool visible);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_prefs_item_visible_set, EFL_FUNC_CALL(name, visible), const char *name, Eina_Bool visible);

Eina_Bool _elm_prefs_item_visible_get(const Eo *obj, Elm_Prefs_Data *pd, const char *name);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_prefs_item_visible_get, Eina_Bool, 0, EFL_FUNC_CALL(name), const char *name);

Efl_Object *_elm_prefs_efl_object_constructor(Eo *obj, Elm_Prefs_Data *pd);


Eina_Bool _elm_prefs_efl_file_file_set(Eo *obj, Elm_Prefs_Data *pd, const char *file, const char *key);


void _elm_prefs_efl_file_file_get(Eo *obj, Elm_Prefs_Data *pd, const char **file, const char **key);


Eina_Bool _elm_prefs_elm_widget_focus_next(Eo *obj, Elm_Prefs_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


static Eina_Bool
_elm_prefs_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_PREFS_EXTRA_OPS
#define ELM_PREFS_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_data_set, _elm_prefs_data_set),
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_data_get, _elm_prefs_data_get),
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_autosave_set, _elm_prefs_autosave_set),
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_autosave_get, _elm_prefs_autosave_get),
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_reset, _elm_prefs_reset),
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_item_value_set, _elm_prefs_item_value_set),
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_item_value_get, _elm_prefs_item_value_get),
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_item_object_get, _elm_prefs_item_object_get),
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_item_disabled_set, _elm_prefs_item_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_item_disabled_get, _elm_prefs_item_disabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_item_swallow, _elm_prefs_item_swallow),
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_item_editable_set, _elm_prefs_item_editable_set),
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_item_editable_get, _elm_prefs_item_editable_get),
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_item_unswallow, _elm_prefs_item_unswallow),
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_item_visible_set, _elm_prefs_item_visible_set),
      EFL_OBJECT_OP_FUNC(elm_obj_prefs_item_visible_get, _elm_prefs_item_visible_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_prefs_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_file_set, _elm_prefs_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_get, _elm_prefs_efl_file_file_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_prefs_elm_widget_focus_next),
      ELM_PREFS_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_PREFS_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_PREFS_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_prefs_class_desc = {
   EO_VERSION,
   "Elm.Prefs",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Prefs_Data),
   _elm_prefs_class_initializer,
   _elm_prefs_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_prefs_class_get, &_elm_prefs_class_desc, ELM_WIDGET_CLASS, EFL_FILE_INTERFACE, NULL);

EAPI Eina_Bool
elm_prefs_data_set(Elm_Prefs *obj, Elm_Prefs_Data *data)
{
   return elm_obj_prefs_data_set(obj, data);
}

EAPI Elm_Prefs_Data *
elm_prefs_data_get(const Elm_Prefs *obj)
{
   return elm_obj_prefs_data_get(obj);
}

EAPI void
elm_prefs_autosave_set(Elm_Prefs *obj, Eina_Bool autosave)
{
   elm_obj_prefs_autosave_set(obj, autosave);
}

EAPI Eina_Bool
elm_prefs_autosave_get(const Elm_Prefs *obj)
{
   return elm_obj_prefs_autosave_get(obj);
}

EAPI void
elm_prefs_reset(Elm_Prefs *obj, Elm_Prefs_Reset_Mode mode)
{
   elm_obj_prefs_reset(obj, mode);
}

EAPI Eina_Bool
elm_prefs_item_value_set(Elm_Prefs *obj, const char *name, const Eina_Value *value)
{
   return elm_obj_prefs_item_value_set(obj, name, value);
}

EAPI Eina_Bool
elm_prefs_item_value_get(const Elm_Prefs *obj, const char *name, Eina_Value *value)
{
   return elm_obj_prefs_item_value_get(obj, name, value);
}

EAPI const Efl_Canvas_Object *
elm_prefs_item_object_get(Elm_Prefs *obj, const char *name)
{
   return elm_obj_prefs_item_object_get(obj, name);
}

EAPI void
elm_prefs_item_disabled_set(Elm_Prefs *obj, const char *name, Eina_Bool disabled)
{
   elm_obj_prefs_item_disabled_set(obj, name, disabled);
}

EAPI Eina_Bool
elm_prefs_item_disabled_get(const Elm_Prefs *obj, const char *name)
{
   return elm_obj_prefs_item_disabled_get(obj, name);
}

EAPI Eina_Bool
elm_prefs_item_swallow(Elm_Prefs *obj, const char *name, Efl_Canvas_Object *child)
{
   return elm_obj_prefs_item_swallow(obj, name, child);
}

EAPI void
elm_prefs_item_editable_set(Elm_Prefs *obj, const char *name, Eina_Bool editable)
{
   elm_obj_prefs_item_editable_set(obj, name, editable);
}

EAPI Eina_Bool
elm_prefs_item_editable_get(const Elm_Prefs *obj, const char *name)
{
   return elm_obj_prefs_item_editable_get(obj, name);
}

EAPI Efl_Canvas_Object *
elm_prefs_item_unswallow(Elm_Prefs *obj, const char *name)
{
   return elm_obj_prefs_item_unswallow(obj, name);
}

EAPI void
elm_prefs_item_visible_set(Elm_Prefs *obj, const char *name, Eina_Bool visible)
{
   elm_obj_prefs_item_visible_set(obj, name, visible);
}

EAPI Eina_Bool
elm_prefs_item_visible_get(const Elm_Prefs *obj, const char *name)
{
   return elm_obj_prefs_item_visible_get(obj, name);
}
