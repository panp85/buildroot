
void _evas_text_shadow_color_set(Eo *obj, Evas_Text_Data *pd, int r, int g, int b, int a);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_text_shadow_color_set, EFL_FUNC_CALL(r, g, b, a), int r, int g, int b, int a);

void _evas_text_shadow_color_get(Eo *obj, Evas_Text_Data *pd, int *r, int *g, int *b, int *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_obj_text_shadow_color_get, EFL_FUNC_CALL(r, g, b, a), int *r, int *g, int *b, int *a);

void _evas_text_ellipsis_set(Eo *obj, Evas_Text_Data *pd, double ellipsis);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_text_ellipsis_set, EFL_FUNC_CALL(ellipsis), double ellipsis);

double _evas_text_ellipsis_get(Eo *obj, Evas_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_text_ellipsis_get, double, -1.000000 /* +1.000000 */);

void _evas_text_bidi_delimiters_set(Eo *obj, Evas_Text_Data *pd, const char *delim);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_text_bidi_delimiters_set, EFL_FUNC_CALL(delim), const char *delim);

const char *_evas_text_bidi_delimiters_get(Eo *obj, Evas_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_text_bidi_delimiters_get, const char *, NULL);

void _evas_text_outline_color_set(Eo *obj, Evas_Text_Data *pd, int r, int g, int b, int a);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_text_outline_color_set, EFL_FUNC_CALL(r, g, b, a), int r, int g, int b, int a);

void _evas_text_outline_color_get(Eo *obj, Evas_Text_Data *pd, int *r, int *g, int *b, int *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_obj_text_outline_color_get, EFL_FUNC_CALL(r, g, b, a), int *r, int *g, int *b, int *a);

void _evas_text_glow2_color_set(Eo *obj, Evas_Text_Data *pd, int r, int g, int b, int a);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_text_glow2_color_set, EFL_FUNC_CALL(r, g, b, a), int r, int g, int b, int a);

void _evas_text_glow2_color_get(Eo *obj, Evas_Text_Data *pd, int *r, int *g, int *b, int *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_obj_text_glow2_color_get, EFL_FUNC_CALL(r, g, b, a), int *r, int *g, int *b, int *a);

void _evas_text_style_set(Eo *obj, Evas_Text_Data *pd, Evas_Text_Style_Type style);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_text_style_set, EFL_FUNC_CALL(style), Evas_Text_Style_Type style);

Evas_Text_Style_Type _evas_text_style_get(Eo *obj, Evas_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_text_style_get, Evas_Text_Style_Type, 0);

void _evas_text_glow_color_set(Eo *obj, Evas_Text_Data *pd, int r, int g, int b, int a);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_text_glow_color_set, EFL_FUNC_CALL(r, g, b, a), int r, int g, int b, int a);

void _evas_text_glow_color_get(Eo *obj, Evas_Text_Data *pd, int *r, int *g, int *b, int *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_obj_text_glow_color_get, EFL_FUNC_CALL(r, g, b, a), int *r, int *g, int *b, int *a);

int _evas_text_max_descent_get(Eo *obj, Evas_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_text_max_descent_get, int, 0);

void _evas_text_style_pad_get(Eo *obj, Evas_Text_Data *pd, int *l, int *r, int *t, int *b);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_obj_text_style_pad_get, EFL_FUNC_CALL(l, r, t, b), int *l, int *r, int *t, int *b);

Efl_Text_Bidirectional_Type _evas_text_direction_get(Eo *obj, Evas_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_text_direction_get, Efl_Text_Bidirectional_Type, 0);

int _evas_text_ascent_get(Eo *obj, Evas_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_text_ascent_get, int, 0);

int _evas_text_horiz_advance_get(Eo *obj, Evas_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_text_horiz_advance_get, int, 0);

int _evas_text_inset_get(Eo *obj, Evas_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_text_inset_get, int, 0);

int _evas_text_max_ascent_get(Eo *obj, Evas_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_text_max_ascent_get, int, 0);

int _evas_text_vert_advance_get(Eo *obj, Evas_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_text_vert_advance_get, int, 0);

int _evas_text_descent_get(Eo *obj, Evas_Text_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_text_descent_get, int, 0);

int _evas_text_last_up_to_pos(const Eo *obj, Evas_Text_Data *pd, int x, int y);

EOAPI EFL_FUNC_BODYV_CONST(evas_obj_text_last_up_to_pos, int, -1 /* +1 */, EFL_FUNC_CALL(x, y), int x, int y);

int _evas_text_char_coords_get(const Eo *obj, Evas_Text_Data *pd, int x, int y, int *cx, int *cy, int *cw, int *ch);

EOAPI EFL_FUNC_BODYV_CONST(evas_obj_text_char_coords_get, int, 0, EFL_FUNC_CALL(x, y, cx, cy, cw, ch), int x, int y, int *cx, int *cy, int *cw, int *ch);

Eina_Bool _evas_text_char_pos_get(const Eo *obj, Evas_Text_Data *pd, int pos, int *cx, int *cy, int *cw, int *ch);

EOAPI EFL_FUNC_BODYV_CONST(evas_obj_text_char_pos_get, Eina_Bool, 0, EFL_FUNC_CALL(pos, cx, cy, cw, ch), int pos, int *cx, int *cy, int *cw, int *ch);

Efl_Object *_evas_text_efl_object_constructor(Eo *obj, Evas_Text_Data *pd);


void _evas_text_efl_object_destructor(Eo *obj, Evas_Text_Data *pd);


void _evas_text_efl_gfx_size_set(Eo *obj, Evas_Text_Data *pd, int w, int h);


void _evas_text_efl_text_text_set(Eo *obj, Evas_Text_Data *pd, const char *text);


const char *_evas_text_efl_text_text_get(Eo *obj, Evas_Text_Data *pd);


void _evas_text_efl_text_properties_font_set(Eo *obj, Evas_Text_Data *pd, const char *font, Efl_Font_Size size);


void _evas_text_efl_text_properties_font_get(Eo *obj, Evas_Text_Data *pd, const char **font, Efl_Font_Size *size);


void _evas_text_efl_text_properties_font_source_set(Eo *obj, Evas_Text_Data *pd, const char *font_source);


const char *_evas_text_efl_text_properties_font_source_get(Eo *obj, Evas_Text_Data *pd);


void _evas_text_efl_gfx_filter_filter_program_set(Eo *obj, Evas_Text_Data *pd, const char *code, const char *name);


void _evas_text_efl_canvas_filter_internal_filter_dirty(Eo *obj, Evas_Text_Data *pd);


Eina_Bool _evas_text_efl_canvas_filter_internal_filter_input_alpha(Eo *obj, Evas_Text_Data *pd);


Eina_Bool _evas_text_efl_canvas_filter_internal_filter_input_render(Eo *obj, Evas_Text_Data *pd, void *filter, void *engine, void *output, void *drawctx, void *data, int l, int r, int t, int b, int x, int y, Eina_Bool do_async);


void _evas_text_efl_canvas_filter_internal_filter_state_prepare(Eo *obj, Evas_Text_Data *pd, Efl_Canvas_Filter_State *state, void *data);


void _evas_text_efl_canvas_object_paragraph_direction_set(Eo *obj, Evas_Text_Data *pd, Efl_Text_Bidirectional_Type dir);


Efl_Text_Bidirectional_Type _evas_text_efl_canvas_object_paragraph_direction_get(Eo *obj, Evas_Text_Data *pd);


static Eina_Bool
_evas_text_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_TEXT_EXTRA_OPS
#define EVAS_TEXT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_obj_text_shadow_color_set, _evas_text_shadow_color_set),
      EFL_OBJECT_OP_FUNC(evas_obj_text_shadow_color_get, _evas_text_shadow_color_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_ellipsis_set, _evas_text_ellipsis_set),
      EFL_OBJECT_OP_FUNC(evas_obj_text_ellipsis_get, _evas_text_ellipsis_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_bidi_delimiters_set, _evas_text_bidi_delimiters_set),
      EFL_OBJECT_OP_FUNC(evas_obj_text_bidi_delimiters_get, _evas_text_bidi_delimiters_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_outline_color_set, _evas_text_outline_color_set),
      EFL_OBJECT_OP_FUNC(evas_obj_text_outline_color_get, _evas_text_outline_color_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_glow2_color_set, _evas_text_glow2_color_set),
      EFL_OBJECT_OP_FUNC(evas_obj_text_glow2_color_get, _evas_text_glow2_color_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_style_set, _evas_text_style_set),
      EFL_OBJECT_OP_FUNC(evas_obj_text_style_get, _evas_text_style_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_glow_color_set, _evas_text_glow_color_set),
      EFL_OBJECT_OP_FUNC(evas_obj_text_glow_color_get, _evas_text_glow_color_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_max_descent_get, _evas_text_max_descent_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_style_pad_get, _evas_text_style_pad_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_direction_get, _evas_text_direction_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_ascent_get, _evas_text_ascent_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_horiz_advance_get, _evas_text_horiz_advance_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_inset_get, _evas_text_inset_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_max_ascent_get, _evas_text_max_ascent_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_vert_advance_get, _evas_text_vert_advance_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_descent_get, _evas_text_descent_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_last_up_to_pos, _evas_text_last_up_to_pos),
      EFL_OBJECT_OP_FUNC(evas_obj_text_char_coords_get, _evas_text_char_coords_get),
      EFL_OBJECT_OP_FUNC(evas_obj_text_char_pos_get, _evas_text_char_pos_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _evas_text_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _evas_text_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _evas_text_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_text_set, _evas_text_efl_text_text_set),
      EFL_OBJECT_OP_FUNC(efl_text_get, _evas_text_efl_text_text_get),
      EFL_OBJECT_OP_FUNC(efl_text_properties_font_set, _evas_text_efl_text_properties_font_set),
      EFL_OBJECT_OP_FUNC(efl_text_properties_font_get, _evas_text_efl_text_properties_font_get),
      EFL_OBJECT_OP_FUNC(efl_text_properties_font_source_set, _evas_text_efl_text_properties_font_source_set),
      EFL_OBJECT_OP_FUNC(efl_text_properties_font_source_get, _evas_text_efl_text_properties_font_source_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_program_set, _evas_text_efl_gfx_filter_filter_program_set),
      EFL_OBJECT_OP_FUNC(evas_filter_dirty, _evas_text_efl_canvas_filter_internal_filter_dirty),
      EFL_OBJECT_OP_FUNC(evas_filter_input_alpha, _evas_text_efl_canvas_filter_internal_filter_input_alpha),
      EFL_OBJECT_OP_FUNC(evas_filter_input_render, _evas_text_efl_canvas_filter_internal_filter_input_render),
      EFL_OBJECT_OP_FUNC(evas_filter_state_prepare, _evas_text_efl_canvas_filter_internal_filter_state_prepare),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_paragraph_direction_set, _evas_text_efl_canvas_object_paragraph_direction_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_paragraph_direction_get, _evas_text_efl_canvas_object_paragraph_direction_get),
      EVAS_TEXT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_TEXT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_TEXT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_text_class_desc = {
   EO_VERSION,
   "Evas.Text",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Text_Data),
   _evas_text_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_text_class_get, &_evas_text_class_desc, EFL_CANVAS_OBJECT_CLASS, EFL_TEXT_INTERFACE, EFL_TEXT_PROPERTIES_INTERFACE, EFL_CANVAS_FILTER_INTERNAL_MIXIN, NULL);

EAPI void
evas_object_text_shadow_color_set(Evas_Text *obj, int r, int g, int b, int a)
{
   evas_obj_text_shadow_color_set(obj, r, g, b, a);
}

EAPI void
evas_object_text_shadow_color_get(const Evas_Text *obj, int *r, int *g, int *b, int *a)
{
   evas_obj_text_shadow_color_get(obj, r, g, b, a);
}

EAPI void
evas_object_text_ellipsis_set(Evas_Text *obj, double ellipsis)
{
   evas_obj_text_ellipsis_set(obj, ellipsis);
}

EAPI double
evas_object_text_ellipsis_get(const Evas_Text *obj)
{
   return evas_obj_text_ellipsis_get(obj);
}

EAPI void
evas_object_text_bidi_delimiters_set(Evas_Text *obj, const char *delim)
{
   evas_obj_text_bidi_delimiters_set(obj, delim);
}

EAPI const char *
evas_object_text_bidi_delimiters_get(const Evas_Text *obj)
{
   return evas_obj_text_bidi_delimiters_get(obj);
}

EAPI void
evas_object_text_outline_color_set(Evas_Text *obj, int r, int g, int b, int a)
{
   evas_obj_text_outline_color_set(obj, r, g, b, a);
}

EAPI void
evas_object_text_outline_color_get(const Evas_Text *obj, int *r, int *g, int *b, int *a)
{
   evas_obj_text_outline_color_get(obj, r, g, b, a);
}

EAPI void
evas_object_text_glow2_color_set(Evas_Text *obj, int r, int g, int b, int a)
{
   evas_obj_text_glow2_color_set(obj, r, g, b, a);
}

EAPI void
evas_object_text_glow2_color_get(const Evas_Text *obj, int *r, int *g, int *b, int *a)
{
   evas_obj_text_glow2_color_get(obj, r, g, b, a);
}

EAPI void
evas_object_text_style_set(Evas_Text *obj, Evas_Text_Style_Type style)
{
   evas_obj_text_style_set(obj, style);
}

EAPI Evas_Text_Style_Type
evas_object_text_style_get(const Evas_Text *obj)
{
   return evas_obj_text_style_get(obj);
}

EAPI void
evas_object_text_glow_color_set(Evas_Text *obj, int r, int g, int b, int a)
{
   evas_obj_text_glow_color_set(obj, r, g, b, a);
}

EAPI void
evas_object_text_glow_color_get(const Evas_Text *obj, int *r, int *g, int *b, int *a)
{
   evas_obj_text_glow_color_get(obj, r, g, b, a);
}

EAPI int
evas_object_text_max_descent_get(const Evas_Text *obj)
{
   return evas_obj_text_max_descent_get(obj);
}

EAPI void
evas_object_text_style_pad_get(const Evas_Text *obj, int *l, int *r, int *t, int *b)
{
   evas_obj_text_style_pad_get(obj, l, r, t, b);
}

EAPI Efl_Text_Bidirectional_Type
evas_object_text_direction_get(const Evas_Text *obj)
{
   return evas_obj_text_direction_get(obj);
}

EAPI int
evas_object_text_ascent_get(const Evas_Text *obj)
{
   return evas_obj_text_ascent_get(obj);
}

EAPI int
evas_object_text_horiz_advance_get(const Evas_Text *obj)
{
   return evas_obj_text_horiz_advance_get(obj);
}

EAPI int
evas_object_text_inset_get(const Evas_Text *obj)
{
   return evas_obj_text_inset_get(obj);
}

EAPI int
evas_object_text_max_ascent_get(const Evas_Text *obj)
{
   return evas_obj_text_max_ascent_get(obj);
}

EAPI int
evas_object_text_vert_advance_get(const Evas_Text *obj)
{
   return evas_obj_text_vert_advance_get(obj);
}

EAPI int
evas_object_text_descent_get(const Evas_Text *obj)
{
   return evas_obj_text_descent_get(obj);
}

EAPI int
evas_object_text_last_up_to_pos(const Evas_Text *obj, int x, int y)
{
   return evas_obj_text_last_up_to_pos(obj, x, y);
}

EAPI int
evas_object_text_char_coords_get(const Evas_Text *obj, int x, int y, int *cx, int *cy, int *cw, int *ch)
{
   return evas_obj_text_char_coords_get(obj, x, y, cx, cy, cw, ch);
}

EAPI Eina_Bool
evas_object_text_char_pos_get(const Evas_Text *obj, int pos, int *cx, int *cy, int *cw, int *ch)
{
   return evas_obj_text_char_pos_get(obj, pos, cx, cy, cw, ch);
}
