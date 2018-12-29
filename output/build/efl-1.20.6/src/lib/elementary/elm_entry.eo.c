EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_ACTIVATED =
   EFL_EVENT_DESCRIPTION("activated");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_CHANGED_USER =
   EFL_EVENT_DESCRIPTION("changed,user");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_VALIDATE =
   EFL_EVENT_DESCRIPTION("validate");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_CONTEXT_OPEN =
   EFL_EVENT_DESCRIPTION("context,open");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_ANCHOR_CLICKED =
   EFL_EVENT_DESCRIPTION("anchor,clicked");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_REJECTED =
   EFL_EVENT_DESCRIPTION("rejected");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_MAXLENGTH_REACHED =
   EFL_EVENT_DESCRIPTION("maxlength,reached");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_PREEDIT_CHANGED =
   EFL_EVENT_DESCRIPTION("preedit,changed");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_PRESS =
   EFL_EVENT_DESCRIPTION("press");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_REDO_REQUEST =
   EFL_EVENT_DESCRIPTION("redo,request");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_UNDO_REQUEST =
   EFL_EVENT_DESCRIPTION("undo,request");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_TEXT_SET_DONE =
   EFL_EVENT_DESCRIPTION("text,set,done");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_ABORTED =
   EFL_EVENT_DESCRIPTION("aborted");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_ANCHOR_DOWN =
   EFL_EVENT_DESCRIPTION("anchor,down");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_ANCHOR_HOVER_OPENED =
   EFL_EVENT_DESCRIPTION("anchor,hover,opened");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_ANCHOR_IN =
   EFL_EVENT_DESCRIPTION("anchor,in");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_ANCHOR_OUT =
   EFL_EVENT_DESCRIPTION("anchor,out");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_ANCHOR_UP =
   EFL_EVENT_DESCRIPTION("anchor,up");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_CURSOR_CHANGED =
   EFL_EVENT_DESCRIPTION("cursor,changed");
EWAPI const Efl_Event_Description _ELM_ENTRY_EVENT_CURSOR_CHANGED_MANUAL =
   EFL_EVENT_DESCRIPTION("cursor,changed,manual");

void _elm_entry_scrollable_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool scroll);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_scrollable_set, EFL_FUNC_CALL(scroll), Eina_Bool scroll);

Eina_Bool _elm_entry_scrollable_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_scrollable_get, Eina_Bool, 0);

void _elm_entry_input_panel_show_on_demand_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool ondemand);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_input_panel_show_on_demand_set, EFL_FUNC_CALL(ondemand), Eina_Bool ondemand);

Eina_Bool _elm_entry_input_panel_show_on_demand_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_input_panel_show_on_demand_get, Eina_Bool, 0);

void _elm_entry_context_menu_disabled_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_context_menu_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _elm_entry_context_menu_disabled_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_context_menu_disabled_get, Eina_Bool, 0);

void _elm_entry_cnp_mode_set(Eo *obj, Elm_Entry_Data *pd, Elm_Cnp_Mode cnp_mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_cnp_mode_set, EFL_FUNC_CALL(cnp_mode), Elm_Cnp_Mode cnp_mode);

Elm_Cnp_Mode _elm_entry_cnp_mode_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_cnp_mode_get, Elm_Cnp_Mode, 0);

void _elm_entry_file_text_format_set(Eo *obj, Elm_Entry_Data *pd, Elm_Text_Format format);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_file_text_format_set, EFL_FUNC_CALL(format), Elm_Text_Format format);

void _elm_entry_input_panel_language_set(Eo *obj, Elm_Entry_Data *pd, Elm_Input_Panel_Lang lang);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_input_panel_language_set, EFL_FUNC_CALL(lang), Elm_Input_Panel_Lang lang);

Elm_Input_Panel_Lang _elm_entry_input_panel_language_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_input_panel_language_get, Elm_Input_Panel_Lang, 0);

void _elm_entry_selection_handler_disabled_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_selection_handler_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _elm_entry_selection_handler_disabled_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_selection_handler_disabled_get, Eina_Bool, 0);

void _elm_entry_input_panel_layout_variation_set(Eo *obj, Elm_Entry_Data *pd, int variation);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_input_panel_layout_variation_set, EFL_FUNC_CALL(variation), int variation);

int _elm_entry_input_panel_layout_variation_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_input_panel_layout_variation_get, int, 0);

void _elm_entry_autocapital_type_set(Eo *obj, Elm_Entry_Data *pd, Elm_Autocapital_Type autocapital_type);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_autocapital_type_set, EFL_FUNC_CALL(autocapital_type), Elm_Autocapital_Type autocapital_type);

Elm_Autocapital_Type _elm_entry_autocapital_type_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_autocapital_type_get, Elm_Autocapital_Type, 0);

void _elm_entry_editable_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool editable);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_editable_set, EFL_FUNC_CALL(editable), Eina_Bool editable);

Eina_Bool _elm_entry_editable_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_editable_get, Eina_Bool, 0);

void _elm_entry_anchor_hover_style_set(Eo *obj, Elm_Entry_Data *pd, const char *style);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_anchor_hover_style_set, EFL_FUNC_CALL(style), const char *style);

const char *_elm_entry_anchor_hover_style_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_anchor_hover_style_get, const char *, NULL);

void _elm_entry_single_line_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool single_line);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_single_line_set, EFL_FUNC_CALL(single_line), Eina_Bool single_line);

Eina_Bool _elm_entry_single_line_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_single_line_get, Eina_Bool, 0);

void _elm_entry_password_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool password);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_password_set, EFL_FUNC_CALL(password), Eina_Bool password);

Eina_Bool _elm_entry_password_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_password_get, Eina_Bool, 0);

void _elm_entry_input_panel_return_key_disabled_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_input_panel_return_key_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _elm_entry_input_panel_return_key_disabled_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_input_panel_return_key_disabled_get, Eina_Bool, 0);

void _elm_entry_autosave_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool auto_save);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_autosave_set, EFL_FUNC_CALL(auto_save), Eina_Bool auto_save);

Eina_Bool _elm_entry_autosave_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_autosave_get, Eina_Bool, 0);

void _elm_entry_anchor_hover_parent_set(Eo *obj, Elm_Entry_Data *pd, Efl_Canvas_Object *parent);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_anchor_hover_parent_set, EFL_FUNC_CALL(parent), Efl_Canvas_Object *parent);

Efl_Canvas_Object *_elm_entry_anchor_hover_parent_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_anchor_hover_parent_get, Efl_Canvas_Object *, NULL);

void _elm_entry_prediction_allow_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool prediction);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_prediction_allow_set, EFL_FUNC_CALL(prediction), Eina_Bool prediction);

Eina_Bool _elm_entry_prediction_allow_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_prediction_allow_get, Eina_Bool, 0);

void _elm_entry_input_hint_set(Eo *obj, Elm_Entry_Data *pd, Elm_Input_Hints hints);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_input_hint_set, EFL_FUNC_CALL(hints), Elm_Input_Hints hints);

Elm_Input_Hints _elm_entry_input_hint_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_input_hint_get, Elm_Input_Hints, 0);

void _elm_entry_input_panel_layout_set(Eo *obj, Elm_Entry_Data *pd, Elm_Input_Panel_Layout layout);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_input_panel_layout_set, EFL_FUNC_CALL(layout), Elm_Input_Panel_Layout layout);

Elm_Input_Panel_Layout _elm_entry_input_panel_layout_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_input_panel_layout_get, Elm_Input_Panel_Layout, 8 /* Elm.Input.Panel.Layout.invalid */);

void _elm_entry_input_panel_return_key_type_set(Eo *obj, Elm_Entry_Data *pd, Elm_Input_Panel_Return_Key_Type return_key_type);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_input_panel_return_key_type_set, EFL_FUNC_CALL(return_key_type), Elm_Input_Panel_Return_Key_Type return_key_type);

Elm_Input_Panel_Return_Key_Type _elm_entry_input_panel_return_key_type_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_input_panel_return_key_type_get, Elm_Input_Panel_Return_Key_Type, 0);

void _elm_entry_input_panel_enabled_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_input_panel_enabled_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);

Eina_Bool _elm_entry_input_panel_enabled_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_input_panel_enabled_get, Eina_Bool, 0);

void _elm_entry_line_wrap_set(Eo *obj, Elm_Entry_Data *pd, Elm_Wrap_Type wrap);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_line_wrap_set, EFL_FUNC_CALL(wrap), Elm_Wrap_Type wrap);

Elm_Wrap_Type _elm_entry_line_wrap_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_line_wrap_get, Elm_Wrap_Type, 0);

void _elm_entry_cursor_pos_set(Eo *obj, Elm_Entry_Data *pd, int pos);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_cursor_pos_set, EFL_FUNC_CALL(pos), int pos);

int _elm_entry_cursor_pos_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_cursor_pos_get, int, 0);

void _elm_entry_icon_visible_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool setting);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_icon_visible_set, EFL_FUNC_CALL(setting), Eina_Bool setting);

void _elm_entry_cursor_line_end_set(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_cursor_line_end_set);

void _elm_entry_select_region_set(Eo *obj, Elm_Entry_Data *pd, int start, int end);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_select_region_set, EFL_FUNC_CALL(start, end), int start, int end);

void _elm_entry_select_region_get(Eo *obj, Elm_Entry_Data *pd, int *start, int *end);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_entry_select_region_get, EFL_FUNC_CALL(start, end), int *start, int *end);

void _elm_entry_input_panel_return_key_autoenabled_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_input_panel_return_key_autoenabled_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);

void _elm_entry_end_visible_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool setting);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_end_visible_set, EFL_FUNC_CALL(setting), Eina_Bool setting);

void _elm_entry_cursor_begin_set(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_cursor_begin_set);

void _elm_entry_cursor_line_begin_set(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_cursor_line_begin_set);

void _elm_entry_cursor_end_set(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_cursor_end_set);

Efl_Canvas_Object *_elm_entry_textblock_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_textblock_get, Efl_Canvas_Object *, NULL);

Eina_Bool _elm_entry_cursor_geometry_get(Eo *obj, Elm_Entry_Data *pd, int *x, int *y, int *w, int *h);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_entry_cursor_geometry_get, Eina_Bool, 0, EFL_FUNC_CALL(x, y, w, h), int *x, int *y, int *w, int *h);

void *_elm_entry_imf_context_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_imf_context_get, void *, NULL);

Eina_Bool _elm_entry_cursor_is_format_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_cursor_is_format_get, Eina_Bool, 0);

char *_elm_entry_cursor_content_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_cursor_content_get, char *, NULL);

const char *_elm_entry_selection_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_selection_get, const char *, NULL);

Eina_Bool _elm_entry_cursor_is_visible_format_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_cursor_is_visible_format_get, Eina_Bool, 0);

void _elm_entry_select_allow_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool allow);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_select_allow_set, EFL_FUNC_CALL(allow), Eina_Bool allow);

Eina_Bool _elm_entry_select_allow_get(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_select_allow_get, Eina_Bool, 0);

Eina_Bool _elm_entry_cursor_prev(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_entry_cursor_prev, Eina_Bool, 0);

void _elm_entry_text_style_user_pop(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_text_style_user_pop);

void _elm_entry_item_provider_prepend(Eo *obj, Elm_Entry_Data *pd, Elm_Entry_Item_Provider_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_item_provider_prepend, EFL_FUNC_CALL(func, data), Elm_Entry_Item_Provider_Cb func, void *data);

void _elm_entry_input_panel_show(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_input_panel_show);

void _elm_entry_imf_context_reset(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_imf_context_reset);

void _elm_entry_calc_force(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_calc_force);

void _elm_entry_anchor_hover_end(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_anchor_hover_end);

void _elm_entry_cursor_selection_begin(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_cursor_selection_begin);

Eina_Bool _elm_entry_cursor_down(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_entry_cursor_down, Eina_Bool, 0);

void _elm_entry_file_save(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_file_save);

void _elm_entry_selection_copy(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_selection_copy);

void _elm_entry_text_style_user_push(Eo *obj, Elm_Entry_Data *pd, const char *style);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_text_style_user_push, EFL_FUNC_CALL(style), const char *style);

void _elm_entry_item_provider_remove(Eo *obj, Elm_Entry_Data *pd, Elm_Entry_Item_Provider_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_item_provider_remove, EFL_FUNC_CALL(func, data), Elm_Entry_Item_Provider_Cb func, void *data);

const char *_elm_entry_text_style_user_peek(const Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_text_style_user_peek, const char *, NULL);

void _elm_entry_context_menu_clear(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_context_menu_clear);

Eina_Bool _elm_entry_cursor_up(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_entry_cursor_up, Eina_Bool, 0);

void _elm_entry_entry_insert(Eo *obj, Elm_Entry_Data *pd, const char *entry);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_insert, EFL_FUNC_CALL(entry), const char *entry);

void _elm_entry_input_panel_imdata_set(Eo *obj, Elm_Entry_Data *pd, const void *data, int len);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_input_panel_imdata_set, EFL_FUNC_CALL(data, len), const void *data, int len);

void _elm_entry_input_panel_imdata_get(const Eo *obj, Elm_Entry_Data *pd, void *data, int *len);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_entry_input_panel_imdata_get, EFL_FUNC_CALL(data, len), void *data, int *len);

void _elm_entry_selection_paste(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_selection_paste);

Eina_Bool _elm_entry_cursor_next(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_entry_cursor_next, Eina_Bool, 0);

void _elm_entry_select_none(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_select_none);

void _elm_entry_input_panel_hide(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_input_panel_hide);

void _elm_entry_select_all(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_select_all);

void _elm_entry_cursor_selection_end(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_cursor_selection_end);

void _elm_entry_selection_cut(Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_entry_selection_cut);

Eina_Bool _elm_entry_is_empty(const Eo *obj, Elm_Entry_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_entry_is_empty, Eina_Bool, EINA_TRUE /* true */);

void _elm_entry_markup_filter_remove(Eo *obj, Elm_Entry_Data *pd, Elm_Entry_Filter_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_markup_filter_remove, EFL_FUNC_CALL(func, data), Elm_Entry_Filter_Cb func, void *data);

void _elm_entry_item_provider_append(Eo *obj, Elm_Entry_Data *pd, Elm_Entry_Item_Provider_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_item_provider_append, EFL_FUNC_CALL(func, data), Elm_Entry_Item_Provider_Cb func, void *data);

void _elm_entry_markup_filter_append(Eo *obj, Elm_Entry_Data *pd, Elm_Entry_Filter_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_markup_filter_append, EFL_FUNC_CALL(func, data), Elm_Entry_Filter_Cb func, void *data);

void _elm_entry_entry_append(Eo *obj, Elm_Entry_Data *pd, const char *str);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_append, EFL_FUNC_CALL(str), const char *str);

void _elm_entry_context_menu_item_add(Eo *obj, Elm_Entry_Data *pd, const char *label, const char *icon_file, Elm_Icon_Type icon_type, Evas_Smart_Cb func, const void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_context_menu_item_add, EFL_FUNC_CALL(label, icon_file, icon_type, func, data), const char *label, const char *icon_file, Elm_Icon_Type icon_type, Evas_Smart_Cb func, const void *data);

void _elm_entry_markup_filter_prepend(Eo *obj, Elm_Entry_Data *pd, Elm_Entry_Filter_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_markup_filter_prepend, EFL_FUNC_CALL(func, data), Elm_Entry_Filter_Cb func, void *data);

void _elm_entry_prediction_hint_set(Eo *obj, Elm_Entry_Data *pd, const char *prediction_hint);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_entry_prediction_hint_set, EFL_FUNC_CALL(prediction_hint), const char *prediction_hint);

Efl_Object *_elm_entry_efl_object_constructor(Eo *obj, Elm_Entry_Data *pd);


void _elm_entry_efl_gfx_visible_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool v);


void _elm_entry_efl_gfx_position_set(Eo *obj, Elm_Entry_Data *pd, int x, int y);


void _elm_entry_efl_gfx_size_set(Eo *obj, Elm_Entry_Data *pd, int w, int h);


void _elm_entry_efl_canvas_group_group_member_add(Eo *obj, Elm_Entry_Data *pd, Efl_Canvas_Object *sub_obj);


Eina_Bool _elm_entry_elm_widget_activate(Eo *obj, Elm_Entry_Data *pd, Elm_Activate act);


Eina_Bool _elm_entry_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Entry_Data *pd);


Elm_Theme_Apply _elm_entry_elm_widget_theme_apply(Eo *obj, Elm_Entry_Data *pd);


Eina_Bool _elm_entry_elm_widget_on_focus(Eo *obj, Elm_Entry_Data *pd, Elm_Widget_Item *item);


Eina_Bool _elm_entry_elm_widget_on_focus_region(Eo *obj, Elm_Entry_Data *pd, int *x, int *y, int *w, int *h);


Eina_Bool _elm_entry_elm_widget_disable(Eo *obj, Elm_Entry_Data *pd);


Eina_Bool _elm_entry_elm_widget_sub_object_del(Eo *obj, Elm_Entry_Data *pd, Efl_Canvas_Object *sobj);


Eina_Bool _elm_entry_elm_widget_focus_next_manager_is(Eo *obj, Elm_Entry_Data *pd);


Eina_Bool _elm_entry_elm_layout_theme_enable(Eo *obj, Elm_Entry_Data *pd);


void _elm_entry_elm_layout_sizing_eval(Eo *obj, Elm_Entry_Data *pd);


void _elm_entry_elm_layout_signal_callback_add(Eo *obj, Elm_Entry_Data *pd, const char *emission, const char *source, Edje_Signal_Cb func, void *data);


void *_elm_entry_elm_layout_signal_callback_del(Eo *obj, Elm_Entry_Data *pd, const char *emission, const char *source, Edje_Signal_Cb func);


void _elm_entry_elm_layout_signal_emit(Eo *obj, Elm_Entry_Data *pd, const char *emission, const char *source);


const Elm_Layout_Part_Alias_Description *_elm_entry_elm_layout_text_aliases_get(Eo *obj, Elm_Entry_Data *pd);


const Elm_Layout_Part_Alias_Description *_elm_entry_elm_layout_content_aliases_get(Eo *obj, Elm_Entry_Data *pd);


void _elm_entry_elm_interface_scrollable_policy_set(Eo *obj, Elm_Entry_Data *pd, Elm_Scroller_Policy hbar, Elm_Scroller_Policy vbar);


void _elm_entry_elm_interface_scrollable_bounce_allow_set(Eo *obj, Elm_Entry_Data *pd, Eina_Bool horiz, Eina_Bool vert);


Elm_Atspi_State_Set _elm_entry_elm_interface_atspi_accessible_state_set_get(Eo *obj, Elm_Entry_Data *pd);


const char *_elm_entry_elm_interface_atspi_accessible_name_get(Eo *obj, Elm_Entry_Data *pd);


char *_elm_entry_elm_interface_atspi_text_text_get(Eo *obj, Elm_Entry_Data *pd, int start_offset, int end_offset);


char *_elm_entry_elm_interface_atspi_text_string_get(Eo *obj, Elm_Entry_Data *pd, Elm_Atspi_Text_Granularity granularity, int *start_offset, int *end_offset);


Eina_Bool _elm_entry_elm_interface_atspi_text_attribute_get(Eo *obj, Elm_Entry_Data *pd, const char *name, int *start_offset, int *end_offset, char **value);


Eina_List *_elm_entry_elm_interface_atspi_text_attributes_get(Eo *obj, Elm_Entry_Data *pd, int *start_offset, int *end_offset);


Eina_List *_elm_entry_elm_interface_atspi_text_default_attributes_get(Eo *obj, Elm_Entry_Data *pd);


Eina_Bool _elm_entry_elm_interface_atspi_text_caret_offset_set(Eo *obj, Elm_Entry_Data *pd, int offset);


int _elm_entry_elm_interface_atspi_text_caret_offset_get(Eo *obj, Elm_Entry_Data *pd);


Eina_Unicode _elm_entry_elm_interface_atspi_text_character_get(Eo *obj, Elm_Entry_Data *pd, int offset);


Eina_Bool _elm_entry_elm_interface_atspi_text_character_extents_get(Eo *obj, Elm_Entry_Data *pd, int offset, Eina_Bool screen_coords, Eina_Rectangle *rect);


int _elm_entry_elm_interface_atspi_text_character_count_get(Eo *obj, Elm_Entry_Data *pd);


int _elm_entry_elm_interface_atspi_text_offset_at_point_get(Eo *obj, Elm_Entry_Data *pd, Eina_Bool screen_coords, int x, int y);


Eina_List *_elm_entry_elm_interface_atspi_text_bounded_ranges_get(Eo *obj, Elm_Entry_Data *pd, Eina_Bool screen_coords, Eina_Rectangle rect, Elm_Atspi_Text_Clip_Type xclip, Elm_Atspi_Text_Clip_Type yclip);


Eina_Bool _elm_entry_elm_interface_atspi_text_range_extents_get(Eo *obj, Elm_Entry_Data *pd, Eina_Bool screen_coords, int start_offset, int end_offset, Eina_Rectangle *rect);


Eina_Bool _elm_entry_elm_interface_atspi_text_selection_set(Eo *obj, Elm_Entry_Data *pd, int selection_number, int start_offset, int end_offset);


void _elm_entry_elm_interface_atspi_text_selection_get(Eo *obj, Elm_Entry_Data *pd, int selection_number, int *start_offset, int *end_offset);


int _elm_entry_elm_interface_atspi_text_selections_count_get(Eo *obj, Elm_Entry_Data *pd);


Eina_Bool _elm_entry_elm_interface_atspi_text_selection_add(Eo *obj, Elm_Entry_Data *pd, int start_offset, int end_offset);


Eina_Bool _elm_entry_elm_interface_atspi_text_selection_remove(Eo *obj, Elm_Entry_Data *pd, int selection_number);


Eina_Bool _elm_entry_elm_interface_atspi_text_editable_content_set(Eo *obj, Elm_Entry_Data *pd, const char *string);


Eina_Bool _elm_entry_elm_interface_atspi_text_editable_insert(Eo *obj, Elm_Entry_Data *pd, const char *string, int position);


Eina_Bool _elm_entry_elm_interface_atspi_text_editable_copy(Eo *obj, Elm_Entry_Data *pd, int start, int end);


Eina_Bool _elm_entry_elm_interface_atspi_text_editable_cut(Eo *obj, Elm_Entry_Data *pd, int start, int end);


Eina_Bool _elm_entry_elm_interface_atspi_text_editable_delete(Eo *obj, Elm_Entry_Data *pd, int start, int end);


Eina_Bool _elm_entry_elm_interface_atspi_text_editable_paste(Eo *obj, Elm_Entry_Data *pd, int position);


Eina_Bool _elm_entry_efl_file_file_set(Eo *obj, Elm_Entry_Data *pd, const char *file, const char *key);


void _elm_entry_efl_file_file_get(Eo *obj, Elm_Entry_Data *pd, const char **file, const char **key);


Efl_Object *_elm_entry_efl_part_part(const Eo *obj, Elm_Entry_Data *pd, const char *name);


static Eina_Bool
_elm_entry_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_ENTRY_EXTRA_OPS
#define ELM_ENTRY_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_entry_scrollable_set, _elm_entry_scrollable_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_scrollable_get, _elm_entry_scrollable_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_show_on_demand_set, _elm_entry_input_panel_show_on_demand_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_show_on_demand_get, _elm_entry_input_panel_show_on_demand_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_context_menu_disabled_set, _elm_entry_context_menu_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_context_menu_disabled_get, _elm_entry_context_menu_disabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cnp_mode_set, _elm_entry_cnp_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cnp_mode_get, _elm_entry_cnp_mode_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_file_text_format_set, _elm_entry_file_text_format_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_language_set, _elm_entry_input_panel_language_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_language_get, _elm_entry_input_panel_language_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_selection_handler_disabled_set, _elm_entry_selection_handler_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_selection_handler_disabled_get, _elm_entry_selection_handler_disabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_layout_variation_set, _elm_entry_input_panel_layout_variation_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_layout_variation_get, _elm_entry_input_panel_layout_variation_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_autocapital_type_set, _elm_entry_autocapital_type_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_autocapital_type_get, _elm_entry_autocapital_type_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_editable_set, _elm_entry_editable_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_editable_get, _elm_entry_editable_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_anchor_hover_style_set, _elm_entry_anchor_hover_style_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_anchor_hover_style_get, _elm_entry_anchor_hover_style_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_single_line_set, _elm_entry_single_line_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_single_line_get, _elm_entry_single_line_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_password_set, _elm_entry_password_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_password_get, _elm_entry_password_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_return_key_disabled_set, _elm_entry_input_panel_return_key_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_return_key_disabled_get, _elm_entry_input_panel_return_key_disabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_autosave_set, _elm_entry_autosave_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_autosave_get, _elm_entry_autosave_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_anchor_hover_parent_set, _elm_entry_anchor_hover_parent_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_anchor_hover_parent_get, _elm_entry_anchor_hover_parent_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_prediction_allow_set, _elm_entry_prediction_allow_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_prediction_allow_get, _elm_entry_prediction_allow_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_hint_set, _elm_entry_input_hint_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_hint_get, _elm_entry_input_hint_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_layout_set, _elm_entry_input_panel_layout_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_layout_get, _elm_entry_input_panel_layout_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_return_key_type_set, _elm_entry_input_panel_return_key_type_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_return_key_type_get, _elm_entry_input_panel_return_key_type_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_enabled_set, _elm_entry_input_panel_enabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_enabled_get, _elm_entry_input_panel_enabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_line_wrap_set, _elm_entry_line_wrap_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_line_wrap_get, _elm_entry_line_wrap_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_pos_set, _elm_entry_cursor_pos_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_pos_get, _elm_entry_cursor_pos_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_icon_visible_set, _elm_entry_icon_visible_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_line_end_set, _elm_entry_cursor_line_end_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_select_region_set, _elm_entry_select_region_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_select_region_get, _elm_entry_select_region_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_return_key_autoenabled_set, _elm_entry_input_panel_return_key_autoenabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_end_visible_set, _elm_entry_end_visible_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_begin_set, _elm_entry_cursor_begin_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_line_begin_set, _elm_entry_cursor_line_begin_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_end_set, _elm_entry_cursor_end_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_textblock_get, _elm_entry_textblock_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_geometry_get, _elm_entry_cursor_geometry_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_imf_context_get, _elm_entry_imf_context_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_is_format_get, _elm_entry_cursor_is_format_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_content_get, _elm_entry_cursor_content_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_selection_get, _elm_entry_selection_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_is_visible_format_get, _elm_entry_cursor_is_visible_format_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_select_allow_set, _elm_entry_select_allow_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_select_allow_get, _elm_entry_select_allow_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_prev, _elm_entry_cursor_prev),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_text_style_user_pop, _elm_entry_text_style_user_pop),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_item_provider_prepend, _elm_entry_item_provider_prepend),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_show, _elm_entry_input_panel_show),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_imf_context_reset, _elm_entry_imf_context_reset),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_calc_force, _elm_entry_calc_force),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_anchor_hover_end, _elm_entry_anchor_hover_end),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_selection_begin, _elm_entry_cursor_selection_begin),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_down, _elm_entry_cursor_down),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_file_save, _elm_entry_file_save),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_selection_copy, _elm_entry_selection_copy),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_text_style_user_push, _elm_entry_text_style_user_push),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_item_provider_remove, _elm_entry_item_provider_remove),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_text_style_user_peek, _elm_entry_text_style_user_peek),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_context_menu_clear, _elm_entry_context_menu_clear),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_up, _elm_entry_cursor_up),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_insert, _elm_entry_entry_insert),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_imdata_set, _elm_entry_input_panel_imdata_set),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_imdata_get, _elm_entry_input_panel_imdata_get),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_selection_paste, _elm_entry_selection_paste),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_next, _elm_entry_cursor_next),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_select_none, _elm_entry_select_none),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_input_panel_hide, _elm_entry_input_panel_hide),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_select_all, _elm_entry_select_all),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_cursor_selection_end, _elm_entry_cursor_selection_end),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_selection_cut, _elm_entry_selection_cut),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_is_empty, _elm_entry_is_empty),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_markup_filter_remove, _elm_entry_markup_filter_remove),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_item_provider_append, _elm_entry_item_provider_append),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_markup_filter_append, _elm_entry_markup_filter_append),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_append, _elm_entry_entry_append),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_context_menu_item_add, _elm_entry_context_menu_item_add),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_markup_filter_prepend, _elm_entry_markup_filter_prepend),
      EFL_OBJECT_OP_FUNC(elm_obj_entry_prediction_hint_set, _elm_entry_prediction_hint_set),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_entry_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _elm_entry_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _elm_entry_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _elm_entry_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_add, _elm_entry_efl_canvas_group_group_member_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_activate, _elm_entry_elm_widget_activate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_entry_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_entry_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _elm_entry_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus_region, _elm_entry_elm_widget_on_focus_region),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_disable, _elm_entry_elm_widget_disable),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _elm_entry_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_entry_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_theme_enable, _elm_entry_elm_layout_theme_enable),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_entry_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_signal_callback_add, _elm_entry_elm_layout_signal_callback_add),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_signal_callback_del, _elm_entry_elm_layout_signal_callback_del),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_signal_emit, _elm_entry_elm_layout_signal_emit),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_text_aliases_get, _elm_entry_elm_layout_text_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_content_aliases_get, _elm_entry_elm_layout_content_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_policy_set, _elm_entry_elm_interface_scrollable_policy_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_bounce_allow_set, _elm_entry_elm_interface_scrollable_bounce_allow_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _elm_entry_elm_interface_atspi_accessible_state_set_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_name_get, _elm_entry_elm_interface_atspi_accessible_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_get, _elm_entry_elm_interface_atspi_text_text_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_string_get, _elm_entry_elm_interface_atspi_text_string_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_attribute_get, _elm_entry_elm_interface_atspi_text_attribute_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_attributes_get, _elm_entry_elm_interface_atspi_text_attributes_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_default_attributes_get, _elm_entry_elm_interface_atspi_text_default_attributes_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_caret_offset_set, _elm_entry_elm_interface_atspi_text_caret_offset_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_caret_offset_get, _elm_entry_elm_interface_atspi_text_caret_offset_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_character_get, _elm_entry_elm_interface_atspi_text_character_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_character_extents_get, _elm_entry_elm_interface_atspi_text_character_extents_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_character_count_get, _elm_entry_elm_interface_atspi_text_character_count_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_offset_at_point_get, _elm_entry_elm_interface_atspi_text_offset_at_point_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_bounded_ranges_get, _elm_entry_elm_interface_atspi_text_bounded_ranges_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_range_extents_get, _elm_entry_elm_interface_atspi_text_range_extents_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_selection_set, _elm_entry_elm_interface_atspi_text_selection_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_selection_get, _elm_entry_elm_interface_atspi_text_selection_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_selections_count_get, _elm_entry_elm_interface_atspi_text_selections_count_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_selection_add, _elm_entry_elm_interface_atspi_text_selection_add),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_selection_remove, _elm_entry_elm_interface_atspi_text_selection_remove),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_content_set, _elm_entry_elm_interface_atspi_text_editable_content_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_insert, _elm_entry_elm_interface_atspi_text_editable_insert),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_copy, _elm_entry_elm_interface_atspi_text_editable_copy),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_cut, _elm_entry_elm_interface_atspi_text_editable_cut),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_delete, _elm_entry_elm_interface_atspi_text_editable_delete),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_paste, _elm_entry_elm_interface_atspi_text_editable_paste),
      EFL_OBJECT_OP_FUNC(efl_file_set, _elm_entry_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_get, _elm_entry_efl_file_file_get),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_entry_efl_part_part),
      ELM_ENTRY_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_ENTRY_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_ENTRY_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_entry_class_desc = {
   EO_VERSION,
   "Elm.Entry",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Entry_Data),
   _elm_entry_class_initializer,
   _elm_entry_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_entry_class_get, &_elm_entry_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_SCROLLABLE_MIXIN, EFL_UI_CLICKABLE_INTERFACE, ELM_INTERFACE_ATSPI_TEXT_INTERFACE, ELM_INTERFACE_ATSPI_TEXT_EDITABLE_INTERFACE, EFL_FILE_INTERFACE, EFL_UI_SELECTABLE_INTERFACE, EFL_UI_SCROLLABLE_INTERFACE, NULL);

EAPI void
elm_entry_scrollable_set(Elm_Entry *obj, Eina_Bool scroll)
{
   elm_obj_entry_scrollable_set(obj, scroll);
}

EAPI Eina_Bool
elm_entry_scrollable_get(const Elm_Entry *obj)
{
   return elm_obj_entry_scrollable_get(obj);
}

EAPI void
elm_entry_input_panel_show_on_demand_set(Elm_Entry *obj, Eina_Bool ondemand)
{
   elm_obj_entry_input_panel_show_on_demand_set(obj, ondemand);
}

EAPI Eina_Bool
elm_entry_input_panel_show_on_demand_get(const Elm_Entry *obj)
{
   return elm_obj_entry_input_panel_show_on_demand_get(obj);
}

EAPI void
elm_entry_context_menu_disabled_set(Elm_Entry *obj, Eina_Bool disabled)
{
   elm_obj_entry_context_menu_disabled_set(obj, disabled);
}

EAPI Eina_Bool
elm_entry_context_menu_disabled_get(const Elm_Entry *obj)
{
   return elm_obj_entry_context_menu_disabled_get(obj);
}

EAPI void
elm_entry_cnp_mode_set(Elm_Entry *obj, Elm_Cnp_Mode cnp_mode)
{
   elm_obj_entry_cnp_mode_set(obj, cnp_mode);
}

EAPI Elm_Cnp_Mode
elm_entry_cnp_mode_get(const Elm_Entry *obj)
{
   return elm_obj_entry_cnp_mode_get(obj);
}

EAPI void
elm_entry_file_text_format_set(Elm_Entry *obj, Elm_Text_Format format)
{
   elm_obj_entry_file_text_format_set(obj, format);
}

EAPI void
elm_entry_input_panel_language_set(Elm_Entry *obj, Elm_Input_Panel_Lang lang)
{
   elm_obj_entry_input_panel_language_set(obj, lang);
}

EAPI Elm_Input_Panel_Lang
elm_entry_input_panel_language_get(const Elm_Entry *obj)
{
   return elm_obj_entry_input_panel_language_get(obj);
}

EAPI void
elm_entry_selection_handler_disabled_set(Elm_Entry *obj, Eina_Bool disabled)
{
   elm_obj_entry_selection_handler_disabled_set(obj, disabled);
}

EAPI void
elm_entry_input_panel_layout_variation_set(Elm_Entry *obj, int variation)
{
   elm_obj_entry_input_panel_layout_variation_set(obj, variation);
}

EAPI int
elm_entry_input_panel_layout_variation_get(const Elm_Entry *obj)
{
   return elm_obj_entry_input_panel_layout_variation_get(obj);
}

EAPI void
elm_entry_autocapital_type_set(Elm_Entry *obj, Elm_Autocapital_Type autocapital_type)
{
   elm_obj_entry_autocapital_type_set(obj, autocapital_type);
}

EAPI Elm_Autocapital_Type
elm_entry_autocapital_type_get(const Elm_Entry *obj)
{
   return elm_obj_entry_autocapital_type_get(obj);
}

EAPI void
elm_entry_editable_set(Elm_Entry *obj, Eina_Bool editable)
{
   elm_obj_entry_editable_set(obj, editable);
}

EAPI Eina_Bool
elm_entry_editable_get(const Elm_Entry *obj)
{
   return elm_obj_entry_editable_get(obj);
}

EAPI void
elm_entry_anchor_hover_style_set(Elm_Entry *obj, const char *style)
{
   elm_obj_entry_anchor_hover_style_set(obj, style);
}

EAPI const char *
elm_entry_anchor_hover_style_get(const Elm_Entry *obj)
{
   return elm_obj_entry_anchor_hover_style_get(obj);
}

EAPI void
elm_entry_single_line_set(Elm_Entry *obj, Eina_Bool single_line)
{
   elm_obj_entry_single_line_set(obj, single_line);
}

EAPI Eina_Bool
elm_entry_single_line_get(const Elm_Entry *obj)
{
   return elm_obj_entry_single_line_get(obj);
}

EAPI void
elm_entry_password_set(Elm_Entry *obj, Eina_Bool password)
{
   elm_obj_entry_password_set(obj, password);
}

EAPI Eina_Bool
elm_entry_password_get(const Elm_Entry *obj)
{
   return elm_obj_entry_password_get(obj);
}

EAPI void
elm_entry_input_panel_return_key_disabled_set(Elm_Entry *obj, Eina_Bool disabled)
{
   elm_obj_entry_input_panel_return_key_disabled_set(obj, disabled);
}

EAPI Eina_Bool
elm_entry_input_panel_return_key_disabled_get(const Elm_Entry *obj)
{
   return elm_obj_entry_input_panel_return_key_disabled_get(obj);
}

EAPI void
elm_entry_autosave_set(Elm_Entry *obj, Eina_Bool auto_save)
{
   elm_obj_entry_autosave_set(obj, auto_save);
}

EAPI Eina_Bool
elm_entry_autosave_get(const Elm_Entry *obj)
{
   return elm_obj_entry_autosave_get(obj);
}

EAPI void
elm_entry_anchor_hover_parent_set(Elm_Entry *obj, Efl_Canvas_Object *parent)
{
   elm_obj_entry_anchor_hover_parent_set(obj, parent);
}

EAPI Efl_Canvas_Object *
elm_entry_anchor_hover_parent_get(const Elm_Entry *obj)
{
   return elm_obj_entry_anchor_hover_parent_get(obj);
}

EAPI void
elm_entry_prediction_allow_set(Elm_Entry *obj, Eina_Bool prediction)
{
   elm_obj_entry_prediction_allow_set(obj, prediction);
}

EAPI Eina_Bool
elm_entry_prediction_allow_get(const Elm_Entry *obj)
{
   return elm_obj_entry_prediction_allow_get(obj);
}

EAPI void
elm_entry_input_hint_set(Elm_Entry *obj, Elm_Input_Hints hints)
{
   elm_obj_entry_input_hint_set(obj, hints);
}

EAPI Elm_Input_Hints
elm_entry_input_hint_get(const Elm_Entry *obj)
{
   return elm_obj_entry_input_hint_get(obj);
}

EAPI void
elm_entry_input_panel_layout_set(Elm_Entry *obj, Elm_Input_Panel_Layout layout)
{
   elm_obj_entry_input_panel_layout_set(obj, layout);
}

EAPI Elm_Input_Panel_Layout
elm_entry_input_panel_layout_get(const Elm_Entry *obj)
{
   return elm_obj_entry_input_panel_layout_get(obj);
}

EAPI void
elm_entry_input_panel_return_key_type_set(Elm_Entry *obj, Elm_Input_Panel_Return_Key_Type return_key_type)
{
   elm_obj_entry_input_panel_return_key_type_set(obj, return_key_type);
}

EAPI Elm_Input_Panel_Return_Key_Type
elm_entry_input_panel_return_key_type_get(const Elm_Entry *obj)
{
   return elm_obj_entry_input_panel_return_key_type_get(obj);
}

EAPI void
elm_entry_input_panel_enabled_set(Elm_Entry *obj, Eina_Bool enabled)
{
   elm_obj_entry_input_panel_enabled_set(obj, enabled);
}

EAPI Eina_Bool
elm_entry_input_panel_enabled_get(const Elm_Entry *obj)
{
   return elm_obj_entry_input_panel_enabled_get(obj);
}

EAPI void
elm_entry_line_wrap_set(Elm_Entry *obj, Elm_Wrap_Type wrap)
{
   elm_obj_entry_line_wrap_set(obj, wrap);
}

EAPI Elm_Wrap_Type
elm_entry_line_wrap_get(const Elm_Entry *obj)
{
   return elm_obj_entry_line_wrap_get(obj);
}

EAPI void
elm_entry_cursor_pos_set(Elm_Entry *obj, int pos)
{
   elm_obj_entry_cursor_pos_set(obj, pos);
}

EAPI int
elm_entry_cursor_pos_get(const Elm_Entry *obj)
{
   return elm_obj_entry_cursor_pos_get(obj);
}

EAPI void
elm_entry_icon_visible_set(Elm_Entry *obj, Eina_Bool setting)
{
   elm_obj_entry_icon_visible_set(obj, setting);
}

EAPI void
elm_entry_cursor_line_end_set(Elm_Entry *obj)
{
   elm_obj_entry_cursor_line_end_set(obj);
}

EAPI void
elm_entry_select_region_set(Elm_Entry *obj, int start, int end)
{
   elm_obj_entry_select_region_set(obj, start, end);
}

EAPI void
elm_entry_select_region_get(const Elm_Entry *obj, int *start, int *end)
{
   elm_obj_entry_select_region_get(obj, start, end);
}

EAPI void
elm_entry_input_panel_return_key_autoenabled_set(Elm_Entry *obj, Eina_Bool enabled)
{
   elm_obj_entry_input_panel_return_key_autoenabled_set(obj, enabled);
}

EAPI void
elm_entry_end_visible_set(Elm_Entry *obj, Eina_Bool setting)
{
   elm_obj_entry_end_visible_set(obj, setting);
}

EAPI void
elm_entry_cursor_begin_set(Elm_Entry *obj)
{
   elm_obj_entry_cursor_begin_set(obj);
}

EAPI void
elm_entry_cursor_line_begin_set(Elm_Entry *obj)
{
   elm_obj_entry_cursor_line_begin_set(obj);
}

EAPI void
elm_entry_cursor_end_set(Elm_Entry *obj)
{
   elm_obj_entry_cursor_end_set(obj);
}

EAPI Efl_Canvas_Object *
elm_entry_textblock_get(const Elm_Entry *obj)
{
   return elm_obj_entry_textblock_get(obj);
}

EAPI Eina_Bool
elm_entry_cursor_geometry_get(const Elm_Entry *obj, int *x, int *y, int *w, int *h)
{
   return elm_obj_entry_cursor_geometry_get(obj, x, y, w, h);
}

EAPI void *
elm_entry_imf_context_get(const Elm_Entry *obj)
{
   return elm_obj_entry_imf_context_get(obj);
}

EAPI Eina_Bool
elm_entry_cursor_is_format_get(const Elm_Entry *obj)
{
   return elm_obj_entry_cursor_is_format_get(obj);
}

EAPI char *
elm_entry_cursor_content_get(const Elm_Entry *obj)
{
   return elm_obj_entry_cursor_content_get(obj);
}

EAPI const char *
elm_entry_selection_get(const Elm_Entry *obj)
{
   return elm_obj_entry_selection_get(obj);
}

EAPI Eina_Bool
elm_entry_cursor_is_visible_format_get(const Elm_Entry *obj)
{
   return elm_obj_entry_cursor_is_visible_format_get(obj);
}

EAPI void
elm_entry_select_allow_set(Elm_Entry *obj, Eina_Bool allow)
{
   elm_obj_entry_select_allow_set(obj, allow);
}

EAPI Eina_Bool
elm_entry_select_allow_get(const Elm_Entry *obj)
{
   return elm_obj_entry_select_allow_get(obj);
}

EAPI Eina_Bool
elm_entry_cursor_prev(Elm_Entry *obj)
{
   return elm_obj_entry_cursor_prev(obj);
}

EAPI void
elm_entry_text_style_user_pop(Elm_Entry *obj)
{
   elm_obj_entry_text_style_user_pop(obj);
}

EAPI void
elm_entry_item_provider_prepend(Elm_Entry *obj, Elm_Entry_Item_Provider_Cb func, void *data)
{
   elm_obj_entry_item_provider_prepend(obj, func, data);
}

EAPI void
elm_entry_input_panel_show(Elm_Entry *obj)
{
   elm_obj_entry_input_panel_show(obj);
}

EAPI void
elm_entry_imf_context_reset(Elm_Entry *obj)
{
   elm_obj_entry_imf_context_reset(obj);
}

EAPI void
elm_entry_calc_force(Elm_Entry *obj)
{
   elm_obj_entry_calc_force(obj);
}

EAPI void
elm_entry_anchor_hover_end(Elm_Entry *obj)
{
   elm_obj_entry_anchor_hover_end(obj);
}

EAPI void
elm_entry_cursor_selection_begin(Elm_Entry *obj)
{
   elm_obj_entry_cursor_selection_begin(obj);
}

EAPI Eina_Bool
elm_entry_cursor_down(Elm_Entry *obj)
{
   return elm_obj_entry_cursor_down(obj);
}

EAPI void
elm_entry_file_save(Elm_Entry *obj)
{
   elm_obj_entry_file_save(obj);
}

EAPI void
elm_entry_selection_copy(Elm_Entry *obj)
{
   elm_obj_entry_selection_copy(obj);
}

EAPI void
elm_entry_text_style_user_push(Elm_Entry *obj, const char *style)
{
   elm_obj_entry_text_style_user_push(obj, style);
}

EAPI void
elm_entry_item_provider_remove(Elm_Entry *obj, Elm_Entry_Item_Provider_Cb func, void *data)
{
   elm_obj_entry_item_provider_remove(obj, func, data);
}

EAPI const char *
elm_entry_text_style_user_peek(const Elm_Entry *obj)
{
   return elm_obj_entry_text_style_user_peek(obj);
}

EAPI void
elm_entry_context_menu_clear(Elm_Entry *obj)
{
   elm_obj_entry_context_menu_clear(obj);
}

EAPI Eina_Bool
elm_entry_cursor_up(Elm_Entry *obj)
{
   return elm_obj_entry_cursor_up(obj);
}

EAPI void
elm_entry_entry_insert(Elm_Entry *obj, const char *entry)
{
   elm_obj_entry_insert(obj, entry);
}

EAPI void
elm_entry_input_panel_imdata_set(Elm_Entry *obj, const void *data, int len)
{
   elm_obj_entry_input_panel_imdata_set(obj, data, len);
}

EAPI void
elm_entry_input_panel_imdata_get(const Elm_Entry *obj, void *data, int *len)
{
   elm_obj_entry_input_panel_imdata_get(obj, data, len);
}

EAPI void
elm_entry_selection_paste(Elm_Entry *obj)
{
   elm_obj_entry_selection_paste(obj);
}

EAPI Eina_Bool
elm_entry_cursor_next(Elm_Entry *obj)
{
   return elm_obj_entry_cursor_next(obj);
}

EAPI void
elm_entry_select_none(Elm_Entry *obj)
{
   elm_obj_entry_select_none(obj);
}

EAPI void
elm_entry_input_panel_hide(Elm_Entry *obj)
{
   elm_obj_entry_input_panel_hide(obj);
}

EAPI void
elm_entry_select_all(Elm_Entry *obj)
{
   elm_obj_entry_select_all(obj);
}

EAPI void
elm_entry_cursor_selection_end(Elm_Entry *obj)
{
   elm_obj_entry_cursor_selection_end(obj);
}

EAPI void
elm_entry_selection_cut(Elm_Entry *obj)
{
   elm_obj_entry_selection_cut(obj);
}

EAPI Eina_Bool
elm_entry_is_empty(const Elm_Entry *obj)
{
   return elm_obj_entry_is_empty(obj);
}

EAPI void
elm_entry_markup_filter_remove(Elm_Entry *obj, Elm_Entry_Filter_Cb func, void *data)
{
   elm_obj_entry_markup_filter_remove(obj, func, data);
}

EAPI void
elm_entry_item_provider_append(Elm_Entry *obj, Elm_Entry_Item_Provider_Cb func, void *data)
{
   elm_obj_entry_item_provider_append(obj, func, data);
}

EAPI void
elm_entry_markup_filter_append(Elm_Entry *obj, Elm_Entry_Filter_Cb func, void *data)
{
   elm_obj_entry_markup_filter_append(obj, func, data);
}

EAPI void
elm_entry_entry_append(Elm_Entry *obj, const char *str)
{
   elm_obj_entry_append(obj, str);
}

EAPI void
elm_entry_context_menu_item_add(Elm_Entry *obj, const char *label, const char *icon_file, Elm_Icon_Type icon_type, Evas_Smart_Cb func, const void *data)
{
   elm_obj_entry_context_menu_item_add(obj, label, icon_file, icon_type, func, data);
}

EAPI void
elm_entry_markup_filter_prepend(Elm_Entry *obj, Elm_Entry_Filter_Cb func, void *data)
{
   elm_obj_entry_markup_filter_prepend(obj, func, data);
}

EAPI void
elm_entry_prediction_hint_set(Elm_Entry *obj, const char *prediction_hint)
{
   elm_obj_entry_prediction_hint_set(obj, prediction_hint);
}
