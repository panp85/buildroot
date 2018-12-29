
void _evas_textgrid_supported_font_styles_set(Eo *obj, Evas_Textgrid_Data *pd, Evas_Textgrid_Font_Style styles);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_textgrid_supported_font_styles_set, EFL_FUNC_CALL(styles), Evas_Textgrid_Font_Style styles);

Evas_Textgrid_Font_Style _evas_textgrid_supported_font_styles_get(Eo *obj, Evas_Textgrid_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_textgrid_supported_font_styles_get, Evas_Textgrid_Font_Style, 0);

void _evas_textgrid_size_set(Eo *obj, Evas_Textgrid_Data *pd, int w, int h);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_textgrid_size_set, EFL_FUNC_CALL(w, h), int w, int h);

void _evas_textgrid_size_get(Eo *obj, Evas_Textgrid_Data *pd, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_obj_textgrid_size_get, EFL_FUNC_CALL(w, h), int *w, int *h);

void _evas_textgrid_cell_size_get(Eo *obj, Evas_Textgrid_Data *pd, int *width, int *height);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_obj_textgrid_cell_size_get, EFL_FUNC_CALL(width, height), int *width, int *height);

void _evas_textgrid_update_add(Eo *obj, Evas_Textgrid_Data *pd, int x, int y, int w, int h);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_textgrid_update_add, EFL_FUNC_CALL(x, y, w, h), int x, int y, int w, int h);

void _evas_textgrid_cellrow_set(Eo *obj, Evas_Textgrid_Data *pd, int y, const Evas_Textgrid_Cell *row);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_textgrid_cellrow_set, EFL_FUNC_CALL(y, row), int y, const Evas_Textgrid_Cell *row);

Evas_Textgrid_Cell *_evas_textgrid_cellrow_get(const Eo *obj, Evas_Textgrid_Data *pd, int y);

EOAPI EFL_FUNC_BODYV_CONST(evas_obj_textgrid_cellrow_get, Evas_Textgrid_Cell *, NULL, EFL_FUNC_CALL(y), int y);

void _evas_textgrid_palette_set(Eo *obj, Evas_Textgrid_Data *pd, Evas_Textgrid_Palette pal, int idx, int r, int g, int b, int a);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_textgrid_palette_set, EFL_FUNC_CALL(pal, idx, r, g, b, a), Evas_Textgrid_Palette pal, int idx, int r, int g, int b, int a);

void _evas_textgrid_palette_get(const Eo *obj, Evas_Textgrid_Data *pd, Evas_Textgrid_Palette pal, int idx, int *r, int *g, int *b, int *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_obj_textgrid_palette_get, EFL_FUNC_CALL(pal, idx, r, g, b, a), Evas_Textgrid_Palette pal, int idx, int *r, int *g, int *b, int *a);

Efl_Object *_evas_textgrid_efl_object_constructor(Eo *obj, Evas_Textgrid_Data *pd);


void _evas_textgrid_efl_object_destructor(Eo *obj, Evas_Textgrid_Data *pd);


void _evas_textgrid_efl_text_properties_font_set(Eo *obj, Evas_Textgrid_Data *pd, const char *font, Efl_Font_Size size);


void _evas_textgrid_efl_text_properties_font_get(Eo *obj, Evas_Textgrid_Data *pd, const char **font, Efl_Font_Size *size);


void _evas_textgrid_efl_text_properties_font_source_set(Eo *obj, Evas_Textgrid_Data *pd, const char *font_source);


const char *_evas_textgrid_efl_text_properties_font_source_get(Eo *obj, Evas_Textgrid_Data *pd);


static Eina_Bool
_evas_textgrid_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_TEXTGRID_EXTRA_OPS
#define EVAS_TEXTGRID_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_obj_textgrid_supported_font_styles_set, _evas_textgrid_supported_font_styles_set),
      EFL_OBJECT_OP_FUNC(evas_obj_textgrid_supported_font_styles_get, _evas_textgrid_supported_font_styles_get),
      EFL_OBJECT_OP_FUNC(evas_obj_textgrid_size_set, _evas_textgrid_size_set),
      EFL_OBJECT_OP_FUNC(evas_obj_textgrid_size_get, _evas_textgrid_size_get),
      EFL_OBJECT_OP_FUNC(evas_obj_textgrid_cell_size_get, _evas_textgrid_cell_size_get),
      EFL_OBJECT_OP_FUNC(evas_obj_textgrid_update_add, _evas_textgrid_update_add),
      EFL_OBJECT_OP_FUNC(evas_obj_textgrid_cellrow_set, _evas_textgrid_cellrow_set),
      EFL_OBJECT_OP_FUNC(evas_obj_textgrid_cellrow_get, _evas_textgrid_cellrow_get),
      EFL_OBJECT_OP_FUNC(evas_obj_textgrid_palette_set, _evas_textgrid_palette_set),
      EFL_OBJECT_OP_FUNC(evas_obj_textgrid_palette_get, _evas_textgrid_palette_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _evas_textgrid_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _evas_textgrid_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_text_properties_font_set, _evas_textgrid_efl_text_properties_font_set),
      EFL_OBJECT_OP_FUNC(efl_text_properties_font_get, _evas_textgrid_efl_text_properties_font_get),
      EFL_OBJECT_OP_FUNC(efl_text_properties_font_source_set, _evas_textgrid_efl_text_properties_font_source_set),
      EFL_OBJECT_OP_FUNC(efl_text_properties_font_source_get, _evas_textgrid_efl_text_properties_font_source_get),
      EVAS_TEXTGRID_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_TEXTGRID_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_TEXTGRID_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_textgrid_class_desc = {
   EO_VERSION,
   "Evas.Textgrid",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Textgrid_Data),
   _evas_textgrid_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_textgrid_class_get, &_evas_textgrid_class_desc, EFL_CANVAS_OBJECT_CLASS, EFL_TEXT_PROPERTIES_INTERFACE, NULL);

EAPI void
evas_object_textgrid_supported_font_styles_set(Evas_Textgrid *obj, Evas_Textgrid_Font_Style styles)
{
   evas_obj_textgrid_supported_font_styles_set(obj, styles);
}

EAPI Evas_Textgrid_Font_Style
evas_object_textgrid_supported_font_styles_get(const Evas_Textgrid *obj)
{
   return evas_obj_textgrid_supported_font_styles_get(obj);
}

EAPI void
evas_object_textgrid_size_set(Evas_Textgrid *obj, int w, int h)
{
   evas_obj_textgrid_size_set(obj, w, h);
}

EAPI void
evas_object_textgrid_size_get(const Evas_Textgrid *obj, int *w, int *h)
{
   evas_obj_textgrid_size_get(obj, w, h);
}

EAPI void
evas_object_textgrid_cell_size_get(const Evas_Textgrid *obj, int *width, int *height)
{
   evas_obj_textgrid_cell_size_get(obj, width, height);
}

EAPI void
evas_object_textgrid_update_add(Evas_Textgrid *obj, int x, int y, int w, int h)
{
   evas_obj_textgrid_update_add(obj, x, y, w, h);
}

EAPI void
evas_object_textgrid_cellrow_set(Evas_Textgrid *obj, int y, const Evas_Textgrid_Cell *row)
{
   evas_obj_textgrid_cellrow_set(obj, y, row);
}

EAPI Evas_Textgrid_Cell *
evas_object_textgrid_cellrow_get(const Evas_Textgrid *obj, int y)
{
   return evas_obj_textgrid_cellrow_get(obj, y);
}

EAPI void
evas_object_textgrid_palette_set(Evas_Textgrid *obj, Evas_Textgrid_Palette pal, int idx, int r, int g, int b, int a)
{
   evas_obj_textgrid_palette_set(obj, pal, idx, r, g, b, a);
}

EAPI void
evas_object_textgrid_palette_get(const Evas_Textgrid *obj, Evas_Textgrid_Palette pal, int idx, int *r, int *g, int *b, int *a)
{
   evas_obj_textgrid_palette_get(obj, pal, idx, r, g, b, a);
}
