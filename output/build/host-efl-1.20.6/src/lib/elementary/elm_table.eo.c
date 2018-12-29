
void _elm_table_homogeneous_set(Eo *obj, void *pd, Eina_Bool homogeneous);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_table_homogeneous_set, EFL_FUNC_CALL(homogeneous), Eina_Bool homogeneous);

Eina_Bool _elm_table_homogeneous_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_table_homogeneous_get, Eina_Bool, 0);

void _elm_table_padding_set(Eo *obj, void *pd, int horizontal, int vertical);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_table_padding_set, EFL_FUNC_CALL(horizontal, vertical), int horizontal, int vertical);

void _elm_table_padding_get(Eo *obj, void *pd, int *horizontal, int *vertical);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_table_padding_get, EFL_FUNC_CALL(horizontal, vertical), int *horizontal, int *vertical);

void _elm_table_align_set(Eo *obj, void *pd, double horizontal, double vertical);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_table_align_set, EFL_FUNC_CALL(horizontal, vertical), double horizontal, double vertical);

void _elm_table_align_get(Eo *obj, void *pd, double *horizontal, double *vertical);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_table_align_get, EFL_FUNC_CALL(horizontal, vertical), double *horizontal, double *vertical);

void _elm_table_clear(Eo *obj, void *pd, Eina_Bool clear);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_table_clear, EFL_FUNC_CALL(clear), Eina_Bool clear);

Efl_Canvas_Object *_elm_table_child_get(const Eo *obj, void *pd, int col, int row);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_table_child_get, Efl_Canvas_Object *, NULL, EFL_FUNC_CALL(col, row), int col, int row);

void _elm_table_pack_set(Eo *obj, void *pd, Efl_Canvas_Object *subobj, int column, int row, int colspan, int rowspan);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_table_pack_set, EFL_FUNC_CALL(subobj, column, row, colspan, rowspan), Efl_Canvas_Object *subobj, int column, int row, int colspan, int rowspan);

void _elm_table_pack_get(Eo *obj, void *pd, Efl_Canvas_Object *subobj, int *column, int *row, int *colspan, int *rowspan);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_table_pack_get, EFL_FUNC_CALL(subobj, column, row, colspan, rowspan), Efl_Canvas_Object *subobj, int *column, int *row, int *colspan, int *rowspan);

void _elm_table_unpack(Eo *obj, void *pd, Efl_Canvas_Object *subobj);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_table_unpack, EFL_FUNC_CALL(subobj), Efl_Canvas_Object *subobj);

void _elm_table_pack(Eo *obj, void *pd, Efl_Canvas_Object *subobj, int column, int row, int colspan, int rowspan);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_table_pack, EFL_FUNC_CALL(subobj, column, row, colspan, rowspan), Efl_Canvas_Object *subobj, int column, int row, int colspan, int rowspan);

Efl_Object *_elm_table_efl_object_constructor(Eo *obj, void *pd);


void _elm_table_efl_canvas_group_group_calculate(Eo *obj, void *pd);


Eina_Bool _elm_table_elm_widget_focus_direction(Eo *obj, void *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _elm_table_elm_widget_focus_next_manager_is(Eo *obj, void *pd);


Eina_Bool _elm_table_elm_widget_focus_next(Eo *obj, void *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_table_elm_widget_focus_direction_manager_is(Eo *obj, void *pd);


Elm_Theme_Apply _elm_table_elm_widget_theme_apply(Eo *obj, void *pd);


Eina_Bool _elm_table_elm_widget_sub_object_del(Eo *obj, void *pd, Efl_Canvas_Object *sobj);


Eina_Bool _elm_table_elm_widget_focus_register(Eo *obj, void *pd, Efl_Ui_Focus_Manager *manager, Efl_Ui_Focus_Object *logical, Eina_Bool *logical_flag);


static Eina_Bool
_elm_table_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_TABLE_EXTRA_OPS
#define ELM_TABLE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_table_homogeneous_set, _elm_table_homogeneous_set),
      EFL_OBJECT_OP_FUNC(elm_obj_table_homogeneous_get, _elm_table_homogeneous_get),
      EFL_OBJECT_OP_FUNC(elm_obj_table_padding_set, _elm_table_padding_set),
      EFL_OBJECT_OP_FUNC(elm_obj_table_padding_get, _elm_table_padding_get),
      EFL_OBJECT_OP_FUNC(elm_obj_table_align_set, _elm_table_align_set),
      EFL_OBJECT_OP_FUNC(elm_obj_table_align_get, _elm_table_align_get),
      EFL_OBJECT_OP_FUNC(elm_obj_table_clear, _elm_table_clear),
      EFL_OBJECT_OP_FUNC(elm_obj_table_child_get, _elm_table_child_get),
      EFL_OBJECT_OP_FUNC(elm_obj_table_pack_set, _elm_table_pack_set),
      EFL_OBJECT_OP_FUNC(elm_obj_table_pack_get, _elm_table_pack_get),
      EFL_OBJECT_OP_FUNC(elm_obj_table_unpack, _elm_table_unpack),
      EFL_OBJECT_OP_FUNC(elm_obj_table_pack, _elm_table_pack),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_table_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _elm_table_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _elm_table_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_table_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_table_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_table_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_table_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _elm_table_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_register, _elm_table_elm_widget_focus_register),
      ELM_TABLE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_TABLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_TABLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_table_class_desc = {
   EO_VERSION,
   "Elm.Table",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _elm_table_class_initializer,
   _elm_table_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_table_class_get, &_elm_table_class_desc, ELM_WIDGET_CLASS, NULL);

EAPI void
elm_table_homogeneous_set(Elm_Table *obj, Eina_Bool homogeneous)
{
   elm_obj_table_homogeneous_set(obj, homogeneous);
}

EAPI Eina_Bool
elm_table_homogeneous_get(const Elm_Table *obj)
{
   return elm_obj_table_homogeneous_get(obj);
}

EAPI void
elm_table_padding_set(Elm_Table *obj, int horizontal, int vertical)
{
   elm_obj_table_padding_set(obj, horizontal, vertical);
}

EAPI void
elm_table_padding_get(const Elm_Table *obj, int *horizontal, int *vertical)
{
   elm_obj_table_padding_get(obj, horizontal, vertical);
}

EAPI void
elm_table_align_set(Elm_Table *obj, double horizontal, double vertical)
{
   elm_obj_table_align_set(obj, horizontal, vertical);
}

EAPI void
elm_table_align_get(const Elm_Table *obj, double *horizontal, double *vertical)
{
   elm_obj_table_align_get(obj, horizontal, vertical);
}

EAPI void
elm_table_clear(Elm_Table *obj, Eina_Bool clear)
{
   elm_obj_table_clear(obj, clear);
}

EAPI Efl_Canvas_Object *
elm_table_child_get(const Elm_Table *obj, int col, int row)
{
   return elm_obj_table_child_get(obj, col, row);
}

EAPI void
elm_table_unpack(Elm_Table *obj, Efl_Canvas_Object *subobj)
{
   elm_obj_table_unpack(obj, subobj);
}

EAPI void
elm_table_pack(Elm_Table *obj, Efl_Canvas_Object *subobj, int column, int row, int colspan, int rowspan)
{
   elm_obj_table_pack(obj, subobj, column, row, colspan, rowspan);
}
