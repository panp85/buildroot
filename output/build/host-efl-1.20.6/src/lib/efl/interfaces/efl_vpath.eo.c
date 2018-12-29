EOAPI EFL_FUNC_BODYV(efl_vpath_fetch, Efl_Vpath_File *, NULL, EFL_FUNC_CALL(path), const char *path);

static Eina_Bool
_efl_vpath_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_VPATH_EXTRA_OPS
#define EFL_VPATH_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_vpath_fetch, NULL),
      EFL_VPATH_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_VPATH_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_VPATH_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_vpath_class_desc = {
   EO_VERSION,
   "Efl.Vpath",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_vpath_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_vpath_interface_get, &_efl_vpath_class_desc, NULL, NULL);
