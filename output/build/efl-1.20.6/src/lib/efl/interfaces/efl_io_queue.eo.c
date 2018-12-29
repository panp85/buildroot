EWAPI const Efl_Event_Description _EFL_IO_QUEUE_EVENT_SLICE_CHANGED =
   EFL_EVENT_DESCRIPTION("slice,changed");

void _efl_io_queue_preallocate(Eo *obj, Efl_Io_Queue_Data *pd, size_t size);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_queue_preallocate, EFL_FUNC_CALL(size), size_t size);

void _efl_io_queue_limit_set(Eo *obj, Efl_Io_Queue_Data *pd, size_t size);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_queue_limit_set, EFL_FUNC_CALL(size), size_t size);

size_t _efl_io_queue_limit_get(Eo *obj, Efl_Io_Queue_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_queue_limit_get, size_t, 0);

size_t _efl_io_queue_usage_get(Eo *obj, Efl_Io_Queue_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_queue_usage_get, size_t, 0);

Eina_Slice _efl_io_queue_slice_get(Eo *obj, Efl_Io_Queue_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_io_queue_slice_get, Eina_Slice, ((Eina_Slice){0}));

void _efl_io_queue_discard(Eo *obj, Efl_Io_Queue_Data *pd, size_t amount);

EOAPI EFL_VOID_FUNC_BODYV(efl_io_queue_discard, EFL_FUNC_CALL(amount), size_t amount);

void _efl_io_queue_clear(Eo *obj, Efl_Io_Queue_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_io_queue_clear);

void _efl_io_queue_eos_mark(Eo *obj, Efl_Io_Queue_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_io_queue_eos_mark);

Efl_Object *_efl_io_queue_efl_object_finalize(Eo *obj, Efl_Io_Queue_Data *pd);


void _efl_io_queue_efl_object_destructor(Eo *obj, Efl_Io_Queue_Data *pd);


Eina_Error _efl_io_queue_efl_io_reader_read(Eo *obj, Efl_Io_Queue_Data *pd, Eina_Rw_Slice *rw_slice);


void _efl_io_queue_efl_io_reader_can_read_set(Eo *obj, Efl_Io_Queue_Data *pd, Eina_Bool can_read);


Eina_Bool _efl_io_queue_efl_io_reader_can_read_get(Eo *obj, Efl_Io_Queue_Data *pd);


void _efl_io_queue_efl_io_reader_eos_set(Eo *obj, Efl_Io_Queue_Data *pd, Eina_Bool is_eos);


Eina_Bool _efl_io_queue_efl_io_reader_eos_get(Eo *obj, Efl_Io_Queue_Data *pd);


Eina_Error _efl_io_queue_efl_io_writer_write(Eo *obj, Efl_Io_Queue_Data *pd, Eina_Slice *slice, Eina_Slice *remaining);


void _efl_io_queue_efl_io_writer_can_write_set(Eo *obj, Efl_Io_Queue_Data *pd, Eina_Bool can_write);


Eina_Bool _efl_io_queue_efl_io_writer_can_write_get(Eo *obj, Efl_Io_Queue_Data *pd);


Eina_Error _efl_io_queue_efl_io_closer_close(Eo *obj, Efl_Io_Queue_Data *pd);


Eina_Bool _efl_io_queue_efl_io_closer_closed_get(Eo *obj, Efl_Io_Queue_Data *pd);


Eina_Bool _efl_io_queue_efl_io_closer_close_on_exec_set(Eo *obj, Efl_Io_Queue_Data *pd, Eina_Bool close_on_exec);


Eina_Bool _efl_io_queue_efl_io_closer_close_on_exec_get(Eo *obj, Efl_Io_Queue_Data *pd);


void _efl_io_queue_efl_io_closer_close_on_destructor_set(Eo *obj, Efl_Io_Queue_Data *pd, Eina_Bool close_on_destructor);


Eina_Bool _efl_io_queue_efl_io_closer_close_on_destructor_get(Eo *obj, Efl_Io_Queue_Data *pd);


static Eina_Bool
_efl_io_queue_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IO_QUEUE_EXTRA_OPS
#define EFL_IO_QUEUE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_io_queue_preallocate, _efl_io_queue_preallocate),
      EFL_OBJECT_OP_FUNC(efl_io_queue_limit_set, _efl_io_queue_limit_set),
      EFL_OBJECT_OP_FUNC(efl_io_queue_limit_get, _efl_io_queue_limit_get),
      EFL_OBJECT_OP_FUNC(efl_io_queue_usage_get, _efl_io_queue_usage_get),
      EFL_OBJECT_OP_FUNC(efl_io_queue_slice_get, _efl_io_queue_slice_get),
      EFL_OBJECT_OP_FUNC(efl_io_queue_discard, _efl_io_queue_discard),
      EFL_OBJECT_OP_FUNC(efl_io_queue_clear, _efl_io_queue_clear),
      EFL_OBJECT_OP_FUNC(efl_io_queue_eos_mark, _efl_io_queue_eos_mark),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_io_queue_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_io_queue_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_io_reader_read, _efl_io_queue_efl_io_reader_read),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_set, _efl_io_queue_efl_io_reader_can_read_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_get, _efl_io_queue_efl_io_reader_can_read_get),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_set, _efl_io_queue_efl_io_reader_eos_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_get, _efl_io_queue_efl_io_reader_eos_get),
      EFL_OBJECT_OP_FUNC(efl_io_writer_write, _efl_io_queue_efl_io_writer_write),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_set, _efl_io_queue_efl_io_writer_can_write_set),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_get, _efl_io_queue_efl_io_writer_can_write_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close, _efl_io_queue_efl_io_closer_close),
      EFL_OBJECT_OP_FUNC(efl_io_closer_closed_get, _efl_io_queue_efl_io_closer_closed_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_set, _efl_io_queue_efl_io_closer_close_on_exec_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_get, _efl_io_queue_efl_io_closer_close_on_exec_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_set, _efl_io_queue_efl_io_closer_close_on_destructor_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_get, _efl_io_queue_efl_io_closer_close_on_destructor_get),
      EFL_IO_QUEUE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IO_QUEUE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IO_QUEUE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_io_queue_class_desc = {
   EO_VERSION,
   "Efl.Io.Queue",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Io_Queue_Data),
   _efl_io_queue_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_io_queue_class_get, &_efl_io_queue_class_desc, EFL_OBJECT_CLASS, EFL_IO_READER_INTERFACE, EFL_IO_WRITER_INTERFACE, EFL_IO_CLOSER_MIXIN, NULL);
