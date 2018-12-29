
Efl_Object *_efl_vpath_file_core_efl_object_constructor(Eo *obj, Efl_Vpath_File_Core_Data *pd);


void _efl_vpath_file_core_efl_object_destructor(Eo *obj, Efl_Vpath_File_Core_Data *pd);


Eina_Bool _efl_vpath_file_core_efl_vpath_file_do(Eo *obj, Efl_Vpath_File_Core_Data *pd);


void _efl_vpath_file_core_efl_vpath_file_wait(Eo *obj, Efl_Vpath_File_Core_Data *pd);


static Eina_Bool
_efl_vpath_file_core_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_VPATH_FILE_CORE_EXTRA_OPS
#define EFL_VPATH_FILE_CORE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_vpath_file_core_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_vpath_file_core_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_vpath_file_do, _efl_vpath_file_core_efl_vpath_file_do),
      EFL_OBJECT_OP_FUNC(efl_vpath_file_wait, _efl_vpath_file_core_efl_vpath_file_wait),
      EFL_VPATH_FILE_CORE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_VPATH_FILE_CORE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_VPATH_FILE_CORE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_vpath_file_core_class_desc = {
   EO_VERSION,
   "Efl.Vpath.File.Core",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Vpath_File_Core_Data),
   _efl_vpath_file_core_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_vpath_file_core_class_get, &_efl_vpath_file_core_class_desc, EFL_VPATH_FILE_CLASS, NULL);
