EOAPI EFL_FUNC_BODYV_CONST(efl_text_cursor_get, Efl_Text_Cursor_Cursor *, NULL, EFL_FUNC_CALL(get_type), Efl_Text_Cursor_Cursor_Get_Type get_type);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_position_set, EFL_FUNC_CALL(cur, position), Efl_Text_Cursor_Cursor *cur, int position);
EOAPI EFL_FUNC_BODYV_CONST(efl_text_cursor_position_get, int, 0, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_FUNC_BODYV_CONST(efl_text_cursor_content_get, Eina_Unicode, 0, EFL_FUNC_CALL(cur), const Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_FUNC_BODYV_CONST(efl_text_cursor_geometry_get, Eina_Bool, 0, EFL_FUNC_CALL(cur, ctype, cx, cy, cw, ch, cx2, cy2, cw2, ch2), const Efl_Text_Cursor_Cursor *cur, Efl_Text_Cursor_Cursor_Type ctype, int *cx, int *cy, int *cw, int *ch, int *cx2, int *cy2, int *cw2, int *ch2);
EOAPI EFL_FUNC_BODY(efl_text_cursor_new, Efl_Text_Cursor_Cursor *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_free, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_FUNC_BODYV(efl_text_cursor_equal, Eina_Bool, 0, EFL_FUNC_CALL(cur1, cur2), const Efl_Text_Cursor_Cursor *cur1, const Efl_Text_Cursor_Cursor *cur2);
EOAPI EFL_FUNC_BODYV(efl_text_cursor_compare, int, 0, EFL_FUNC_CALL(cur1, cur2), const Efl_Text_Cursor_Cursor *cur1, const Efl_Text_Cursor_Cursor *cur2);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_copy, EFL_FUNC_CALL(dst, src), Efl_Text_Cursor_Cursor *dst, const Efl_Text_Cursor_Cursor *src);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_char_next, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_char_prev, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_paragraph_char_first, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_paragraph_char_last, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_word_start, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_word_end, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_line_char_first, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_line_char_last, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_paragraph_first, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_paragraph_last, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_paragraph_next, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_paragraph_prev, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_line_jump_by, EFL_FUNC_CALL(cur, by), Efl_Text_Cursor_Cursor *cur, int by);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_coord_set, EFL_FUNC_CALL(cur, x, y), Efl_Text_Cursor_Cursor *cur, int x, int y);
EOAPI EFL_FUNC_BODYV(efl_text_cursor_text_insert, int, 0, EFL_FUNC_CALL(cur, text), Efl_Text_Cursor_Cursor *cur, const char *text);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_cursor_char_delete, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);

static Eina_Bool
_efl_text_cursor_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_TEXT_CURSOR_EXTRA_OPS
#define EFL_TEXT_CURSOR_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_text_cursor_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_position_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_position_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_content_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_geometry_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_new, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_free, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_equal, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_compare, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_copy, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_char_next, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_char_prev, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_paragraph_char_first, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_paragraph_char_last, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_word_start, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_word_end, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_line_char_first, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_line_char_last, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_paragraph_first, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_paragraph_last, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_paragraph_next, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_paragraph_prev, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_line_jump_by, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_coord_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_text_insert, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_char_delete, NULL),
      EFL_TEXT_CURSOR_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_TEXT_CURSOR_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_TEXT_CURSOR_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_text_cursor_class_desc = {
   EO_VERSION,
   "Efl.Text.Cursor",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_text_cursor_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_text_cursor_interface_get, &_efl_text_cursor_class_desc, NULL, NULL);
