EWAPI const Efl_Event_Description _EDJE_OBJECT_EVENT_RECALC =
   EFL_EVENT_DESCRIPTION("recalc");

void _edje_object_animation_set(Eo *obj, Edje *pd, Eina_Bool on);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_animation_set, EFL_FUNC_CALL(on), Eina_Bool on);

Eina_Bool _edje_object_animation_get(Eo *obj, Edje *pd);

EOAPI EFL_FUNC_BODY_CONST(edje_obj_animation_get, Eina_Bool, 0);

void _edje_object_play_set(Eo *obj, Edje *pd, Eina_Bool play);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_play_set, EFL_FUNC_CALL(play), Eina_Bool play);

Eina_Bool _edje_object_play_get(Eo *obj, Edje *pd);

EOAPI EFL_FUNC_BODY_CONST(edje_obj_play_get, Eina_Bool, 0);

void _edje_object_perspective_set(Eo *obj, Edje *pd, Edje_Perspective *ps);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_perspective_set, EFL_FUNC_CALL(ps), Edje_Perspective *ps);

const Edje_Perspective *_edje_object_perspective_get(Eo *obj, Edje *pd);

EOAPI EFL_FUNC_BODY_CONST(edje_obj_perspective_get, const Edje_Perspective *, NULL);

void _edje_object_transition_duration_factor_set(Eo *obj, Edje *pd, double scale);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_transition_duration_factor_set, EFL_FUNC_CALL(scale), double scale);

double _edje_object_transition_duration_factor_get(Eo *obj, Edje *pd);

EOAPI EFL_FUNC_BODY_CONST(edje_obj_transition_duration_factor_get, double, 1.000000);

Eina_Bool _edje_object_preload(Eo *obj, Edje *pd, Eina_Bool cancel);

EOAPI EFL_FUNC_BODYV(edje_obj_preload, Eina_Bool, 0, EFL_FUNC_CALL(cancel), Eina_Bool cancel);

Efl_Image_Load_Error _edje_object_load_error_get(Eo *obj, Edje *pd);

EOAPI EFL_FUNC_BODY_CONST(edje_obj_load_error_get, Efl_Image_Load_Error, 1 /* Efl.Image.Load.Error.generic */);

void _edje_object_calc_update_hints_set(Eo *obj, Edje *pd, Eina_Bool update);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_calc_update_hints_set, EFL_FUNC_CALL(update), Eina_Bool update);

Eina_Bool _edje_object_calc_update_hints_get(Eo *obj, Edje *pd);

EOAPI EFL_FUNC_BODY_CONST(edje_obj_calc_update_hints_get, Eina_Bool, EINA_FALSE /* false */);

void _edje_object_size_min_calc(Eo *obj, Edje *pd, int *minw, int *minh);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_size_min_calc, EFL_FUNC_CALL(minw, minh), int *minw, int *minh);

void _edje_object_size_min_restricted_calc(Eo *obj, Edje *pd, int *minw, int *minh, int restrictedw, int restrictedh);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_size_min_restricted_calc, EFL_FUNC_CALL(minw, minh, restrictedw, restrictedh), int *minw, int *minh, int restrictedw, int restrictedh);

Eina_Bool _edje_object_parts_extends_calc(Eo *obj, Edje *pd, int *x, int *y, int *w, int *h);

EOAPI EFL_FUNC_BODYV(edje_obj_parts_extends_calc, Eina_Bool, 0, EFL_FUNC_CALL(x, y, w, h), int *x, int *y, int *w, int *h);

void _edje_object_calc_force(Eo *obj, Edje *pd);

EOAPI EFL_VOID_FUNC_BODY(edje_obj_calc_force);

int _edje_object_calc_freeze(Eo *obj, Edje *pd);

EOAPI EFL_FUNC_BODY(edje_obj_calc_freeze, int, 0);

int _edje_object_calc_thaw(Eo *obj, Edje *pd);

EOAPI EFL_FUNC_BODY(edje_obj_calc_thaw, int, 0);

void _edje_object_group_size_min_get(Eo *obj, Edje *pd, int *minw, int *minh);

EOAPI EFL_VOID_FUNC_BODYV_CONST(edje_obj_group_size_min_get, EFL_FUNC_CALL(minw, minh), int *minw, int *minh);

void _edje_object_group_size_max_get(Eo *obj, Edje *pd, int *maxw, int *maxh);

EOAPI EFL_VOID_FUNC_BODYV_CONST(edje_obj_group_size_max_get, EFL_FUNC_CALL(maxw, maxh), int *maxw, int *maxh);

const char *_edje_object_group_data_get(Eo *obj, Edje *pd, const char *key);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_group_data_get, const char *, NULL, EFL_FUNC_CALL(key), const char *key);

void _edje_object_message_send(Eo *obj, Edje *pd, int id, const Eina_Value msg);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_message_send, EFL_FUNC_CALL(id, msg), int id, const Eina_Value msg);

void _edje_object_signal_callback_add(Eo *obj, Edje *pd, const char *emission, const char *source, Edje_Signal_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_signal_callback_add, EFL_FUNC_CALL(emission, source, func, data), const char *emission, const char *source, Edje_Signal_Cb func, void *data);

void *_edje_object_signal_callback_del(Eo *obj, Edje *pd, const char *emission, const char *source, Edje_Signal_Cb func, void *data);

EOAPI EFL_FUNC_BODYV(edje_obj_signal_callback_del, void *, NULL, EFL_FUNC_CALL(emission, source, func, data), const char *emission, const char *source, Edje_Signal_Cb func, void *data);

void _edje_object_signal_emit(Eo *obj, Edje *pd, const char *emission, const char *source);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_signal_emit, EFL_FUNC_CALL(emission, source), const char *emission, const char *source);

void _edje_object_message_signal_process(Eo *obj, Edje *pd, Eina_Bool recurse);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_message_signal_process, EFL_FUNC_CALL(recurse), Eina_Bool recurse);

Eina_Bool _edje_object_global_color_class_set(Eo *obj, void *pd, const char *color_class, Edje_Color_Class_Mode mode, int r, int g, int b, int a);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_global_color_class_set, Eina_Bool, 0, EFL_FUNC_CALL(color_class, mode, r, g, b, a), const char *color_class, Edje_Color_Class_Mode mode, int r, int g, int b, int a);

Eina_Bool _edje_object_global_color_class_get(Eo *obj, void *pd, const char *color_class, Edje_Color_Class_Mode mode, int *r, int *g, int *b, int *a);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_global_color_class_get, Eina_Bool, 0, EFL_FUNC_CALL(color_class, mode, r, g, b, a), const char *color_class, Edje_Color_Class_Mode mode, int *r, int *g, int *b, int *a);

Eina_Bool _edje_object_color_class_set(Eo *obj, Edje *pd, const char *color_class, Edje_Color_Class_Mode mode, int r, int g, int b, int a);

EOAPI EFL_FUNC_BODYV(edje_obj_color_class_set, Eina_Bool, 0, EFL_FUNC_CALL(color_class, mode, r, g, b, a), const char *color_class, Edje_Color_Class_Mode mode, int r, int g, int b, int a);

Eina_Bool _edje_object_color_class_get(Eo *obj, Edje *pd, const char *color_class, Edje_Color_Class_Mode mode, int *r, int *g, int *b, int *a);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_color_class_get, Eina_Bool, 0, EFL_FUNC_CALL(color_class, mode, r, g, b, a), const char *color_class, Edje_Color_Class_Mode mode, int *r, int *g, int *b, int *a);

const char *_edje_object_color_class_description_get(Eo *obj, Edje *pd, const char *color_class);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_color_class_description_get, const char *, NULL, EFL_FUNC_CALL(color_class), const char *color_class);

Eina_Bool _edje_object_color_class_clear(const Eo *obj, Edje *pd);

EOAPI EFL_FUNC_BODY_CONST(edje_obj_color_class_clear, Eina_Bool, 0);

void _edje_object_color_class_del(Eo *obj, Edje *pd, const char *color_class);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_color_class_del, EFL_FUNC_CALL(color_class), const char *color_class);

Eina_Bool _edje_object_text_class_set(Eo *obj, Edje *pd, const char *text_class, const char *font, int size);

EOAPI EFL_FUNC_BODYV(edje_obj_text_class_set, Eina_Bool, 0, EFL_FUNC_CALL(text_class, font, size), const char *text_class, const char *font, int size);

Eina_Bool _edje_object_text_class_get(Eo *obj, Edje *pd, const char *text_class, const char **font, int *size);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_text_class_get, Eina_Bool, 0, EFL_FUNC_CALL(text_class, font, size), const char *text_class, const char **font, int *size);

void _edje_object_text_class_del(Eo *obj, Edje *pd, const char *text_class);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_text_class_del, EFL_FUNC_CALL(text_class), const char *text_class);

Eina_Bool _edje_object_size_class_set(Eo *obj, Edje *pd, const char *size_class, int minw, int minh, int maxw, int maxh);

EOAPI EFL_FUNC_BODYV(edje_obj_size_class_set, Eina_Bool, 0, EFL_FUNC_CALL(size_class, minw, minh, maxw, maxh), const char *size_class, int minw, int minh, int maxw, int maxh);

Eina_Bool _edje_object_size_class_get(Eo *obj, Edje *pd, const char *size_class, int *minw, int *minh, int *maxw, int *maxh);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_size_class_get, Eina_Bool, 0, EFL_FUNC_CALL(size_class, minw, minh, maxw, maxh), const char *size_class, int *minw, int *minh, int *maxw, int *maxh);

void _edje_object_size_class_del(Eo *obj, Edje *pd, const char *size_class);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_size_class_del, EFL_FUNC_CALL(size_class), const char *size_class);

Eina_Iterator *_edje_object_access_part_iterate(Eo *obj, Edje *pd);

EOAPI EFL_FUNC_BODY(edje_obj_access_part_iterate, Eina_Iterator *, NULL);

Eina_Bool _edje_object_part_exists(const Eo *obj, Edje *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_part_exists, Eina_Bool, 0, EFL_FUNC_CALL(part), const char *part);

void _edje_object_text_change_cb_set(Eo *obj, Edje *pd, Edje_Text_Change_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_text_change_cb_set, EFL_FUNC_CALL(func, data), Edje_Text_Change_Cb func, void *data);

void _edje_object_part_text_autocapital_type_set(Eo *obj, Edje *pd, const char *part, Edje_Text_Autocapital_Type autocapital_type);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_part_text_autocapital_type_set, EFL_FUNC_CALL(part, autocapital_type), const char *part, Edje_Text_Autocapital_Type autocapital_type);

Edje_Text_Autocapital_Type _edje_object_part_text_autocapital_type_get(Eo *obj, Edje *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_part_text_autocapital_type_get, Edje_Text_Autocapital_Type, 0, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_prediction_allow_set(Eo *obj, Edje *pd, const char *part, Eina_Bool prediction);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_part_text_prediction_allow_set, EFL_FUNC_CALL(part, prediction), const char *part, Eina_Bool prediction);

Eina_Bool _edje_object_part_text_prediction_allow_get(Eo *obj, Edje *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_part_text_prediction_allow_get, Eina_Bool, 0, EFL_FUNC_CALL(part), const char *part);

void _edje_object_item_provider_set(Eo *obj, Edje *pd, Edje_Item_Provider_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_item_provider_set, EFL_FUNC_CALL(func, data), Edje_Item_Provider_Cb func, void *data);

void _edje_object_part_text_select_allow_set(Eo *obj, Edje *pd, const char *part, Eina_Bool allow);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_part_text_select_allow_set, EFL_FUNC_CALL(part, allow), const char *part, Eina_Bool allow);

void _edje_object_part_text_select_begin(const Eo *obj, Edje *pd, const char *part);

EOAPI EFL_VOID_FUNC_BODYV_CONST(edje_obj_part_text_select_begin, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_select_abort(const Eo *obj, Edje *pd, const char *part);

EOAPI EFL_VOID_FUNC_BODYV_CONST(edje_obj_part_text_select_abort, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_select_extend(const Eo *obj, Edje *pd, const char *part);

EOAPI EFL_VOID_FUNC_BODYV_CONST(edje_obj_part_text_select_extend, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_select_all(const Eo *obj, Edje *pd, const char *part);

EOAPI EFL_VOID_FUNC_BODYV_CONST(edje_obj_part_text_select_all, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_select_none(const Eo *obj, Edje *pd, const char *part);

EOAPI EFL_VOID_FUNC_BODYV_CONST(edje_obj_part_text_select_none, EFL_FUNC_CALL(part), const char *part);

const char *_edje_object_part_text_selection_get(Eo *obj, Edje *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_part_text_selection_get, const char *, NULL, EFL_FUNC_CALL(part), const char *part);

void *_edje_object_part_text_imf_context_get(Eo *obj, Edje *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_part_text_imf_context_get, void *, NULL, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_imf_context_reset(const Eo *obj, Edje *pd, const char *part);

EOAPI EFL_VOID_FUNC_BODYV_CONST(edje_obj_part_text_imf_context_reset, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_input_hint_set(Eo *obj, Edje *pd, const char *part, Edje_Input_Hints input_hints);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_part_text_input_hint_set, EFL_FUNC_CALL(part, input_hints), const char *part, Edje_Input_Hints input_hints);

Edje_Input_Hints _edje_object_part_text_input_hint_get(Eo *obj, Edje *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_part_text_input_hint_get, Edje_Input_Hints, 0, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_input_panel_show(const Eo *obj, Edje *pd, const char *part);

EOAPI EFL_VOID_FUNC_BODYV_CONST(edje_obj_part_text_input_panel_show, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_input_panel_hide(const Eo *obj, Edje *pd, const char *part);

EOAPI EFL_VOID_FUNC_BODYV_CONST(edje_obj_part_text_input_panel_hide, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_input_panel_imdata_set(Eo *obj, Edje *pd, const char *part, const void *data, int len);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_part_text_input_panel_imdata_set, EFL_FUNC_CALL(part, data, len), const char *part, const void *data, int len);

void _edje_object_part_text_input_panel_imdata_get(Eo *obj, Edje *pd, const char *part, void *data, int *len);

EOAPI EFL_VOID_FUNC_BODYV_CONST(edje_obj_part_text_input_panel_imdata_get, EFL_FUNC_CALL(part, data, len), const char *part, void *data, int *len);

void _edje_object_part_text_input_panel_layout_set(Eo *obj, Edje *pd, const char *part, Edje_Input_Panel_Layout layout);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_part_text_input_panel_layout_set, EFL_FUNC_CALL(part, layout), const char *part, Edje_Input_Panel_Layout layout);

Edje_Input_Panel_Layout _edje_object_part_text_input_panel_layout_get(Eo *obj, Edje *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_part_text_input_panel_layout_get, Edje_Input_Panel_Layout, 0, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_input_panel_language_set(Eo *obj, Edje *pd, const char *part, Edje_Input_Panel_Lang lang);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_part_text_input_panel_language_set, EFL_FUNC_CALL(part, lang), const char *part, Edje_Input_Panel_Lang lang);

Edje_Input_Panel_Lang _edje_object_part_text_input_panel_language_get(Eo *obj, Edje *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_part_text_input_panel_language_get, Edje_Input_Panel_Lang, 0, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_input_panel_layout_variation_set(Eo *obj, Edje *pd, const char *part, int variation);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_part_text_input_panel_layout_variation_set, EFL_FUNC_CALL(part, variation), const char *part, int variation);

int _edje_object_part_text_input_panel_layout_variation_get(Eo *obj, Edje *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_part_text_input_panel_layout_variation_get, int, 0, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_input_panel_enabled_set(Eo *obj, Edje *pd, const char *part, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_part_text_input_panel_enabled_set, EFL_FUNC_CALL(part, enabled), const char *part, Eina_Bool enabled);

Eina_Bool _edje_object_part_text_input_panel_enabled_get(Eo *obj, Edje *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_part_text_input_panel_enabled_get, Eina_Bool, 0, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_input_panel_return_key_disabled_set(Eo *obj, Edje *pd, const char *part, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_part_text_input_panel_return_key_disabled_set, EFL_FUNC_CALL(part, disabled), const char *part, Eina_Bool disabled);

Eina_Bool _edje_object_part_text_input_panel_return_key_disabled_get(Eo *obj, Edje *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_part_text_input_panel_return_key_disabled_get, Eina_Bool, 0, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_input_panel_return_key_type_set(Eo *obj, Edje *pd, const char *part, Edje_Input_Panel_Return_Key_Type return_key_type);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_part_text_input_panel_return_key_type_set, EFL_FUNC_CALL(part, return_key_type), const char *part, Edje_Input_Panel_Return_Key_Type return_key_type);

Edje_Input_Panel_Return_Key_Type _edje_object_part_text_input_panel_return_key_type_get(Eo *obj, Edje *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_part_text_input_panel_return_key_type_get, Edje_Input_Panel_Return_Key_Type, 0, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_input_panel_show_on_demand_set(Eo *obj, Edje *pd, const char *part, Eina_Bool ondemand);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_part_text_input_panel_show_on_demand_set, EFL_FUNC_CALL(part, ondemand), const char *part, Eina_Bool ondemand);

Eina_Bool _edje_object_part_text_input_panel_show_on_demand_get(Eo *obj, Edje *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_part_text_input_panel_show_on_demand_get, Eina_Bool, 0, EFL_FUNC_CALL(part), const char *part);

void _edje_object_part_text_prediction_hint_set(Eo *obj, Edje *pd, const char *part, const char *prediction_hint);

EOAPI EFL_VOID_FUNC_BODYV(edje_obj_part_text_prediction_hint_set, EFL_FUNC_CALL(part, prediction_hint), const char *part, const char *prediction_hint);

Efl_Input_Device *_edje_object_seat_get(Eo *obj, Edje *pd, Eina_Stringshare *name);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_seat_get, Efl_Input_Device *, NULL, EFL_FUNC_CALL(name), Eina_Stringshare *name);

Eina_Stringshare *_edje_object_seat_name_get(Eo *obj, Edje *pd, Efl_Input_Device *device);

EOAPI EFL_FUNC_BODYV_CONST(edje_obj_seat_name_get, Eina_Stringshare *, NULL, EFL_FUNC_CALL(device), Efl_Input_Device *device);

void _edje_object_efl_gfx_visible_set(Eo *obj, Edje *pd, Eina_Bool v);


void _edje_object_efl_gfx_position_set(Eo *obj, Edje *pd, int x, int y);


void _edje_object_efl_gfx_size_set(Eo *obj, Edje *pd, int w, int h);


Efl_Object *_edje_object_efl_object_constructor(Eo *obj, Edje *pd);


void _edje_object_efl_object_destructor(Eo *obj, Edje *pd);


void _edje_object_efl_canvas_object_no_render_set(Eo *obj, Edje *pd, Eina_Bool enable);


void _edje_object_efl_canvas_object_paragraph_direction_set(Eo *obj, Edje *pd, Efl_Text_Bidirectional_Type dir);


void _edje_object_efl_canvas_group_group_calculate(Eo *obj, Edje *pd);


void _edje_object_efl_ui_base_mirrored_set(Eo *obj, Edje *pd, Eina_Bool rtl);


Eina_Bool _edje_object_efl_ui_base_mirrored_get(Eo *obj, Edje *pd);


void _edje_object_efl_ui_base_language_set(Eo *obj, Edje *pd, const char *language);


const char *_edje_object_efl_ui_base_language_get(Eo *obj, Edje *pd);


void _edje_object_efl_ui_base_scale_set(Eo *obj, Edje *pd, double scale);


double _edje_object_efl_ui_base_scale_get(Eo *obj, Edje *pd);


double _edje_object_efl_ui_base_base_scale_get(Eo *obj, Edje *pd);


Eina_Bool _edje_object_efl_file_file_set(Eo *obj, Edje *pd, const char *file, const char *key);


void _edje_object_efl_file_file_get(Eo *obj, Edje *pd, const char **file, const char **key);


Eina_Bool _edje_object_efl_file_mmap_set(Eo *obj, Edje *pd, const Eina_File *f, const char *key);


void _edje_object_efl_file_mmap_get(Eo *obj, Edje *pd, const Eina_File **f, const char **key);


Eina_Bool _edje_object_efl_container_content_remove(Eo *obj, Edje *pd, Efl_Gfx *content);


Efl_Object *_edje_object_efl_part_part(const Eo *obj, Edje *pd, const char *name);


void _edje_object_efl_observer_update(Eo *obj, Edje *pd, Efl_Object *obs, const char *key, void *data);


static Eina_Bool
_edje_object_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EDJE_OBJECT_EXTRA_OPS
#define EDJE_OBJECT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(edje_obj_animation_set, _edje_object_animation_set),
      EFL_OBJECT_OP_FUNC(edje_obj_animation_get, _edje_object_animation_get),
      EFL_OBJECT_OP_FUNC(edje_obj_play_set, _edje_object_play_set),
      EFL_OBJECT_OP_FUNC(edje_obj_play_get, _edje_object_play_get),
      EFL_OBJECT_OP_FUNC(edje_obj_perspective_set, _edje_object_perspective_set),
      EFL_OBJECT_OP_FUNC(edje_obj_perspective_get, _edje_object_perspective_get),
      EFL_OBJECT_OP_FUNC(edje_obj_transition_duration_factor_set, _edje_object_transition_duration_factor_set),
      EFL_OBJECT_OP_FUNC(edje_obj_transition_duration_factor_get, _edje_object_transition_duration_factor_get),
      EFL_OBJECT_OP_FUNC(edje_obj_preload, _edje_object_preload),
      EFL_OBJECT_OP_FUNC(edje_obj_load_error_get, _edje_object_load_error_get),
      EFL_OBJECT_OP_FUNC(edje_obj_calc_update_hints_set, _edje_object_calc_update_hints_set),
      EFL_OBJECT_OP_FUNC(edje_obj_calc_update_hints_get, _edje_object_calc_update_hints_get),
      EFL_OBJECT_OP_FUNC(edje_obj_size_min_calc, _edje_object_size_min_calc),
      EFL_OBJECT_OP_FUNC(edje_obj_size_min_restricted_calc, _edje_object_size_min_restricted_calc),
      EFL_OBJECT_OP_FUNC(edje_obj_parts_extends_calc, _edje_object_parts_extends_calc),
      EFL_OBJECT_OP_FUNC(edje_obj_calc_force, _edje_object_calc_force),
      EFL_OBJECT_OP_FUNC(edje_obj_calc_freeze, _edje_object_calc_freeze),
      EFL_OBJECT_OP_FUNC(edje_obj_calc_thaw, _edje_object_calc_thaw),
      EFL_OBJECT_OP_FUNC(edje_obj_group_size_min_get, _edje_object_group_size_min_get),
      EFL_OBJECT_OP_FUNC(edje_obj_group_size_max_get, _edje_object_group_size_max_get),
      EFL_OBJECT_OP_FUNC(edje_obj_group_data_get, _edje_object_group_data_get),
      EFL_OBJECT_OP_FUNC(edje_obj_message_send, _edje_object_message_send),
      EFL_OBJECT_OP_FUNC(edje_obj_signal_callback_add, _edje_object_signal_callback_add),
      EFL_OBJECT_OP_FUNC(edje_obj_signal_callback_del, _edje_object_signal_callback_del),
      EFL_OBJECT_OP_FUNC(edje_obj_signal_emit, _edje_object_signal_emit),
      EFL_OBJECT_OP_FUNC(edje_obj_message_signal_process, _edje_object_message_signal_process),
      EFL_OBJECT_OP_FUNC(edje_obj_color_class_set, _edje_object_color_class_set),
      EFL_OBJECT_OP_FUNC(edje_obj_color_class_get, _edje_object_color_class_get),
      EFL_OBJECT_OP_FUNC(edje_obj_color_class_description_get, _edje_object_color_class_description_get),
      EFL_OBJECT_OP_FUNC(edje_obj_color_class_clear, _edje_object_color_class_clear),
      EFL_OBJECT_OP_FUNC(edje_obj_color_class_del, _edje_object_color_class_del),
      EFL_OBJECT_OP_FUNC(edje_obj_text_class_set, _edje_object_text_class_set),
      EFL_OBJECT_OP_FUNC(edje_obj_text_class_get, _edje_object_text_class_get),
      EFL_OBJECT_OP_FUNC(edje_obj_text_class_del, _edje_object_text_class_del),
      EFL_OBJECT_OP_FUNC(edje_obj_size_class_set, _edje_object_size_class_set),
      EFL_OBJECT_OP_FUNC(edje_obj_size_class_get, _edje_object_size_class_get),
      EFL_OBJECT_OP_FUNC(edje_obj_size_class_del, _edje_object_size_class_del),
      EFL_OBJECT_OP_FUNC(edje_obj_access_part_iterate, _edje_object_access_part_iterate),
      EFL_OBJECT_OP_FUNC(edje_obj_part_exists, _edje_object_part_exists),
      EFL_OBJECT_OP_FUNC(edje_obj_text_change_cb_set, _edje_object_text_change_cb_set),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_autocapital_type_set, _edje_object_part_text_autocapital_type_set),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_autocapital_type_get, _edje_object_part_text_autocapital_type_get),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_prediction_allow_set, _edje_object_part_text_prediction_allow_set),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_prediction_allow_get, _edje_object_part_text_prediction_allow_get),
      EFL_OBJECT_OP_FUNC(edje_obj_item_provider_set, _edje_object_item_provider_set),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_select_allow_set, _edje_object_part_text_select_allow_set),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_select_begin, _edje_object_part_text_select_begin),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_select_abort, _edje_object_part_text_select_abort),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_select_extend, _edje_object_part_text_select_extend),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_select_all, _edje_object_part_text_select_all),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_select_none, _edje_object_part_text_select_none),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_selection_get, _edje_object_part_text_selection_get),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_imf_context_get, _edje_object_part_text_imf_context_get),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_imf_context_reset, _edje_object_part_text_imf_context_reset),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_hint_set, _edje_object_part_text_input_hint_set),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_hint_get, _edje_object_part_text_input_hint_get),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_show, _edje_object_part_text_input_panel_show),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_hide, _edje_object_part_text_input_panel_hide),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_imdata_set, _edje_object_part_text_input_panel_imdata_set),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_imdata_get, _edje_object_part_text_input_panel_imdata_get),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_layout_set, _edje_object_part_text_input_panel_layout_set),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_layout_get, _edje_object_part_text_input_panel_layout_get),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_language_set, _edje_object_part_text_input_panel_language_set),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_language_get, _edje_object_part_text_input_panel_language_get),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_layout_variation_set, _edje_object_part_text_input_panel_layout_variation_set),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_layout_variation_get, _edje_object_part_text_input_panel_layout_variation_get),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_enabled_set, _edje_object_part_text_input_panel_enabled_set),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_enabled_get, _edje_object_part_text_input_panel_enabled_get),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_return_key_disabled_set, _edje_object_part_text_input_panel_return_key_disabled_set),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_return_key_disabled_get, _edje_object_part_text_input_panel_return_key_disabled_get),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_return_key_type_set, _edje_object_part_text_input_panel_return_key_type_set),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_return_key_type_get, _edje_object_part_text_input_panel_return_key_type_get),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_show_on_demand_set, _edje_object_part_text_input_panel_show_on_demand_set),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_input_panel_show_on_demand_get, _edje_object_part_text_input_panel_show_on_demand_get),
      EFL_OBJECT_OP_FUNC(edje_obj_part_text_prediction_hint_set, _edje_object_part_text_prediction_hint_set),
      EFL_OBJECT_OP_FUNC(edje_obj_seat_get, _edje_object_seat_get),
      EFL_OBJECT_OP_FUNC(edje_obj_seat_name_get, _edje_object_seat_name_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _edje_object_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _edje_object_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _edje_object_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_constructor, _edje_object_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _edje_object_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_no_render_set, _edje_object_efl_canvas_object_no_render_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_paragraph_direction_set, _edje_object_efl_canvas_object_paragraph_direction_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _edje_object_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(efl_ui_mirrored_set, _edje_object_efl_ui_base_mirrored_set),
      EFL_OBJECT_OP_FUNC(efl_ui_mirrored_get, _edje_object_efl_ui_base_mirrored_get),
      EFL_OBJECT_OP_FUNC(efl_ui_language_set, _edje_object_efl_ui_base_language_set),
      EFL_OBJECT_OP_FUNC(efl_ui_language_get, _edje_object_efl_ui_base_language_get),
      EFL_OBJECT_OP_FUNC(efl_ui_scale_set, _edje_object_efl_ui_base_scale_set),
      EFL_OBJECT_OP_FUNC(efl_ui_scale_get, _edje_object_efl_ui_base_scale_get),
      EFL_OBJECT_OP_FUNC(efl_ui_base_scale_get, _edje_object_efl_ui_base_base_scale_get),
      EFL_OBJECT_OP_FUNC(efl_file_set, _edje_object_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_get, _edje_object_efl_file_file_get),
      EFL_OBJECT_OP_FUNC(efl_file_mmap_set, _edje_object_efl_file_mmap_set),
      EFL_OBJECT_OP_FUNC(efl_file_mmap_get, _edje_object_efl_file_mmap_get),
      EFL_OBJECT_OP_FUNC(efl_content_remove, _edje_object_efl_container_content_remove),
      EFL_OBJECT_OP_FUNC(efl_part, _edje_object_efl_part_part),
      EFL_OBJECT_OP_FUNC(efl_observer_update, _edje_object_efl_observer_update),
      EDJE_OBJECT_EXTRA_OPS
   );
   opsp = &ops;

#ifndef EDJE_OBJECT_EXTRA_CLASS_OPS
#define EDJE_OBJECT_EXTRA_CLASS_OPS
#endif

   EFL_OPS_DEFINE(cops,
      EFL_OBJECT_OP_FUNC(edje_obj_global_color_class_set, _edje_object_global_color_class_set),
      EFL_OBJECT_OP_FUNC(edje_obj_global_color_class_get, _edje_object_global_color_class_get),
      EDJE_OBJECT_EXTRA_CLASS_OPS
   );
   copsp = &cops;

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _edje_object_class_desc = {
   EO_VERSION,
   "Edje.Object",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Edje),
   _edje_object_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(edje_object_class_get, &_edje_object_class_desc, EFL_CANVAS_GROUP_CLIPPED_CLASS, EFL_FILE_INTERFACE, EFL_CONTAINER_INTERFACE, EFL_PART_INTERFACE, EFL_OBSERVER_INTERFACE, EFL_UI_BASE_INTERFACE, NULL);

EAPI void
edje_object_animation_set(Edje_Object *obj, Eina_Bool on)
{
   edje_obj_animation_set(obj, on);
}

EAPI Eina_Bool
edje_object_animation_get(const Edje_Object *obj)
{
   return edje_obj_animation_get(obj);
}

EAPI void
edje_object_play_set(Edje_Object *obj, Eina_Bool play)
{
   edje_obj_play_set(obj, play);
}

EAPI Eina_Bool
edje_object_play_get(const Edje_Object *obj)
{
   return edje_obj_play_get(obj);
}

EAPI void
edje_object_perspective_set(Edje_Object *obj, Edje_Perspective *ps)
{
   edje_obj_perspective_set(obj, ps);
}

EAPI const Edje_Perspective *
edje_object_perspective_get(const Edje_Object *obj)
{
   return edje_obj_perspective_get(obj);
}

EAPI void
edje_object_transition_duration_factor_set(Edje_Object *obj, double scale)
{
   edje_obj_transition_duration_factor_set(obj, scale);
}

EAPI double
edje_object_transition_duration_factor_get(const Edje_Object *obj)
{
   return edje_obj_transition_duration_factor_get(obj);
}

EAPI Eina_Bool
edje_object_preload(Edje_Object *obj, Eina_Bool cancel)
{
   return edje_obj_preload(obj, cancel);
}

EAPI void
edje_object_update_hints_set(Edje_Object *obj, Eina_Bool update)
{
   edje_obj_calc_update_hints_set(obj, update);
}

EAPI Eina_Bool
edje_object_update_hints_get(const Edje_Object *obj)
{
   return edje_obj_calc_update_hints_get(obj);
}

EAPI void
edje_object_size_min_calc(Edje_Object *obj, int *minw, int *minh)
{
   edje_obj_size_min_calc(obj, minw, minh);
}

EAPI void
edje_object_size_min_restricted_calc(Edje_Object *obj, int *minw, int *minh, int restrictedw, int restrictedh)
{
   edje_obj_size_min_restricted_calc(obj, minw, minh, restrictedw, restrictedh);
}

EAPI Eina_Bool
edje_object_parts_extends_calc(Edje_Object *obj, int *x, int *y, int *w, int *h)
{
   return edje_obj_parts_extends_calc(obj, x, y, w, h);
}

EAPI void
edje_object_calc_force(Edje_Object *obj)
{
   edje_obj_calc_force(obj);
}

EAPI int
edje_object_freeze(Edje_Object *obj)
{
   return edje_obj_calc_freeze(obj);
}

EAPI int
edje_object_thaw(Edje_Object *obj)
{
   return edje_obj_calc_thaw(obj);
}

EAPI void
edje_object_size_min_get(const Edje_Object *obj, int *minw, int *minh)
{
   edje_obj_group_size_min_get(obj, minw, minh);
}

EAPI void
edje_object_size_max_get(const Edje_Object *obj, int *maxw, int *maxh)
{
   edje_obj_group_size_max_get(obj, maxw, maxh);
}

EAPI const char *
edje_object_data_get(const Edje_Object *obj, const char *key)
{
   return edje_obj_group_data_get(obj, key);
}

EAPI void
edje_object_signal_callback_add(Edje_Object *obj, const char *emission, const char *source, Edje_Signal_Cb func, void *data)
{
   edje_obj_signal_callback_add(obj, emission, source, func, data);
}

EAPI void
edje_object_signal_emit(Edje_Object *obj, const char *emission, const char *source)
{
   edje_obj_signal_emit(obj, emission, source);
}

EAPI const char *
edje_object_color_class_description_get(const Edje_Object *obj, const char *color_class)
{
   return edje_obj_color_class_description_get(obj, color_class);
}

EAPI Eina_Bool
edje_object_color_class_clear(const Edje_Object *obj)
{
   return edje_obj_color_class_clear(obj);
}

EAPI void
edje_object_color_class_del(Edje_Object *obj, const char *color_class)
{
   edje_obj_color_class_del(obj, color_class);
}

EAPI Eina_Bool
edje_object_text_class_set(Edje_Object *obj, const char *text_class, const char *font, int size)
{
   return edje_obj_text_class_set(obj, text_class, font, size);
}

EAPI Eina_Bool
edje_object_text_class_get(const Edje_Object *obj, const char *text_class, const char **font, int *size)
{
   return edje_obj_text_class_get(obj, text_class, font, size);
}

EAPI void
edje_object_text_class_del(Edje_Object *obj, const char *text_class)
{
   edje_obj_text_class_del(obj, text_class);
}

EAPI Eina_Bool
edje_object_size_class_set(Edje_Object *obj, const char *size_class, int minw, int minh, int maxw, int maxh)
{
   return edje_obj_size_class_set(obj, size_class, minw, minh, maxw, maxh);
}

EAPI Eina_Bool
edje_object_size_class_get(const Edje_Object *obj, const char *size_class, int *minw, int *minh, int *maxw, int *maxh)
{
   return edje_obj_size_class_get(obj, size_class, minw, minh, maxw, maxh);
}

EAPI void
edje_object_size_class_del(Edje_Object *obj, const char *size_class)
{
   edje_obj_size_class_del(obj, size_class);
}

EAPI Eina_Bool
edje_object_part_exists(const Edje_Object *obj, const char *part)
{
   return edje_obj_part_exists(obj, part);
}

EAPI void
edje_object_text_change_cb_set(Edje_Object *obj, Edje_Text_Change_Cb func, void *data)
{
   edje_obj_text_change_cb_set(obj, func, data);
}

EAPI void
edje_object_part_text_autocapital_type_set(Edje_Object *obj, const char *part, Edje_Text_Autocapital_Type autocapital_type)
{
   edje_obj_part_text_autocapital_type_set(obj, part, autocapital_type);
}

EAPI Edje_Text_Autocapital_Type
edje_object_part_text_autocapital_type_get(const Edje_Object *obj, const char *part)
{
   return edje_obj_part_text_autocapital_type_get(obj, part);
}

EAPI void
edje_object_part_text_prediction_allow_set(Edje_Object *obj, const char *part, Eina_Bool prediction)
{
   edje_obj_part_text_prediction_allow_set(obj, part, prediction);
}

EAPI Eina_Bool
edje_object_part_text_prediction_allow_get(const Edje_Object *obj, const char *part)
{
   return edje_obj_part_text_prediction_allow_get(obj, part);
}

EAPI void
edje_object_item_provider_set(Edje_Object *obj, Edje_Item_Provider_Cb func, void *data)
{
   edje_obj_item_provider_set(obj, func, data);
}

EAPI void
edje_object_part_text_select_begin(const Edje_Object *obj, const char *part)
{
   edje_obj_part_text_select_begin(obj, part);
}

EAPI void
edje_object_part_text_select_abort(const Edje_Object *obj, const char *part)
{
   edje_obj_part_text_select_abort(obj, part);
}

EAPI void
edje_object_part_text_select_extend(const Edje_Object *obj, const char *part)
{
   edje_obj_part_text_select_extend(obj, part);
}

EAPI void
edje_object_part_text_select_all(const Edje_Object *obj, const char *part)
{
   edje_obj_part_text_select_all(obj, part);
}

EAPI void
edje_object_part_text_select_none(const Edje_Object *obj, const char *part)
{
   edje_obj_part_text_select_none(obj, part);
}

EAPI const char *
edje_object_part_text_selection_get(const Edje_Object *obj, const char *part)
{
   return edje_obj_part_text_selection_get(obj, part);
}

EAPI void *
edje_object_part_text_imf_context_get(const Edje_Object *obj, const char *part)
{
   return edje_obj_part_text_imf_context_get(obj, part);
}

EAPI void
edje_object_part_text_imf_context_reset(const Edje_Object *obj, const char *part)
{
   edje_obj_part_text_imf_context_reset(obj, part);
}

EAPI void
edje_object_part_text_input_hint_set(Edje_Object *obj, const char *part, Edje_Input_Hints input_hints)
{
   edje_obj_part_text_input_hint_set(obj, part, input_hints);
}

EAPI Edje_Input_Hints
edje_object_part_text_input_hint_get(const Edje_Object *obj, const char *part)
{
   return edje_obj_part_text_input_hint_get(obj, part);
}

EAPI void
edje_object_part_text_input_panel_show(const Edje_Object *obj, const char *part)
{
   edje_obj_part_text_input_panel_show(obj, part);
}

EAPI void
edje_object_part_text_input_panel_hide(const Edje_Object *obj, const char *part)
{
   edje_obj_part_text_input_panel_hide(obj, part);
}

EAPI void
edje_object_part_text_input_panel_imdata_set(Edje_Object *obj, const char *part, const void *data, int len)
{
   edje_obj_part_text_input_panel_imdata_set(obj, part, data, len);
}

EAPI void
edje_object_part_text_input_panel_imdata_get(const Edje_Object *obj, const char *part, void *data, int *len)
{
   edje_obj_part_text_input_panel_imdata_get(obj, part, data, len);
}

EAPI void
edje_object_part_text_input_panel_layout_set(Edje_Object *obj, const char *part, Edje_Input_Panel_Layout layout)
{
   edje_obj_part_text_input_panel_layout_set(obj, part, layout);
}

EAPI Edje_Input_Panel_Layout
edje_object_part_text_input_panel_layout_get(const Edje_Object *obj, const char *part)
{
   return edje_obj_part_text_input_panel_layout_get(obj, part);
}

EAPI void
edje_object_part_text_input_panel_language_set(Edje_Object *obj, const char *part, Edje_Input_Panel_Lang lang)
{
   edje_obj_part_text_input_panel_language_set(obj, part, lang);
}

EAPI Edje_Input_Panel_Lang
edje_object_part_text_input_panel_language_get(const Edje_Object *obj, const char *part)
{
   return edje_obj_part_text_input_panel_language_get(obj, part);
}

EAPI void
edje_object_part_text_input_panel_layout_variation_set(Edje_Object *obj, const char *part, int variation)
{
   edje_obj_part_text_input_panel_layout_variation_set(obj, part, variation);
}

EAPI int
edje_object_part_text_input_panel_layout_variation_get(const Edje_Object *obj, const char *part)
{
   return edje_obj_part_text_input_panel_layout_variation_get(obj, part);
}

EAPI void
edje_object_part_text_input_panel_enabled_set(Edje_Object *obj, const char *part, Eina_Bool enabled)
{
   edje_obj_part_text_input_panel_enabled_set(obj, part, enabled);
}

EAPI Eina_Bool
edje_object_part_text_input_panel_enabled_get(const Edje_Object *obj, const char *part)
{
   return edje_obj_part_text_input_panel_enabled_get(obj, part);
}

EAPI void
edje_object_part_text_input_panel_return_key_disabled_set(Edje_Object *obj, const char *part, Eina_Bool disabled)
{
   edje_obj_part_text_input_panel_return_key_disabled_set(obj, part, disabled);
}

EAPI Eina_Bool
edje_object_part_text_input_panel_return_key_disabled_get(const Edje_Object *obj, const char *part)
{
   return edje_obj_part_text_input_panel_return_key_disabled_get(obj, part);
}

EAPI void
edje_object_part_text_input_panel_return_key_type_set(Edje_Object *obj, const char *part, Edje_Input_Panel_Return_Key_Type return_key_type)
{
   edje_obj_part_text_input_panel_return_key_type_set(obj, part, return_key_type);
}

EAPI Edje_Input_Panel_Return_Key_Type
edje_object_part_text_input_panel_return_key_type_get(const Edje_Object *obj, const char *part)
{
   return edje_obj_part_text_input_panel_return_key_type_get(obj, part);
}

EAPI void
edje_object_part_text_input_panel_show_on_demand_set(Edje_Object *obj, const char *part, Eina_Bool ondemand)
{
   edje_obj_part_text_input_panel_show_on_demand_set(obj, part, ondemand);
}

EAPI Eina_Bool
edje_object_part_text_input_panel_show_on_demand_get(const Edje_Object *obj, const char *part)
{
   return edje_obj_part_text_input_panel_show_on_demand_get(obj, part);
}

EAPI void
edje_object_part_text_prediction_hint_set(Edje_Object *obj, const char *part, const char *prediction_hint)
{
   edje_obj_part_text_prediction_hint_set(obj, part, prediction_hint);
}

EAPI Efl_Input_Device *
edje_object_seat_get(const Edje_Object *obj, Eina_Stringshare *name)
{
   return edje_obj_seat_get(obj, name);
}

EAPI Eina_Stringshare *
edje_object_seat_name_get(const Edje_Object *obj, Efl_Input_Device *device)
{
   return edje_obj_seat_name_get(obj, device);
}
