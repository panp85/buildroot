EOAPI EFL_FUNC_BODYV(efl_text_annotation_set, Eina_Bool, 0, EFL_FUNC_CALL(annotation, format), Efl_Text_Annotate_Annotation *annotation, const char *format);
EOAPI EFL_FUNC_BODYV_CONST(efl_text_annotation_get, const char *, NULL, EFL_FUNC_CALL(annotation), Efl_Text_Annotate_Annotation *annotation);
EOAPI EFL_FUNC_BODYV(efl_text_range_annotations_get, Eina_Iterator *, NULL, EFL_FUNC_CALL(start, end), const Efl_Text_Cursor_Cursor *start, const Efl_Text_Cursor_Cursor *end);
EOAPI EFL_FUNC_BODYV(efl_text_annotation_insert, Efl_Text_Annotate_Annotation *, NULL, EFL_FUNC_CALL(start, end, format), Efl_Text_Cursor_Cursor *start, Efl_Text_Cursor_Cursor *end, const char *format);
EOAPI EFL_FUNC_BODYV(efl_text_annotation_del, Eina_Bool, 0, EFL_FUNC_CALL(annotation), Efl_Text_Annotate_Annotation *annotation);
EOAPI EFL_FUNC_BODYV(efl_text_object_item_geometry_get, Eina_Bool, 0, EFL_FUNC_CALL(an, x, y, w, h), const Efl_Text_Annotate_Annotation *an, int *x, int *y, int *w, int *h);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_annotation_positions_get, EFL_FUNC_CALL(annotation, start, end), const Efl_Text_Annotate_Annotation *annotation, Efl_Text_Cursor_Cursor *start, Efl_Text_Cursor_Cursor *end);
EOAPI EFL_FUNC_BODYV_CONST(efl_text_cursor_object_item_annotation_get, Efl_Text_Annotate_Annotation *, NULL, EFL_FUNC_CALL(cur), Efl_Text_Cursor_Cursor *cur);
EOAPI EFL_FUNC_BODYV(efl_text_cursor_object_item_insert, Efl_Text_Annotate_Annotation *, NULL, EFL_FUNC_CALL(cur, format), Efl_Text_Cursor_Cursor *cur, const char *format);

static Eina_Bool
_efl_text_annotate_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_TEXT_ANNOTATE_EXTRA_OPS
#define EFL_TEXT_ANNOTATE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_text_annotation_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_annotation_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_range_annotations_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_annotation_insert, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_annotation_del, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_object_item_geometry_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_annotation_positions_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_object_item_annotation_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_cursor_object_item_insert, NULL),
      EFL_TEXT_ANNOTATE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_TEXT_ANNOTATE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_TEXT_ANNOTATE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_text_annotate_class_desc = {
   EO_VERSION,
   "Efl.Text.Annotate",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_text_annotate_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_text_annotate_interface_get, &_efl_text_annotate_class_desc, NULL, NULL);
