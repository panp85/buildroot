
Efl_VG *_efl_vg_container_child_get(Eo *obj, Efl_VG_Container_Data *pd, const char *name);

EOAPI EFL_FUNC_BODYV(efl_vg_container_child_get, Efl_VG *, NULL, EFL_FUNC_CALL(name), const char *name);

Eina_Iterator *_efl_vg_container_children_get(Eo *obj, Efl_VG_Container_Data *pd);

EOAPI EFL_FUNC_BODY(efl_vg_container_children_get, Eina_Iterator *, NULL);

Efl_Object *_efl_vg_container_efl_object_constructor(Eo *obj, Efl_VG_Container_Data *pd);


void _efl_vg_container_efl_object_destructor(Eo *obj, Efl_VG_Container_Data *pd);


void _efl_vg_container_efl_vg_bounds_get(Eo *obj, Efl_VG_Container_Data *pd, Eina_Rectangle *r);


Eina_Bool _efl_vg_container_efl_vg_interpolate(Eo *obj, Efl_VG_Container_Data *pd, const Efl_VG *from, const Efl_VG *to, double pos_map);


void _efl_vg_container_efl_vg_dup(Eo *obj, Efl_VG_Container_Data *pd, const Efl_VG *from);


static Eina_Bool
_efl_vg_container_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_VG_CONTAINER_EXTRA_OPS
#define EFL_VG_CONTAINER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_vg_container_child_get, _efl_vg_container_child_get),
      EFL_OBJECT_OP_FUNC(efl_vg_container_children_get, _efl_vg_container_children_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_vg_container_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_vg_container_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_vg_bounds_get, _efl_vg_container_efl_vg_bounds_get),
      EFL_OBJECT_OP_FUNC(efl_vg_interpolate, _efl_vg_container_efl_vg_interpolate),
      EFL_OBJECT_OP_FUNC(efl_vg_dup, _efl_vg_container_efl_vg_dup),
      EFL_VG_CONTAINER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_VG_CONTAINER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_VG_CONTAINER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_vg_container_class_desc = {
   EO_VERSION,
   "Efl.VG.Container",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_VG_Container_Data),
   _efl_vg_container_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_vg_container_class_get, &_efl_vg_container_class_desc, EFL_VG_CLASS, NULL);

EAPI Efl_VG *
evas_vg_container_child_get(Efl_VG_Container *obj, const char *name)
{
   return efl_vg_container_child_get(obj, name);
}

EAPI Eina_Iterator *
evas_vg_container_children_get(Efl_VG_Container *obj)
{
   return efl_vg_container_children_get(obj);
}
