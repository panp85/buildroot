
Efl_Object *_evas_vg_root_node_get(Eo *obj, Evas_VG_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_obj_vg_root_node_get, Efl_Object *, NULL);

Efl_Object *_evas_vg_efl_object_constructor(Eo *obj, Evas_VG_Data *pd);


Efl_Object *_evas_vg_efl_object_finalize(Eo *obj, Evas_VG_Data *pd);


void _evas_vg_efl_object_destructor(Eo *obj, Evas_VG_Data *pd);


void _evas_vg_efl_gfx_fill_fill_set(Eo *obj, Evas_VG_Data *pd, int x, int y, int w, int h);


void _evas_vg_efl_gfx_fill_fill_get(Eo *obj, Evas_VG_Data *pd, int *x, int *y, int *w, int *h);


void _evas_vg_efl_gfx_view_view_size_set(Eo *obj, Evas_VG_Data *pd, int w, int h);


void _evas_vg_efl_gfx_view_view_size_get(Eo *obj, Evas_VG_Data *pd, int *w, int *h);


static Eina_Bool
_evas_vg_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_VG_EXTRA_OPS
#define EVAS_VG_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_obj_vg_root_node_get, _evas_vg_root_node_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _evas_vg_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _evas_vg_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_destructor, _evas_vg_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_fill_set, _evas_vg_efl_gfx_fill_fill_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_fill_get, _evas_vg_efl_gfx_fill_fill_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_view_size_set, _evas_vg_efl_gfx_view_view_size_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_view_size_get, _evas_vg_efl_gfx_view_view_size_get),
      EVAS_VG_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_VG_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_VG_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_vg_class_desc = {
   EO_VERSION,
   "Evas.VG",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_VG_Data),
   _evas_vg_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_vg_class_get, &_evas_vg_class_desc, EFL_CANVAS_OBJECT_CLASS, EFL_GFX_FILL_INTERFACE, EFL_GFX_VIEW_INTERFACE, NULL);

EAPI Efl_Object *
evas_object_vg_root_node_get(const Evas_VG *obj)
{
   return evas_obj_vg_root_node_get(obj);
}
