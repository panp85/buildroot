EWAPI const Efl_Event_Description _EFL_IO_POSITIONER_EVENT_POSITION_CHANGED =
   EFL_EVENT_DESCRIPTION("position,changed");
EOAPI EFL_FUNC_BODYV(efl_io_positioner_seek, Eina_Error, 0, EFL_FUNC_CALL(offset, whence), int64_t offset, Efl_Io_Positioner_Whence whence);

Eina_Bool _efl_io_positioner_position_set(Eo *obj, void *pd, uint64_t position);

EOAPI EFL_FUNC_BODYV(efl_io_positioner_position_set, Eina_Bool, 0, EFL_FUNC_CALL(position), uint64_t position);
EOAPI EFL_FUNC_BODY_CONST(efl_io_positioner_position_get, uint64_t, 0);

static Eina_Bool
_efl_io_positioner_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IO_POSITIONER_EXTRA_OPS
#define EFL_IO_POSITIONER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_io_positioner_seek, NULL),
      EFL_OBJECT_OP_FUNC(efl_io_positioner_position_set, _efl_io_positioner_position_set),
      EFL_OBJECT_OP_FUNC(efl_io_positioner_position_get, NULL),
      EFL_IO_POSITIONER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IO_POSITIONER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IO_POSITIONER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_io_positioner_class_desc = {
   EO_VERSION,
   "Efl.Io.Positioner",
   EFL_CLASS_TYPE_MIXIN,
   0,
   _efl_io_positioner_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_io_positioner_mixin_get, &_efl_io_positioner_class_desc, NULL, NULL);
