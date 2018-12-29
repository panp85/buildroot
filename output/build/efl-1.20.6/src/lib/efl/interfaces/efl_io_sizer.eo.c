EWAPI const Efl_Event_Description _EFL_IO_SIZER_EVENT_SIZE_CHANGED =
   EFL_EVENT_DESCRIPTION("size,changed");
EOAPI EFL_FUNC_BODYV(efl_io_sizer_resize, Eina_Error, 0, EFL_FUNC_CALL(size), uint64_t size);

Eina_Bool _efl_io_sizer_size_set(Eo *obj, void *pd, uint64_t size);

EOAPI EFL_FUNC_BODYV(efl_io_sizer_size_set, Eina_Bool, 0, EFL_FUNC_CALL(size), uint64_t size);
EOAPI EFL_FUNC_BODY_CONST(efl_io_sizer_size_get, uint64_t, 0);

static Eina_Bool
_efl_io_sizer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IO_SIZER_EXTRA_OPS
#define EFL_IO_SIZER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_io_sizer_resize, NULL),
      EFL_OBJECT_OP_FUNC(efl_io_sizer_size_set, _efl_io_sizer_size_set),
      EFL_OBJECT_OP_FUNC(efl_io_sizer_size_get, NULL),
      EFL_IO_SIZER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IO_SIZER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IO_SIZER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_io_sizer_class_desc = {
   EO_VERSION,
   "Efl.Io.Sizer",
   EFL_CLASS_TYPE_MIXIN,
   0,
   _efl_io_sizer_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_io_sizer_mixin_get, &_efl_io_sizer_class_desc, NULL, NULL);
