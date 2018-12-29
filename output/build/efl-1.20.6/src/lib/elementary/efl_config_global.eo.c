
Eina_Bool _efl_config_global_save(Eo *obj, void *pd, const char *profile);

EOAPI EFL_FUNC_BODYV(efl_config_save, Eina_Bool, 0, EFL_FUNC_CALL(profile), const char *profile);

void _efl_config_global_profile_set(Eo *obj, void *pd, const char *profile);

EOAPI EFL_VOID_FUNC_BODYV(efl_config_profile_set, EFL_FUNC_CALL(profile), const char *profile);

const char *_efl_config_global_profile_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_config_profile_get, const char *, NULL);

Eina_Iterator *_efl_config_global_profile_iterate(Eo *obj, void *pd, Eina_Bool hidden);

EOAPI EFL_FUNC_BODYV(efl_config_profile_iterate, Eina_Iterator *, NULL, EFL_FUNC_CALL(hidden), Eina_Bool hidden);

Eina_Bool _efl_config_global_profile_exists(Eo *obj, void *pd, const char *profile);

EOAPI EFL_FUNC_BODYV(efl_config_profile_exists, Eina_Bool, 0, EFL_FUNC_CALL(profile), const char *profile);

Eina_Stringshare *_efl_config_global_profile_dir_get(Eo *obj, void *pd, const char *profile, Eina_Bool is_user);

EOAPI EFL_FUNC_BODYV(efl_config_profile_dir_get, Eina_Stringshare *, NULL, EFL_FUNC_CALL(profile, is_user), const char *profile, Eina_Bool is_user);

void _efl_config_global_profile_derived_add(Eo *obj, void *pd, const char *profile, const char *options);

EOAPI EFL_VOID_FUNC_BODYV(efl_config_profile_derived_add, EFL_FUNC_CALL(profile, options), const char *profile, const char *options);

void _efl_config_global_profile_derived_del(Eo *obj, void *pd, const char *profile);

EOAPI EFL_VOID_FUNC_BODYV(efl_config_profile_derived_del, EFL_FUNC_CALL(profile), const char *profile);

Eina_Bool _efl_config_global_efl_config_config_set(Eo *obj, void *pd, const char *name, const Eina_Value *val);


Eina_Value *_efl_config_global_efl_config_config_get(const Eo *obj, void *pd, const char *name);


Eina_Iterator *_efl_config_global_efl_config_config_list_get(const Eo *obj, void *pd, const char *name);


static Eina_Bool
_efl_config_global_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CONFIG_GLOBAL_EXTRA_OPS
#define EFL_CONFIG_GLOBAL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_config_save, _efl_config_global_save),
      EFL_OBJECT_OP_FUNC(efl_config_profile_set, _efl_config_global_profile_set),
      EFL_OBJECT_OP_FUNC(efl_config_profile_get, _efl_config_global_profile_get),
      EFL_OBJECT_OP_FUNC(efl_config_profile_iterate, _efl_config_global_profile_iterate),
      EFL_OBJECT_OP_FUNC(efl_config_profile_exists, _efl_config_global_profile_exists),
      EFL_OBJECT_OP_FUNC(efl_config_profile_dir_get, _efl_config_global_profile_dir_get),
      EFL_OBJECT_OP_FUNC(efl_config_profile_derived_add, _efl_config_global_profile_derived_add),
      EFL_OBJECT_OP_FUNC(efl_config_profile_derived_del, _efl_config_global_profile_derived_del),
      EFL_OBJECT_OP_FUNC(efl_config_set, _efl_config_global_efl_config_config_set),
      EFL_OBJECT_OP_FUNC(efl_config_get, _efl_config_global_efl_config_config_get),
      EFL_OBJECT_OP_FUNC(efl_config_list_get, _efl_config_global_efl_config_config_list_get),
      EFL_CONFIG_GLOBAL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CONFIG_GLOBAL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CONFIG_GLOBAL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_config_global_class_desc = {
   EO_VERSION,
   "Efl.Config.Global",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _efl_config_global_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_config_global_class_get, &_efl_config_global_class_desc, EFL_OBJECT_CLASS, EFL_CONFIG_INTERFACE, NULL);
