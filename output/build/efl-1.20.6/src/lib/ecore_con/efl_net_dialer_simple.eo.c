
void _efl_net_dialer_simple_inner_class_set(Eo *obj, Efl_Net_Dialer_Simple_Data *pd, const Efl_Class *klass);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_simple_inner_class_set, EFL_FUNC_CALL(klass), const Efl_Class *klass);

const Efl_Class *_efl_net_dialer_simple_inner_class_get(Eo *obj, Efl_Net_Dialer_Simple_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_simple_inner_class_get, const Efl_Class *, NULL);

Efl_Object *_efl_net_dialer_simple_efl_object_finalize(Eo *obj, Efl_Net_Dialer_Simple_Data *pd);


void _efl_net_dialer_simple_efl_object_destructor(Eo *obj, Efl_Net_Dialer_Simple_Data *pd);


void _efl_net_dialer_simple_efl_io_buffered_stream_inner_io_set(Eo *obj, Efl_Net_Dialer_Simple_Data *pd, Efl_Object *io);


Eina_Error _efl_net_dialer_simple_efl_net_dialer_dial(Eo *obj, Efl_Net_Dialer_Simple_Data *pd, const char *address);


const char *_efl_net_dialer_simple_efl_net_dialer_address_dial_get(Eo *obj, Efl_Net_Dialer_Simple_Data *pd);


Eina_Bool _efl_net_dialer_simple_efl_net_dialer_connected_get(Eo *obj, Efl_Net_Dialer_Simple_Data *pd);


void _efl_net_dialer_simple_efl_net_dialer_proxy_set(Eo *obj, Efl_Net_Dialer_Simple_Data *pd, const char *proxy_url);


const char *_efl_net_dialer_simple_efl_net_dialer_proxy_get(Eo *obj, Efl_Net_Dialer_Simple_Data *pd);


void _efl_net_dialer_simple_efl_net_dialer_timeout_dial_set(Eo *obj, Efl_Net_Dialer_Simple_Data *pd, double seconds);


double _efl_net_dialer_simple_efl_net_dialer_timeout_dial_get(Eo *obj, Efl_Net_Dialer_Simple_Data *pd);


void _efl_net_dialer_simple_efl_io_buffered_stream_timeout_inactivity_set(Eo *obj, Efl_Net_Dialer_Simple_Data *pd, double seconds);


double _efl_net_dialer_simple_efl_io_buffered_stream_timeout_inactivity_get(Eo *obj, Efl_Net_Dialer_Simple_Data *pd);


void _efl_net_dialer_simple_efl_io_buffered_stream_max_queue_size_input_set(Eo *obj, Efl_Net_Dialer_Simple_Data *pd, size_t max_queue_size_input);


size_t _efl_net_dialer_simple_efl_io_buffered_stream_max_queue_size_input_get(Eo *obj, Efl_Net_Dialer_Simple_Data *pd);


void _efl_net_dialer_simple_efl_io_buffered_stream_max_queue_size_output_set(Eo *obj, Efl_Net_Dialer_Simple_Data *pd, size_t max_queue_size_output);


size_t _efl_net_dialer_simple_efl_io_buffered_stream_max_queue_size_output_get(Eo *obj, Efl_Net_Dialer_Simple_Data *pd);


void _efl_net_dialer_simple_efl_io_buffered_stream_read_chunk_size_set(Eo *obj, Efl_Net_Dialer_Simple_Data *pd, size_t size);


size_t _efl_net_dialer_simple_efl_io_buffered_stream_read_chunk_size_get(Eo *obj, Efl_Net_Dialer_Simple_Data *pd);


void _efl_net_dialer_simple_efl_io_buffered_stream_line_delimiter_set(Eo *obj, Efl_Net_Dialer_Simple_Data *pd, Eina_Slice slice);


Eina_Slice _efl_net_dialer_simple_efl_io_buffered_stream_line_delimiter_get(Eo *obj, Efl_Net_Dialer_Simple_Data *pd);


static Eina_Bool
_efl_net_dialer_simple_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_DIALER_SIMPLE_EXTRA_OPS
#define EFL_NET_DIALER_SIMPLE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_dialer_simple_inner_class_set, _efl_net_dialer_simple_inner_class_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_simple_inner_class_get, _efl_net_dialer_simple_inner_class_get),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_net_dialer_simple_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_dialer_simple_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_inner_io_set, _efl_net_dialer_simple_efl_io_buffered_stream_inner_io_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_dial, _efl_net_dialer_simple_efl_net_dialer_dial),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_address_dial_get, _efl_net_dialer_simple_efl_net_dialer_address_dial_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_connected_get, _efl_net_dialer_simple_efl_net_dialer_connected_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_proxy_set, _efl_net_dialer_simple_efl_net_dialer_proxy_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_proxy_get, _efl_net_dialer_simple_efl_net_dialer_proxy_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_timeout_dial_set, _efl_net_dialer_simple_efl_net_dialer_timeout_dial_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_timeout_dial_get, _efl_net_dialer_simple_efl_net_dialer_timeout_dial_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_timeout_inactivity_set, _efl_net_dialer_simple_efl_io_buffered_stream_timeout_inactivity_set),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_timeout_inactivity_get, _efl_net_dialer_simple_efl_io_buffered_stream_timeout_inactivity_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_max_queue_size_input_set, _efl_net_dialer_simple_efl_io_buffered_stream_max_queue_size_input_set),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_max_queue_size_input_get, _efl_net_dialer_simple_efl_io_buffered_stream_max_queue_size_input_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_max_queue_size_output_set, _efl_net_dialer_simple_efl_io_buffered_stream_max_queue_size_output_set),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_max_queue_size_output_get, _efl_net_dialer_simple_efl_io_buffered_stream_max_queue_size_output_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_read_chunk_size_set, _efl_net_dialer_simple_efl_io_buffered_stream_read_chunk_size_set),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_read_chunk_size_get, _efl_net_dialer_simple_efl_io_buffered_stream_read_chunk_size_get),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_line_delimiter_set, _efl_net_dialer_simple_efl_io_buffered_stream_line_delimiter_set),
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_line_delimiter_get, _efl_net_dialer_simple_efl_io_buffered_stream_line_delimiter_get),
      EFL_NET_DIALER_SIMPLE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_DIALER_SIMPLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_DIALER_SIMPLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_dialer_simple_class_desc = {
   EO_VERSION,
   "Efl.Net.Dialer.Simple",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Dialer_Simple_Data),
   _efl_net_dialer_simple_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_dialer_simple_class_get, &_efl_net_dialer_simple_class_desc, EFL_NET_SOCKET_SIMPLE_CLASS, EFL_NET_DIALER_INTERFACE, NULL);
