EOAPI EFL_FUNC_BODYV(efl_pack_grid, Eina_Bool, 0, EFL_FUNC_CALL(subobj, col, row, colspan, rowspan), Efl_Gfx *subobj, int col, int row, int colspan, int rowspan);
EOAPI EFL_FUNC_BODYV(efl_pack_grid_contents_get, Eina_Iterator *, NULL, EFL_FUNC_CALL(col, row, below), int col, int row, Eina_Bool below);
EOAPI EFL_FUNC_BODYV(efl_pack_grid_content_get, Efl_Gfx *, NULL, EFL_FUNC_CALL(col, row), int col, int row);
EOAPI EFL_FUNC_BODYV_CONST(efl_pack_grid_position_get, Eina_Bool, 0, EFL_FUNC_CALL(subobj, col, row, colspan, rowspan), Efl_Gfx *subobj, int *col, int *row, int *colspan, int *rowspan);
EOAPI EFL_VOID_FUNC_BODYV(efl_pack_grid_size_set, EFL_FUNC_CALL(cols, rows), int cols, int rows);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_pack_grid_size_get, EFL_FUNC_CALL(cols, rows), int *cols, int *rows);
EOAPI EFL_VOID_FUNC_BODYV(efl_pack_grid_columns_set, EFL_FUNC_CALL(cols), int cols);
EOAPI EFL_FUNC_BODY_CONST(efl_pack_grid_columns_get, int, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_pack_grid_rows_set, EFL_FUNC_CALL(rows), int rows);
EOAPI EFL_FUNC_BODY_CONST(efl_pack_grid_rows_get, int, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_pack_grid_orientation_set, EFL_FUNC_CALL(primary, secondary), Efl_Orient primary, Efl_Orient secondary);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_pack_grid_orientation_get, EFL_FUNC_CALL(primary, secondary), Efl_Orient *primary, Efl_Orient *secondary);

static Eina_Bool
_efl_pack_grid_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_PACK_GRID_EXTRA_OPS
#define EFL_PACK_GRID_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_pack_grid, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_contents_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_content_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_position_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_size_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_size_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_columns_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_columns_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_rows_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_rows_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_orientation_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_orientation_get, NULL),
      EFL_PACK_GRID_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_PACK_GRID_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_PACK_GRID_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_pack_grid_class_desc = {
   EO_VERSION,
   "Efl.Pack.Grid",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_pack_grid_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_pack_grid_interface_get, &_efl_pack_grid_class_desc, EFL_PACK_LINEAR_INTERFACE, NULL);
