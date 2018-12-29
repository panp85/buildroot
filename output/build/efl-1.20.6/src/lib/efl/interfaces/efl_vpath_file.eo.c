EWAPI const Efl_Event_Description _EFL_VPATH_FILE_EVENT_FETCHED =
   EFL_EVENT_DESCRIPTION("fetched");
EWAPI const Efl_Event_Description _EFL_VPATH_FILE_EVENT_FAILED =
   EFL_EVENT_DESCRIPTION("failed");

void _efl_vpath_file_path_set(Eo *obj, Efl_Vpath_File_Data *pd, const char *path);

EOAPI EFL_VOID_FUNC_BODYV(efl_vpath_file_path_set, EFL_FUNC_CALL(path), const char *path);

const char *_efl_vpath_file_path_get(Eo *obj, Efl_Vpath_File_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_vpath_file_path_get, const char *, NULL);

void _efl_vpath_file_result_set(Eo *obj, Efl_Vpath_File_Data *pd, const char *path);

EOAPI EFL_VOID_FUNC_BODYV(efl_vpath_file_result_set, EFL_FUNC_CALL(path), const char *path);

const char *_efl_vpath_file_result_get(Eo *obj, Efl_Vpath_File_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_vpath_file_result_get, const char *, NULL);

void _efl_vpath_file_keep_set(Eo *obj, Efl_Vpath_File_Data *pd, Eina_Bool keep);

EOAPI EFL_VOID_FUNC_BODYV(efl_vpath_file_keep_set, EFL_FUNC_CALL(keep), Eina_Bool keep);

Eina_Bool _efl_vpath_file_keep_get(Eo *obj, Efl_Vpath_File_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_vpath_file_keep_get, Eina_Bool, 0);

Eina_Bool _efl_vpath_file_do(Eo *obj, Efl_Vpath_File_Data *pd);

EOAPI EFL_FUNC_BODY(efl_vpath_file_do, Eina_Bool, 0);

void _efl_vpath_file_wait(Eo *obj, Efl_Vpath_File_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_vpath_file_wait);

static Eina_Bool
_efl_vpath_file_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_VPATH_FILE_EXTRA_OPS
#define EFL_VPATH_FILE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_vpath_file_path_set, _efl_vpath_file_path_set),
      EFL_OBJECT_OP_FUNC(efl_vpath_file_path_get, _efl_vpath_file_path_get),
      EFL_OBJECT_OP_FUNC(efl_vpath_file_result_set, _efl_vpath_file_result_set),
      EFL_OBJECT_OP_FUNC(efl_vpath_file_result_get, _efl_vpath_file_result_get),
      EFL_OBJECT_OP_FUNC(efl_vpath_file_keep_set, _efl_vpath_file_keep_set),
      EFL_OBJECT_OP_FUNC(efl_vpath_file_keep_get, _efl_vpath_file_keep_get),
      EFL_OBJECT_OP_FUNC(efl_vpath_file_do, _efl_vpath_file_do),
      EFL_OBJECT_OP_FUNC(efl_vpath_file_wait, _efl_vpath_file_wait),
      EFL_VPATH_FILE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_VPATH_FILE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_VPATH_FILE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_vpath_file_class_desc = {
   EO_VERSION,
   "Efl.Vpath.File",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Vpath_File_Data),
   _efl_vpath_file_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_vpath_file_class_get, &_efl_vpath_file_class_desc, EFL_OBJECT_CLASS, NULL);
