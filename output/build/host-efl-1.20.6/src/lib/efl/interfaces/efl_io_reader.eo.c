EWAPI const Efl_Event_Description _EFL_IO_READER_EVENT_CAN_READ_CHANGED =
   EFL_EVENT_DESCRIPTION("can_read,changed");
EWAPI const Efl_Event_Description _EFL_IO_READER_EVENT_EOS =
   EFL_EVENT_DESCRIPTION("eos");
EOAPI EFL_FUNC_BODYV(efl_io_reader_read, Eina_Error, 0, EFL_FUNC_CALL(rw_slice), Eina_Rw_Slice *rw_slice);
EOAPI EFL_VOID_FUNC_BODYV(efl_io_reader_can_read_set, EFL_FUNC_CALL(can_read), Eina_Bool can_read);
EOAPI EFL_FUNC_BODY_CONST(efl_io_reader_can_read_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_io_reader_eos_set, EFL_FUNC_CALL(is_eos), Eina_Bool is_eos);
EOAPI EFL_FUNC_BODY_CONST(efl_io_reader_eos_get, Eina_Bool, 0);

static Eina_Bool
_efl_io_reader_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IO_READER_EXTRA_OPS
#define EFL_IO_READER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_io_reader_read, NULL),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_get, NULL),
      EFL_IO_READER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IO_READER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IO_READER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_io_reader_class_desc = {
   EO_VERSION,
   "Efl.Io.Reader",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_io_reader_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_io_reader_interface_get, &_efl_io_reader_class_desc, NULL, NULL);
