EWAPI const Efl_Event_Description _EFL_IO_COPIER_EVENT_DONE =
   EFL_EVENT_DESCRIPTION("done");
EWAPI const Efl_Event_Description _EFL_IO_COPIER_EVENT_ERROR =
   EFL_EVENT_DESCRIPTION("error");
EWAPI const Efl_Event_Description _EFL_IO_COPIER_EVENT_PROGRESS =
   EFL_EVENT_DESCRIPTION("progress");
EWAPI const Efl_Event_Description _EFL_IO_COPIER_EVENT_DATA =
   EFL_EVENT_DESCRIPTION("data");
EWAPI const Efl_Event_Description _EFL_IO_COPIER_EVENT_LINE =
   EFL_EVENT_DESCRIPTION("line");

void _efl_io_copier_source_set(Eo *obj, Efl_Io_Copier_Data *pd, Efl_Io_Reader *source);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_copier_source_set, EFL_FUNC_CALL(source), Efl_Io_Reader *source);

Efl_Io_Reader *_efl_io_copier_source_get(Eo *obj, Efl_Io_Copier_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_copier_source_get, Efl_Io_Reader *, NULL);

void _efl_io_copier_destination_set(Eo *obj, Efl_Io_Copier_Data *pd, Efl_Io_Writer *destination);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_copier_destination_set, EFL_FUNC_CALL(destination), Efl_Io_Writer *destination);

Efl_Io_Writer *_efl_io_copier_destination_get(Eo *obj, Efl_Io_Copier_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_copier_destination_get, Efl_Io_Writer *, NULL);

void _efl_io_copier_line_delimiter_set(Eo *obj, Efl_Io_Copier_Data *pd, Eina_Slice slice);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_copier_line_delimiter_set, EFL_FUNC_CALL(slice), Eina_Slice slice);

Eina_Slice _efl_io_copier_line_delimiter_get(Eo *obj, Efl_Io_Copier_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_copier_line_delimiter_get, Eina_Slice, ((Eina_Slice){0}));

void _efl_io_copier_buffer_limit_set(Eo *obj, Efl_Io_Copier_Data *pd, size_t size);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_copier_buffer_limit_set, EFL_FUNC_CALL(size), size_t size);

size_t _efl_io_copier_buffer_limit_get(Eo *obj, Efl_Io_Copier_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_copier_buffer_limit_get, size_t, 0);

void _efl_io_copier_read_chunk_size_set(Eo *obj, Efl_Io_Copier_Data *pd, size_t size);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_copier_read_chunk_size_set, EFL_FUNC_CALL(size), size_t size);

size_t _efl_io_copier_read_chunk_size_get(Eo *obj, Efl_Io_Copier_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_copier_read_chunk_size_get, size_t, 0);

void _efl_io_copier_progress_get(Eo *obj, Efl_Io_Copier_Data *pd, uint64_t *read, uint64_t *written, uint64_t *total);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_io_copier_progress_get, EFL_FUNC_CALL(read, written, total), uint64_t *read, uint64_t *written, uint64_t *total);

void _efl_io_copier_timeout_inactivity_set(Eo *obj, Efl_Io_Copier_Data *pd, double seconds);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_copier_timeout_inactivity_set, EFL_FUNC_CALL(seconds), double seconds);

double _efl_io_copier_timeout_inactivity_get(Eo *obj, Efl_Io_Copier_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_copier_timeout_inactivity_get, double, 0);

void _efl_io_copier_done_set(Eo *obj, Efl_Io_Copier_Data *pd, Eina_Bool done);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_copier_done_set, EFL_FUNC_CALL(done), Eina_Bool done);

Eina_Bool _efl_io_copier_done_get(Eo *obj, Efl_Io_Copier_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_copier_done_get, Eina_Bool, 0);

Eina_Binbuf *_efl_io_copier_binbuf_steal(Eo *obj, Efl_Io_Copier_Data *pd);

EOAPI EFL_FUNC_BODY(efl_io_copier_binbuf_steal, Eina_Binbuf *, NULL);

size_t _efl_io_copier_pending_size_get(Eo *obj, Efl_Io_Copier_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_copier_pending_size_get, size_t, 0);

Eina_Bool _efl_io_copier_flush(Eo *obj, Efl_Io_Copier_Data *pd, Eina_Bool may_block, Eina_Bool ignore_line_delimiter);

EOAPI EFL_FUNC_BODYV(efl_io_copier_flush, Eina_Bool, EINA_TRUE /* true */, EFL_FUNC_CALL(may_block, ignore_line_delimiter), Eina_Bool may_block, Eina_Bool ignore_line_delimiter);

Efl_Object *_efl_io_copier_efl_object_constructor(Eo *obj, Efl_Io_Copier_Data *pd);


void _efl_io_copier_efl_object_destructor(Eo *obj, Efl_Io_Copier_Data *pd);


Efl_Object *_efl_io_copier_efl_object_finalize(Eo *obj, Efl_Io_Copier_Data *pd);


Eina_Error _efl_io_copier_efl_io_closer_close(Eo *obj, Efl_Io_Copier_Data *pd);


Eina_Bool _efl_io_copier_efl_io_closer_closed_get(Eo *obj, Efl_Io_Copier_Data *pd);


Eina_Bool _efl_io_copier_efl_io_closer_close_on_exec_set(Eo *obj, Efl_Io_Copier_Data *pd, Eina_Bool close_on_exec);


Eina_Bool _efl_io_copier_efl_io_closer_close_on_exec_get(Eo *obj, Efl_Io_Copier_Data *pd);


void _efl_io_copier_efl_io_closer_close_on_destructor_set(Eo *obj, Efl_Io_Copier_Data *pd, Eina_Bool close_on_destructor);


Eina_Bool _efl_io_copier_efl_io_closer_close_on_destructor_get(Eo *obj, Efl_Io_Copier_Data *pd);


static Eina_Bool
_efl_io_copier_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IO_COPIER_EXTRA_OPS
#define EFL_IO_COPIER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_io_copier_source_set, _efl_io_copier_source_set),
      EFL_OBJECT_OP_FUNC(efl_io_copier_source_get, _efl_io_copier_source_get),
      EFL_OBJECT_OP_FUNC(efl_io_copier_destination_set, _efl_io_copier_destination_set),
      EFL_OBJECT_OP_FUNC(efl_io_copier_destination_get, _efl_io_copier_destination_get),
      EFL_OBJECT_OP_FUNC(efl_io_copier_line_delimiter_set, _efl_io_copier_line_delimiter_set),
      EFL_OBJECT_OP_FUNC(efl_io_copier_line_delimiter_get, _efl_io_copier_line_delimiter_get),
      EFL_OBJECT_OP_FUNC(efl_io_copier_buffer_limit_set, _efl_io_copier_buffer_limit_set),
      EFL_OBJECT_OP_FUNC(efl_io_copier_buffer_limit_get, _efl_io_copier_buffer_limit_get),
      EFL_OBJECT_OP_FUNC(efl_io_copier_read_chunk_size_set, _efl_io_copier_read_chunk_size_set),
      EFL_OBJECT_OP_FUNC(efl_io_copier_read_chunk_size_get, _efl_io_copier_read_chunk_size_get),
      EFL_OBJECT_OP_FUNC(efl_io_copier_progress_get, _efl_io_copier_progress_get),
      EFL_OBJECT_OP_FUNC(efl_io_copier_timeout_inactivity_set, _efl_io_copier_timeout_inactivity_set),
      EFL_OBJECT_OP_FUNC(efl_io_copier_timeout_inactivity_get, _efl_io_copier_timeout_inactivity_get),
      EFL_OBJECT_OP_FUNC(efl_io_copier_done_set, _efl_io_copier_done_set),
      EFL_OBJECT_OP_FUNC(efl_io_copier_done_get, _efl_io_copier_done_get),
      EFL_OBJECT_OP_FUNC(efl_io_copier_binbuf_steal, _efl_io_copier_binbuf_steal),
      EFL_OBJECT_OP_FUNC(efl_io_copier_pending_size_get, _efl_io_copier_pending_size_get),
      EFL_OBJECT_OP_FUNC(efl_io_copier_flush, _efl_io_copier_flush),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_io_copier_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_io_copier_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_io_copier_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close, _efl_io_copier_efl_io_closer_close),
      EFL_OBJECT_OP_FUNC(efl_io_closer_closed_get, _efl_io_copier_efl_io_closer_closed_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_set, _efl_io_copier_efl_io_closer_close_on_exec_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_get, _efl_io_copier_efl_io_closer_close_on_exec_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_set, _efl_io_copier_efl_io_closer_close_on_destructor_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_get, _efl_io_copier_efl_io_closer_close_on_destructor_get),
      EFL_IO_COPIER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IO_COPIER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IO_COPIER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_io_copier_class_desc = {
   EO_VERSION,
   "Efl.Io.Copier",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Io_Copier_Data),
   _efl_io_copier_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_io_copier_class_get, &_efl_io_copier_class_desc, EFL_LOOP_USER_CLASS, EFL_IO_CLOSER_MIXIN, NULL);
