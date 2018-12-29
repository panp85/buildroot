
void _elm_toolbar_item_priority_set(Eo *obj, Elm_Toolbar_Item_Data *pd, int priority);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_toolbar_item_priority_set, EFL_FUNC_CALL(priority), int priority);

int _elm_toolbar_item_priority_get(Eo *obj, Elm_Toolbar_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_item_priority_get, int, 0);

void _elm_toolbar_item_icon_set(Eo *obj, Elm_Toolbar_Item_Data *pd, const char *icon);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_toolbar_item_icon_set, EFL_FUNC_CALL(icon), const char *icon);

const char *_elm_toolbar_item_icon_get(Eo *obj, Elm_Toolbar_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_item_icon_get, const char *, NULL);

Efl_Canvas_Object *_elm_toolbar_item_object_get(Eo *obj, Elm_Toolbar_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_item_object_get, Efl_Canvas_Object *, NULL);

Efl_Canvas_Object *_elm_toolbar_item_icon_object_get(Eo *obj, Elm_Toolbar_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_item_icon_object_get, Efl_Canvas_Object *, NULL);

void _elm_toolbar_item_separator_set(Eo *obj, Elm_Toolbar_Item_Data *pd, Eina_Bool separator);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_toolbar_item_separator_set, EFL_FUNC_CALL(separator), Eina_Bool separator);

Eina_Bool _elm_toolbar_item_separator_get(Eo *obj, Elm_Toolbar_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_item_separator_get, Eina_Bool, 0);

Efl_Canvas_Object *_elm_toolbar_item_menu_get(Eo *obj, Elm_Toolbar_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_item_menu_get, Efl_Canvas_Object *, NULL);

Eina_Bool _elm_toolbar_item_state_set(Eo *obj, Elm_Toolbar_Item_Data *pd, Elm_Toolbar_Item_State *state);

EOAPI EFL_FUNC_BODYV(elm_obj_toolbar_item_state_set, Eina_Bool, 0, EFL_FUNC_CALL(state), Elm_Toolbar_Item_State *state);

Elm_Toolbar_Item_State *_elm_toolbar_item_state_get(Eo *obj, Elm_Toolbar_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_item_state_get, Elm_Toolbar_Item_State *, NULL);

Eina_Bool _elm_toolbar_item_icon_memfile_set(Eo *obj, Elm_Toolbar_Item_Data *pd, const void *img, size_t size, const char *format, const char *key);

EOAPI EFL_FUNC_BODYV(elm_obj_toolbar_item_icon_memfile_set, Eina_Bool, 0, EFL_FUNC_CALL(img, size, format, key), const void *img, size_t size, const char *format, const char *key);

Eina_Bool _elm_toolbar_item_icon_file_set(Eo *obj, Elm_Toolbar_Item_Data *pd, const char *file, const char *key);

EOAPI EFL_FUNC_BODYV(elm_obj_toolbar_item_icon_file_set, Eina_Bool, 0, EFL_FUNC_CALL(file, key), const char *file, const char *key);

Elm_Toolbar_Item_State *_elm_toolbar_item_state_add(Eo *obj, Elm_Toolbar_Item_Data *pd, const char *icon, const char *label, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_toolbar_item_state_add, Elm_Toolbar_Item_State *, NULL, EFL_FUNC_CALL(icon, label, func, data), const char *icon, const char *label, Evas_Smart_Cb func, const void *data);

Eina_Bool _elm_toolbar_item_state_del(Eo *obj, Elm_Toolbar_Item_Data *pd, Elm_Toolbar_Item_State *state);

EOAPI EFL_FUNC_BODYV(elm_obj_toolbar_item_state_del, Eina_Bool, 0, EFL_FUNC_CALL(state), Elm_Toolbar_Item_State *state);

Elm_Toolbar_Item_State *_elm_toolbar_item_state_next(Eo *obj, Elm_Toolbar_Item_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_toolbar_item_state_next, Elm_Toolbar_Item_State *, NULL);

Elm_Toolbar_Item_State *_elm_toolbar_item_state_prev(Eo *obj, Elm_Toolbar_Item_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_toolbar_item_state_prev, Elm_Toolbar_Item_State *, NULL);

void _elm_toolbar_item_show(Eo *obj, Elm_Toolbar_Item_Data *pd, Elm_Toolbar_Item_Scrollto_Type scrollto);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_toolbar_item_show, EFL_FUNC_CALL(scrollto), Elm_Toolbar_Item_Scrollto_Type scrollto);

void _elm_toolbar_item_bring_in(Eo *obj, Elm_Toolbar_Item_Data *pd, Elm_Toolbar_Item_Scrollto_Type scrollto);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_toolbar_item_bring_in, EFL_FUNC_CALL(scrollto), Elm_Toolbar_Item_Scrollto_Type scrollto);

void _elm_toolbar_item_menu_set(Eo *obj, Elm_Toolbar_Item_Data *pd, Eina_Bool menu);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_toolbar_item_menu_set, EFL_FUNC_CALL(menu), Eina_Bool menu);

Efl_Object *_elm_toolbar_item_efl_object_constructor(Eo *obj, Elm_Toolbar_Item_Data *pd);


void _elm_toolbar_item_efl_object_destructor(Eo *obj, Elm_Toolbar_Item_Data *pd);


void _elm_toolbar_item_elm_widget_item_disable(Eo *obj, Elm_Toolbar_Item_Data *pd);


void _elm_toolbar_item_elm_widget_item_disabled_set(Eo *obj, Elm_Toolbar_Item_Data *pd, Eina_Bool disable);


void _elm_toolbar_item_elm_widget_item_focus_set(Eo *obj, Elm_Toolbar_Item_Data *pd, Eina_Bool focused);


Eina_Bool _elm_toolbar_item_elm_widget_item_focus_get(Eo *obj, Elm_Toolbar_Item_Data *pd);


void _elm_toolbar_item_elm_widget_item_signal_emit(Eo *obj, Elm_Toolbar_Item_Data *pd, const char *emission, const char *source);


void _elm_toolbar_item_elm_widget_item_part_text_set(Eo *obj, Elm_Toolbar_Item_Data *pd, const char *part, const char *label);


const char *_elm_toolbar_item_elm_widget_item_part_text_get(Eo *obj, Elm_Toolbar_Item_Data *pd, const char *part);


void _elm_toolbar_item_elm_widget_item_part_content_set(Eo *obj, Elm_Toolbar_Item_Data *pd, const char *part, Efl_Canvas_Object *content);


Efl_Canvas_Object *_elm_toolbar_item_elm_widget_item_part_content_get(Eo *obj, Elm_Toolbar_Item_Data *pd, const char *part);


Efl_Canvas_Object *_elm_toolbar_item_elm_widget_item_part_content_unset(Eo *obj, Elm_Toolbar_Item_Data *pd, const char *part);


Eina_Rectangle _elm_toolbar_item_efl_ui_focus_object_focus_geometry_get(Eo *obj, Elm_Toolbar_Item_Data *pd);


void _elm_toolbar_item_efl_ui_focus_object_focus_set(Eo *obj, Elm_Toolbar_Item_Data *pd, Eina_Bool focus);


const char *_elm_toolbar_item_elm_interface_atspi_accessible_name_get(Eo *obj, Elm_Toolbar_Item_Data *pd);


Elm_Atspi_State_Set _elm_toolbar_item_elm_interface_atspi_accessible_state_set_get(Eo *obj, Elm_Toolbar_Item_Data *pd);


void _elm_toolbar_item_efl_ui_item_selected_set(Eo *obj, Elm_Toolbar_Item_Data *pd, Eina_Bool selected);


Eina_Bool _elm_toolbar_item_efl_ui_item_selected_get(Eo *obj, Elm_Toolbar_Item_Data *pd);


Efl_Ui_Item *_elm_toolbar_item_efl_ui_item_prev_get(Eo *obj, Elm_Toolbar_Item_Data *pd);


Efl_Ui_Item *_elm_toolbar_item_efl_ui_item_next_get(Eo *obj, Elm_Toolbar_Item_Data *pd);


static Eina_Bool
_elm_toolbar_item_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_TOOLBAR_ITEM_EXTRA_OPS
#define ELM_TOOLBAR_ITEM_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_priority_set, _elm_toolbar_item_priority_set),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_priority_get, _elm_toolbar_item_priority_get),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_icon_set, _elm_toolbar_item_icon_set),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_icon_get, _elm_toolbar_item_icon_get),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_object_get, _elm_toolbar_item_object_get),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_icon_object_get, _elm_toolbar_item_icon_object_get),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_separator_set, _elm_toolbar_item_separator_set),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_separator_get, _elm_toolbar_item_separator_get),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_menu_get, _elm_toolbar_item_menu_get),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_state_set, _elm_toolbar_item_state_set),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_state_get, _elm_toolbar_item_state_get),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_icon_memfile_set, _elm_toolbar_item_icon_memfile_set),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_icon_file_set, _elm_toolbar_item_icon_file_set),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_state_add, _elm_toolbar_item_state_add),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_state_del, _elm_toolbar_item_state_del),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_state_next, _elm_toolbar_item_state_next),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_state_prev, _elm_toolbar_item_state_prev),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_show, _elm_toolbar_item_show),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_bring_in, _elm_toolbar_item_bring_in),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_menu_set, _elm_toolbar_item_menu_set),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_toolbar_item_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_toolbar_item_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_disable, _elm_toolbar_item_elm_widget_item_disable),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_disabled_set, _elm_toolbar_item_elm_widget_item_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_focus_set, _elm_toolbar_item_elm_widget_item_focus_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_focus_get, _elm_toolbar_item_elm_widget_item_focus_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_signal_emit, _elm_toolbar_item_elm_widget_item_signal_emit),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_set, _elm_toolbar_item_elm_widget_item_part_text_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_get, _elm_toolbar_item_elm_widget_item_part_text_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_set, _elm_toolbar_item_elm_widget_item_part_content_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_get, _elm_toolbar_item_elm_widget_item_part_content_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_unset, _elm_toolbar_item_elm_widget_item_part_content_unset),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_object_focus_geometry_get, _elm_toolbar_item_efl_ui_focus_object_focus_geometry_get),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_object_focus_set, _elm_toolbar_item_efl_ui_focus_object_focus_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_name_get, _elm_toolbar_item_elm_interface_atspi_accessible_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _elm_toolbar_item_elm_interface_atspi_accessible_state_set_get),
      EFL_OBJECT_OP_FUNC(efl_ui_item_selected_set, _elm_toolbar_item_efl_ui_item_selected_set),
      EFL_OBJECT_OP_FUNC(efl_ui_item_selected_get, _elm_toolbar_item_efl_ui_item_selected_get),
      EFL_OBJECT_OP_FUNC(efl_ui_item_prev_get, _elm_toolbar_item_efl_ui_item_prev_get),
      EFL_OBJECT_OP_FUNC(efl_ui_item_next_get, _elm_toolbar_item_efl_ui_item_next_get),
      ELM_TOOLBAR_ITEM_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_TOOLBAR_ITEM_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_TOOLBAR_ITEM_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_toolbar_item_class_desc = {
   EO_VERSION,
   "Elm.Toolbar.Item",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Toolbar_Item_Data),
   _elm_toolbar_item_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_toolbar_item_class_get, &_elm_toolbar_item_class_desc, ELM_WIDGET_ITEM_CLASS, EFL_UI_ITEM_INTERFACE, EFL_UI_FOCUS_OBJECT_MIXIN, NULL);

EAPI void
elm_toolbar_item_priority_set(Elm_Toolbar_Item *obj, int priority)
{
   elm_obj_toolbar_item_priority_set(obj, priority);
}

EAPI int
elm_toolbar_item_priority_get(const Elm_Toolbar_Item *obj)
{
   return elm_obj_toolbar_item_priority_get(obj);
}

EAPI void
elm_toolbar_item_icon_set(Elm_Toolbar_Item *obj, const char *icon)
{
   elm_obj_toolbar_item_icon_set(obj, icon);
}

EAPI const char *
elm_toolbar_item_icon_get(const Elm_Toolbar_Item *obj)
{
   return elm_obj_toolbar_item_icon_get(obj);
}

EAPI Efl_Canvas_Object *
elm_toolbar_item_object_get(const Elm_Toolbar_Item *obj)
{
   return elm_obj_toolbar_item_object_get(obj);
}

EAPI Efl_Canvas_Object *
elm_toolbar_item_icon_object_get(const Elm_Toolbar_Item *obj)
{
   return elm_obj_toolbar_item_icon_object_get(obj);
}

EAPI void
elm_toolbar_item_separator_set(Elm_Toolbar_Item *obj, Eina_Bool separator)
{
   elm_obj_toolbar_item_separator_set(obj, separator);
}

EAPI Eina_Bool
elm_toolbar_item_separator_get(const Elm_Toolbar_Item *obj)
{
   return elm_obj_toolbar_item_separator_get(obj);
}

EAPI Efl_Canvas_Object *
elm_toolbar_item_menu_get(const Elm_Toolbar_Item *obj)
{
   return elm_obj_toolbar_item_menu_get(obj);
}

EAPI Eina_Bool
elm_toolbar_item_state_set(Elm_Toolbar_Item *obj, Elm_Toolbar_Item_State *state)
{
   return elm_obj_toolbar_item_state_set(obj, state);
}

EAPI Elm_Toolbar_Item_State *
elm_toolbar_item_state_get(const Elm_Toolbar_Item *obj)
{
   return elm_obj_toolbar_item_state_get(obj);
}

EAPI Eina_Bool
elm_toolbar_item_icon_memfile_set(Elm_Toolbar_Item *obj, const void *img, size_t size, const char *format, const char *key)
{
   return elm_obj_toolbar_item_icon_memfile_set(obj, img, size, format, key);
}

EAPI Eina_Bool
elm_toolbar_item_icon_file_set(Elm_Toolbar_Item *obj, const char *file, const char *key)
{
   return elm_obj_toolbar_item_icon_file_set(obj, file, key);
}

EAPI Elm_Toolbar_Item_State *
elm_toolbar_item_state_add(Elm_Toolbar_Item *obj, const char *icon, const char *label, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_toolbar_item_state_add(obj, icon, label, func, data);
}

EAPI Eina_Bool
elm_toolbar_item_state_del(Elm_Toolbar_Item *obj, Elm_Toolbar_Item_State *state)
{
   return elm_obj_toolbar_item_state_del(obj, state);
}

EAPI Elm_Toolbar_Item_State *
elm_toolbar_item_state_next(Elm_Toolbar_Item *obj)
{
   return elm_obj_toolbar_item_state_next(obj);
}

EAPI Elm_Toolbar_Item_State *
elm_toolbar_item_state_prev(Elm_Toolbar_Item *obj)
{
   return elm_obj_toolbar_item_state_prev(obj);
}

EAPI void
elm_toolbar_item_show(Elm_Toolbar_Item *obj, Elm_Toolbar_Item_Scrollto_Type scrollto)
{
   elm_obj_toolbar_item_show(obj, scrollto);
}

EAPI void
elm_toolbar_item_bring_in(Elm_Toolbar_Item *obj, Elm_Toolbar_Item_Scrollto_Type scrollto)
{
   elm_obj_toolbar_item_bring_in(obj, scrollto);
}

EAPI void
elm_toolbar_item_menu_set(Elm_Toolbar_Item *obj, Eina_Bool menu)
{
   elm_obj_toolbar_item_menu_set(obj, menu);
}
