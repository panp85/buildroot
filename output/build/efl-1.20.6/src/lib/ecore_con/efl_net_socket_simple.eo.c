
void _efl_net_socket_simple_efl_io_buffered_stream_inner_io_set(Eo *obj, Efl_Net_Socket_Simple_Data *pd, Efl_Object *io);


const char *_efl_net_socket_simple_efl_net_socket_address_local_get(Eo *obj, Efl_Net_Socket_Simple_Data *pd);


const char *_efl_net_socket_simple_efl_net_socket_address_remote_get(Eo *obj, Efl_Net_Socket_Simple_Data *pd);


static Eina_Bool
_efl_net_socket_simple_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SOCKET_SIMPLE_EXTRA_OPS
#define EFL_NET_SOCKET_SIMPLE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_io_buffered_stream_inner_io_set, _efl_net_socket_simple_efl_io_buffered_stream_inner_io_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_local_get, _efl_net_socket_simple_efl_net_socket_address_local_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_remote_get, _efl_net_socket_simple_efl_net_socket_address_remote_get),
      EFL_NET_SOCKET_SIMPLE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SOCKET_SIMPLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SOCKET_SIMPLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_socket_simple_class_desc = {
   EO_VERSION,
   "Efl.Net.Socket.Simple",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Socket_Simple_Data),
   _efl_net_socket_simple_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_socket_simple_class_get, &_efl_net_socket_simple_class_desc, EFL_IO_BUFFERED_STREAM_CLASS, EFL_NET_SOCKET_INTERFACE, NULL);
