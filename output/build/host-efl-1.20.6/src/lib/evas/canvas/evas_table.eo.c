
void _evas_table_homogeneous_set(Eo *obj, Evas_Table_Data *pd, Evas_Object_Table_Homogeneous_Mode homogeneous);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_table_homogeneous_set, EFL_FUNC_CALL(homogeneous), Evas_Object_Table_Homogeneous_Mode homogeneous);

Evas_Object_Table_Homogeneous_Mode _evas_table_homogeneous_get(Eo *obj, Evas_Table_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_table_homogeneous_get, Evas_Object_Table_Homogeneous_Mode, 0);

void _evas_table_align_set(Eo *obj, Evas_Table_Data *pd, double horizontal, double vertical);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_table_align_set, EFL_FUNC_CALL(horizontal, vertical), double horizontal, double vertical);

void _evas_table_align_get(Eo *obj, Evas_Table_Data *pd, double *horizontal, double *vertical);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_obj_table_align_get, EFL_FUNC_CALL(horizontal, vertical), double *horizontal, double *vertical);

void _evas_table_padding_set(Eo *obj, Evas_Table_Data *pd, int horizontal, int vertical);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_table_padding_set, EFL_FUNC_CALL(horizontal, vertical), int horizontal, int vertical);

void _evas_table_padding_get(Eo *obj, Evas_Table_Data *pd, int *horizontal, int *vertical);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_obj_table_padding_get, EFL_FUNC_CALL(horizontal, vertical), int *horizontal, int *vertical);

void _evas_table_mirrored_set(Eo *obj, Evas_Table_Data *pd, Eina_Bool mirrored);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_table_mirrored_set, EFL_FUNC_CALL(mirrored), Eina_Bool mirrored);

Eina_Bool _evas_table_mirrored_get(Eo *obj, Evas_Table_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_table_mirrored_get, Eina_Bool, 0);

void _evas_table_col_row_size_get(Eo *obj, Evas_Table_Data *pd, int *cols, int *rows);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_obj_table_col_row_size_get, EFL_FUNC_CALL(cols, rows), int *cols, int *rows);

Eina_List *_evas_table_children_get(Eo *obj, Evas_Table_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_table_children_get, Eina_List *, NULL);

Efl_Canvas_Object *_evas_table_child_get(Eo *obj, Evas_Table_Data *pd, unsigned short col, unsigned short row);

EOAPI EFL_FUNC_BODYV_CONST(evas_obj_table_child_get, Efl_Canvas_Object *, NULL, EFL_FUNC_CALL(col, row), unsigned short col, unsigned short row);

void _evas_table_clear(Eo *obj, Evas_Table_Data *pd, Eina_Bool clear);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_table_clear, EFL_FUNC_CALL(clear), Eina_Bool clear);

Eina_Accessor *_evas_table_accessor_new(const Eo *obj, Evas_Table_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_table_accessor_new, Eina_Accessor *, NULL);

Eina_Iterator *_evas_table_iterator_new(const Eo *obj, Evas_Table_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_table_iterator_new, Eina_Iterator *, NULL);

Efl_Canvas_Object *_evas_table_add_to(Eo *obj, Evas_Table_Data *pd);

EOAPI EFL_FUNC_BODY(evas_obj_table_add_to, Efl_Canvas_Object *, NULL);

Eina_Bool _evas_table_pack_get(const Eo *obj, Evas_Table_Data *pd, Efl_Canvas_Object *child, unsigned short *col, unsigned short *row, unsigned short *colspan, unsigned short *rowspan);

EOAPI EFL_FUNC_BODYV_CONST(evas_obj_table_pack_get, Eina_Bool, 0, EFL_FUNC_CALL(child, col, row, colspan, rowspan), Efl_Canvas_Object *child, unsigned short *col, unsigned short *row, unsigned short *colspan, unsigned short *rowspan);

Eina_Bool _evas_table_pack(Eo *obj, Evas_Table_Data *pd, Efl_Canvas_Object *child, unsigned short col, unsigned short row, unsigned short colspan, unsigned short rowspan);

EOAPI EFL_FUNC_BODYV(evas_obj_table_pack, Eina_Bool, 0, EFL_FUNC_CALL(child, col, row, colspan, rowspan), Efl_Canvas_Object *child, unsigned short col, unsigned short row, unsigned short colspan, unsigned short rowspan);

Eina_Bool _evas_table_unpack(Eo *obj, Evas_Table_Data *pd, Efl_Canvas_Object *child);

EOAPI EFL_FUNC_BODYV(evas_obj_table_unpack, Eina_Bool, 0, EFL_FUNC_CALL(child), Efl_Canvas_Object *child);

int _evas_table_count(Eo *obj, Evas_Table_Data *pd);

EOAPI EFL_FUNC_BODY(evas_obj_table_count, int, 0);

Efl_Object *_evas_table_efl_object_constructor(Eo *obj, Evas_Table_Data *pd);


void _evas_table_efl_gfx_size_set(Eo *obj, Evas_Table_Data *pd, int w, int h);


void _evas_table_efl_gfx_position_set(Eo *obj, Evas_Table_Data *pd, int x, int y);


void _evas_table_efl_canvas_group_group_calculate(Eo *obj, Evas_Table_Data *pd);


static Eina_Bool
_evas_table_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_TABLE_EXTRA_OPS
#define EVAS_TABLE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_obj_table_homogeneous_set, _evas_table_homogeneous_set),
      EFL_OBJECT_OP_FUNC(evas_obj_table_homogeneous_get, _evas_table_homogeneous_get),
      EFL_OBJECT_OP_FUNC(evas_obj_table_align_set, _evas_table_align_set),
      EFL_OBJECT_OP_FUNC(evas_obj_table_align_get, _evas_table_align_get),
      EFL_OBJECT_OP_FUNC(evas_obj_table_padding_set, _evas_table_padding_set),
      EFL_OBJECT_OP_FUNC(evas_obj_table_padding_get, _evas_table_padding_get),
      EFL_OBJECT_OP_FUNC(evas_obj_table_mirrored_set, _evas_table_mirrored_set),
      EFL_OBJECT_OP_FUNC(evas_obj_table_mirrored_get, _evas_table_mirrored_get),
      EFL_OBJECT_OP_FUNC(evas_obj_table_col_row_size_get, _evas_table_col_row_size_get),
      EFL_OBJECT_OP_FUNC(evas_obj_table_children_get, _evas_table_children_get),
      EFL_OBJECT_OP_FUNC(evas_obj_table_child_get, _evas_table_child_get),
      EFL_OBJECT_OP_FUNC(evas_obj_table_clear, _evas_table_clear),
      EFL_OBJECT_OP_FUNC(evas_obj_table_accessor_new, _evas_table_accessor_new),
      EFL_OBJECT_OP_FUNC(evas_obj_table_iterator_new, _evas_table_iterator_new),
      EFL_OBJECT_OP_FUNC(evas_obj_table_add_to, _evas_table_add_to),
      EFL_OBJECT_OP_FUNC(evas_obj_table_pack_get, _evas_table_pack_get),
      EFL_OBJECT_OP_FUNC(evas_obj_table_pack, _evas_table_pack),
      EFL_OBJECT_OP_FUNC(evas_obj_table_unpack, _evas_table_unpack),
      EFL_OBJECT_OP_FUNC(evas_obj_table_count, _evas_table_count),
      EFL_OBJECT_OP_FUNC(efl_constructor, _evas_table_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _evas_table_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _evas_table_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _evas_table_efl_canvas_group_group_calculate),
      EVAS_TABLE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_TABLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_TABLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_table_class_desc = {
   EO_VERSION,
   "Evas.Table",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Table_Data),
   _evas_table_class_initializer,
   _evas_table_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(evas_table_class_get, &_evas_table_class_desc, EFL_CANVAS_GROUP_CLIPPED_CLASS, NULL);

EAPI void
evas_object_table_homogeneous_set(Evas_Table *obj, Evas_Object_Table_Homogeneous_Mode homogeneous)
{
   evas_obj_table_homogeneous_set(obj, homogeneous);
}

EAPI Evas_Object_Table_Homogeneous_Mode
evas_object_table_homogeneous_get(const Evas_Table *obj)
{
   return evas_obj_table_homogeneous_get(obj);
}

EAPI void
evas_object_table_align_set(Evas_Table *obj, double horizontal, double vertical)
{
   evas_obj_table_align_set(obj, horizontal, vertical);
}

EAPI void
evas_object_table_align_get(const Evas_Table *obj, double *horizontal, double *vertical)
{
   evas_obj_table_align_get(obj, horizontal, vertical);
}

EAPI void
evas_object_table_padding_set(Evas_Table *obj, int horizontal, int vertical)
{
   evas_obj_table_padding_set(obj, horizontal, vertical);
}

EAPI void
evas_object_table_padding_get(const Evas_Table *obj, int *horizontal, int *vertical)
{
   evas_obj_table_padding_get(obj, horizontal, vertical);
}

EAPI void
evas_object_table_mirrored_set(Evas_Table *obj, Eina_Bool mirrored)
{
   evas_obj_table_mirrored_set(obj, mirrored);
}

EAPI Eina_Bool
evas_object_table_mirrored_get(const Evas_Table *obj)
{
   return evas_obj_table_mirrored_get(obj);
}

EAPI void
evas_object_table_col_row_size_get(const Evas_Table *obj, int *cols, int *rows)
{
   evas_obj_table_col_row_size_get(obj, cols, rows);
}

EAPI Eina_List *
evas_object_table_children_get(const Evas_Table *obj)
{
   return evas_obj_table_children_get(obj);
}

EAPI Efl_Canvas_Object *
evas_object_table_child_get(const Evas_Table *obj, unsigned short col, unsigned short row)
{
   return evas_obj_table_child_get(obj, col, row);
}

EAPI void
evas_object_table_clear(Evas_Table *obj, Eina_Bool clear)
{
   evas_obj_table_clear(obj, clear);
}

EAPI Eina_Accessor *
evas_object_table_accessor_new(const Evas_Table *obj)
{
   return evas_obj_table_accessor_new(obj);
}

EAPI Eina_Iterator *
evas_object_table_iterator_new(const Evas_Table *obj)
{
   return evas_obj_table_iterator_new(obj);
}

EAPI Efl_Canvas_Object *
evas_object_table_add_to(Evas_Table *obj)
{
   return evas_obj_table_add_to(obj);
}

EAPI Eina_Bool
evas_object_table_pack_get(const Evas_Table *obj, Efl_Canvas_Object *child, unsigned short *col, unsigned short *row, unsigned short *colspan, unsigned short *rowspan)
{
   return evas_obj_table_pack_get(obj, child, col, row, colspan, rowspan);
}

EAPI Eina_Bool
evas_object_table_pack(Evas_Table *obj, Efl_Canvas_Object *child, unsigned short col, unsigned short row, unsigned short colspan, unsigned short rowspan)
{
   return evas_obj_table_pack(obj, child, col, row, colspan, rowspan);
}

EAPI Eina_Bool
evas_object_table_unpack(Evas_Table *obj, Efl_Canvas_Object *child)
{
   return evas_obj_table_unpack(obj, child);
}
