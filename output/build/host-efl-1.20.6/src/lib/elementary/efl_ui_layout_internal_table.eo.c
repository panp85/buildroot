
void _efl_ui_layout_internal_table_real_part_set(Eo *obj, Efl_Ui_Layout_Table_Data *pd, Efl_Object *layout, const char *part);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_layout_internal_table_real_part_set, EFL_FUNC_CALL(layout, part), Efl_Object *layout, const char *part);

void _efl_ui_layout_internal_table_efl_object_destructor(Eo *obj, Efl_Ui_Layout_Table_Data *pd);


Eina_Iterator *_efl_ui_layout_internal_table_efl_container_content_iterate(Eo *obj, Efl_Ui_Layout_Table_Data *pd);


int _efl_ui_layout_internal_table_efl_container_content_count(Eo *obj, Efl_Ui_Layout_Table_Data *pd);


Eina_Bool _efl_ui_layout_internal_table_efl_container_content_remove(Eo *obj, Efl_Ui_Layout_Table_Data *pd, Efl_Gfx *content);


Eina_Bool _efl_ui_layout_internal_table_efl_pack_pack_clear(Eo *obj, Efl_Ui_Layout_Table_Data *pd);


Eina_Bool _efl_ui_layout_internal_table_efl_pack_unpack_all(Eo *obj, Efl_Ui_Layout_Table_Data *pd);


Eina_Bool _efl_ui_layout_internal_table_efl_pack_unpack(Eo *obj, Efl_Ui_Layout_Table_Data *pd, Efl_Gfx *subobj);


Eina_Bool _efl_ui_layout_internal_table_efl_pack_grid_pack_grid(Eo *obj, Efl_Ui_Layout_Table_Data *pd, Efl_Gfx *subobj, int col, int row, int colspan, int rowspan);


Efl_Gfx *_efl_ui_layout_internal_table_efl_pack_grid_grid_content_get(Eo *obj, Efl_Ui_Layout_Table_Data *pd, int col, int row);


Eina_Iterator *_efl_ui_layout_internal_table_efl_pack_grid_grid_contents_get(Eo *obj, Efl_Ui_Layout_Table_Data *pd, int col, int row, Eina_Bool below);


Eina_Bool _efl_ui_layout_internal_table_efl_pack_grid_grid_position_get(Eo *obj, Efl_Ui_Layout_Table_Data *pd, Efl_Gfx *subobj, int *col, int *row, int *colspan, int *rowspan);


void _efl_ui_layout_internal_table_efl_pack_grid_grid_size_get(Eo *obj, Efl_Ui_Layout_Table_Data *pd, int *cols, int *rows);


int _efl_ui_layout_internal_table_efl_pack_grid_grid_columns_get(Eo *obj, Efl_Ui_Layout_Table_Data *pd);


int _efl_ui_layout_internal_table_efl_pack_grid_grid_rows_get(Eo *obj, Efl_Ui_Layout_Table_Data *pd);


static Eina_Bool
_efl_ui_layout_internal_table_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_LAYOUT_INTERNAL_TABLE_EXTRA_OPS
#define EFL_UI_LAYOUT_INTERNAL_TABLE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_layout_internal_table_real_part_set, _efl_ui_layout_internal_table_real_part_set),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_ui_layout_internal_table_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_content_iterate, _efl_ui_layout_internal_table_efl_container_content_iterate),
      EFL_OBJECT_OP_FUNC(efl_content_count, _efl_ui_layout_internal_table_efl_container_content_count),
      EFL_OBJECT_OP_FUNC(efl_content_remove, _efl_ui_layout_internal_table_efl_container_content_remove),
      EFL_OBJECT_OP_FUNC(efl_pack_clear, _efl_ui_layout_internal_table_efl_pack_pack_clear),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack_all, _efl_ui_layout_internal_table_efl_pack_unpack_all),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack, _efl_ui_layout_internal_table_efl_pack_unpack),
      EFL_OBJECT_OP_FUNC(efl_pack_grid, _efl_ui_layout_internal_table_efl_pack_grid_pack_grid),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_content_get, _efl_ui_layout_internal_table_efl_pack_grid_grid_content_get),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_contents_get, _efl_ui_layout_internal_table_efl_pack_grid_grid_contents_get),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_position_get, _efl_ui_layout_internal_table_efl_pack_grid_grid_position_get),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_size_get, _efl_ui_layout_internal_table_efl_pack_grid_grid_size_get),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_columns_get, _efl_ui_layout_internal_table_efl_pack_grid_grid_columns_get),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_rows_get, _efl_ui_layout_internal_table_efl_pack_grid_grid_rows_get),
      EFL_UI_LAYOUT_INTERNAL_TABLE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_LAYOUT_INTERNAL_TABLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_LAYOUT_INTERNAL_TABLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_layout_internal_table_class_desc = {
   EO_VERSION,
   "Efl.Ui.Layout_Internal.Table",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Layout_Table_Data),
   _efl_ui_layout_internal_table_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_layout_internal_table_class_get, &_efl_ui_layout_internal_table_class_desc, EFL_OBJECT_CLASS, EFL_PACK_GRID_INTERFACE, NULL);
