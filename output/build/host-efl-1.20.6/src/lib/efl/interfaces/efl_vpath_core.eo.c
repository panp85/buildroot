
Efl_Vpath_Core *_efl_vpath_core_core_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_vpath_core_get, Efl_Vpath_Core *, NULL);

void _efl_vpath_core_meta_set(Eo *obj, Efl_Vpath_Core_Data *pd, const char *key, const char *path);

EOAPI EFL_VOID_FUNC_BODYV(efl_vpath_core_meta_set, EFL_FUNC_CALL(key, path), const char *key, const char *path);

const char *_efl_vpath_core_meta_get(Eo *obj, Efl_Vpath_Core_Data *pd, const char *key);

EOAPI EFL_FUNC_BODYV(efl_vpath_core_meta_get, const char *, NULL, EFL_FUNC_CALL(key), const char *key);

Efl_Object *_efl_vpath_core_efl_object_constructor(Eo *obj, Efl_Vpath_Core_Data *pd);


void _efl_vpath_core_efl_object_destructor(Eo *obj, Efl_Vpath_Core_Data *pd);


Efl_Vpath_File *_efl_vpath_core_efl_vpath_fetch(Eo *obj, Efl_Vpath_Core_Data *pd, const char *path);


static Eina_Bool
_efl_vpath_core_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_VPATH_CORE_EXTRA_OPS
#define EFL_VPATH_CORE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_vpath_core_meta_set, _efl_vpath_core_meta_set),
      EFL_OBJECT_OP_FUNC(efl_vpath_core_meta_get, _efl_vpath_core_meta_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_vpath_core_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_vpath_core_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_vpath_fetch, _efl_vpath_core_efl_vpath_fetch),
      EFL_VPATH_CORE_EXTRA_OPS
   );
   opsp = &ops;

#ifndef EFL_VPATH_CORE_EXTRA_CLASS_OPS
#define EFL_VPATH_CORE_EXTRA_CLASS_OPS
#endif

   EFL_OPS_DEFINE(cops,
      EFL_OBJECT_OP_FUNC(efl_vpath_core_get, _efl_vpath_core_core_get),
      EFL_VPATH_CORE_EXTRA_CLASS_OPS
   );
   copsp = &cops;

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_vpath_core_class_desc = {
   EO_VERSION,
   "Efl.Vpath.Core",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Vpath_Core_Data),
   _efl_vpath_core_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_vpath_core_class_get, &_efl_vpath_core_class_desc, EFL_OBJECT_CLASS, EFL_VPATH_INTERFACE, NULL);
