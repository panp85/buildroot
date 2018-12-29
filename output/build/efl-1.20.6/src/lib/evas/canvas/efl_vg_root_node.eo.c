
void _efl_vg_root_node_efl_object_parent_set(Eo *obj, Efl_VG_Root_Node_Data *pd, Efl_Object *parent);


Efl_Object *_efl_vg_root_node_efl_object_constructor(Eo *obj, Efl_VG_Root_Node_Data *pd);


static Eina_Bool
_efl_vg_root_node_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_VG_ROOT_NODE_EXTRA_OPS
#define EFL_VG_ROOT_NODE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_parent_set, _efl_vg_root_node_efl_object_parent_set),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_vg_root_node_efl_object_constructor),
      EFL_VG_ROOT_NODE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_VG_ROOT_NODE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_VG_ROOT_NODE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_vg_root_node_class_desc = {
   EO_VERSION,
   "Efl.VG.Root_Node",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_VG_Root_Node_Data),
   _efl_vg_root_node_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_vg_root_node_class_get, &_efl_vg_root_node_class_desc, EFL_VG_CONTAINER_CLASS, NULL);
