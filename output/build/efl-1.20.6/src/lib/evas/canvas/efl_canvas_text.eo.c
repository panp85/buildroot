EWAPI const Efl_Event_Description _EFL_CANVAS_TEXT_EVENT_CURSOR_CHANGED =
   EFL_EVENT_DESCRIPTION("cursor,changed");
EWAPI const Efl_Event_Description _EFL_CANVAS_TEXT_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");
EWAPI const Efl_Event_Description _EFL_CANVAS_TEXT_EVENT_STYLE_INSETS_CHANGED =
   EFL_EVENT_DESCRIPTION("style_insets,changed");

Eina_Bool _efl_canvas_text_is_empty_get(Eo *obj, Efl_Canvas_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_text_is_empty_get, Eina_Bool, 0);

Eina_Bool _efl_canvas_text_visible_range_get(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *start, Efl_Text_Cursor_Cursor *end);

EOAPI EFL_FUNC_BODYV(efl_canvas_text_visible_range_get, Eina_Bool, 0, EFL_FUNC_CALL(start, end), Efl_Text_Cursor_Cursor *start, Efl_Text_Cursor_Cursor *end);

void _efl_canvas_text_style_insets_get(Eo *obj, Efl_Canvas_Text_Data *pd, int *l, int *r, int *t, int *b);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_canvas_text_style_insets_get, EFL_FUNC_CALL(l, r, t, b), int *l, int *r, int *t, int *b);

void _efl_canvas_text_bidi_delimiters_set(Eo *obj, Efl_Canvas_Text_Data *pd, const char *delim);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_text_bidi_delimiters_set, EFL_FUNC_CALL(delim), const char *delim);

const char *_efl_canvas_text_bidi_delimiters_get(Eo *obj, Efl_Canvas_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_text_bidi_delimiters_get, const char *, NULL);

void _efl_canvas_text_legacy_newline_set(Eo *obj, Efl_Canvas_Text_Data *pd, Eina_Bool mode);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_text_legacy_newline_set, EFL_FUNC_CALL(mode), Eina_Bool mode);

Eina_Bool _efl_canvas_text_legacy_newline_get(Eo *obj, Efl_Canvas_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_text_legacy_newline_get, Eina_Bool, 0);

void _efl_canvas_text_style_set(Eo *obj, Efl_Canvas_Text_Data *pd, const char *key, const char *style);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_text_style_set, EFL_FUNC_CALL(key, style), const char *key, const char *style);

const char *_efl_canvas_text_style_get(Eo *obj, Efl_Canvas_Text_Data *pd, const char *key);

EOAPI EFL_FUNC_BODYV_CONST(efl_canvas_text_style_get, const char *, NULL, EFL_FUNC_CALL(key), const char *key);

void _efl_canvas_text_size_formatted_get(Eo *obj, Efl_Canvas_Text_Data *pd, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_canvas_text_size_formatted_get, EFL_FUNC_CALL(w, h), int *w, int *h);

void _efl_canvas_text_size_native_get(Eo *obj, Efl_Canvas_Text_Data *pd, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_canvas_text_size_native_get, EFL_FUNC_CALL(w, h), int *w, int *h);

char *_efl_canvas_text_range_text_get(Eo *obj, Efl_Canvas_Text_Data *pd, const Efl_Text_Cursor_Cursor *cur1, const Efl_Text_Cursor_Cursor *cur2);

EOAPI EFL_FUNC_BODYV(efl_canvas_text_range_text_get, char *, NULL, EFL_FUNC_CALL(cur1, cur2), const Efl_Text_Cursor_Cursor *cur1, const Efl_Text_Cursor_Cursor *cur2);

Eina_Iterator *_efl_canvas_text_range_geometry_get(Eo *obj, Efl_Canvas_Text_Data *pd, const Efl_Text_Cursor_Cursor *cur1, const Efl_Text_Cursor_Cursor *cur2);

EOAPI EFL_FUNC_BODYV(efl_canvas_text_range_geometry_get, Eina_Iterator *, NULL, EFL_FUNC_CALL(cur1, cur2), const Efl_Text_Cursor_Cursor *cur1, const Efl_Text_Cursor_Cursor *cur2);

Eina_Iterator *_efl_canvas_text_range_simple_geometry_get(Eo *obj, Efl_Canvas_Text_Data *pd, const Efl_Text_Cursor_Cursor *cur1, const Efl_Text_Cursor_Cursor *cur2);

EOAPI EFL_FUNC_BODYV(efl_canvas_text_range_simple_geometry_get, Eina_Iterator *, NULL, EFL_FUNC_CALL(cur1, cur2), const Efl_Text_Cursor_Cursor *cur1, const Efl_Text_Cursor_Cursor *cur2);

void _efl_canvas_text_range_delete(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur1, Efl_Text_Cursor_Cursor *cur2);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_text_range_delete, EFL_FUNC_CALL(cur1, cur2), Efl_Text_Cursor_Cursor *cur1, Efl_Text_Cursor_Cursor *cur2);

Eina_Bool _efl_canvas_text_obstacle_add(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Canvas_Object *eo_obs);

EOAPI EFL_FUNC_BODYV(efl_canvas_text_obstacle_add, Eina_Bool, 0, EFL_FUNC_CALL(eo_obs), Efl_Canvas_Object *eo_obs);

Eina_Bool _efl_canvas_text_obstacle_del(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Canvas_Object *eo_obs);

EOAPI EFL_FUNC_BODYV(efl_canvas_text_obstacle_del, Eina_Bool, 0, EFL_FUNC_CALL(eo_obs), Efl_Canvas_Object *eo_obs);

void _efl_canvas_text_obstacles_update(Eo *obj, Efl_Canvas_Text_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_canvas_text_obstacles_update);

Efl_Object *_efl_canvas_text_efl_object_constructor(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_object_destructor(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_canvas_object_paragraph_direction_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Bidirectional_Type dir);


Efl_Text_Bidirectional_Type _efl_canvas_text_efl_canvas_object_paragraph_direction_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_text_set(Eo *obj, Efl_Canvas_Text_Data *pd, const char *text);


const char *_efl_canvas_text_efl_text_text_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_gfx_filter_filter_program_set(Eo *obj, Efl_Canvas_Text_Data *pd, const char *code, const char *name);


void _efl_canvas_text_efl_gfx_filter_filter_program_get(Eo *obj, Efl_Canvas_Text_Data *pd, const char **code, const char **name);


void _efl_canvas_text_efl_gfx_filter_filter_data_set(Eo *obj, Efl_Canvas_Text_Data *pd, const char *name, const char *value, Eina_Bool execute);


void _efl_canvas_text_efl_gfx_filter_filter_data_get(Eo *obj, Efl_Canvas_Text_Data *pd, const char *name, const char **value, Eina_Bool *execute);

static void __eolian_efl_canvas_text_efl_gfx_filter_filter_data_get(Eo *obj, Efl_Canvas_Text_Data *pd, const char *name, const char **value, Eina_Bool *execute)
{
   if (execute) *execute = EINA_FALSE;
   _efl_canvas_text_efl_gfx_filter_filter_data_get(obj, pd, name, value, execute);
}


void _efl_canvas_text_efl_gfx_filter_filter_source_set(Eo *obj, Efl_Canvas_Text_Data *pd, const char *name, Efl_Gfx *source);


Efl_Gfx *_efl_canvas_text_efl_gfx_filter_filter_source_get(Eo *obj, Efl_Canvas_Text_Data *pd, const char *name);


void _efl_canvas_text_efl_canvas_filter_internal_filter_dirty(Eo *obj, Efl_Canvas_Text_Data *pd);


Eina_Bool _efl_canvas_text_efl_canvas_filter_internal_filter_input_render(Eo *obj, Efl_Canvas_Text_Data *pd, void *filter, void *engine, void *output, void *drawctx, void *data, int l, int r, int t, int b, int x, int y, Eina_Bool do_async);


void _efl_canvas_text_efl_canvas_filter_internal_filter_state_prepare(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Canvas_Filter_State *state, void *data);


void _efl_canvas_text_efl_text_font_font_set(Eo *obj, Efl_Canvas_Text_Data *pd, const char *font, int size);


void _efl_canvas_text_efl_text_font_font_get(Eo *obj, Efl_Canvas_Text_Data *pd, const char **font, int *size);


void _efl_canvas_text_efl_text_font_font_source_set(Eo *obj, Efl_Canvas_Text_Data *pd, const char *font_source);


const char *_efl_canvas_text_efl_text_font_font_source_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_font_font_fallbacks_set(Eo *obj, Efl_Canvas_Text_Data *pd, const char *font_fallbacks);


const char *_efl_canvas_text_efl_text_font_font_fallbacks_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_font_font_lang_set(Eo *obj, Efl_Canvas_Text_Data *pd, const char *lang);


const char *_efl_canvas_text_efl_text_font_font_lang_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_font_font_weight_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Font_Weight font_weight);


Efl_Text_Font_Weight _efl_canvas_text_efl_text_font_font_weight_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_font_font_slant_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Font_Slant style);


Efl_Text_Font_Slant _efl_canvas_text_efl_text_font_font_slant_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_font_font_width_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Font_Width width);


Efl_Text_Font_Width _efl_canvas_text_efl_text_font_font_width_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_style_normal_color_set(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char r, unsigned char g, unsigned char b, unsigned char a);


void _efl_canvas_text_efl_text_style_normal_color_get(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);


void _efl_canvas_text_efl_text_style_backing_type_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Style_Backing_Type type);


Efl_Text_Style_Backing_Type _efl_canvas_text_efl_text_style_backing_type_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_style_backing_color_set(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char r, unsigned char g, unsigned char b, unsigned char a);


void _efl_canvas_text_efl_text_style_backing_color_get(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);


void _efl_canvas_text_efl_text_style_underline_type_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Style_Underline_Type type);


Efl_Text_Style_Underline_Type _efl_canvas_text_efl_text_style_underline_type_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_style_underline_color_set(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char r, unsigned char g, unsigned char b, unsigned char a);


void _efl_canvas_text_efl_text_style_underline_color_get(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);


void _efl_canvas_text_efl_text_style_underline_height_set(Eo *obj, Efl_Canvas_Text_Data *pd, double height);


double _efl_canvas_text_efl_text_style_underline_height_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_style_underline_dashed_color_set(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char r, unsigned char g, unsigned char b, unsigned char a);


void _efl_canvas_text_efl_text_style_underline_dashed_color_get(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);


void _efl_canvas_text_efl_text_style_underline_dashed_width_set(Eo *obj, Efl_Canvas_Text_Data *pd, int width);


int _efl_canvas_text_efl_text_style_underline_dashed_width_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_style_underline_dashed_gap_set(Eo *obj, Efl_Canvas_Text_Data *pd, int gap);


int _efl_canvas_text_efl_text_style_underline_dashed_gap_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_style_underline2_type_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Style_Underline_Type type);


Efl_Text_Style_Underline_Type _efl_canvas_text_efl_text_style_underline2_type_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_style_underline2_color_set(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char r, unsigned char g, unsigned char b, unsigned char a);


void _efl_canvas_text_efl_text_style_underline2_color_get(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);


void _efl_canvas_text_efl_text_style_strikethrough_type_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Style_Strikethrough_Type type);


Efl_Text_Style_Strikethrough_Type _efl_canvas_text_efl_text_style_strikethrough_type_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_style_strikethrough_color_set(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char r, unsigned char g, unsigned char b, unsigned char a);


void _efl_canvas_text_efl_text_style_strikethrough_color_get(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);


void _efl_canvas_text_efl_text_style_effect_type_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Style_Effect_Type type);


Efl_Text_Style_Effect_Type _efl_canvas_text_efl_text_style_effect_type_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_style_outline_color_set(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char r, unsigned char g, unsigned char b, unsigned char a);


void _efl_canvas_text_efl_text_style_outline_color_get(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);


void _efl_canvas_text_efl_text_style_shadow_direction_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Style_Shadow_Direction type);


Efl_Text_Style_Shadow_Direction _efl_canvas_text_efl_text_style_shadow_direction_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_style_shadow_color_set(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char r, unsigned char g, unsigned char b, unsigned char a);


void _efl_canvas_text_efl_text_style_shadow_color_get(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);


void _efl_canvas_text_efl_text_style_glow_color_set(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char r, unsigned char g, unsigned char b, unsigned char a);


void _efl_canvas_text_efl_text_style_glow_color_get(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);


void _efl_canvas_text_efl_text_style_glow2_color_set(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char r, unsigned char g, unsigned char b, unsigned char a);


void _efl_canvas_text_efl_text_style_glow2_color_get(Eo *obj, Efl_Canvas_Text_Data *pd, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);


void _efl_canvas_text_efl_text_style_gfx_filter_set(Eo *obj, Efl_Canvas_Text_Data *pd, const char *code);


const char *_efl_canvas_text_efl_text_style_gfx_filter_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_format_ellipsis_set(Eo *obj, Efl_Canvas_Text_Data *pd, double value);


double _efl_canvas_text_efl_text_format_ellipsis_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_format_wrap_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Format_Wrap wrap);


Efl_Text_Format_Wrap _efl_canvas_text_efl_text_format_wrap_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_format_multiline_set(Eo *obj, Efl_Canvas_Text_Data *pd, Eina_Bool enabled);


Eina_Bool _efl_canvas_text_efl_text_format_multiline_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_format_halign_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Format_Horizontal_Alignment_Type value);


Efl_Text_Format_Horizontal_Alignment_Type _efl_canvas_text_efl_text_format_halign_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_format_valign_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Format_Vertical_Alignment_Type value);


Efl_Text_Format_Vertical_Alignment_Type _efl_canvas_text_efl_text_format_valign_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_format_linegap_set(Eo *obj, Efl_Canvas_Text_Data *pd, double value);


double _efl_canvas_text_efl_text_format_linegap_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_format_linerelgap_set(Eo *obj, Efl_Canvas_Text_Data *pd, double value);


double _efl_canvas_text_efl_text_format_linerelgap_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_format_tabstops_set(Eo *obj, Efl_Canvas_Text_Data *pd, int value);


int _efl_canvas_text_efl_text_format_tabstops_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_format_password_set(Eo *obj, Efl_Canvas_Text_Data *pd, Eina_Bool enabled);


Eina_Bool _efl_canvas_text_efl_text_format_password_get(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_format_replacement_char_set(Eo *obj, Efl_Canvas_Text_Data *pd, const char *repch);


const char *_efl_canvas_text_efl_text_format_replacement_char_get(Eo *obj, Efl_Canvas_Text_Data *pd);


Efl_Text_Cursor_Cursor *_efl_canvas_text_efl_text_cursor_cursor_get(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor_Get_Type get_type);


void _efl_canvas_text_efl_text_cursor_cursor_position_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur, int position);


int _efl_canvas_text_efl_text_cursor_cursor_position_get(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


Eina_Unicode _efl_canvas_text_efl_text_cursor_cursor_content_get(Eo *obj, Efl_Canvas_Text_Data *pd, const Efl_Text_Cursor_Cursor *cur);


Eina_Bool _efl_canvas_text_efl_text_cursor_cursor_geometry_get(Eo *obj, Efl_Canvas_Text_Data *pd, const Efl_Text_Cursor_Cursor *cur, Efl_Text_Cursor_Cursor_Type ctype, int *cx, int *cy, int *cw, int *ch, int *cx2, int *cy2, int *cw2, int *ch2);


Efl_Text_Cursor_Cursor *_efl_canvas_text_efl_text_cursor_cursor_new(Eo *obj, Efl_Canvas_Text_Data *pd);


void _efl_canvas_text_efl_text_cursor_cursor_free(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


Eina_Bool _efl_canvas_text_efl_text_cursor_cursor_equal(Eo *obj, Efl_Canvas_Text_Data *pd, const Efl_Text_Cursor_Cursor *cur1, const Efl_Text_Cursor_Cursor *cur2);


int _efl_canvas_text_efl_text_cursor_cursor_compare(Eo *obj, Efl_Canvas_Text_Data *pd, const Efl_Text_Cursor_Cursor *cur1, const Efl_Text_Cursor_Cursor *cur2);


void _efl_canvas_text_efl_text_cursor_cursor_copy(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *dst, const Efl_Text_Cursor_Cursor *src);


void _efl_canvas_text_efl_text_cursor_cursor_char_next(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_text_efl_text_cursor_cursor_char_prev(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_text_efl_text_cursor_cursor_paragraph_char_first(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_text_efl_text_cursor_cursor_paragraph_char_last(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_text_efl_text_cursor_cursor_word_start(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_text_efl_text_cursor_cursor_word_end(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_text_efl_text_cursor_cursor_line_char_first(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_text_efl_text_cursor_cursor_line_char_last(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_text_efl_text_cursor_cursor_paragraph_first(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_text_efl_text_cursor_cursor_paragraph_last(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_text_efl_text_cursor_cursor_paragraph_next(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_text_efl_text_cursor_cursor_paragraph_prev(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_text_efl_text_cursor_cursor_line_jump_by(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur, int by);


void _efl_canvas_text_efl_text_cursor_cursor_coord_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur, int x, int y);


int _efl_canvas_text_efl_text_cursor_cursor_text_insert(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur, const char *text);


void _efl_canvas_text_efl_text_cursor_cursor_char_delete(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


Eina_Bool _efl_canvas_text_efl_text_annotate_annotation_set(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Annotate_Annotation *annotation, const char *format);


const char *_efl_canvas_text_efl_text_annotate_annotation_get(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Annotate_Annotation *annotation);


Eina_Iterator *_efl_canvas_text_efl_text_annotate_range_annotations_get(Eo *obj, Efl_Canvas_Text_Data *pd, const Efl_Text_Cursor_Cursor *start, const Efl_Text_Cursor_Cursor *end);


Efl_Text_Annotate_Annotation *_efl_canvas_text_efl_text_annotate_annotation_insert(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *start, Efl_Text_Cursor_Cursor *end, const char *format);


Eina_Bool _efl_canvas_text_efl_text_annotate_annotation_del(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Annotate_Annotation *annotation);


Eina_Bool _efl_canvas_text_efl_text_annotate_object_item_geometry_get(Eo *obj, Efl_Canvas_Text_Data *pd, const Efl_Text_Annotate_Annotation *an, int *x, int *y, int *w, int *h);


void _efl_canvas_text_efl_text_annotate_annotation_positions_get(Eo *obj, Efl_Canvas_Text_Data *pd, const Efl_Text_Annotate_Annotation *annotation, Efl_Text_Cursor_Cursor *start, Efl_Text_Cursor_Cursor *end);


Efl_Text_Annotate_Annotation *_efl_canvas_text_efl_text_annotate_cursor_object_item_annotation_get(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur);


Efl_Text_Annotate_Annotation *_efl_canvas_text_efl_text_annotate_cursor_object_item_insert(Eo *obj, Efl_Canvas_Text_Data *pd, Efl_Text_Cursor_Cursor *cur, const char *format);


static Eina_Bool
_efl_canvas_text_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_TEXT_EXTRA_OPS
#define EFL_CANVAS_TEXT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_canvas_text_is_empty_get, _efl_canvas_text_is_empty_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_visible_range_get, _efl_canvas_text_visible_range_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_style_insets_get, _efl_canvas_text_style_insets_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_bidi_delimiters_set, _efl_canvas_text_bidi_delimiters_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_bidi_delimiters_get, _efl_canvas_text_bidi_delimiters_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_legacy_newline_set, _efl_canvas_text_legacy_newline_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_legacy_newline_get, _efl_canvas_text_legacy_newline_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_style_set, _efl_canvas_text_style_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_style_get, _efl_canvas_text_style_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_size_formatted_get, _efl_canvas_text_size_formatted_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_size_native_get, _efl_canvas_text_size_native_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_range_text_get, _efl_canvas_text_range_text_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_range_geometry_get, _efl_canvas_text_range_geometry_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_range_simple_geometry_get, _efl_canvas_text_range_simple_geometry_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_range_delete, _efl_canvas_text_range_delete),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_obstacle_add, _efl_canvas_text_obstacle_add),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_obstacle_del, _efl_canvas_text_obstacle_del),
      EFL_OBJECT_OP_FUNC(efl_canvas_text_obstacles_update, _efl_canvas_text_obstacles_update),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_canvas_text_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_canvas_text_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_paragraph_direction_set, _efl_canvas_text_efl_canvas_object_paragraph_direction_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_paragraph_direction_get, _efl_canvas_text_efl_canvas_object_paragraph_direction_get),
      EFL_OBJECT_OP_FUNC(efl_text_set, _efl_canvas_text_efl_text_text_set),
      EFL_OBJECT_OP_FUNC(efl_text_get, _efl_canvas_text_efl_text_text_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_program_set, _efl_canvas_text_efl_gfx_filter_filter_program_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_program_get, _efl_canvas_text_efl_gfx_filter_filter_program_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_data_set, _efl_canvas_text_efl_gfx_filter_filter_data_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_data_get, __eolian_efl_canvas_text_efl_gfx_filter_filter_data_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_source_set, _efl_canvas_text_efl_gfx_filter_filter_source_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_source_get, _efl_canvas_text_efl_gfx_filter_filter_source_get),
      EFL_OBJECT_OP_FUNC(evas_filter_dirty, _efl_canvas_text_efl_canvas_filter_internal_filter_dirty),
      EFL_OBJECT_OP_FUNC(evas_filter_input_render, _efl_canvas_text_efl_canvas_filter_internal_filter_input_render),
      EFL_OBJECT_OP_FUNC(evas_filter_state_prepare, _efl_canvas_text_efl_canvas_filter_internal_filter_state_prepare),
      EFL_OBJECT_OP_FUNC(efl_text_font_set, _efl_canvas_text_efl_text_font_font_set),
      EFL_OBJECT_OP_FUNC(efl_text_font_get, _efl_canvas_text_efl_text_font_font_get),
      EFL_OBJECT_OP_FUNC(efl_text_font_source_set, _efl_canvas_text_efl_text_font_font_source_set),
      EFL_OBJECT_OP_FUNC(efl_text_font_source_get, _efl_canvas_text_efl_text_font_font_source_get),
      EFL_OBJECT_OP_FUNC(efl_text_font_fallbacks_set, _efl_canvas_text_efl_text_font_font_fallbacks_set),
      EFL_OBJECT_OP_FUNC(efl_text_font_fallbacks_get, _efl_canvas_text_efl_text_font_font_fallbacks_get),
      EFL_OBJECT_OP_FUNC(efl_text_font_lang_set, _efl_canvas_text_efl_text_font_font_lang_set),
      EFL_OBJECT_OP_FUNC(efl_text_font_lang_get, _efl_canvas_text_efl_text_font_font_lang_get),
      EFL_OBJECT_OP_FUNC(efl_text_font_weight_set, _efl_canvas_text_efl_text_font_font_weight_set),
      EFL_OBJECT_OP_FUNC(efl_text_font_weight_get, _efl_canvas_text_efl_text_font_font_weight_get),
      EFL_OBJECT_OP_FUNC(efl_text_font_slant_set, _efl_canvas_text_efl_text_font_font_slant_set),
      EFL_OBJECT_OP_FUNC(efl_text_font_slant_get, _efl_canvas_text_efl_text_font_font_slant_get),
      EFL_OBJECT_OP_FUNC(efl_text_font_width_set, _efl_canvas_text_efl_text_font_font_width_set),
      EFL_OBJECT_OP_FUNC(efl_text_font_width_get, _efl_canvas_text_efl_text_font_font_width_get),
      EFL_OBJECT_OP_FUNC(efl_text_normal_color_set, _efl_canvas_text_efl_text_style_normal_color_set),
      EFL_OBJECT_OP_FUNC(efl_text_normal_color_get, _efl_canvas_text_efl_text_style_normal_color_get),
      EFL_OBJECT_OP_FUNC(efl_text_backing_type_set, _efl_canvas_text_efl_text_style_backing_type_set),
      EFL_OBJECT_OP_FUNC(efl_text_backing_type_get, _efl_canvas_text_efl_text_style_backing_type_get),
      EFL_OBJECT_OP_FUNC(efl_text_backing_color_set, _efl_canvas_text_efl_text_style_backing_color_set),
      EFL_OBJECT_OP_FUNC(efl_text_backing_color_get, _efl_canvas_text_efl_text_style_backing_color_get),
      EFL_OBJECT_OP_FUNC(efl_text_underline_type_set, _efl_canvas_text_efl_text_style_underline_type_set),
      EFL_OBJECT_OP_FUNC(efl_text_underline_type_get, _efl_canvas_text_efl_text_style_underline_type_get),
      EFL_OBJECT_OP_FUNC(efl_text_underline_color_set, _efl_canvas_text_efl_text_style_underline_color_set),
      EFL_OBJECT_OP_FUNC(efl_text_underline_color_get, _efl_canvas_text_efl_text_style_underline_color_get),
      EFL_OBJECT_OP_FUNC(efl_text_underline_height_set, _efl_canvas_text_efl_text_style_underline_height_set),
      EFL_OBJECT_OP_FUNC(efl_text_underline_height_get, _efl_canvas_text_efl_text_style_underline_height_get),
      EFL_OBJECT_OP_FUNC(efl_text_underline_dashed_color_set, _efl_canvas_text_efl_text_style_underline_dashed_color_set),
      EFL_OBJECT_OP_FUNC(efl_text_underline_dashed_color_get, _efl_canvas_text_efl_text_style_underline_dashed_color_get),
      EFL_OBJECT_OP_FUNC(efl_text_underline_dashed_width_set, _efl_canvas_text_efl_text_style_underline_dashed_width_set),
      EFL_OBJECT_OP_FUNC(efl_text_underline_dashed_width_get, _efl_canvas_text_efl_text_style_underline_dashed_width_get),
      EFL_OBJECT_OP_FUNC(efl_text_underline_dashed_gap_set, _efl_canvas_text_efl_text_style_underline_dashed_gap_set),
      EFL_OBJECT_OP_FUNC(efl_text_underline_dashed_gap_get, _efl_canvas_text_efl_text_style_underline_dashed_gap_get),
      EFL_OBJECT_OP_FUNC(efl_text_underline2_type_set, _efl_canvas_text_efl_text_style_underline2_type_set),
      EFL_OBJECT_OP_FUNC(efl_text_underline2_type_get, _efl_canvas_text_efl_text_style_underline2_type_get),
      EFL_OBJECT_OP_FUNC(efl_text_underline2_color_set, _efl_canvas_text_efl_text_style_underline2_color_set),
      EFL_OBJECT_OP_FUNC(efl_text_underline2_color_get, _efl_canvas_text_efl_text_style_underline2_color_get),
      EFL_OBJECT_OP_FUNC(efl_text_strikethrough_type_set, _efl_canvas_text_efl_text_style_strikethrough_type_set),
      EFL_OBJECT_OP_FUNC(efl_text_strikethrough_type_get, _efl_canvas_text_efl_text_style_strikethrough_type_get),
      EFL_OBJECT_OP_FUNC(efl_text_strikethrough_color_set, _efl_canvas_text_efl_text_style_strikethrough_color_set),
      EFL_OBJECT_OP_FUNC(efl_text_strikethrough_color_get, _efl_canvas_text_efl_text_style_strikethrough_color_get),
      EFL_OBJECT_OP_FUNC(efl_text_effect_type_set, _efl_canvas_text_efl_text_style_effect_type_set),
      EFL_OBJECT_OP_FUNC(efl_text_effect_type_get, _efl_canvas_text_efl_text_style_effect_type_get),
      EFL_OBJECT_OP_FUNC(efl_text_outline_color_set, _efl_canvas_text_efl_text_style_outline_color_set),
      EFL_OBJECT_OP_FUNC(efl_text_outline_color_get, _efl_canvas_text_efl_text_style_outline_color_get),
      EFL_OBJECT_OP_FUNC(efl_text_shadow_direction_set, _efl_canvas_text_efl_text_style_shadow_direction_set),
      EFL_OBJECT_OP_FUNC(efl_text_shadow_direction_get, _efl_canvas_text_efl_text_style_shadow_direction_get),
      EFL_OBJECT_OP_FUNC(efl_text_shadow_color_set, _efl_canvas_text_efl_text_style_shadow_color_set),
      EFL_OBJECT_OP_FUNC(efl_text_shadow_color_get, _efl_canvas_text_efl_text_style_shadow_color_get),
      EFL_OBJECT_OP_FUNC(efl_text_glow_color_set, _efl_canvas_text_efl_text_style_glow_color_set),
      EFL_OBJECT_OP_FUNC(efl_text_glow_color_get, _efl_canvas_text_efl_text_style_glow_color_get),
      EFL_OBJECT_OP_FUNC(efl_text_glow2_color_set, _efl_canvas_text_efl_text_style_glow2_color_set),
      EFL_OBJECT_OP_FUNC(efl_text_glow2_color_get, _efl_canvas_text_efl_text_style_glow2_color_get),
      EFL_OBJECT_OP_FUNC(efl_text_gfx_filter_set, _efl_canvas_text_efl_text_style_gfx_filter_set),
      EFL_OBJECT_OP_FUNC(efl_text_gfx_filter_get, _efl_canvas_text_efl_text_style_gfx_filter_get),
      EFL_OBJECT_OP_FUNC(efl_text_ellipsis_set, _efl_canvas_text_efl_text_format_ellipsis_set),
      EFL_OBJECT_OP_FUNC(efl_text_ellipsis_get, _efl_canvas_text_efl_text_format_ellipsis_get),
      EFL_OBJECT_OP_FUNC(efl_text_wrap_set, _efl_canvas_text_efl_text_format_wrap_set),
      EFL_OBJECT_OP_FUNC(efl_text_wrap_get, _efl_canvas_text_efl_text_format_wrap_get),
      EFL_OBJECT_OP_FUNC(efl_text_multiline_set, _efl_canvas_text_efl_text_format_multiline_set),
      EFL_OBJECT_OP_FUNC(efl_text_multiline_get, _efl_canvas_text_efl_text_format_multiline_get),
      EFL_OBJECT_OP_FUNC(efl_text_halign_set, _efl_canvas_text_efl_text_format_halign_set),
      EFL_OBJECT_OP_FUNC(efl_text_halign_get, _efl_canvas_text_efl_text_format_halign_get),
      EFL_OBJECT_OP_FUNC(efl_text_valign_set, _efl_canvas_text_efl_text_format_valign_set),
      EFL_OBJECT_OP_FUNC(efl_text_valign_get, _efl_canvas_text_efl_text_format_valign_get),
      EFL_OBJECT_OP_FUNC(efl_text_linegap_set, _efl_canvas_text_efl_text_format_linegap_set),
      EFL_OBJECT_OP_FUNC(efl_text_linegap_get, _efl_canvas_text_efl_text_format_linegap_get),
      EFL_OBJECT_OP_FUNC(efl_text_linerelgap_set, _efl_canvas_text_efl_text_format_linerelgap_set),
      EFL_OBJECT_OP_FUNC(efl_text_linerelgap_get, _efl_canvas_text_efl_text_format_linerelgap_get),
      EFL_OBJECT_OP_FUNC(efl_text_tabstops_set, _efl_canvas_text_efl_text_format_tabstops_set),
      EFL_OBJECT_OP_FUNC(efl_text_tabstops_get, _efl_canvas_text_efl_text_format_tabstops_get),
      EFL_OBJECT_OP_FUNC(efl_text_password_set, _efl_canvas_text_efl_text_format_password_set),
      EFL_OBJECT_OP_FUNC(efl_text_password_get, _efl_canvas_text_efl_text_format_password_get),
      EFL_OBJECT_OP_FUNC(efl_text_replacement_char_set, _efl_canvas_text_efl_text_format_replacement_char_set),
      EFL_OBJECT_OP_FUNC(efl_text_replacement_char_get, _efl_canvas_text_efl_text_format_replacement_char_get),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_get, _efl_canvas_text_efl_text_cursor_cursor_get),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_position_set, _efl_canvas_text_efl_text_cursor_cursor_position_set),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_position_get, _efl_canvas_text_efl_text_cursor_cursor_position_get),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_content_get, _efl_canvas_text_efl_text_cursor_cursor_content_get),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_geometry_get, _efl_canvas_text_efl_text_cursor_cursor_geometry_get),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_new, _efl_canvas_text_efl_text_cursor_cursor_new),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_free, _efl_canvas_text_efl_text_cursor_cursor_free),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_equal, _efl_canvas_text_efl_text_cursor_cursor_equal),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_compare, _efl_canvas_text_efl_text_cursor_cursor_compare),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_copy, _efl_canvas_text_efl_text_cursor_cursor_copy),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_char_next, _efl_canvas_text_efl_text_cursor_cursor_char_next),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_char_prev, _efl_canvas_text_efl_text_cursor_cursor_char_prev),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_paragraph_char_first, _efl_canvas_text_efl_text_cursor_cursor_paragraph_char_first),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_paragraph_char_last, _efl_canvas_text_efl_text_cursor_cursor_paragraph_char_last),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_word_start, _efl_canvas_text_efl_text_cursor_cursor_word_start),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_word_end, _efl_canvas_text_efl_text_cursor_cursor_word_end),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_line_char_first, _efl_canvas_text_efl_text_cursor_cursor_line_char_first),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_line_char_last, _efl_canvas_text_efl_text_cursor_cursor_line_char_last),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_paragraph_first, _efl_canvas_text_efl_text_cursor_cursor_paragraph_first),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_paragraph_last, _efl_canvas_text_efl_text_cursor_cursor_paragraph_last),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_paragraph_next, _efl_canvas_text_efl_text_cursor_cursor_paragraph_next),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_paragraph_prev, _efl_canvas_text_efl_text_cursor_cursor_paragraph_prev),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_line_jump_by, _efl_canvas_text_efl_text_cursor_cursor_line_jump_by),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_coord_set, _efl_canvas_text_efl_text_cursor_cursor_coord_set),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_text_insert, _efl_canvas_text_efl_text_cursor_cursor_text_insert),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_char_delete, _efl_canvas_text_efl_text_cursor_cursor_char_delete),
      EFL_OBJECT_OP_FUNC(efl_text_annotation_set, _efl_canvas_text_efl_text_annotate_annotation_set),
      EFL_OBJECT_OP_FUNC(efl_text_annotation_get, _efl_canvas_text_efl_text_annotate_annotation_get),
      EFL_OBJECT_OP_FUNC(efl_text_range_annotations_get, _efl_canvas_text_efl_text_annotate_range_annotations_get),
      EFL_OBJECT_OP_FUNC(efl_text_annotation_insert, _efl_canvas_text_efl_text_annotate_annotation_insert),
      EFL_OBJECT_OP_FUNC(efl_text_annotation_del, _efl_canvas_text_efl_text_annotate_annotation_del),
      EFL_OBJECT_OP_FUNC(efl_text_object_item_geometry_get, _efl_canvas_text_efl_text_annotate_object_item_geometry_get),
      EFL_OBJECT_OP_FUNC(efl_text_annotation_positions_get, _efl_canvas_text_efl_text_annotate_annotation_positions_get),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_object_item_annotation_get, _efl_canvas_text_efl_text_annotate_cursor_object_item_annotation_get),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_object_item_insert, _efl_canvas_text_efl_text_annotate_cursor_object_item_insert),
      EFL_CANVAS_TEXT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_TEXT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_TEXT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_text_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Text",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Canvas_Text_Data),
   _efl_canvas_text_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_text_class_get, &_efl_canvas_text_class_desc, EFL_CANVAS_OBJECT_CLASS, EFL_TEXT_INTERFACE, EFL_TEXT_PROPERTIES_INTERFACE, EFL_CANVAS_FILTER_INTERNAL_MIXIN, EFL_TEXT_FONT_INTERFACE, EFL_TEXT_STYLE_INTERFACE, EFL_TEXT_FORMAT_INTERFACE, EFL_TEXT_CURSOR_INTERFACE, EFL_TEXT_ANNOTATE_INTERFACE, NULL);

EAPI Eina_Bool
evas_object_textblock_visible_range_get(Efl_Canvas_Text *obj, Efl_Text_Cursor_Cursor *start, Efl_Text_Cursor_Cursor *end)
{
   return efl_canvas_text_visible_range_get(obj, start, end);
}

EAPI void
evas_object_textblock_style_insets_get(const Efl_Canvas_Text *obj, int *l, int *r, int *t, int *b)
{
   efl_canvas_text_style_insets_get(obj, l, r, t, b);
}

EAPI void
evas_object_textblock_bidi_delimiters_set(Efl_Canvas_Text *obj, const char *delim)
{
   efl_canvas_text_bidi_delimiters_set(obj, delim);
}

EAPI const char *
evas_object_textblock_bidi_delimiters_get(const Efl_Canvas_Text *obj)
{
   return efl_canvas_text_bidi_delimiters_get(obj);
}

EAPI void
evas_object_textblock_legacy_newline_set(Efl_Canvas_Text *obj, Eina_Bool mode)
{
   efl_canvas_text_legacy_newline_set(obj, mode);
}

EAPI Eina_Bool
evas_object_textblock_legacy_newline_get(const Efl_Canvas_Text *obj)
{
   return efl_canvas_text_legacy_newline_get(obj);
}

EAPI void
evas_object_textblock_size_formatted_get(const Efl_Canvas_Text *obj, int *w, int *h)
{
   efl_canvas_text_size_formatted_get(obj, w, h);
}

EAPI void
evas_object_textblock_size_native_get(const Efl_Canvas_Text *obj, int *w, int *h)
{
   efl_canvas_text_size_native_get(obj, w, h);
}

EAPI Eina_Bool
evas_object_textblock_obstacle_add(Efl_Canvas_Text *obj, Efl_Canvas_Object *eo_obs)
{
   return efl_canvas_text_obstacle_add(obj, eo_obs);
}

EAPI Eina_Bool
evas_object_textblock_obstacle_del(Efl_Canvas_Text *obj, Efl_Canvas_Object *eo_obs)
{
   return efl_canvas_text_obstacle_del(obj, eo_obs);
}

EAPI void
evas_object_textblock_obstacles_update(Efl_Canvas_Text *obj)
{
   efl_canvas_text_obstacles_update(obj);
}
