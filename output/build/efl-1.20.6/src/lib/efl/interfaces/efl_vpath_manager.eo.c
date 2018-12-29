
Efl_Vpath_File *_efl_vpath_manager_fetch(Eo *obj, void *pd, const char *path);

EOAPI EFL_FUNC_BODYV_CONST(efl_vpath_manager_fetch, Efl_Vpath_File *, NULL, EFL_FUNC_CALL(path), const char *path);

void _efl_vpath_manager_register(Eo *obj, void *pd, int priority, Efl_Vpath *vpath);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_vpath_manager_register, EFL_FUNC_CALL(priority, vpath), int priority, Efl_Vpath *vpath);

void _efl_vpath_manager_unregister(Eo *obj, void *pd, Efl_Vpath *vpath);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_vpath_manager_unregister, EFL_FUNC_CALL(vpath), Efl_Vpath *vpath);

static Eina_Bool
_efl_vpath_manager_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifdef EFL_VPATH_MANAGER_EXTRA_OPS
   EFL_OPS_DEFINE(ops, EFL_VPATH_MANAGER_EXTRA_OPS);
   opsp = &ops;
#endif

#ifndef EFL_VPATH_MANAGER_EXTRA_CLASS_OPS
#define EFL_VPATH_MANAGER_EXTRA_CLASS_OPS
#endif

   EFL_OPS_DEFINE(cops,
      EFL_OBJECT_OP_FUNC(efl_vpath_manager_fetch, _efl_vpath_manager_fetch),
      EFL_OBJECT_OP_FUNC(efl_vpath_manager_register, _efl_vpath_manager_register),
      EFL_OBJECT_OP_FUNC(efl_vpath_manager_unregister, _efl_vpath_manager_unregister),
      EFL_VPATH_MANAGER_EXTRA_CLASS_OPS
   );
   copsp = &cops;

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_vpath_manager_class_desc = {
   EO_VERSION,
   "Efl.Vpath.Manager",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Vpath_Manager_Data),
   _efl_vpath_manager_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_vpath_manager_class_get, &_efl_vpath_manager_class_desc, EFL_OBJECT_CLASS, NULL);
