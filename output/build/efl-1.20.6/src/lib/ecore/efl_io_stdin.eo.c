
Efl_Object *_efl_io_stdin_efl_object_finalize(Eo *obj, void *pd);


void _efl_io_stdin_efl_loop_fd_fd_set(Eo *obj, void *pd, int fd);


Eina_Error _efl_io_stdin_efl_io_reader_read(Eo *obj, void *pd, Eina_Rw_Slice *rw_slice);


void _efl_io_stdin_efl_io_reader_can_read_set(Eo *obj, void *pd, Eina_Bool can_read);


static Eina_Bool
_efl_io_stdin_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IO_STDIN_EXTRA_OPS
#define EFL_IO_STDIN_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_io_stdin_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_loop_fd_set, _efl_io_stdin_efl_loop_fd_fd_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_read, _efl_io_stdin_efl_io_reader_read),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_set, _efl_io_stdin_efl_io_reader_can_read_set),
      EFL_IO_STDIN_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IO_STDIN_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IO_STDIN_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_io_stdin_class_desc = {
   EO_VERSION,
   "Efl.Io.Stdin",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _efl_io_stdin_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_io_stdin_class_get, &_efl_io_stdin_class_desc, EFL_LOOP_FD_CLASS, EFL_IO_READER_FD_MIXIN, NULL);
