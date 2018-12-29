
size_t _efl_net_server_udp_client_next_datagram_size_query(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd);

EOAPI EFL_FUNC_BODY(efl_net_server_udp_client_next_datagram_size_query, size_t, 0);

Efl_Object *_efl_net_server_udp_client_efl_object_finalize(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd);


void _efl_net_server_udp_client_efl_object_destructor(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd);


Eina_Error _efl_net_server_udp_client_efl_io_closer_close(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd);


Eina_Bool _efl_net_server_udp_client_efl_io_closer_closed_get(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd);


void _efl_net_server_udp_client_efl_io_closer_close_on_destructor_set(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd, Eina_Bool close_on_destructor);


Eina_Bool _efl_net_server_udp_client_efl_io_closer_close_on_destructor_get(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd);


Eina_Bool _efl_net_server_udp_client_efl_io_closer_close_on_exec_set(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd, Eina_Bool close_on_exec);


Eina_Bool _efl_net_server_udp_client_efl_io_closer_close_on_exec_get(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd);


void _efl_net_server_udp_client_efl_io_reader_can_read_set(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd, Eina_Bool can_read);


Eina_Bool _efl_net_server_udp_client_efl_io_reader_can_read_get(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd);


void _efl_net_server_udp_client_efl_io_reader_eos_set(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd, Eina_Bool is_eos);


Eina_Bool _efl_net_server_udp_client_efl_io_reader_eos_get(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd);


Eina_Error _efl_net_server_udp_client_efl_io_reader_read(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd, Eina_Rw_Slice *rw_slice);


Eina_Error _efl_net_server_udp_client_efl_io_writer_write(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd, Eina_Slice *slice, Eina_Slice *remaining);


void _efl_net_server_udp_client_efl_io_writer_can_write_set(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd, Eina_Bool can_write);


Eina_Bool _efl_net_server_udp_client_efl_io_writer_can_write_get(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd);


void _efl_net_server_udp_client_efl_net_socket_address_local_set(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd, const char *address);


const char *_efl_net_server_udp_client_efl_net_socket_address_local_get(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd);


void _efl_net_server_udp_client_efl_net_socket_address_remote_set(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd, const char *address);


const char *_efl_net_server_udp_client_efl_net_socket_address_remote_get(Eo *obj, Efl_Net_Server_Udp_Client_Data *pd);


static Eina_Bool
_efl_net_server_udp_client_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SERVER_UDP_CLIENT_EXTRA_OPS
#define EFL_NET_SERVER_UDP_CLIENT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_server_udp_client_next_datagram_size_query, _efl_net_server_udp_client_next_datagram_size_query),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_net_server_udp_client_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_server_udp_client_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close, _efl_net_server_udp_client_efl_io_closer_close),
      EFL_OBJECT_OP_FUNC(efl_io_closer_closed_get, _efl_net_server_udp_client_efl_io_closer_closed_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_set, _efl_net_server_udp_client_efl_io_closer_close_on_destructor_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_get, _efl_net_server_udp_client_efl_io_closer_close_on_destructor_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_set, _efl_net_server_udp_client_efl_io_closer_close_on_exec_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_get, _efl_net_server_udp_client_efl_io_closer_close_on_exec_get),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_set, _efl_net_server_udp_client_efl_io_reader_can_read_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_get, _efl_net_server_udp_client_efl_io_reader_can_read_get),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_set, _efl_net_server_udp_client_efl_io_reader_eos_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_get, _efl_net_server_udp_client_efl_io_reader_eos_get),
      EFL_OBJECT_OP_FUNC(efl_io_reader_read, _efl_net_server_udp_client_efl_io_reader_read),
      EFL_OBJECT_OP_FUNC(efl_io_writer_write, _efl_net_server_udp_client_efl_io_writer_write),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_set, _efl_net_server_udp_client_efl_io_writer_can_write_set),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_get, _efl_net_server_udp_client_efl_io_writer_can_write_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_local_set, _efl_net_server_udp_client_efl_net_socket_address_local_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_local_get, _efl_net_server_udp_client_efl_net_socket_address_local_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_remote_set, _efl_net_server_udp_client_efl_net_socket_address_remote_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_remote_get, _efl_net_server_udp_client_efl_net_socket_address_remote_get),
      EFL_NET_SERVER_UDP_CLIENT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SERVER_UDP_CLIENT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SERVER_UDP_CLIENT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_server_udp_client_class_desc = {
   EO_VERSION,
   "Efl.Net.Server.Udp.Client",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Server_Udp_Client_Data),
   _efl_net_server_udp_client_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_server_udp_client_class_get, &_efl_net_server_udp_client_class_desc, EFL_OBJECT_CLASS, EFL_NET_SOCKET_INTERFACE, NULL);
