
void _efl_io_positioner_fd_positioner_fd_set(Eo *obj, Efl_Io_Positioner_Fd_Data *pd, int fd);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_positioner_fd_set, EFL_FUNC_CALL(fd), int fd);

int _efl_io_positioner_fd_positioner_fd_get(Eo *obj, Efl_Io_Positioner_Fd_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_positioner_fd_get, int, 0);

Eina_Error _efl_io_positioner_fd_efl_io_positioner_seek(Eo *obj, Efl_Io_Positioner_Fd_Data *pd, int64_t offset, Efl_Io_Positioner_Whence whence);


uint64_t _efl_io_positioner_fd_efl_io_positioner_position_get(Eo *obj, Efl_Io_Positioner_Fd_Data *pd);


static Eina_Bool
_efl_io_positioner_fd_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IO_POSITIONER_FD_EXTRA_OPS
#define EFL_IO_POSITIONER_FD_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_io_positioner_fd_set, _efl_io_positioner_fd_positioner_fd_set),
      EFL_OBJECT_OP_FUNC(efl_io_positioner_fd_get, _efl_io_positioner_fd_positioner_fd_get),
      EFL_OBJECT_OP_FUNC(efl_io_positioner_seek, _efl_io_positioner_fd_efl_io_positioner_seek),
      EFL_OBJECT_OP_FUNC(efl_io_positioner_position_get, _efl_io_positioner_fd_efl_io_positioner_position_get),
      EFL_IO_POSITIONER_FD_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IO_POSITIONER_FD_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IO_POSITIONER_FD_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_io_positioner_fd_class_desc = {
   EO_VERSION,
   "Efl.Io.Positioner.Fd",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Efl_Io_Positioner_Fd_Data),
   _efl_io_positioner_fd_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_io_positioner_fd_mixin_get, &_efl_io_positioner_fd_class_desc, EFL_IO_POSITIONER_MIXIN, NULL);
