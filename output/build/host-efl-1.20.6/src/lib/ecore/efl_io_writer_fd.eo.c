
void _efl_io_writer_fd_writer_fd_set(Eo *obj, Efl_Io_Writer_Fd_Data *pd, int fd);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_writer_fd_set, EFL_FUNC_CALL(fd), int fd);

int _efl_io_writer_fd_writer_fd_get(Eo *obj, Efl_Io_Writer_Fd_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_writer_fd_get, int, 0);

Eina_Error _efl_io_writer_fd_efl_io_writer_write(Eo *obj, Efl_Io_Writer_Fd_Data *pd, Eina_Slice *slice, Eina_Slice *remaining);


void _efl_io_writer_fd_efl_io_writer_can_write_set(Eo *obj, Efl_Io_Writer_Fd_Data *pd, Eina_Bool can_write);


Eina_Bool _efl_io_writer_fd_efl_io_writer_can_write_get(Eo *obj, Efl_Io_Writer_Fd_Data *pd);


static Eina_Bool
_efl_io_writer_fd_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IO_WRITER_FD_EXTRA_OPS
#define EFL_IO_WRITER_FD_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_io_writer_fd_set, _efl_io_writer_fd_writer_fd_set),
      EFL_OBJECT_OP_FUNC(efl_io_writer_fd_get, _efl_io_writer_fd_writer_fd_get),
      EFL_OBJECT_OP_FUNC(efl_io_writer_write, _efl_io_writer_fd_efl_io_writer_write),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_set, _efl_io_writer_fd_efl_io_writer_can_write_set),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_get, _efl_io_writer_fd_efl_io_writer_can_write_get),
      EFL_IO_WRITER_FD_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IO_WRITER_FD_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IO_WRITER_FD_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_io_writer_fd_class_desc = {
   EO_VERSION,
   "Efl.Io.Writer.Fd",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Efl_Io_Writer_Fd_Data),
   _efl_io_writer_fd_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_io_writer_fd_mixin_get, &_efl_io_writer_fd_class_desc, EFL_IO_WRITER_INTERFACE, NULL);
