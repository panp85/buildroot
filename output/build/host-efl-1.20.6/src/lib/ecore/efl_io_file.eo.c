
void _efl_io_file_flags_set(Eo *obj, Efl_Io_File_Data *pd, uint32_t flags);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_file_flags_set, EFL_FUNC_CALL(flags), uint32_t flags);

uint32_t _efl_io_file_flags_get(Eo *obj, Efl_Io_File_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_file_flags_get, uint32_t, 0);

void _efl_io_file_mode_set(Eo *obj, Efl_Io_File_Data *pd, uint32_t mode);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_file_mode_set, EFL_FUNC_CALL(mode), uint32_t mode);

uint32_t _efl_io_file_mode_get(Eo *obj, Efl_Io_File_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_file_mode_get, uint32_t, 0);

Efl_Object *_efl_io_file_efl_object_constructor(Eo *obj, Efl_Io_File_Data *pd);


void _efl_io_file_efl_object_destructor(Eo *obj, Efl_Io_File_Data *pd);


Efl_Object *_efl_io_file_efl_object_finalize(Eo *obj, Efl_Io_File_Data *pd);


void _efl_io_file_efl_loop_fd_fd_file_set(Eo *obj, Efl_Io_File_Data *pd, int fd);


Eina_Bool _efl_io_file_efl_file_file_set(Eo *obj, Efl_Io_File_Data *pd, const char *file, const char *key);


void _efl_io_file_efl_file_file_get(Eo *obj, Efl_Io_File_Data *pd, const char **file, const char **key);


Eina_Error _efl_io_file_efl_io_reader_read(Eo *obj, Efl_Io_File_Data *pd, Eina_Rw_Slice *rw_slice);


Eina_Error _efl_io_file_efl_io_writer_write(Eo *obj, Efl_Io_File_Data *pd, Eina_Slice *slice, Eina_Slice *remaining);


Eina_Error _efl_io_file_efl_io_closer_close(Eo *obj, Efl_Io_File_Data *pd);


Eina_Bool _efl_io_file_efl_io_closer_close_on_exec_set(Eo *obj, Efl_Io_File_Data *pd, Eina_Bool close_on_exec);


Eina_Error _efl_io_file_efl_io_sizer_resize(Eo *obj, Efl_Io_File_Data *pd, uint64_t size);


Eina_Error _efl_io_file_efl_io_positioner_seek(Eo *obj, Efl_Io_File_Data *pd, int64_t offset, Efl_Io_Positioner_Whence whence);


static Eina_Bool
_efl_io_file_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IO_FILE_EXTRA_OPS
#define EFL_IO_FILE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_io_file_flags_set, _efl_io_file_flags_set),
      EFL_OBJECT_OP_FUNC(efl_io_file_flags_get, _efl_io_file_flags_get),
      EFL_OBJECT_OP_FUNC(efl_io_file_mode_set, _efl_io_file_mode_set),
      EFL_OBJECT_OP_FUNC(efl_io_file_mode_get, _efl_io_file_mode_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_io_file_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_io_file_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_io_file_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_loop_fd_file_set, _efl_io_file_efl_loop_fd_fd_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_set, _efl_io_file_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_get, _efl_io_file_efl_file_file_get),
      EFL_OBJECT_OP_FUNC(efl_io_reader_read, _efl_io_file_efl_io_reader_read),
      EFL_OBJECT_OP_FUNC(efl_io_writer_write, _efl_io_file_efl_io_writer_write),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close, _efl_io_file_efl_io_closer_close),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_set, _efl_io_file_efl_io_closer_close_on_exec_set),
      EFL_OBJECT_OP_FUNC(efl_io_sizer_resize, _efl_io_file_efl_io_sizer_resize),
      EFL_OBJECT_OP_FUNC(efl_io_positioner_seek, _efl_io_file_efl_io_positioner_seek),
      EFL_IO_FILE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IO_FILE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IO_FILE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_io_file_class_desc = {
   EO_VERSION,
   "Efl.Io.File",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Io_File_Data),
   _efl_io_file_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_io_file_class_get, &_efl_io_file_class_desc, EFL_LOOP_FD_CLASS, EFL_FILE_INTERFACE, EFL_IO_READER_FD_MIXIN, EFL_IO_WRITER_FD_MIXIN, EFL_IO_CLOSER_FD_MIXIN, EFL_IO_SIZER_FD_MIXIN, EFL_IO_POSITIONER_FD_MIXIN, NULL);
