
void _efl_ui_layout_internal_box_real_part_set(Eo *obj, Efl_Ui_Layout_Table_Data *pd, Efl_Object *layout, const char *part);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_layout_internal_box_real_part_set, EFL_FUNC_CALL(layout, part), Efl_Object *layout, const char *part);

void _efl_ui_layout_internal_box_efl_object_destructor(Eo *obj, Efl_Ui_Layout_Table_Data *pd);


Eina_Iterator *_efl_ui_layout_internal_box_efl_container_content_iterate(Eo *obj, Efl_Ui_Layout_Table_Data *pd);


int _efl_ui_layout_internal_box_efl_container_content_count(Eo *obj, Efl_Ui_Layout_Table_Data *pd);


Eina_Bool _efl_ui_layout_internal_box_efl_container_content_remove(Eo *obj, Efl_Ui_Layout_Table_Data *pd, Efl_Gfx *content);


Efl_Orient _efl_ui_layout_internal_box_efl_orientation_orientation_get(Eo *obj, Efl_Ui_Layout_Table_Data *pd);


Eina_Bool _efl_ui_layout_internal_box_efl_pack_pack_clear(Eo *obj, Efl_Ui_Layout_Table_Data *pd);


Eina_Bool _efl_ui_layout_internal_box_efl_pack_unpack_all(Eo *obj, Efl_Ui_Layout_Table_Data *pd);


Eina_Bool _efl_ui_layout_internal_box_efl_pack_unpack(Eo *obj, Efl_Ui_Layout_Table_Data *pd, Efl_Gfx *subobj);


Eina_Bool _efl_ui_layout_internal_box_efl_pack_pack(Eo *obj, Efl_Ui_Layout_Table_Data *pd, Efl_Gfx *subobj);


Eina_Bool _efl_ui_layout_internal_box_efl_pack_linear_pack_begin(Eo *obj, Efl_Ui_Layout_Table_Data *pd, Efl_Gfx *subobj);


Eina_Bool _efl_ui_layout_internal_box_efl_pack_linear_pack_end(Eo *obj, Efl_Ui_Layout_Table_Data *pd, Efl_Gfx *subobj);


Eina_Bool _efl_ui_layout_internal_box_efl_pack_linear_pack_before(Eo *obj, Efl_Ui_Layout_Table_Data *pd, Efl_Gfx *subobj, const Efl_Gfx *existing);


Eina_Bool _efl_ui_layout_internal_box_efl_pack_linear_pack_after(Eo *obj, Efl_Ui_Layout_Table_Data *pd, Efl_Gfx *subobj, const Efl_Gfx *existing);


Eina_Bool _efl_ui_layout_internal_box_efl_pack_linear_pack_at(Eo *obj, Efl_Ui_Layout_Table_Data *pd, Efl_Gfx *subobj, int index);


Efl_Gfx *_efl_ui_layout_internal_box_efl_pack_linear_pack_content_get(Eo *obj, Efl_Ui_Layout_Table_Data *pd, int index);


Efl_Gfx *_efl_ui_layout_internal_box_efl_pack_linear_pack_unpack_at(Eo *obj, Efl_Ui_Layout_Table_Data *pd, int index);


int _efl_ui_layout_internal_box_efl_pack_linear_pack_index_get(Eo *obj, Efl_Ui_Layout_Table_Data *pd, const Efl_Gfx *subobj);


static Eina_Bool
_efl_ui_layout_internal_box_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_LAYOUT_INTERNAL_BOX_EXTRA_OPS
#define EFL_UI_LAYOUT_INTERNAL_BOX_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_layout_internal_box_real_part_set, _efl_ui_layout_internal_box_real_part_set),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_ui_layout_internal_box_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_content_iterate, _efl_ui_layout_internal_box_efl_container_content_iterate),
      EFL_OBJECT_OP_FUNC(efl_content_count, _efl_ui_layout_internal_box_efl_container_content_count),
      EFL_OBJECT_OP_FUNC(efl_content_remove, _efl_ui_layout_internal_box_efl_container_content_remove),
      EFL_OBJECT_OP_FUNC(efl_orientation_get, _efl_ui_layout_internal_box_efl_orientation_orientation_get),
      EFL_OBJECT_OP_FUNC(efl_pack_clear, _efl_ui_layout_internal_box_efl_pack_pack_clear),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack_all, _efl_ui_layout_internal_box_efl_pack_unpack_all),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack, _efl_ui_layout_internal_box_efl_pack_unpack),
      EFL_OBJECT_OP_FUNC(efl_pack, _efl_ui_layout_internal_box_efl_pack_pack),
      EFL_OBJECT_OP_FUNC(efl_pack_begin, _efl_ui_layout_internal_box_efl_pack_linear_pack_begin),
      EFL_OBJECT_OP_FUNC(efl_pack_end, _efl_ui_layout_internal_box_efl_pack_linear_pack_end),
      EFL_OBJECT_OP_FUNC(efl_pack_before, _efl_ui_layout_internal_box_efl_pack_linear_pack_before),
      EFL_OBJECT_OP_FUNC(efl_pack_after, _efl_ui_layout_internal_box_efl_pack_linear_pack_after),
      EFL_OBJECT_OP_FUNC(efl_pack_at, _efl_ui_layout_internal_box_efl_pack_linear_pack_at),
      EFL_OBJECT_OP_FUNC(efl_pack_content_get, _efl_ui_layout_internal_box_efl_pack_linear_pack_content_get),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack_at, _efl_ui_layout_internal_box_efl_pack_linear_pack_unpack_at),
      EFL_OBJECT_OP_FUNC(efl_pack_index_get, _efl_ui_layout_internal_box_efl_pack_linear_pack_index_get),
      EFL_UI_LAYOUT_INTERNAL_BOX_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_LAYOUT_INTERNAL_BOX_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_LAYOUT_INTERNAL_BOX_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_layout_internal_box_class_desc = {
   EO_VERSION,
   "Efl.Ui.Layout_Internal.Box",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Layout_Table_Data),
   _efl_ui_layout_internal_box_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_layout_internal_box_class_get, &_efl_ui_layout_internal_box_class_desc, EFL_OBJECT_CLASS, EFL_PACK_LINEAR_INTERFACE, EFL_ORIENTATION_INTERFACE, NULL);
