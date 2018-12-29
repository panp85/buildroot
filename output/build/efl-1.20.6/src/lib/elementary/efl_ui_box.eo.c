
Efl_Object *_efl_ui_box_efl_object_constructor(Eo *obj, Efl_Ui_Box_Data *pd);


void _efl_ui_box_efl_canvas_group_group_calculate(Eo *obj, Efl_Ui_Box_Data *pd);


Eina_Bool _efl_ui_box_elm_widget_focus_direction(Eo *obj, Efl_Ui_Box_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _efl_ui_box_elm_widget_focus_next_manager_is(Eo *obj, Efl_Ui_Box_Data *pd);


Eina_Bool _efl_ui_box_elm_widget_focus_direction_manager_is(Eo *obj, Efl_Ui_Box_Data *pd);


Eina_Bool _efl_ui_box_elm_widget_focus_next(Eo *obj, Efl_Ui_Box_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Iterator *_efl_ui_box_efl_container_content_iterate(Eo *obj, Efl_Ui_Box_Data *pd);


int _efl_ui_box_efl_container_content_count(Eo *obj, Efl_Ui_Box_Data *pd);


void _efl_ui_box_efl_orientation_orientation_set(Eo *obj, Efl_Ui_Box_Data *pd, Efl_Orient dir);


Efl_Orient _efl_ui_box_efl_orientation_orientation_get(Eo *obj, Efl_Ui_Box_Data *pd);


Eina_Bool _efl_ui_box_efl_pack_pack_clear(Eo *obj, Efl_Ui_Box_Data *pd);


Eina_Bool _efl_ui_box_efl_pack_unpack_all(Eo *obj, Efl_Ui_Box_Data *pd);


Eina_Bool _efl_ui_box_efl_pack_unpack(Eo *obj, Efl_Ui_Box_Data *pd, Efl_Gfx *subobj);


Eina_Bool _efl_ui_box_efl_pack_pack(Eo *obj, Efl_Ui_Box_Data *pd, Efl_Gfx *subobj);


void _efl_ui_box_efl_pack_pack_padding_set(Eo *obj, Efl_Ui_Box_Data *pd, double pad_horiz, double pad_vert, Eina_Bool scalable);


void _efl_ui_box_efl_pack_pack_padding_get(Eo *obj, Efl_Ui_Box_Data *pd, double *pad_horiz, double *pad_vert, Eina_Bool *scalable);


void _efl_ui_box_efl_pack_pack_align_set(Eo *obj, Efl_Ui_Box_Data *pd, double align_horiz, double align_vert);


void _efl_ui_box_efl_pack_pack_align_get(Eo *obj, Efl_Ui_Box_Data *pd, double *align_horiz, double *align_vert);


Eina_Bool _efl_ui_box_efl_pack_linear_pack_begin(Eo *obj, Efl_Ui_Box_Data *pd, Efl_Gfx *subobj);


Eina_Bool _efl_ui_box_efl_pack_linear_pack_end(Eo *obj, Efl_Ui_Box_Data *pd, Efl_Gfx *subobj);


Eina_Bool _efl_ui_box_efl_pack_linear_pack_before(Eo *obj, Efl_Ui_Box_Data *pd, Efl_Gfx *subobj, const Efl_Gfx *existing);


Eina_Bool _efl_ui_box_efl_pack_linear_pack_after(Eo *obj, Efl_Ui_Box_Data *pd, Efl_Gfx *subobj, const Efl_Gfx *existing);


Eina_Bool _efl_ui_box_efl_pack_linear_pack_at(Eo *obj, Efl_Ui_Box_Data *pd, Efl_Gfx *subobj, int index);


Efl_Gfx *_efl_ui_box_efl_pack_linear_pack_content_get(Eo *obj, Efl_Ui_Box_Data *pd, int index);


Efl_Gfx *_efl_ui_box_efl_pack_linear_pack_unpack_at(Eo *obj, Efl_Ui_Box_Data *pd, int index);


int _efl_ui_box_efl_pack_linear_pack_index_get(Eo *obj, Efl_Ui_Box_Data *pd, const Efl_Gfx *subobj);


void _efl_ui_box_efl_pack_layout_layout_update(Eo *obj, Efl_Ui_Box_Data *pd);


void _efl_ui_box_efl_pack_layout_layout_request(Eo *obj, Efl_Ui_Box_Data *pd);


static Eina_Bool
_efl_ui_box_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_BOX_EXTRA_OPS
#define EFL_UI_BOX_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_box_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _efl_ui_box_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _efl_ui_box_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _efl_ui_box_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _efl_ui_box_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _efl_ui_box_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(efl_content_iterate, _efl_ui_box_efl_container_content_iterate),
      EFL_OBJECT_OP_FUNC(efl_content_count, _efl_ui_box_efl_container_content_count),
      EFL_OBJECT_OP_FUNC(efl_orientation_set, _efl_ui_box_efl_orientation_orientation_set),
      EFL_OBJECT_OP_FUNC(efl_orientation_get, _efl_ui_box_efl_orientation_orientation_get),
      EFL_OBJECT_OP_FUNC(efl_pack_clear, _efl_ui_box_efl_pack_pack_clear),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack_all, _efl_ui_box_efl_pack_unpack_all),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack, _efl_ui_box_efl_pack_unpack),
      EFL_OBJECT_OP_FUNC(efl_pack, _efl_ui_box_efl_pack_pack),
      EFL_OBJECT_OP_FUNC(efl_pack_padding_set, _efl_ui_box_efl_pack_pack_padding_set),
      EFL_OBJECT_OP_FUNC(efl_pack_padding_get, _efl_ui_box_efl_pack_pack_padding_get),
      EFL_OBJECT_OP_FUNC(efl_pack_align_set, _efl_ui_box_efl_pack_pack_align_set),
      EFL_OBJECT_OP_FUNC(efl_pack_align_get, _efl_ui_box_efl_pack_pack_align_get),
      EFL_OBJECT_OP_FUNC(efl_pack_begin, _efl_ui_box_efl_pack_linear_pack_begin),
      EFL_OBJECT_OP_FUNC(efl_pack_end, _efl_ui_box_efl_pack_linear_pack_end),
      EFL_OBJECT_OP_FUNC(efl_pack_before, _efl_ui_box_efl_pack_linear_pack_before),
      EFL_OBJECT_OP_FUNC(efl_pack_after, _efl_ui_box_efl_pack_linear_pack_after),
      EFL_OBJECT_OP_FUNC(efl_pack_at, _efl_ui_box_efl_pack_linear_pack_at),
      EFL_OBJECT_OP_FUNC(efl_pack_content_get, _efl_ui_box_efl_pack_linear_pack_content_get),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack_at, _efl_ui_box_efl_pack_linear_pack_unpack_at),
      EFL_OBJECT_OP_FUNC(efl_pack_index_get, _efl_ui_box_efl_pack_linear_pack_index_get),
      EFL_OBJECT_OP_FUNC(efl_pack_layout_update, _efl_ui_box_efl_pack_layout_layout_update),
      EFL_OBJECT_OP_FUNC(efl_pack_layout_request, _efl_ui_box_efl_pack_layout_layout_request),
      EFL_UI_BOX_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_BOX_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_BOX_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_box_class_desc = {
   EO_VERSION,
   "Efl.Ui.Box",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Box_Data),
   _efl_ui_box_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_box_class_get, &_efl_ui_box_class_desc, ELM_WIDGET_CLASS, EFL_PACK_LINEAR_INTERFACE, EFL_PACK_LAYOUT_INTERFACE, EFL_ORIENTATION_INTERFACE, NULL);
