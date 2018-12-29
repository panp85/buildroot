
Efl_Future *_efl_io_manager_ls(Eo *obj, Efl_Io_Manager_Data *pd, const char *path);

EOAPI EFL_FUNC_BODYV(efl_io_manager_ls, Efl_Future *, NULL, EFL_FUNC_CALL(path), const char *path);

Efl_Future *_efl_io_manager_direct_ls(Eo *obj, Efl_Io_Manager_Data *pd, const char *path, Eina_Bool recursive);

EOAPI EFL_FUNC_BODYV(efl_io_manager_direct_ls, Efl_Future *, NULL, EFL_FUNC_CALL(path, recursive), const char *path, Eina_Bool recursive);

Efl_Future *_efl_io_manager_stat_ls(Eo *obj, Efl_Io_Manager_Data *pd, const char *path, Eina_Bool recursive);

EOAPI EFL_FUNC_BODYV(efl_io_manager_stat_ls, Efl_Future *, NULL, EFL_FUNC_CALL(path, recursive), const char *path, Eina_Bool recursive);

Efl_Future *_efl_io_manager_xattr_ls(Eo *obj, Efl_Io_Manager_Data *pd, const char *path);

EOAPI EFL_FUNC_BODYV(efl_io_manager_xattr_ls, Efl_Future *, NULL, EFL_FUNC_CALL(path), const char *path);

Efl_Future *_efl_io_manager_stat(Eo *obj, Efl_Io_Manager_Data *pd, const char *path);

EOAPI EFL_FUNC_BODYV(efl_io_manager_stat, Efl_Future *, NULL, EFL_FUNC_CALL(path), const char *path);

Efl_Future *_efl_io_manager_xattr_set(Eo *obj, Efl_Io_Manager_Data *pd, const char *path, const char *attribute, Eina_Binbuf *data, Eina_Xattr_Flags flags);

EOAPI EFL_FUNC_BODYV(efl_io_manager_xattr_set, Efl_Future *, NULL, EFL_FUNC_CALL(path, attribute, data, flags), const char *path, const char *attribute, Eina_Binbuf *data, Eina_Xattr_Flags flags);

Efl_Future *_efl_io_manager_xattr_get(Eo *obj, Efl_Io_Manager_Data *pd, const char *path, const char *attribute);

EOAPI EFL_FUNC_BODYV_CONST(efl_io_manager_xattr_get, Efl_Future *, NULL, EFL_FUNC_CALL(path, attribute), const char *path, const char *attribute);

Efl_Future *_efl_io_manager_open(Eo *obj, Efl_Io_Manager_Data *pd, const char *path, Eina_Bool shared);

EOAPI EFL_FUNC_BODYV(efl_io_manager_open, Efl_Future *, NULL, EFL_FUNC_CALL(path, shared), const char *path, Eina_Bool shared);

Efl_Future *_efl_io_manager_close(Eo *obj, Efl_Io_Manager_Data *pd, Eina_File *file);

EOAPI EFL_FUNC_BODYV(efl_io_manager_close, Efl_Future *, NULL, EFL_FUNC_CALL(file), Eina_File *file);

static Eina_Bool
_efl_io_manager_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IO_MANAGER_EXTRA_OPS
#define EFL_IO_MANAGER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_io_manager_ls, _efl_io_manager_ls),
      EFL_OBJECT_OP_FUNC(efl_io_manager_direct_ls, _efl_io_manager_direct_ls),
      EFL_OBJECT_OP_FUNC(efl_io_manager_stat_ls, _efl_io_manager_stat_ls),
      EFL_OBJECT_OP_FUNC(efl_io_manager_xattr_ls, _efl_io_manager_xattr_ls),
      EFL_OBJECT_OP_FUNC(efl_io_manager_stat, _efl_io_manager_stat),
      EFL_OBJECT_OP_FUNC(efl_io_manager_xattr_set, _efl_io_manager_xattr_set),
      EFL_OBJECT_OP_FUNC(efl_io_manager_xattr_get, _efl_io_manager_xattr_get),
      EFL_OBJECT_OP_FUNC(efl_io_manager_open, _efl_io_manager_open),
      EFL_OBJECT_OP_FUNC(efl_io_manager_close, _efl_io_manager_close),
      EFL_IO_MANAGER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IO_MANAGER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IO_MANAGER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_io_manager_class_desc = {
   EO_VERSION,
   "Efl.Io.Manager",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Io_Manager_Data),
   _efl_io_manager_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_io_manager_class_get, &_efl_io_manager_class_desc, EFL_LOOP_USER_CLASS, NULL);
