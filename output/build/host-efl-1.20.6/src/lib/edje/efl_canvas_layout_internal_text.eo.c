
void _efl_canvas_layout_internal_text_efl_text_text_set(Eo *obj, void *pd, const char *text);


const char *_efl_canvas_layout_internal_text_efl_text_text_get(Eo *obj, void *pd);


Efl_Text_Cursor_Cursor *_efl_canvas_layout_internal_text_efl_text_cursor_cursor_get(Eo *obj, void *pd, Efl_Text_Cursor_Cursor_Get_Type get_type);


void _efl_canvas_layout_internal_text_efl_text_cursor_cursor_paragraph_first(Eo *obj, void *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_layout_internal_text_efl_text_cursor_cursor_paragraph_last(Eo *obj, void *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_layout_internal_text_efl_text_cursor_cursor_position_set(Eo *obj, void *pd, Efl_Text_Cursor_Cursor *cur, int position);


int _efl_canvas_layout_internal_text_efl_text_cursor_cursor_position_get(Eo *obj, void *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_layout_internal_text_efl_text_cursor_cursor_coord_set(Eo *obj, void *pd, Efl_Text_Cursor_Cursor *cur, int x, int y);


void _efl_canvas_layout_internal_text_efl_text_cursor_cursor_line_char_first(Eo *obj, void *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_layout_internal_text_efl_text_cursor_cursor_line_char_last(Eo *obj, void *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_layout_internal_text_efl_text_cursor_cursor_char_next(Eo *obj, void *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_layout_internal_text_efl_text_cursor_cursor_char_prev(Eo *obj, void *pd, Efl_Text_Cursor_Cursor *cur);


void _efl_canvas_layout_internal_text_efl_text_cursor_cursor_line_jump_by(Eo *obj, void *pd, Efl_Text_Cursor_Cursor *cur, int by);


void _efl_canvas_layout_internal_text_efl_text_cursor_cursor_copy(Eo *obj, void *pd, Efl_Text_Cursor_Cursor *dst, const Efl_Text_Cursor_Cursor *src);


Eina_Unicode _efl_canvas_layout_internal_text_efl_text_cursor_cursor_content_get(Eo *obj, void *pd, const Efl_Text_Cursor_Cursor *cur);


Eina_Bool _efl_canvas_layout_internal_text_efl_text_cursor_cursor_geometry_get(Eo *obj, void *pd, const Efl_Text_Cursor_Cursor *cur, Efl_Text_Cursor_Cursor_Type ctype, int *cx, int *cy, int *cw, int *ch, int *cx2, int *cy2, int *cw2, int *ch2);


int _efl_canvas_layout_internal_text_efl_text_cursor_cursor_text_insert(Eo *obj, void *pd, Efl_Text_Cursor_Cursor *cur, const char *text);


static Eina_Bool
_efl_canvas_layout_internal_text_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_LAYOUT_INTERNAL_TEXT_EXTRA_OPS
#define EFL_CANVAS_LAYOUT_INTERNAL_TEXT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_text_set, _efl_canvas_layout_internal_text_efl_text_text_set),
      EFL_OBJECT_OP_FUNC(efl_text_get, _efl_canvas_layout_internal_text_efl_text_text_get),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_get, _efl_canvas_layout_internal_text_efl_text_cursor_cursor_get),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_paragraph_first, _efl_canvas_layout_internal_text_efl_text_cursor_cursor_paragraph_first),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_paragraph_last, _efl_canvas_layout_internal_text_efl_text_cursor_cursor_paragraph_last),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_position_set, _efl_canvas_layout_internal_text_efl_text_cursor_cursor_position_set),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_position_get, _efl_canvas_layout_internal_text_efl_text_cursor_cursor_position_get),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_coord_set, _efl_canvas_layout_internal_text_efl_text_cursor_cursor_coord_set),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_line_char_first, _efl_canvas_layout_internal_text_efl_text_cursor_cursor_line_char_first),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_line_char_last, _efl_canvas_layout_internal_text_efl_text_cursor_cursor_line_char_last),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_char_next, _efl_canvas_layout_internal_text_efl_text_cursor_cursor_char_next),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_char_prev, _efl_canvas_layout_internal_text_efl_text_cursor_cursor_char_prev),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_line_jump_by, _efl_canvas_layout_internal_text_efl_text_cursor_cursor_line_jump_by),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_copy, _efl_canvas_layout_internal_text_efl_text_cursor_cursor_copy),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_content_get, _efl_canvas_layout_internal_text_efl_text_cursor_cursor_content_get),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_geometry_get, _efl_canvas_layout_internal_text_efl_text_cursor_cursor_geometry_get),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_text_insert, _efl_canvas_layout_internal_text_efl_text_cursor_cursor_text_insert),
      EFL_CANVAS_LAYOUT_INTERNAL_TEXT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_LAYOUT_INTERNAL_TEXT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_LAYOUT_INTERNAL_TEXT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_layout_internal_text_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Layout_Internal.Text",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _efl_canvas_layout_internal_text_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_layout_internal_text_class_get, &_efl_canvas_layout_internal_text_class_desc, EFL_CANVAS_LAYOUT_INTERNAL_CLASS, EFL_TEXT_INTERFACE, EFL_TEXT_CURSOR_INTERFACE, NULL);
