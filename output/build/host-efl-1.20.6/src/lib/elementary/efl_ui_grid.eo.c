
Efl_Object *_efl_ui_grid_efl_object_constructor(Eo *obj, Efl_Ui_Grid_Data *pd);


void _efl_ui_grid_efl_canvas_group_group_calculate(Eo *obj, Efl_Ui_Grid_Data *pd);


Eina_Bool _efl_ui_grid_elm_widget_focus_direction(Eo *obj, Efl_Ui_Grid_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _efl_ui_grid_elm_widget_focus_next_manager_is(Eo *obj, Efl_Ui_Grid_Data *pd);


Eina_Bool _efl_ui_grid_elm_widget_focus_direction_manager_is(Eo *obj, Efl_Ui_Grid_Data *pd);


Eina_Bool _efl_ui_grid_elm_widget_focus_next(Eo *obj, Efl_Ui_Grid_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Elm_Theme_Apply _efl_ui_grid_elm_widget_theme_apply(Eo *obj, Efl_Ui_Grid_Data *pd);


Eina_Iterator *_efl_ui_grid_efl_container_content_iterate(Eo *obj, Efl_Ui_Grid_Data *pd);


int _efl_ui_grid_efl_container_content_count(Eo *obj, Efl_Ui_Grid_Data *pd);


void _efl_ui_grid_efl_orientation_orientation_set(Eo *obj, Efl_Ui_Grid_Data *pd, Efl_Orient dir);


Efl_Orient _efl_ui_grid_efl_orientation_orientation_get(Eo *obj, Efl_Ui_Grid_Data *pd);


Eina_Bool _efl_ui_grid_efl_pack_pack_clear(Eo *obj, Efl_Ui_Grid_Data *pd);


Eina_Bool _efl_ui_grid_efl_pack_unpack_all(Eo *obj, Efl_Ui_Grid_Data *pd);


Eina_Bool _efl_ui_grid_efl_pack_unpack(Eo *obj, Efl_Ui_Grid_Data *pd, Efl_Gfx *subobj);


Eina_Bool _efl_ui_grid_efl_pack_pack(Eo *obj, Efl_Ui_Grid_Data *pd, Efl_Gfx *subobj);


void _efl_ui_grid_efl_pack_pack_padding_set(Eo *obj, Efl_Ui_Grid_Data *pd, double pad_horiz, double pad_vert, Eina_Bool scalable);


void _efl_ui_grid_efl_pack_pack_padding_get(Eo *obj, Efl_Ui_Grid_Data *pd, double *pad_horiz, double *pad_vert, Eina_Bool *scalable);


Eina_Bool _efl_ui_grid_efl_pack_grid_pack_grid(Eo *obj, Efl_Ui_Grid_Data *pd, Efl_Gfx *subobj, int col, int row, int colspan, int rowspan);


Efl_Gfx *_efl_ui_grid_efl_pack_grid_grid_content_get(Eo *obj, Efl_Ui_Grid_Data *pd, int col, int row);


Eina_Iterator *_efl_ui_grid_efl_pack_grid_grid_contents_get(Eo *obj, Efl_Ui_Grid_Data *pd, int col, int row, Eina_Bool below);


Eina_Bool _efl_ui_grid_efl_pack_grid_grid_position_get(Eo *obj, Efl_Ui_Grid_Data *pd, Efl_Gfx *subobj, int *col, int *row, int *colspan, int *rowspan);


void _efl_ui_grid_efl_pack_grid_grid_size_set(Eo *obj, Efl_Ui_Grid_Data *pd, int cols, int rows);


void _efl_ui_grid_efl_pack_grid_grid_size_get(Eo *obj, Efl_Ui_Grid_Data *pd, int *cols, int *rows);


void _efl_ui_grid_efl_pack_grid_grid_columns_set(Eo *obj, Efl_Ui_Grid_Data *pd, int cols);


int _efl_ui_grid_efl_pack_grid_grid_columns_get(Eo *obj, Efl_Ui_Grid_Data *pd);


void _efl_ui_grid_efl_pack_grid_grid_rows_set(Eo *obj, Efl_Ui_Grid_Data *pd, int rows);


int _efl_ui_grid_efl_pack_grid_grid_rows_get(Eo *obj, Efl_Ui_Grid_Data *pd);


void _efl_ui_grid_efl_pack_grid_grid_orientation_set(Eo *obj, Efl_Ui_Grid_Data *pd, Efl_Orient primary, Efl_Orient secondary);


void _efl_ui_grid_efl_pack_grid_grid_orientation_get(Eo *obj, Efl_Ui_Grid_Data *pd, Efl_Orient *primary, Efl_Orient *secondary);


Eina_Bool _efl_ui_grid_efl_pack_linear_pack_end(Eo *obj, Efl_Ui_Grid_Data *pd, Efl_Gfx *subobj);


void _efl_ui_grid_efl_pack_layout_layout_update(Eo *obj, Efl_Ui_Grid_Data *pd);


void _efl_ui_grid_efl_pack_layout_layout_request(Eo *obj, Efl_Ui_Grid_Data *pd);


static Eina_Bool
_efl_ui_grid_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_GRID_EXTRA_OPS
#define EFL_UI_GRID_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_grid_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _efl_ui_grid_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _efl_ui_grid_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _efl_ui_grid_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _efl_ui_grid_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _efl_ui_grid_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _efl_ui_grid_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(efl_content_iterate, _efl_ui_grid_efl_container_content_iterate),
      EFL_OBJECT_OP_FUNC(efl_content_count, _efl_ui_grid_efl_container_content_count),
      EFL_OBJECT_OP_FUNC(efl_orientation_set, _efl_ui_grid_efl_orientation_orientation_set),
      EFL_OBJECT_OP_FUNC(efl_orientation_get, _efl_ui_grid_efl_orientation_orientation_get),
      EFL_OBJECT_OP_FUNC(efl_pack_clear, _efl_ui_grid_efl_pack_pack_clear),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack_all, _efl_ui_grid_efl_pack_unpack_all),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack, _efl_ui_grid_efl_pack_unpack),
      EFL_OBJECT_OP_FUNC(efl_pack, _efl_ui_grid_efl_pack_pack),
      EFL_OBJECT_OP_FUNC(efl_pack_padding_set, _efl_ui_grid_efl_pack_pack_padding_set),
      EFL_OBJECT_OP_FUNC(efl_pack_padding_get, _efl_ui_grid_efl_pack_pack_padding_get),
      EFL_OBJECT_OP_FUNC(efl_pack_grid, _efl_ui_grid_efl_pack_grid_pack_grid),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_content_get, _efl_ui_grid_efl_pack_grid_grid_content_get),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_contents_get, _efl_ui_grid_efl_pack_grid_grid_contents_get),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_position_get, _efl_ui_grid_efl_pack_grid_grid_position_get),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_size_set, _efl_ui_grid_efl_pack_grid_grid_size_set),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_size_get, _efl_ui_grid_efl_pack_grid_grid_size_get),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_columns_set, _efl_ui_grid_efl_pack_grid_grid_columns_set),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_columns_get, _efl_ui_grid_efl_pack_grid_grid_columns_get),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_rows_set, _efl_ui_grid_efl_pack_grid_grid_rows_set),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_rows_get, _efl_ui_grid_efl_pack_grid_grid_rows_get),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_orientation_set, _efl_ui_grid_efl_pack_grid_grid_orientation_set),
      EFL_OBJECT_OP_FUNC(efl_pack_grid_orientation_get, _efl_ui_grid_efl_pack_grid_grid_orientation_get),
      EFL_OBJECT_OP_FUNC(efl_pack_end, _efl_ui_grid_efl_pack_linear_pack_end),
      EFL_OBJECT_OP_FUNC(efl_pack_layout_update, _efl_ui_grid_efl_pack_layout_layout_update),
      EFL_OBJECT_OP_FUNC(efl_pack_layout_request, _efl_ui_grid_efl_pack_layout_layout_request),
      EFL_UI_GRID_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_GRID_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_GRID_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_grid_class_desc = {
   EO_VERSION,
   "Efl.Ui.Grid",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Grid_Data),
   _efl_ui_grid_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_grid_class_get, &_efl_ui_grid_class_desc, ELM_WIDGET_CLASS, EFL_PACK_GRID_INTERFACE, EFL_PACK_LAYOUT_INTERFACE, EFL_ORIENTATION_INTERFACE, NULL);
