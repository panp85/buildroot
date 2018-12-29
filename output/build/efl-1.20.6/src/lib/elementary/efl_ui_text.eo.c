EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_ACTIVATED =
   EFL_EVENT_DESCRIPTION("activated");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_CHANGED_USER =
   EFL_EVENT_DESCRIPTION("changed,user");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_VALIDATE =
   EFL_EVENT_DESCRIPTION("validate");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_CONTEXT_OPEN =
   EFL_EVENT_DESCRIPTION("context,open");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_CLICKED =
   EFL_EVENT_DESCRIPTION("anchor,clicked");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_REJECTED =
   EFL_EVENT_DESCRIPTION("rejected");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_MAXLENGTH_REACHED =
   EFL_EVENT_DESCRIPTION("maxlength,reached");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_PREEDIT_CHANGED =
   EFL_EVENT_DESCRIPTION("preedit,changed");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_PRESS =
   EFL_EVENT_DESCRIPTION("press");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_REDO_REQUEST =
   EFL_EVENT_DESCRIPTION("redo,request");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_UNDO_REQUEST =
   EFL_EVENT_DESCRIPTION("undo,request");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_TEXT_SET_DONE =
   EFL_EVENT_DESCRIPTION("text,set,done");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_ABORTED =
   EFL_EVENT_DESCRIPTION("aborted");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_DOWN =
   EFL_EVENT_DESCRIPTION("anchor,down");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_HOVER_OPENED =
   EFL_EVENT_DESCRIPTION("anchor,hover,opened");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_IN =
   EFL_EVENT_DESCRIPTION("anchor,in");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_OUT =
   EFL_EVENT_DESCRIPTION("anchor,out");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_UP =
   EFL_EVENT_DESCRIPTION("anchor,up");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_CURSOR_CHANGED =
   EFL_EVENT_DESCRIPTION("cursor,changed");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_EVENT_CURSOR_CHANGED_MANUAL =
   EFL_EVENT_DESCRIPTION("cursor,changed,manual");

void _efl_ui_text_scrollable_set(Eo *obj, Efl_Ui_Text_Data *pd, Eina_Bool scroll);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_scrollable_set, EFL_FUNC_CALL(scroll), Eina_Bool scroll);

Eina_Bool _efl_ui_text_scrollable_get(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_scrollable_get, Eina_Bool, 0);

void _efl_ui_text_input_panel_show_on_demand_set(Eo *obj, Efl_Ui_Text_Data *pd, Eina_Bool ondemand);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_input_panel_show_on_demand_set, EFL_FUNC_CALL(ondemand), Eina_Bool ondemand);

Eina_Bool _efl_ui_text_input_panel_show_on_demand_get(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_input_panel_show_on_demand_get, Eina_Bool, 0);

void _efl_ui_text_context_menu_disabled_set(Eo *obj, Efl_Ui_Text_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_context_menu_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _efl_ui_text_context_menu_disabled_get(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_context_menu_disabled_get, Eina_Bool, 0);

void _efl_ui_text_cnp_mode_set(Eo *obj, Efl_Ui_Text_Data *pd, Elm_Cnp_Mode cnp_mode);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_cnp_mode_set, EFL_FUNC_CALL(cnp_mode), Elm_Cnp_Mode cnp_mode);

Elm_Cnp_Mode _efl_ui_text_cnp_mode_get(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_cnp_mode_get, Elm_Cnp_Mode, 0);

void _efl_ui_text_input_panel_language_set(Eo *obj, Efl_Ui_Text_Data *pd, Elm_Input_Panel_Lang lang);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_input_panel_language_set, EFL_FUNC_CALL(lang), Elm_Input_Panel_Lang lang);

Elm_Input_Panel_Lang _efl_ui_text_input_panel_language_get(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_input_panel_language_get, Elm_Input_Panel_Lang, 0);

void _efl_ui_text_selection_handler_disabled_set(Eo *obj, Efl_Ui_Text_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_selection_handler_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _efl_ui_text_selection_handler_disabled_get(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_selection_handler_disabled_get, Eina_Bool, 0);

void _efl_ui_text_input_panel_layout_variation_set(Eo *obj, Efl_Ui_Text_Data *pd, int variation);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_input_panel_layout_variation_set, EFL_FUNC_CALL(variation), int variation);

int _efl_ui_text_input_panel_layout_variation_get(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_input_panel_layout_variation_get, int, 0);

void _efl_ui_text_autocapital_type_set(Eo *obj, Efl_Ui_Text_Data *pd, Elm_Autocapital_Type autocapital_type);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_autocapital_type_set, EFL_FUNC_CALL(autocapital_type), Elm_Autocapital_Type autocapital_type);

Elm_Autocapital_Type _efl_ui_text_autocapital_type_get(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_autocapital_type_get, Elm_Autocapital_Type, 0);

void _efl_ui_text_password_set(Eo *obj, Efl_Ui_Text_Data *pd, Eina_Bool password);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_password_set, EFL_FUNC_CALL(password), Eina_Bool password);

Eina_Bool _efl_ui_text_password_get(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_password_get, Eina_Bool, 0);

void _efl_ui_text_input_panel_return_key_disabled_set(Eo *obj, Efl_Ui_Text_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_input_panel_return_key_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _efl_ui_text_input_panel_return_key_disabled_get(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_input_panel_return_key_disabled_get, Eina_Bool, 0);

void _efl_ui_text_prediction_allow_set(Eo *obj, Efl_Ui_Text_Data *pd, Eina_Bool prediction);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_prediction_allow_set, EFL_FUNC_CALL(prediction), Eina_Bool prediction);

Eina_Bool _efl_ui_text_prediction_allow_get(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_prediction_allow_get, Eina_Bool, 0);

void _efl_ui_text_input_hint_set(Eo *obj, Efl_Ui_Text_Data *pd, Elm_Input_Hints hints);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_input_hint_set, EFL_FUNC_CALL(hints), Elm_Input_Hints hints);

Elm_Input_Hints _efl_ui_text_input_hint_get(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_input_hint_get, Elm_Input_Hints, 0);

void _efl_ui_text_input_panel_layout_set(Eo *obj, Efl_Ui_Text_Data *pd, Elm_Input_Panel_Layout layout);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_input_panel_layout_set, EFL_FUNC_CALL(layout), Elm_Input_Panel_Layout layout);

Elm_Input_Panel_Layout _efl_ui_text_input_panel_layout_get(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_input_panel_layout_get, Elm_Input_Panel_Layout, 8 /* Elm.Input.Panel.Layout.invalid */);

void _efl_ui_text_input_panel_return_key_type_set(Eo *obj, Efl_Ui_Text_Data *pd, Elm_Input_Panel_Return_Key_Type return_key_type);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_input_panel_return_key_type_set, EFL_FUNC_CALL(return_key_type), Elm_Input_Panel_Return_Key_Type return_key_type);

Elm_Input_Panel_Return_Key_Type _efl_ui_text_input_panel_return_key_type_get(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_input_panel_return_key_type_get, Elm_Input_Panel_Return_Key_Type, 0);

void _efl_ui_text_input_panel_enabled_set(Eo *obj, Efl_Ui_Text_Data *pd, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_input_panel_enabled_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);

Eina_Bool _efl_ui_text_input_panel_enabled_get(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_input_panel_enabled_get, Eina_Bool, 0);

void _efl_ui_text_input_panel_return_key_autoenabled_set(Eo *obj, Efl_Ui_Text_Data *pd, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_input_panel_return_key_autoenabled_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);

void _efl_ui_text_item_provider_prepend(Eo *obj, Efl_Ui_Text_Data *pd, Elm_Entry_Item_Provider_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_item_provider_prepend, EFL_FUNC_CALL(func, data), Elm_Entry_Item_Provider_Cb func, void *data);

void _efl_ui_text_input_panel_show(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_ui_text_input_panel_show);

void _efl_ui_text_selection_copy(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_ui_text_selection_copy);

void _efl_ui_text_item_provider_remove(Eo *obj, Efl_Ui_Text_Data *pd, Elm_Entry_Item_Provider_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_item_provider_remove, EFL_FUNC_CALL(func, data), Elm_Entry_Item_Provider_Cb func, void *data);

void _efl_ui_text_context_menu_clear(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_ui_text_context_menu_clear);

void _efl_ui_text_input_panel_imdata_set(Eo *obj, Efl_Ui_Text_Data *pd, const void *data, int len);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_input_panel_imdata_set, EFL_FUNC_CALL(data, len), const void *data, int len);

void _efl_ui_text_input_panel_imdata_get(const Eo *obj, Efl_Ui_Text_Data *pd, void *data, int *len);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_ui_text_input_panel_imdata_get, EFL_FUNC_CALL(data, len), void *data, int *len);

void _efl_ui_text_selection_paste(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_ui_text_selection_paste);

void _efl_ui_text_input_panel_hide(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_ui_text_input_panel_hide);

void _efl_ui_text_cursor_selection_end(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_ui_text_cursor_selection_end);

void _efl_ui_text_selection_cut(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_ui_text_selection_cut);

void _efl_ui_text_item_provider_append(Eo *obj, Efl_Ui_Text_Data *pd, Elm_Entry_Item_Provider_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_item_provider_append, EFL_FUNC_CALL(func, data), Elm_Entry_Item_Provider_Cb func, void *data);

void _efl_ui_text_context_menu_item_add(Eo *obj, Efl_Ui_Text_Data *pd, const char *label, const char *icon_file, Elm_Icon_Type icon_type, Evas_Smart_Cb func, const void *data);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_context_menu_item_add, EFL_FUNC_CALL(label, icon_file, icon_type, func, data), const char *label, const char *icon_file, Elm_Icon_Type icon_type, Evas_Smart_Cb func, const void *data);

Efl_Text_Cursor_Cursor *_efl_ui_text_cursor_new(Eo *obj, Efl_Ui_Text_Data *pd);

EOAPI EFL_FUNC_BODY(efl_ui_text_cursor_new, Efl_Text_Cursor_Cursor *, NULL);

Efl_Object *_efl_ui_text_efl_object_constructor(Eo *obj, Efl_Ui_Text_Data *pd);


void _efl_ui_text_efl_object_destructor(Eo *obj, Efl_Ui_Text_Data *pd);


void _efl_ui_text_efl_gfx_visible_set(Eo *obj, Efl_Ui_Text_Data *pd, Eina_Bool v);


void _efl_ui_text_efl_gfx_position_set(Eo *obj, Efl_Ui_Text_Data *pd, int x, int y);


void _efl_ui_text_efl_gfx_size_set(Eo *obj, Efl_Ui_Text_Data *pd, int w, int h);


void _efl_ui_text_efl_canvas_group_group_member_add(Eo *obj, Efl_Ui_Text_Data *pd, Efl_Canvas_Object *sub_obj);


Eina_Bool _efl_ui_text_elm_widget_activate(Eo *obj, Efl_Ui_Text_Data *pd, Elm_Activate act);


Eina_Bool _efl_ui_text_elm_widget_focus_direction_manager_is(Eo *obj, Efl_Ui_Text_Data *pd);


Elm_Theme_Apply _efl_ui_text_elm_widget_theme_apply(Eo *obj, Efl_Ui_Text_Data *pd);


Eina_Bool _efl_ui_text_elm_widget_on_focus(Eo *obj, Efl_Ui_Text_Data *pd, Elm_Widget_Item *item);


Eina_Bool _efl_ui_text_elm_widget_on_focus_region(Eo *obj, Efl_Ui_Text_Data *pd, int *x, int *y, int *w, int *h);


Eina_Bool _efl_ui_text_elm_widget_disable(Eo *obj, Efl_Ui_Text_Data *pd);


Eina_Bool _efl_ui_text_elm_widget_sub_object_del(Eo *obj, Efl_Ui_Text_Data *pd, Efl_Canvas_Object *sobj);


Eina_Bool _efl_ui_text_elm_widget_focus_next_manager_is(Eo *obj, Efl_Ui_Text_Data *pd);


Eina_Bool _efl_ui_text_elm_layout_theme_enable(Eo *obj, Efl_Ui_Text_Data *pd);


void _efl_ui_text_elm_layout_sizing_eval(Eo *obj, Efl_Ui_Text_Data *pd);


void _efl_ui_text_elm_layout_signal_callback_add(Eo *obj, Efl_Ui_Text_Data *pd, const char *emission, const char *source, Edje_Signal_Cb func, void *data);


void *_efl_ui_text_elm_layout_signal_callback_del(Eo *obj, Efl_Ui_Text_Data *pd, const char *emission, const char *source, Edje_Signal_Cb func);


void _efl_ui_text_elm_layout_signal_emit(Eo *obj, Efl_Ui_Text_Data *pd, const char *emission, const char *source);


const Elm_Layout_Part_Alias_Description *_efl_ui_text_elm_layout_content_aliases_get(Eo *obj, Efl_Ui_Text_Data *pd);


void _efl_ui_text_elm_interface_scrollable_policy_set(Eo *obj, Efl_Ui_Text_Data *pd, Elm_Scroller_Policy hbar, Elm_Scroller_Policy vbar);


void _efl_ui_text_elm_interface_scrollable_bounce_allow_set(Eo *obj, Efl_Ui_Text_Data *pd, Eina_Bool horiz, Eina_Bool vert);


Elm_Atspi_State_Set _efl_ui_text_elm_interface_atspi_accessible_state_set_get(Eo *obj, Efl_Ui_Text_Data *pd);


const char *_efl_ui_text_elm_interface_atspi_accessible_name_get(Eo *obj, Efl_Ui_Text_Data *pd);


char *_efl_ui_text_elm_interface_atspi_text_text_get(Eo *obj, Efl_Ui_Text_Data *pd, int start_offset, int end_offset);


char *_efl_ui_text_elm_interface_atspi_text_string_get(Eo *obj, Efl_Ui_Text_Data *pd, Elm_Atspi_Text_Granularity granularity, int *start_offset, int *end_offset);


Eina_Bool _efl_ui_text_elm_interface_atspi_text_attribute_get(Eo *obj, Efl_Ui_Text_Data *pd, const char *name, int *start_offset, int *end_offset, char **value);


Eina_List *_efl_ui_text_elm_interface_atspi_text_attributes_get(Eo *obj, Efl_Ui_Text_Data *pd, int *start_offset, int *end_offset);


Eina_List *_efl_ui_text_elm_interface_atspi_text_default_attributes_get(Eo *obj, Efl_Ui_Text_Data *pd);


Eina_Bool _efl_ui_text_elm_interface_atspi_text_caret_offset_set(Eo *obj, Efl_Ui_Text_Data *pd, int offset);


int _efl_ui_text_elm_interface_atspi_text_caret_offset_get(Eo *obj, Efl_Ui_Text_Data *pd);


Eina_Unicode _efl_ui_text_elm_interface_atspi_text_character_get(Eo *obj, Efl_Ui_Text_Data *pd, int offset);


Eina_Bool _efl_ui_text_elm_interface_atspi_text_character_extents_get(Eo *obj, Efl_Ui_Text_Data *pd, int offset, Eina_Bool screen_coords, Eina_Rectangle *rect);


int _efl_ui_text_elm_interface_atspi_text_character_count_get(Eo *obj, Efl_Ui_Text_Data *pd);


int _efl_ui_text_elm_interface_atspi_text_offset_at_point_get(Eo *obj, Efl_Ui_Text_Data *pd, Eina_Bool screen_coords, int x, int y);


Eina_List *_efl_ui_text_elm_interface_atspi_text_bounded_ranges_get(Eo *obj, Efl_Ui_Text_Data *pd, Eina_Bool screen_coords, Eina_Rectangle rect, Elm_Atspi_Text_Clip_Type xclip, Elm_Atspi_Text_Clip_Type yclip);


Eina_Bool _efl_ui_text_elm_interface_atspi_text_range_extents_get(Eo *obj, Efl_Ui_Text_Data *pd, Eina_Bool screen_coords, int start_offset, int end_offset, Eina_Rectangle *rect);


Eina_Bool _efl_ui_text_elm_interface_atspi_text_selection_set(Eo *obj, Efl_Ui_Text_Data *pd, int selection_number, int start_offset, int end_offset);


void _efl_ui_text_elm_interface_atspi_text_selection_get(Eo *obj, Efl_Ui_Text_Data *pd, int selection_number, int *start_offset, int *end_offset);


int _efl_ui_text_elm_interface_atspi_text_selections_count_get(Eo *obj, Efl_Ui_Text_Data *pd);


Eina_Bool _efl_ui_text_elm_interface_atspi_text_selection_add(Eo *obj, Efl_Ui_Text_Data *pd, int start_offset, int end_offset);


Eina_Bool _efl_ui_text_elm_interface_atspi_text_selection_remove(Eo *obj, Efl_Ui_Text_Data *pd, int selection_number);


Eina_Bool _efl_ui_text_elm_interface_atspi_text_editable_content_set(Eo *obj, Efl_Ui_Text_Data *pd, const char *string);


Eina_Bool _efl_ui_text_elm_interface_atspi_text_editable_insert(Eo *obj, Efl_Ui_Text_Data *pd, const char *string, int position);


Eina_Bool _efl_ui_text_elm_interface_atspi_text_editable_copy(Eo *obj, Efl_Ui_Text_Data *pd, int start, int end);


Eina_Bool _efl_ui_text_elm_interface_atspi_text_editable_cut(Eo *obj, Efl_Ui_Text_Data *pd, int start, int end);


Eina_Bool _efl_ui_text_elm_interface_atspi_text_editable_delete(Eo *obj, Efl_Ui_Text_Data *pd, int start, int end);


Eina_Bool _efl_ui_text_elm_interface_atspi_text_editable_paste(Eo *obj, Efl_Ui_Text_Data *pd, int position);


Eina_Bool _efl_ui_text_efl_file_file_set(Eo *obj, Efl_Ui_Text_Data *pd, const char *file, const char *key);


void _efl_ui_text_efl_file_file_get(Eo *obj, Efl_Ui_Text_Data *pd, const char **file, const char **key);


void _efl_ui_text_efl_ui_text_interactive_editable_set(Eo *obj, Efl_Ui_Text_Data *pd, Eina_Bool editable);


static Eina_Bool
_efl_ui_text_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_TEXT_EXTRA_OPS
#define EFL_UI_TEXT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_text_scrollable_set, _efl_ui_text_scrollable_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_scrollable_get, _efl_ui_text_scrollable_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_show_on_demand_set, _efl_ui_text_input_panel_show_on_demand_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_show_on_demand_get, _efl_ui_text_input_panel_show_on_demand_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_context_menu_disabled_set, _efl_ui_text_context_menu_disabled_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_context_menu_disabled_get, _efl_ui_text_context_menu_disabled_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_cnp_mode_set, _efl_ui_text_cnp_mode_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_cnp_mode_get, _efl_ui_text_cnp_mode_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_language_set, _efl_ui_text_input_panel_language_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_language_get, _efl_ui_text_input_panel_language_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_selection_handler_disabled_set, _efl_ui_text_selection_handler_disabled_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_selection_handler_disabled_get, _efl_ui_text_selection_handler_disabled_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_layout_variation_set, _efl_ui_text_input_panel_layout_variation_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_layout_variation_get, _efl_ui_text_input_panel_layout_variation_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_autocapital_type_set, _efl_ui_text_autocapital_type_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_autocapital_type_get, _efl_ui_text_autocapital_type_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_password_set, _efl_ui_text_password_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_password_get, _efl_ui_text_password_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_return_key_disabled_set, _efl_ui_text_input_panel_return_key_disabled_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_return_key_disabled_get, _efl_ui_text_input_panel_return_key_disabled_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_prediction_allow_set, _efl_ui_text_prediction_allow_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_prediction_allow_get, _efl_ui_text_prediction_allow_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_hint_set, _efl_ui_text_input_hint_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_hint_get, _efl_ui_text_input_hint_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_layout_set, _efl_ui_text_input_panel_layout_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_layout_get, _efl_ui_text_input_panel_layout_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_return_key_type_set, _efl_ui_text_input_panel_return_key_type_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_return_key_type_get, _efl_ui_text_input_panel_return_key_type_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_enabled_set, _efl_ui_text_input_panel_enabled_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_enabled_get, _efl_ui_text_input_panel_enabled_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_return_key_autoenabled_set, _efl_ui_text_input_panel_return_key_autoenabled_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_item_provider_prepend, _efl_ui_text_item_provider_prepend),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_show, _efl_ui_text_input_panel_show),
      EFL_OBJECT_OP_FUNC(efl_ui_text_selection_copy, _efl_ui_text_selection_copy),
      EFL_OBJECT_OP_FUNC(efl_ui_text_item_provider_remove, _efl_ui_text_item_provider_remove),
      EFL_OBJECT_OP_FUNC(efl_ui_text_context_menu_clear, _efl_ui_text_context_menu_clear),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_imdata_set, _efl_ui_text_input_panel_imdata_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_imdata_get, _efl_ui_text_input_panel_imdata_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_selection_paste, _efl_ui_text_selection_paste),
      EFL_OBJECT_OP_FUNC(efl_ui_text_input_panel_hide, _efl_ui_text_input_panel_hide),
      EFL_OBJECT_OP_FUNC(efl_ui_text_cursor_selection_end, _efl_ui_text_cursor_selection_end),
      EFL_OBJECT_OP_FUNC(efl_ui_text_selection_cut, _efl_ui_text_selection_cut),
      EFL_OBJECT_OP_FUNC(efl_ui_text_item_provider_append, _efl_ui_text_item_provider_append),
      EFL_OBJECT_OP_FUNC(efl_ui_text_context_menu_item_add, _efl_ui_text_context_menu_item_add),
      EFL_OBJECT_OP_FUNC(efl_ui_text_cursor_new, _efl_ui_text_cursor_new),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_text_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_ui_text_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _efl_ui_text_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _efl_ui_text_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _efl_ui_text_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_add, _efl_ui_text_efl_canvas_group_group_member_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_activate, _efl_ui_text_elm_widget_activate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _efl_ui_text_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _efl_ui_text_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _efl_ui_text_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus_region, _efl_ui_text_elm_widget_on_focus_region),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_disable, _efl_ui_text_elm_widget_disable),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _efl_ui_text_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _efl_ui_text_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_theme_enable, _efl_ui_text_elm_layout_theme_enable),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _efl_ui_text_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_signal_callback_add, _efl_ui_text_elm_layout_signal_callback_add),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_signal_callback_del, _efl_ui_text_elm_layout_signal_callback_del),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_signal_emit, _efl_ui_text_elm_layout_signal_emit),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_content_aliases_get, _efl_ui_text_elm_layout_content_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_policy_set, _efl_ui_text_elm_interface_scrollable_policy_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_bounce_allow_set, _efl_ui_text_elm_interface_scrollable_bounce_allow_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _efl_ui_text_elm_interface_atspi_accessible_state_set_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_name_get, _efl_ui_text_elm_interface_atspi_accessible_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_get, _efl_ui_text_elm_interface_atspi_text_text_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_string_get, _efl_ui_text_elm_interface_atspi_text_string_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_attribute_get, _efl_ui_text_elm_interface_atspi_text_attribute_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_attributes_get, _efl_ui_text_elm_interface_atspi_text_attributes_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_default_attributes_get, _efl_ui_text_elm_interface_atspi_text_default_attributes_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_caret_offset_set, _efl_ui_text_elm_interface_atspi_text_caret_offset_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_caret_offset_get, _efl_ui_text_elm_interface_atspi_text_caret_offset_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_character_get, _efl_ui_text_elm_interface_atspi_text_character_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_character_extents_get, _efl_ui_text_elm_interface_atspi_text_character_extents_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_character_count_get, _efl_ui_text_elm_interface_atspi_text_character_count_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_offset_at_point_get, _efl_ui_text_elm_interface_atspi_text_offset_at_point_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_bounded_ranges_get, _efl_ui_text_elm_interface_atspi_text_bounded_ranges_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_range_extents_get, _efl_ui_text_elm_interface_atspi_text_range_extents_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_selection_set, _efl_ui_text_elm_interface_atspi_text_selection_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_selection_get, _efl_ui_text_elm_interface_atspi_text_selection_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_selections_count_get, _efl_ui_text_elm_interface_atspi_text_selections_count_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_selection_add, _efl_ui_text_elm_interface_atspi_text_selection_add),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_selection_remove, _efl_ui_text_elm_interface_atspi_text_selection_remove),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_content_set, _efl_ui_text_elm_interface_atspi_text_editable_content_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_insert, _efl_ui_text_elm_interface_atspi_text_editable_insert),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_copy, _efl_ui_text_elm_interface_atspi_text_editable_copy),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_cut, _efl_ui_text_elm_interface_atspi_text_editable_cut),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_delete, _efl_ui_text_elm_interface_atspi_text_editable_delete),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_paste, _efl_ui_text_elm_interface_atspi_text_editable_paste),
      EFL_OBJECT_OP_FUNC(efl_file_set, _efl_ui_text_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_get, _efl_ui_text_efl_file_file_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_interactive_editable_set, _efl_ui_text_efl_ui_text_interactive_editable_set),
      EFL_UI_TEXT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_TEXT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_TEXT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_text_class_desc = {
   EO_VERSION,
   "Efl.Ui.Text",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Text_Data),
   _efl_ui_text_class_initializer,
   _efl_ui_text_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_text_class_get, &_efl_ui_text_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_SCROLLABLE_MIXIN, EFL_UI_CLICKABLE_INTERFACE, ELM_INTERFACE_ATSPI_TEXT_INTERFACE, ELM_INTERFACE_ATSPI_TEXT_EDITABLE_INTERFACE, EFL_FILE_INTERFACE, EFL_UI_SELECTABLE_INTERFACE, EFL_UI_SCROLLABLE_INTERFACE, EFL_UI_TEXT_INTERACTIVE_INTERFACE, NULL);
