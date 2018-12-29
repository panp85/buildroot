EWAPI const Efl_Event_Description _EFL_IO_BUFFER_EVENT_POSITION_READ_CHANGED =
   EFL_EVENT_DESCRIPTION("position_read,changed");
EWAPI const Efl_Event_Description _EFL_IO_BUFFER_EVENT_POSITION_WRITE_CHANGED =
   EFL_EVENT_DESCRIPTION("position_write,changed");
EWAPI const Efl_Event_Description _EFL_IO_BUFFER_EVENT_REALLOCATED =
   EFL_EVENT_DESCRIPTION("reallocated");

void _efl_io_buffer_preallocate(Eo *obj, Efl_Io_Buffer_Data *pd, size_t size);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_buffer_preallocate, EFL_FUNC_CALL(size), size_t size);

void _efl_io_buffer_adopt_readonly(Eo *obj, Efl_Io_Buffer_Data *pd, const Eina_Slice slice);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_buffer_adopt_readonly, EFL_FUNC_CALL(slice), const Eina_Slice slice);

void _efl_io_buffer_adopt_readwrite(Eo *obj, Efl_Io_Buffer_Data *pd, Eina_Rw_Slice slice);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_buffer_adopt_readwrite, EFL_FUNC_CALL(slice), Eina_Rw_Slice slice);

void _efl_io_buffer_limit_set(Eo *obj, Efl_Io_Buffer_Data *pd, size_t size);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_buffer_limit_set, EFL_FUNC_CALL(size), size_t size);

size_t _efl_io_buffer_limit_get(Eo *obj, Efl_Io_Buffer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_buffer_limit_get, size_t, 0);

Eina_Bool _efl_io_buffer_position_read_set(Eo *obj, Efl_Io_Buffer_Data *pd, uint64_t position);

EOAPI EFL_FUNC_BODYV(efl_io_buffer_position_read_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(position), uint64_t position);

uint64_t _efl_io_buffer_position_read_get(Eo *obj, Efl_Io_Buffer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_buffer_position_read_get, uint64_t, 0);

Eina_Bool _efl_io_buffer_position_write_set(Eo *obj, Efl_Io_Buffer_Data *pd, uint64_t position);

EOAPI EFL_FUNC_BODYV(efl_io_buffer_position_write_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(position), uint64_t position);

uint64_t _efl_io_buffer_position_write_get(Eo *obj, Efl_Io_Buffer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_buffer_position_write_get, uint64_t, 0);

Eina_Slice _efl_io_buffer_slice_get(Eo *obj, Efl_Io_Buffer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_buffer_slice_get, Eina_Slice, ((Eina_Slice){0}));

Eina_Binbuf *_efl_io_buffer_binbuf_steal(Eo *obj, Efl_Io_Buffer_Data *pd);

EOAPI EFL_FUNC_BODY(efl_io_buffer_binbuf_steal, Eina_Binbuf *, NULL);

Efl_Object *_efl_io_buffer_efl_object_finalize(Eo *obj, Efl_Io_Buffer_Data *pd);


void _efl_io_buffer_efl_object_destructor(Eo *obj, Efl_Io_Buffer_Data *pd);


Eina_Error _efl_io_buffer_efl_io_reader_read(Eo *obj, Efl_Io_Buffer_Data *pd, Eina_Rw_Slice *rw_slice);


void _efl_io_buffer_efl_io_reader_can_read_set(Eo *obj, Efl_Io_Buffer_Data *pd, Eina_Bool can_read);


Eina_Bool _efl_io_buffer_efl_io_reader_can_read_get(Eo *obj, Efl_Io_Buffer_Data *pd);


void _efl_io_buffer_efl_io_reader_eos_set(Eo *obj, Efl_Io_Buffer_Data *pd, Eina_Bool is_eos);


Eina_Bool _efl_io_buffer_efl_io_reader_eos_get(Eo *obj, Efl_Io_Buffer_Data *pd);


Eina_Error _efl_io_buffer_efl_io_writer_write(Eo *obj, Efl_Io_Buffer_Data *pd, Eina_Slice *slice, Eina_Slice *remaining);


void _efl_io_buffer_efl_io_writer_can_write_set(Eo *obj, Efl_Io_Buffer_Data *pd, Eina_Bool can_write);


Eina_Bool _efl_io_buffer_efl_io_writer_can_write_get(Eo *obj, Efl_Io_Buffer_Data *pd);


Eina_Error _efl_io_buffer_efl_io_closer_close(Eo *obj, Efl_Io_Buffer_Data *pd);


Eina_Bool _efl_io_buffer_efl_io_closer_closed_get(Eo *obj, Efl_Io_Buffer_Data *pd);


Eina_Bool _efl_io_buffer_efl_io_closer_close_on_exec_set(Eo *obj, Efl_Io_Buffer_Data *pd, Eina_Bool close_on_exec);


Eina_Bool _efl_io_buffer_efl_io_closer_close_on_exec_get(Eo *obj, Efl_Io_Buffer_Data *pd);


void _efl_io_buffer_efl_io_closer_close_on_destructor_set(Eo *obj, Efl_Io_Buffer_Data *pd, Eina_Bool close_on_destructor);


Eina_Bool _efl_io_buffer_efl_io_closer_close_on_destructor_get(Eo *obj, Efl_Io_Buffer_Data *pd);


Eina_Error _efl_io_buffer_efl_io_sizer_resize(Eo *obj, Efl_Io_Buffer_Data *pd, uint64_t size);


uint64_t _efl_io_buffer_efl_io_sizer_size_get(Eo *obj, Efl_Io_Buffer_Data *pd);


Eina_Error _efl_io_buffer_efl_io_positioner_seek(Eo *obj, Efl_Io_Buffer_Data *pd, int64_t offset, Efl_Io_Positioner_Whence whence);


uint64_t _efl_io_buffer_efl_io_positioner_position_get(Eo *obj, Efl_Io_Buffer_Data *pd);


static Eina_Bool
_efl_io_buffer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IO_BUFFER_EXTRA_OPS
#define EFL_IO_BUFFER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_io_buffer_preallocate, _efl_io_buffer_preallocate),
      EFL_OBJECT_OP_FUNC(efl_io_buffer_adopt_readonly, _efl_io_buffer_adopt_readonly),
      EFL_OBJECT_OP_FUNC(efl_io_buffer_adopt_readwrite, _efl_io_buffer_adopt_readwrite),
      EFL_OBJECT_OP_FUNC(efl_io_buffer_limit_set, _efl_io_buffer_limit_set),
      EFL_OBJECT_OP_FUNC(efl_io_buffer_limit_get, _efl_io_buffer_limit_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffer_position_read_set, _efl_io_buffer_position_read_set),
      EFL_OBJECT_OP_FUNC(efl_io_buffer_position_read_get, _efl_io_buffer_position_read_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffer_position_write_set, _efl_io_buffer_position_write_set),
      EFL_OBJECT_OP_FUNC(efl_io_buffer_position_write_get, _efl_io_buffer_position_write_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffer_slice_get, _efl_io_buffer_slice_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffer_binbuf_steal, _efl_io_buffer_binbuf_steal),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_io_buffer_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_io_buffer_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_io_reader_read, _efl_io_buffer_efl_io_reader_read),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_set, _efl_io_buffer_efl_io_reader_can_read_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_get, _efl_io_buffer_efl_io_reader_can_read_get),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_set, _efl_io_buffer_efl_io_reader_eos_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_get, _efl_io_buffer_efl_io_reader_eos_get),
      EFL_OBJECT_OP_FUNC(efl_io_writer_write, _efl_io_buffer_efl_io_writer_write),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_set, _efl_io_buffer_efl_io_writer_can_write_set),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_get, _efl_io_buffer_efl_io_writer_can_write_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close, _efl_io_buffer_efl_io_closer_close),
      EFL_OBJECT_OP_FUNC(efl_io_closer_closed_get, _efl_io_buffer_efl_io_closer_closed_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_set, _efl_io_buffer_efl_io_closer_close_on_exec_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_get, _efl_io_buffer_efl_io_closer_close_on_exec_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_set, _efl_io_buffer_efl_io_closer_close_on_destructor_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_get, _efl_io_buffer_efl_io_closer_close_on_destructor_get),
      EFL_OBJECT_OP_FUNC(efl_io_sizer_resize, _efl_io_buffer_efl_io_sizer_resize),
      EFL_OBJECT_OP_FUNC(efl_io_sizer_size_get, _efl_io_buffer_efl_io_sizer_size_get),
      EFL_OBJECT_OP_FUNC(efl_io_positioner_seek, _efl_io_buffer_efl_io_positioner_seek),
      EFL_OBJECT_OP_FUNC(efl_io_positioner_position_get, _efl_io_buffer_efl_io_positioner_position_get),
      EFL_IO_BUFFER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IO_BUFFER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IO_BUFFER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_io_buffer_class_desc = {
   EO_VERSION,
   "Efl.Io.Buffer",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Io_Buffer_Data),
   _efl_io_buffer_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_io_buffer_class_get, &_efl_io_buffer_class_desc, EFL_OBJECT_CLASS, EFL_IO_READER_INTERFACE, EFL_IO_WRITER_INTERFACE, EFL_IO_CLOSER_MIXIN, EFL_IO_SIZER_MIXIN, EFL_IO_POSITIONER_MIXIN, NULL);
