EWAPI const Efl_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_WRITE_FINISHED =
   EFL_EVENT_DESCRIPTION("write,finished");
EWAPI const Efl_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_READ_FINISHED =
   EFL_EVENT_DESCRIPTION("read,finished");
EWAPI const Efl_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_FINISHED =
   EFL_EVENT_DESCRIPTION("finished");
EWAPI const Efl_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_ERROR =
   EFL_EVENT_DESCRIPTION("error");
EWAPI const Efl_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_PROGRESS =
   EFL_EVENT_DESCRIPTION("progress");
EWAPI const Efl_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_SLICE_CHANGED =
   EFL_EVENT_DESCRIPTION("slice,changed");
EWAPI const Efl_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_LINE =
   EFL_EVENT_DESCRIPTION("line");

void _efl_io_buffered_stream_inner_io_set(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, Efl_Object *io);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_buffered_stream_inner_io_set, EFL_FUNC_CALL(io), Efl_Object *io);

Efl_Object *_efl_io_buffered_stream_inner_io_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_buffered_stream_inner_io_get, Efl_Object *, NULL);

void _efl_io_buffered_stream_max_queue_size_input_set(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, size_t max_queue_size_input);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_buffered_stream_max_queue_size_input_set, EFL_FUNC_CALL(max_queue_size_input), size_t max_queue_size_input);

size_t _efl_io_buffered_stream_max_queue_size_input_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_buffered_stream_max_queue_size_input_get, size_t, 0);

void _efl_io_buffered_stream_max_queue_size_output_set(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, size_t max_queue_size_output);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_buffered_stream_max_queue_size_output_set, EFL_FUNC_CALL(max_queue_size_output), size_t max_queue_size_output);

size_t _efl_io_buffered_stream_max_queue_size_output_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_buffered_stream_max_queue_size_output_get, size_t, 0);

void _efl_io_buffered_stream_line_delimiter_set(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, Eina_Slice slice);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_buffered_stream_line_delimiter_set, EFL_FUNC_CALL(slice), Eina_Slice slice);

Eina_Slice _efl_io_buffered_stream_line_delimiter_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_buffered_stream_line_delimiter_get, Eina_Slice, ((Eina_Slice){0}));

void _efl_io_buffered_stream_timeout_inactivity_set(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, double seconds);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_buffered_stream_timeout_inactivity_set, EFL_FUNC_CALL(seconds), double seconds);

double _efl_io_buffered_stream_timeout_inactivity_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_buffered_stream_timeout_inactivity_get, double, 0);

void _efl_io_buffered_stream_read_chunk_size_set(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, size_t size);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_buffered_stream_read_chunk_size_set, EFL_FUNC_CALL(size), size_t size);

size_t _efl_io_buffered_stream_read_chunk_size_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_buffered_stream_read_chunk_size_get, size_t, 0);

size_t _efl_io_buffered_stream_pending_write_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_buffered_stream_pending_write_get, size_t, 0);

size_t _efl_io_buffered_stream_pending_read_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_buffered_stream_pending_read_get, size_t, 0);

void _efl_io_buffered_stream_progress_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, size_t *read_bytes, size_t *written_bytes);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_io_buffered_stream_progress_get, EFL_FUNC_CALL(read_bytes, written_bytes), size_t *read_bytes, size_t *written_bytes);

Eina_Slice _efl_io_buffered_stream_slice_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_buffered_stream_slice_get, Eina_Slice, ((Eina_Slice){0}));

void _efl_io_buffered_stream_discard(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, size_t amount);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_buffered_stream_discard, EFL_FUNC_CALL(amount), size_t amount);

void _efl_io_buffered_stream_clear(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_io_buffered_stream_clear);

void _efl_io_buffered_stream_eos_mark(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_io_buffered_stream_eos_mark);

Eina_Bool _efl_io_buffered_stream_flush(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, Eina_Bool may_block, Eina_Bool ignore_line_delimiter);

EOAPI EFL_FUNC_BODYV(efl_io_buffered_stream_flush, Eina_Bool, EINA_TRUE /* true */, EFL_FUNC_CALL(may_block, ignore_line_delimiter), Eina_Bool may_block, Eina_Bool ignore_line_delimiter);

Efl_Object *_efl_io_buffered_stream_efl_object_finalize(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);


void _efl_io_buffered_stream_efl_object_destructor(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);


Eina_Error _efl_io_buffered_stream_efl_io_closer_close(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);


Eina_Bool _efl_io_buffered_stream_efl_io_closer_closed_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);


Eina_Bool _efl_io_buffered_stream_efl_io_closer_close_on_exec_set(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, Eina_Bool close_on_exec);


Eina_Bool _efl_io_buffered_stream_efl_io_closer_close_on_exec_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);


void _efl_io_buffered_stream_efl_io_closer_close_on_destructor_set(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, Eina_Bool close_on_destructor);


Eina_Bool _efl_io_buffered_stream_efl_io_closer_close_on_destructor_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);


Eina_Error _efl_io_buffered_stream_efl_io_reader_read(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, Eina_Rw_Slice *rw_slice);


void _efl_io_buffered_stream_efl_io_reader_can_read_set(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, Eina_Bool can_read);


Eina_Bool _efl_io_buffered_stream_efl_io_reader_can_read_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);


void _efl_io_buffered_stream_efl_io_reader_eos_set(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, Eina_Bool is_eos);


Eina_Bool _efl_io_buffered_stream_efl_io_reader_eos_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);


Eina_Error _efl_io_buffered_stream_efl_io_writer_write(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, Eina_Slice *slice, Eina_Slice *remaining);


void _efl_io_buffered_stream_efl_io_writer_can_write_set(Eo *obj, Efl_Io_Buffered_Stream_Data *pd, Eina_Bool can_write);


Eina_Bool _efl_io_buffered_stream_efl_io_writer_can_write_get(Eo *obj, Efl_Io_Buffered_Stream_Data *pd);


static Eina_Bool
_efl_io_buffered_stream_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IO_BUFFERED_STREAM_EXTRA_OPS
#define EFL_IO_BUFFERED_STREAM_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_inner_io_set, _efl_io_buffered_stream_inner_io_set),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_inner_io_get, _efl_io_buffered_stream_inner_io_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_max_queue_size_input_set, _efl_io_buffered_stream_max_queue_size_input_set),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_max_queue_size_input_get, _efl_io_buffered_stream_max_queue_size_input_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_max_queue_size_output_set, _efl_io_buffered_stream_max_queue_size_output_set),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_max_queue_size_output_get, _efl_io_buffered_stream_max_queue_size_output_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_line_delimiter_set, _efl_io_buffered_stream_line_delimiter_set),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_line_delimiter_get, _efl_io_buffered_stream_line_delimiter_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_timeout_inactivity_set, _efl_io_buffered_stream_timeout_inactivity_set),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_timeout_inactivity_get, _efl_io_buffered_stream_timeout_inactivity_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_read_chunk_size_set, _efl_io_buffered_stream_read_chunk_size_set),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_read_chunk_size_get, _efl_io_buffered_stream_read_chunk_size_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_pending_write_get, _efl_io_buffered_stream_pending_write_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_pending_read_get, _efl_io_buffered_stream_pending_read_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_progress_get, _efl_io_buffered_stream_progress_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_slice_get, _efl_io_buffered_stream_slice_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_discard, _efl_io_buffered_stream_discard),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_clear, _efl_io_buffered_stream_clear),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_eos_mark, _efl_io_buffered_stream_eos_mark),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_flush, _efl_io_buffered_stream_flush),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_io_buffered_stream_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_io_buffered_stream_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close, _efl_io_buffered_stream_efl_io_closer_close),
      EFL_OBJECT_OP_FUNC(efl_io_closer_closed_get, _efl_io_buffered_stream_efl_io_closer_closed_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_set, _efl_io_buffered_stream_efl_io_closer_close_on_exec_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_get, _efl_io_buffered_stream_efl_io_closer_close_on_exec_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_set, _efl_io_buffered_stream_efl_io_closer_close_on_destructor_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_get, _efl_io_buffered_stream_efl_io_closer_close_on_destructor_get),
      EFL_OBJECT_OP_FUNC(efl_io_reader_read, _efl_io_buffered_stream_efl_io_reader_read),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_set, _efl_io_buffered_stream_efl_io_reader_can_read_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_get, _efl_io_buffered_stream_efl_io_reader_can_read_get),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_set, _efl_io_buffered_stream_efl_io_reader_eos_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_get, _efl_io_buffered_stream_efl_io_reader_eos_get),
      EFL_OBJECT_OP_FUNC(efl_io_writer_write, _efl_io_buffered_stream_efl_io_writer_write),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_set, _efl_io_buffered_stream_efl_io_writer_can_write_set),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_get, _efl_io_buffered_stream_efl_io_writer_can_write_get),
      EFL_IO_BUFFERED_STREAM_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IO_BUFFERED_STREAM_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IO_BUFFERED_STREAM_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_io_buffered_stream_class_desc = {
   EO_VERSION,
   "Efl.Io.Buffered_Stream",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Io_Buffered_Stream_Data),
   _efl_io_buffered_stream_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_io_buffered_stream_class_get, &_efl_io_buffered_stream_class_desc, EFL_LOOP_USER_CLASS, EFL_IO_READER_INTERFACE, EFL_IO_WRITER_INTERFACE, EFL_IO_CLOSER_MIXIN, NULL);
