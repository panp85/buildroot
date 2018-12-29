
Eina_Bool _elm_widget_item_tooltip_window_mode_set(Eo *obj, Elm_Widget_Item_Data *pd, Eina_Bool disable);

EOAPI EFL_FUNC_BODYV(elm_wdg_item_tooltip_window_mode_set, Eina_Bool, 0, EFL_FUNC_CALL(disable), Eina_Bool disable);

Eina_Bool _elm_widget_item_tooltip_window_mode_get(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_wdg_item_tooltip_window_mode_get, Eina_Bool, 0);

void _elm_widget_item_tooltip_style_set(Eo *obj, Elm_Widget_Item_Data *pd, const char *style);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_tooltip_style_set, EFL_FUNC_CALL(style), const char *style);

const char *_elm_widget_item_tooltip_style_get(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_wdg_item_tooltip_style_get, const char *, NULL);

void _elm_widget_item_cursor_set(Eo *obj, Elm_Widget_Item_Data *pd, const char *cursor);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_cursor_set, EFL_FUNC_CALL(cursor), const char *cursor);

const char *_elm_widget_item_cursor_get(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_wdg_item_cursor_get, const char *, NULL);

void _elm_widget_item_cursor_style_set(Eo *obj, Elm_Widget_Item_Data *pd, const char *style);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_cursor_style_set, EFL_FUNC_CALL(style), const char *style);

const char *_elm_widget_item_cursor_style_get(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_wdg_item_cursor_style_get, const char *, NULL);

void _elm_widget_item_cursor_engine_only_set(Eo *obj, Elm_Widget_Item_Data *pd, Eina_Bool engine_only);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_cursor_engine_only_set, EFL_FUNC_CALL(engine_only), Eina_Bool engine_only);

Eina_Bool _elm_widget_item_cursor_engine_only_get(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_wdg_item_cursor_engine_only_get, Eina_Bool, 0);

void _elm_widget_item_part_content_set(Eo *obj, Elm_Widget_Item_Data *pd, const char *part, Efl_Canvas_Object *content);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_part_content_set, EFL_FUNC_CALL(part, content), const char *part, Efl_Canvas_Object *content);

Efl_Canvas_Object *_elm_widget_item_part_content_get(Eo *obj, Elm_Widget_Item_Data *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(elm_wdg_item_part_content_get, Efl_Canvas_Object *, NULL, EFL_FUNC_CALL(part), const char *part);

void _elm_widget_item_part_text_set(Eo *obj, Elm_Widget_Item_Data *pd, const char *part, const char *label);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_part_text_set, EFL_FUNC_CALL(part, label), const char *part, const char *label);

const char *_elm_widget_item_part_text_get(Eo *obj, Elm_Widget_Item_Data *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(elm_wdg_item_part_text_get, const char *, NULL, EFL_FUNC_CALL(part), const char *part);

void _elm_widget_item_part_text_custom_set(Eo *obj, Elm_Widget_Item_Data *pd, const char *part, const char *label);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_part_text_custom_set, EFL_FUNC_CALL(part, label), const char *part, const char *label);

const char *_elm_widget_item_part_text_custom_get(Eo *obj, Elm_Widget_Item_Data *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(elm_wdg_item_part_text_custom_get, const char *, NULL, EFL_FUNC_CALL(part), const char *part);

void _elm_widget_item_focus_set(Eo *obj, Elm_Widget_Item_Data *pd, Eina_Bool focused);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_focus_set, EFL_FUNC_CALL(focused), Eina_Bool focused);

Eina_Bool _elm_widget_item_focus_get(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_wdg_item_focus_get, Eina_Bool, 0);

void _elm_widget_item_style_set(Eo *obj, Elm_Widget_Item_Data *pd, const char *style);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_style_set, EFL_FUNC_CALL(style), const char *style);

const char *_elm_widget_item_style_get(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_wdg_item_style_get, const char *, NULL);

void _elm_widget_item_disabled_set(Eo *obj, Elm_Widget_Item_Data *pd, Eina_Bool disable);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_disabled_set, EFL_FUNC_CALL(disable), Eina_Bool disable);

Eina_Bool _elm_widget_item_disabled_get(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_wdg_item_disabled_get, Eina_Bool, 0);

const Eina_List *_elm_widget_item_access_order_get(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_FUNC_BODY(elm_wdg_item_access_order_get, const Eina_List *, NULL);

void _elm_widget_item_access_order_set(Eo *obj, Elm_Widget_Item_Data *pd, Eina_List *objs);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_access_order_set, EFL_FUNC_CALL(objs), Eina_List *objs);

Efl_Canvas_Object *_elm_widget_item_widget_get(const Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_wdg_item_widget_get, Efl_Canvas_Object *, NULL);

void _elm_widget_item_del(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_wdg_item_del);

void _elm_widget_item_pre_notify_del(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_wdg_item_pre_notify_del);

void _elm_widget_item_tooltip_text_set(Eo *obj, Elm_Widget_Item_Data *pd, const char *text);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_tooltip_text_set, EFL_FUNC_CALL(text), const char *text);

void _elm_widget_item_tooltip_translatable_text_set(Eo *obj, Elm_Widget_Item_Data *pd, const char *text);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_tooltip_translatable_text_set, EFL_FUNC_CALL(text), const char *text);

void _elm_widget_item_tooltip_unset(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_wdg_item_tooltip_unset);

void _elm_widget_item_cursor_unset(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_wdg_item_cursor_unset);

Efl_Canvas_Object *_elm_widget_item_part_content_unset(Eo *obj, Elm_Widget_Item_Data *pd, const char *part);

EOAPI EFL_FUNC_BODYV(elm_wdg_item_part_content_unset, Efl_Canvas_Object *, NULL, EFL_FUNC_CALL(part), const char *part);

void _elm_widget_item_part_text_custom_update(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_wdg_item_part_text_custom_update);

void _elm_widget_item_signal_callback_add(Eo *obj, Elm_Widget_Item_Data *pd, const char *emission, const char *source, Elm_Object_Item_Signal_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_signal_callback_add, EFL_FUNC_CALL(emission, source, func, data), const char *emission, const char *source, Elm_Object_Item_Signal_Cb func, void *data);

void *_elm_widget_item_signal_callback_del(Eo *obj, Elm_Widget_Item_Data *pd, const char *emission, const char *source, Elm_Object_Item_Signal_Cb func);

EOAPI EFL_FUNC_BODYV(elm_wdg_item_signal_callback_del, void *, NULL, EFL_FUNC_CALL(emission, source, func), const char *emission, const char *source, Elm_Object_Item_Signal_Cb func);

void _elm_widget_item_signal_emit(Eo *obj, Elm_Widget_Item_Data *pd, const char *emission, const char *source);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_signal_emit, EFL_FUNC_CALL(emission, source), const char *emission, const char *source);

void _elm_widget_item_access_info_set(Eo *obj, Elm_Widget_Item_Data *pd, const char *txt);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_access_info_set, EFL_FUNC_CALL(txt), const char *txt);

Efl_Canvas_Object *_elm_widget_item_access_object_get(const Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_wdg_item_access_object_get, Efl_Canvas_Object *, NULL);

void _elm_widget_item_domain_translatable_part_text_set(Eo *obj, Elm_Widget_Item_Data *pd, const char *part, const char *domain, const char *label);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_domain_translatable_part_text_set, EFL_FUNC_CALL(part, domain, label), const char *part, const char *domain, const char *label);

const char *_elm_widget_item_translatable_part_text_get(const Eo *obj, Elm_Widget_Item_Data *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(elm_wdg_item_translatable_part_text_get, const char *, NULL, EFL_FUNC_CALL(part), const char *part);

void _elm_widget_item_translate(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_wdg_item_translate);

void _elm_widget_item_domain_part_text_translatable_set(Eo *obj, Elm_Widget_Item_Data *pd, const char *part, const char *domain, Eina_Bool translatable);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_domain_part_text_translatable_set, EFL_FUNC_CALL(part, domain, translatable), const char *part, const char *domain, Eina_Bool translatable);

Efl_Canvas_Object *_elm_widget_item_track(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_FUNC_BODY(elm_wdg_item_track, Efl_Canvas_Object *, NULL);

void _elm_widget_item_untrack(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_wdg_item_untrack);

int _elm_widget_item_track_get(const Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_wdg_item_track_get, int, 0);

void _elm_widget_item_track_cancel(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_wdg_item_track_cancel);

void _elm_widget_item_del_cb_set(Eo *obj, Elm_Widget_Item_Data *pd, Evas_Smart_Cb del_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_del_cb_set, EFL_FUNC_CALL(del_cb), Evas_Smart_Cb del_cb);

void _elm_widget_item_tooltip_content_cb_set(Eo *obj, Elm_Widget_Item_Data *pd, Elm_Tooltip_Item_Content_Cb func, const void *data, Evas_Smart_Cb del_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_tooltip_content_cb_set, EFL_FUNC_CALL(func, data, del_cb), Elm_Tooltip_Item_Content_Cb func, const void *data, Evas_Smart_Cb del_cb);

Efl_Canvas_Object *_elm_widget_item_access_register(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_FUNC_BODY(elm_wdg_item_access_register, Efl_Canvas_Object *, NULL);

void _elm_widget_item_access_unregister(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_wdg_item_access_unregister);

void _elm_widget_item_access_order_unset(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_wdg_item_access_order_unset);

void _elm_widget_item_disable(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_wdg_item_disable);

Eina_Bool _elm_widget_item_del_pre(Eo *obj, Elm_Widget_Item_Data *pd);

EOAPI EFL_FUNC_BODY(elm_wdg_item_del_pre, Eina_Bool, 0);

Efl_Canvas_Object *_elm_widget_item_focus_next_object_get(const Eo *obj, Elm_Widget_Item_Data *pd, Elm_Focus_Direction dir);

EOAPI EFL_FUNC_BODYV_CONST(elm_wdg_item_focus_next_object_get, Efl_Canvas_Object *, NULL, EFL_FUNC_CALL(dir), Elm_Focus_Direction dir);

void _elm_widget_item_focus_next_object_set(Eo *obj, Elm_Widget_Item_Data *pd, Efl_Canvas_Object *next, Elm_Focus_Direction dir);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_focus_next_object_set, EFL_FUNC_CALL(next, dir), Efl_Canvas_Object *next, Elm_Focus_Direction dir);

Elm_Widget_Item *_elm_widget_item_focus_next_item_get(const Eo *obj, Elm_Widget_Item_Data *pd, Elm_Focus_Direction dir);

EOAPI EFL_FUNC_BODYV_CONST(elm_wdg_item_focus_next_item_get, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(dir), Elm_Focus_Direction dir);

void _elm_widget_item_focus_next_item_set(Eo *obj, Elm_Widget_Item_Data *pd, Elm_Widget_Item *next_item, Elm_Focus_Direction dir);

EOAPI EFL_VOID_FUNC_BODYV(elm_wdg_item_focus_next_item_set, EFL_FUNC_CALL(next_item, dir), Elm_Widget_Item *next_item, Elm_Focus_Direction dir);

Efl_Object *_elm_widget_item_efl_object_constructor(Eo *obj, Elm_Widget_Item_Data *pd);


void _elm_widget_item_efl_object_destructor(Eo *obj, Elm_Widget_Item_Data *pd);


Elm_Atspi_State_Set _elm_widget_item_elm_interface_atspi_accessible_state_set_get(Eo *obj, Elm_Widget_Item_Data *pd);


Eina_Bool _elm_widget_item_elm_interface_atspi_component_extents_set(Eo *obj, Elm_Widget_Item_Data *pd, Eina_Bool screen_coords, int x, int y, int w, int h);


void _elm_widget_item_elm_interface_atspi_component_extents_get(Eo *obj, Elm_Widget_Item_Data *pd, Eina_Bool screen_coords, int *x, int *y, int *w, int *h);


double _elm_widget_item_elm_interface_atspi_component_alpha_get(Eo *obj, Elm_Widget_Item_Data *pd);


int _elm_widget_item_elm_interface_atspi_component_layer_get(Eo *obj, Elm_Widget_Item_Data *pd);


Eina_Bool _elm_widget_item_elm_interface_atspi_component_focus_grab(Eo *obj, Elm_Widget_Item_Data *pd);


static Eina_Bool
_elm_widget_item_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_WIDGET_ITEM_EXTRA_OPS
#define ELM_WIDGET_ITEM_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_wdg_item_tooltip_window_mode_set, _elm_widget_item_tooltip_window_mode_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_tooltip_window_mode_get, _elm_widget_item_tooltip_window_mode_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_tooltip_style_set, _elm_widget_item_tooltip_style_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_tooltip_style_get, _elm_widget_item_tooltip_style_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_cursor_set, _elm_widget_item_cursor_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_cursor_get, _elm_widget_item_cursor_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_cursor_style_set, _elm_widget_item_cursor_style_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_cursor_style_get, _elm_widget_item_cursor_style_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_cursor_engine_only_set, _elm_widget_item_cursor_engine_only_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_cursor_engine_only_get, _elm_widget_item_cursor_engine_only_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_set, _elm_widget_item_part_content_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_get, _elm_widget_item_part_content_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_set, _elm_widget_item_part_text_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_get, _elm_widget_item_part_text_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_custom_set, _elm_widget_item_part_text_custom_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_custom_get, _elm_widget_item_part_text_custom_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_focus_set, _elm_widget_item_focus_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_focus_get, _elm_widget_item_focus_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_style_set, _elm_widget_item_style_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_style_get, _elm_widget_item_style_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_disabled_set, _elm_widget_item_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_disabled_get, _elm_widget_item_disabled_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_access_order_get, _elm_widget_item_access_order_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_access_order_set, _elm_widget_item_access_order_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_widget_get, _elm_widget_item_widget_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_del, _elm_widget_item_del),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_pre_notify_del, _elm_widget_item_pre_notify_del),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_tooltip_text_set, _elm_widget_item_tooltip_text_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_tooltip_translatable_text_set, _elm_widget_item_tooltip_translatable_text_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_tooltip_unset, _elm_widget_item_tooltip_unset),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_cursor_unset, _elm_widget_item_cursor_unset),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_unset, _elm_widget_item_part_content_unset),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_custom_update, _elm_widget_item_part_text_custom_update),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_signal_callback_add, _elm_widget_item_signal_callback_add),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_signal_callback_del, _elm_widget_item_signal_callback_del),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_signal_emit, _elm_widget_item_signal_emit),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_access_info_set, _elm_widget_item_access_info_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_access_object_get, _elm_widget_item_access_object_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_domain_translatable_part_text_set, _elm_widget_item_domain_translatable_part_text_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_translatable_part_text_get, _elm_widget_item_translatable_part_text_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_translate, _elm_widget_item_translate),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_domain_part_text_translatable_set, _elm_widget_item_domain_part_text_translatable_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_track, _elm_widget_item_track),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_untrack, _elm_widget_item_untrack),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_track_get, _elm_widget_item_track_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_track_cancel, _elm_widget_item_track_cancel),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_del_cb_set, _elm_widget_item_del_cb_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_tooltip_content_cb_set, _elm_widget_item_tooltip_content_cb_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_access_register, _elm_widget_item_access_register),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_access_unregister, _elm_widget_item_access_unregister),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_access_order_unset, _elm_widget_item_access_order_unset),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_disable, _elm_widget_item_disable),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_del_pre, _elm_widget_item_del_pre),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_focus_next_object_get, _elm_widget_item_focus_next_object_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_focus_next_object_set, _elm_widget_item_focus_next_object_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_focus_next_item_get, _elm_widget_item_focus_next_item_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_focus_next_item_set, _elm_widget_item_focus_next_item_set),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_widget_item_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_widget_item_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _elm_widget_item_elm_interface_atspi_accessible_state_set_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_extents_set, _elm_widget_item_elm_interface_atspi_component_extents_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_extents_get, _elm_widget_item_elm_interface_atspi_component_extents_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_alpha_get, _elm_widget_item_elm_interface_atspi_component_alpha_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_layer_get, _elm_widget_item_elm_interface_atspi_component_layer_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_focus_grab, _elm_widget_item_elm_interface_atspi_component_focus_grab),
      ELM_WIDGET_ITEM_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_WIDGET_ITEM_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_WIDGET_ITEM_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_widget_item_class_desc = {
   EO_VERSION,
   "Elm.Widget.Item",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Widget_Item_Data),
   _elm_widget_item_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_widget_item_class_get, &_elm_widget_item_class_desc, EFL_OBJECT_CLASS, ELM_INTERFACE_ATSPI_ACCESSIBLE_MIXIN, ELM_INTERFACE_ATSPI_COMPONENT_MIXIN, NULL);

EAPI Eina_Bool
elm_object_item_tooltip_window_mode_set(Elm_Widget_Item *obj, Eina_Bool disable)
{
   return elm_wdg_item_tooltip_window_mode_set(obj, disable);
}

EAPI Eina_Bool
elm_object_item_tooltip_window_mode_get(const Elm_Widget_Item *obj)
{
   return elm_wdg_item_tooltip_window_mode_get(obj);
}

EAPI void
elm_object_item_tooltip_style_set(Elm_Widget_Item *obj, const char *style)
{
   elm_wdg_item_tooltip_style_set(obj, style);
}

EAPI const char *
elm_object_item_tooltip_style_get(const Elm_Widget_Item *obj)
{
   return elm_wdg_item_tooltip_style_get(obj);
}

EAPI void
elm_object_item_cursor_set(Elm_Widget_Item *obj, const char *cursor)
{
   elm_wdg_item_cursor_set(obj, cursor);
}

EAPI const char *
elm_object_item_cursor_get(const Elm_Widget_Item *obj)
{
   return elm_wdg_item_cursor_get(obj);
}

EAPI void
elm_object_item_cursor_style_set(Elm_Widget_Item *obj, const char *style)
{
   elm_wdg_item_cursor_style_set(obj, style);
}

EAPI const char *
elm_object_item_cursor_style_get(const Elm_Widget_Item *obj)
{
   return elm_wdg_item_cursor_style_get(obj);
}

EAPI void
elm_object_item_cursor_engine_only_set(Elm_Widget_Item *obj, Eina_Bool engine_only)
{
   elm_wdg_item_cursor_engine_only_set(obj, engine_only);
}

EAPI Eina_Bool
elm_object_item_cursor_engine_only_get(const Elm_Widget_Item *obj)
{
   return elm_wdg_item_cursor_engine_only_get(obj);
}

EAPI void
elm_object_item_part_content_set(Elm_Widget_Item *obj, const char *part, Efl_Canvas_Object *content)
{
   elm_wdg_item_part_content_set(obj, part, content);
}

EAPI Efl_Canvas_Object *
elm_object_item_part_content_get(const Elm_Widget_Item *obj, const char *part)
{
   return elm_wdg_item_part_content_get(obj, part);
}

EAPI void
elm_object_item_part_text_set(Elm_Widget_Item *obj, const char *part, const char *label)
{
   elm_wdg_item_part_text_set(obj, part, label);
}

EAPI const char *
elm_object_item_part_text_get(const Elm_Widget_Item *obj, const char *part)
{
   return elm_wdg_item_part_text_get(obj, part);
}

EAPI void
elm_object_item_focus_set(Elm_Widget_Item *obj, Eina_Bool focused)
{
   elm_wdg_item_focus_set(obj, focused);
}

EAPI Eina_Bool
elm_object_item_focus_get(const Elm_Widget_Item *obj)
{
   return elm_wdg_item_focus_get(obj);
}

EAPI void
elm_object_item_style_set(Elm_Widget_Item *obj, const char *style)
{
   elm_wdg_item_style_set(obj, style);
}

EAPI const char *
elm_object_item_style_get(const Elm_Widget_Item *obj)
{
   return elm_wdg_item_style_get(obj);
}

EAPI void
elm_object_item_disabled_set(Elm_Widget_Item *obj, Eina_Bool disable)
{
   elm_wdg_item_disabled_set(obj, disable);
}

EAPI Eina_Bool
elm_object_item_disabled_get(const Elm_Widget_Item *obj)
{
   return elm_wdg_item_disabled_get(obj);
}

EAPI const Eina_List *
elm_object_item_access_order_get(Elm_Widget_Item *obj)
{
   return elm_wdg_item_access_order_get(obj);
}

EAPI void
elm_object_item_access_order_set(Elm_Widget_Item *obj, Eina_List *objs)
{
   elm_wdg_item_access_order_set(obj, objs);
}

EAPI Efl_Canvas_Object *
elm_object_item_widget_get(const Elm_Widget_Item *obj)
{
   return elm_wdg_item_widget_get(obj);
}

EAPI void
elm_object_item_del(Elm_Widget_Item *obj)
{
   elm_wdg_item_del(obj);
}

EAPI void
elm_object_item_tooltip_text_set(Elm_Widget_Item *obj, const char *text)
{
   elm_wdg_item_tooltip_text_set(obj, text);
}

EAPI void
elm_object_item_tooltip_unset(Elm_Widget_Item *obj)
{
   elm_wdg_item_tooltip_unset(obj);
}

EAPI void
elm_object_item_cursor_unset(Elm_Widget_Item *obj)
{
   elm_wdg_item_cursor_unset(obj);
}

EAPI Efl_Canvas_Object *
elm_object_item_part_content_unset(Elm_Widget_Item *obj, const char *part)
{
   return elm_wdg_item_part_content_unset(obj, part);
}

EAPI void
elm_object_item_signal_callback_add(Elm_Widget_Item *obj, const char *emission, const char *source, Elm_Object_Item_Signal_Cb func, void *data)
{
   elm_wdg_item_signal_callback_add(obj, emission, source, func, data);
}

EAPI void *
elm_object_item_signal_callback_del(Elm_Widget_Item *obj, const char *emission, const char *source, Elm_Object_Item_Signal_Cb func)
{
   return elm_wdg_item_signal_callback_del(obj, emission, source, func);
}

EAPI void
elm_object_item_signal_emit(Elm_Widget_Item *obj, const char *emission, const char *source)
{
   elm_wdg_item_signal_emit(obj, emission, source);
}

EAPI void
elm_object_item_access_info_set(Elm_Widget_Item *obj, const char *txt)
{
   elm_wdg_item_access_info_set(obj, txt);
}

EAPI Efl_Canvas_Object *
elm_object_item_access_object_get(const Elm_Widget_Item *obj)
{
   return elm_wdg_item_access_object_get(obj);
}

EAPI void
elm_object_item_domain_translatable_part_text_set(Elm_Widget_Item *obj, const char *part, const char *domain, const char *label)
{
   elm_wdg_item_domain_translatable_part_text_set(obj, part, domain, label);
}

EAPI const char *
elm_object_item_translatable_part_text_get(const Elm_Widget_Item *obj, const char *part)
{
   return elm_wdg_item_translatable_part_text_get(obj, part);
}

EAPI void
elm_object_item_domain_part_text_translatable_set(Elm_Widget_Item *obj, const char *part, const char *domain, Eina_Bool translatable)
{
   elm_wdg_item_domain_part_text_translatable_set(obj, part, domain, translatable);
}

EAPI Efl_Canvas_Object *
elm_object_item_track(Elm_Widget_Item *obj)
{
   return elm_wdg_item_track(obj);
}

EAPI void
elm_object_item_untrack(Elm_Widget_Item *obj)
{
   elm_wdg_item_untrack(obj);
}

EAPI int
elm_object_item_track_get(const Elm_Widget_Item *obj)
{
   return elm_wdg_item_track_get(obj);
}

EAPI void
elm_object_item_del_cb_set(Elm_Widget_Item *obj, Evas_Smart_Cb del_cb)
{
   elm_wdg_item_del_cb_set(obj, del_cb);
}

EAPI void
elm_object_item_tooltip_content_cb_set(Elm_Widget_Item *obj, Elm_Tooltip_Item_Content_Cb func, const void *data, Evas_Smart_Cb del_cb)
{
   elm_wdg_item_tooltip_content_cb_set(obj, func, data, del_cb);
}

EAPI Efl_Canvas_Object *
elm_object_item_access_register(Elm_Widget_Item *obj)
{
   return elm_wdg_item_access_register(obj);
}

EAPI void
elm_object_item_access_unregister(Elm_Widget_Item *obj)
{
   elm_wdg_item_access_unregister(obj);
}

EAPI void
elm_object_item_access_order_unset(Elm_Widget_Item *obj)
{
   elm_wdg_item_access_order_unset(obj);
}

EAPI Efl_Canvas_Object *
elm_object_item_focus_next_object_get(const Elm_Widget_Item *obj, Elm_Focus_Direction dir)
{
   return elm_wdg_item_focus_next_object_get(obj, dir);
}

EAPI void
elm_object_item_focus_next_object_set(Elm_Widget_Item *obj, Efl_Canvas_Object *next, Elm_Focus_Direction dir)
{
   elm_wdg_item_focus_next_object_set(obj, next, dir);
}

EAPI Elm_Widget_Item *
elm_object_item_focus_next_item_get(const Elm_Widget_Item *obj, Elm_Focus_Direction dir)
{
   return elm_wdg_item_focus_next_item_get(obj, dir);
}

EAPI void
elm_object_item_focus_next_item_set(Elm_Widget_Item *obj, Elm_Widget_Item *next_item, Elm_Focus_Direction dir)
{
   elm_wdg_item_focus_next_item_set(obj, next_item, dir);
}
