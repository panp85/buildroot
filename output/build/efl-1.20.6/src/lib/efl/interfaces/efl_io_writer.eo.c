EWAPI const Efl_Event_Description _EFL_IO_WRITER_EVENT_CAN_WRITE_CHANGED =
   EFL_EVENT_DESCRIPTION("can_write,changed");
EOAPI EFL_FUNC_BODYV(efl_io_writer_write, Eina_Error, 0, EFL_FUNC_CALL(slice, remaining), Eina_Slice *slice, Eina_Slice *remaining);
EOAPI EFL_VOID_FUNC_BODYV(efl_io_writer_can_write_set, EFL_FUNC_CALL(can_write), Eina_Bool can_write);
EOAPI EFL_FUNC_BODY_CONST(efl_io_writer_can_write_get, Eina_Bool, 0);

static Eina_Bool
_efl_io_writer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IO_WRITER_EXTRA_OPS
#define EFL_IO_WRITER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_io_writer_write, NULL),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_get, NULL),
      EFL_IO_WRITER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IO_WRITER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IO_WRITER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_io_writer_class_desc = {
   EO_VERSION,
   "Efl.Io.Writer",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_io_writer_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_io_writer_interface_get, &_efl_io_writer_class_desc, NULL, NULL);
