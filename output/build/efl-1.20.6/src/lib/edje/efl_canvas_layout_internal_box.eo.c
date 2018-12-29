
Eina_Iterator *_efl_canvas_layout_internal_box_efl_container_content_iterate(Eo *obj, void *pd);


int _efl_canvas_layout_internal_box_efl_container_content_count(Eo *obj, void *pd);


Eina_Bool _efl_canvas_layout_internal_box_efl_container_content_remove(Eo *obj, void *pd, Efl_Gfx *content);


Eina_Bool _efl_canvas_layout_internal_box_efl_pack_pack_clear(Eo *obj, void *pd);


Eina_Bool _efl_canvas_layout_internal_box_efl_pack_unpack_all(Eo *obj, void *pd);


Eina_Bool _efl_canvas_layout_internal_box_efl_pack_unpack(Eo *obj, void *pd, Efl_Gfx *subobj);


Eina_Bool _efl_canvas_layout_internal_box_efl_pack_pack(Eo *obj, void *pd, Efl_Gfx *subobj);


Eina_Bool _efl_canvas_layout_internal_box_efl_pack_linear_pack_begin(Eo *obj, void *pd, Efl_Gfx *subobj);


Eina_Bool _efl_canvas_layout_internal_box_efl_pack_linear_pack_end(Eo *obj, void *pd, Efl_Gfx *subobj);


Eina_Bool _efl_canvas_layout_internal_box_efl_pack_linear_pack_before(Eo *obj, void *pd, Efl_Gfx *subobj, const Efl_Gfx *existing);


Eina_Bool _efl_canvas_layout_internal_box_efl_pack_linear_pack_after(Eo *obj, void *pd, Efl_Gfx *subobj, const Efl_Gfx *existing);


Eina_Bool _efl_canvas_layout_internal_box_efl_pack_linear_pack_at(Eo *obj, void *pd, Efl_Gfx *subobj, int index);


Efl_Gfx *_efl_canvas_layout_internal_box_efl_pack_linear_pack_content_get(Eo *obj, void *pd, int index);


Efl_Gfx *_efl_canvas_layout_internal_box_efl_pack_linear_pack_unpack_at(Eo *obj, void *pd, int index);


int _efl_canvas_layout_internal_box_efl_pack_linear_pack_index_get(Eo *obj, void *pd, const Efl_Gfx *subobj);


Efl_Orient _efl_canvas_layout_internal_box_efl_orientation_orientation_get(Eo *obj, void *pd);


static Eina_Bool
_efl_canvas_layout_internal_box_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_LAYOUT_INTERNAL_BOX_EXTRA_OPS
#define EFL_CANVAS_LAYOUT_INTERNAL_BOX_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_content_iterate, _efl_canvas_layout_internal_box_efl_container_content_iterate),
      EFL_OBJECT_OP_FUNC(efl_content_count, _efl_canvas_layout_internal_box_efl_container_content_count),
      EFL_OBJECT_OP_FUNC(efl_content_remove, _efl_canvas_layout_internal_box_efl_container_content_remove),
      EFL_OBJECT_OP_FUNC(efl_pack_clear, _efl_canvas_layout_internal_box_efl_pack_pack_clear),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack_all, _efl_canvas_layout_internal_box_efl_pack_unpack_all),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack, _efl_canvas_layout_internal_box_efl_pack_unpack),
      EFL_OBJECT_OP_FUNC(efl_pack, _efl_canvas_layout_internal_box_efl_pack_pack),
      EFL_OBJECT_OP_FUNC(efl_pack_begin, _efl_canvas_layout_internal_box_efl_pack_linear_pack_begin),
      EFL_OBJECT_OP_FUNC(efl_pack_end, _efl_canvas_layout_internal_box_efl_pack_linear_pack_end),
      EFL_OBJECT_OP_FUNC(efl_pack_before, _efl_canvas_layout_internal_box_efl_pack_linear_pack_before),
      EFL_OBJECT_OP_FUNC(efl_pack_after, _efl_canvas_layout_internal_box_efl_pack_linear_pack_after),
      EFL_OBJECT_OP_FUNC(efl_pack_at, _efl_canvas_layout_internal_box_efl_pack_linear_pack_at),
      EFL_OBJECT_OP_FUNC(efl_pack_content_get, _efl_canvas_layout_internal_box_efl_pack_linear_pack_content_get),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack_at, _efl_canvas_layout_internal_box_efl_pack_linear_pack_unpack_at),
      EFL_OBJECT_OP_FUNC(efl_pack_index_get, _efl_canvas_layout_internal_box_efl_pack_linear_pack_index_get),
      EFL_OBJECT_OP_FUNC(efl_orientation_get, _efl_canvas_layout_internal_box_efl_orientation_orientation_get),
      EFL_CANVAS_LAYOUT_INTERNAL_BOX_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_LAYOUT_INTERNAL_BOX_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_LAYOUT_INTERNAL_BOX_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_layout_internal_box_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Layout_Internal.Box",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _efl_canvas_layout_internal_box_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_layout_internal_box_class_get, &_efl_canvas_layout_internal_box_class_desc, EFL_CANVAS_LAYOUT_INTERNAL_CLASS, EFL_PACK_LINEAR_INTERFACE, EFL_ORIENTATION_INTERFACE, NULL);
