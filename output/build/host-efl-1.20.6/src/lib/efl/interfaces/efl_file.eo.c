EOAPI EFL_FUNC_BODYV(efl_file_mmap_set, Eina_Bool, 0, EFL_FUNC_CALL(f, key), const Eina_File *f, const char *key);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_file_mmap_get, EFL_FUNC_CALL(f, key), const Eina_File **f, const char **key);
EOAPI EFL_FUNC_BODYV(efl_file_set, Eina_Bool, 0, EFL_FUNC_CALL(file, key), const char *file, const char *key);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_file_get, EFL_FUNC_CALL(file, key), const char **file, const char **key);
EOAPI EFL_FUNC_BODYV_CONST(efl_file_save, Eina_Bool, 0, EFL_FUNC_CALL(file, key, flags), const char *file, const char *key, const char *flags);

static Eina_Bool
_efl_file_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_FILE_EXTRA_OPS
#define EFL_FILE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_file_mmap_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_file_mmap_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_file_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_file_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_file_save, NULL),
      EFL_FILE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_FILE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_FILE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_file_class_desc = {
   EO_VERSION,
   "Efl.File",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_file_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_file_interface_get, &_efl_file_class_desc, NULL, NULL);
