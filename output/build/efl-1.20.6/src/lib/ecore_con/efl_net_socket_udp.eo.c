
size_t _efl_net_socket_udp_next_datagram_size_query(Eo *obj, Efl_Net_Socket_Udp_Data *pd);

EOAPI EFL_FUNC_BODY(efl_net_socket_udp_next_datagram_size_query, size_t, 0);

Eina_Bool _efl_net_socket_udp_cork_set(Eo *obj, Efl_Net_Socket_Udp_Data *pd, Eina_Bool cork);

EOAPI EFL_FUNC_BODYV(efl_net_socket_udp_cork_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(cork), Eina_Bool cork);

Eina_Bool _efl_net_socket_udp_cork_get(Eo *obj, Efl_Net_Socket_Udp_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_udp_cork_get, Eina_Bool, 0);

Eina_Bool _efl_net_socket_udp_dont_route_set(Eo *obj, Efl_Net_Socket_Udp_Data *pd, Eina_Bool dont_route);

EOAPI EFL_FUNC_BODYV(efl_net_socket_udp_dont_route_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(dont_route), Eina_Bool dont_route);

Eina_Bool _efl_net_socket_udp_dont_route_get(Eo *obj, Efl_Net_Socket_Udp_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_udp_dont_route_get, Eina_Bool, 0);

Eina_Bool _efl_net_socket_udp_reuse_address_set(Eo *obj, Efl_Net_Socket_Udp_Data *pd, Eina_Bool reuse_address);

EOAPI EFL_FUNC_BODYV(efl_net_socket_udp_reuse_address_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(reuse_address), Eina_Bool reuse_address);

Eina_Bool _efl_net_socket_udp_reuse_address_get(Eo *obj, Efl_Net_Socket_Udp_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_udp_reuse_address_get, Eina_Bool, 0);

Eina_Bool _efl_net_socket_udp_reuse_port_set(Eo *obj, Efl_Net_Socket_Udp_Data *pd, Eina_Bool reuse_port);

EOAPI EFL_FUNC_BODYV(efl_net_socket_udp_reuse_port_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(reuse_port), Eina_Bool reuse_port);

Eina_Bool _efl_net_socket_udp_reuse_port_get(Eo *obj, Efl_Net_Socket_Udp_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_udp_reuse_port_get, Eina_Bool, 0);

Eina_Error _efl_net_socket_udp_multicast_join(Eo *obj, Efl_Net_Socket_Udp_Data *pd, const char *address);

EOAPI EFL_FUNC_BODYV(efl_net_socket_udp_multicast_join, Eina_Error, 0, EFL_FUNC_CALL(address), const char *address);

Eina_Error _efl_net_socket_udp_multicast_leave(Eo *obj, Efl_Net_Socket_Udp_Data *pd, const char *address);

EOAPI EFL_FUNC_BODYV(efl_net_socket_udp_multicast_leave, Eina_Error, 0, EFL_FUNC_CALL(address), const char *address);

Eina_Iterator *_efl_net_socket_udp_multicast_groups_get(Eo *obj, Efl_Net_Socket_Udp_Data *pd);

EOAPI EFL_FUNC_BODY(efl_net_socket_udp_multicast_groups_get, Eina_Iterator *, NULL);

Eina_Error _efl_net_socket_udp_multicast_time_to_live_set(Eo *obj, Efl_Net_Socket_Udp_Data *pd, uint8_t ttl);

EOAPI EFL_FUNC_BODYV(efl_net_socket_udp_multicast_time_to_live_set, Eina_Error, 0, EFL_FUNC_CALL(ttl), uint8_t ttl);

uint8_t _efl_net_socket_udp_multicast_time_to_live_get(Eo *obj, Efl_Net_Socket_Udp_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_udp_multicast_time_to_live_get, uint8_t, 0);

Eina_Error _efl_net_socket_udp_multicast_loopback_set(Eo *obj, Efl_Net_Socket_Udp_Data *pd, Eina_Bool loopback);

EOAPI EFL_FUNC_BODYV(efl_net_socket_udp_multicast_loopback_set, Eina_Error, 0, EFL_FUNC_CALL(loopback), Eina_Bool loopback);

Eina_Bool _efl_net_socket_udp_multicast_loopback_get(Eo *obj, Efl_Net_Socket_Udp_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_udp_multicast_loopback_get, Eina_Bool, 0);

Eina_Error _efl_net_socket_udp_bind_set(Eo *obj, Efl_Net_Socket_Udp_Data *pd, const char *address);

EOAPI EFL_FUNC_BODYV(efl_net_socket_udp_bind_set, Eina_Error, 0, EFL_FUNC_CALL(address), const char *address);

const char *_efl_net_socket_udp_bind_get(Eo *obj, Efl_Net_Socket_Udp_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_udp_bind_get, const char *, NULL);

void _efl_net_socket_udp_init(Eo *obj, Efl_Net_Socket_Udp_Data *pd, Efl_Net_Ip_Address *remote_address);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_socket_udp_init, EFL_FUNC_CALL(remote_address), Efl_Net_Ip_Address *remote_address);

Efl_Object *_efl_net_socket_udp_efl_object_constructor(Eo *obj, Efl_Net_Socket_Udp_Data *pd);


void _efl_net_socket_udp_efl_object_destructor(Eo *obj, Efl_Net_Socket_Udp_Data *pd);


void _efl_net_socket_udp_efl_loop_fd_fd_set(Eo *obj, Efl_Net_Socket_Udp_Data *pd, int fd);


Eina_Error _efl_net_socket_udp_efl_io_reader_read(Eo *obj, Efl_Net_Socket_Udp_Data *pd, Eina_Rw_Slice *rw_slice);


Eina_Error _efl_net_socket_udp_efl_io_writer_write(Eo *obj, Efl_Net_Socket_Udp_Data *pd, Eina_Slice *slice, Eina_Slice *remaining);


static Eina_Bool
_efl_net_socket_udp_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SOCKET_UDP_EXTRA_OPS
#define EFL_NET_SOCKET_UDP_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_next_datagram_size_query, _efl_net_socket_udp_next_datagram_size_query),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_cork_set, _efl_net_socket_udp_cork_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_cork_get, _efl_net_socket_udp_cork_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_dont_route_set, _efl_net_socket_udp_dont_route_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_dont_route_get, _efl_net_socket_udp_dont_route_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_reuse_address_set, _efl_net_socket_udp_reuse_address_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_reuse_address_get, _efl_net_socket_udp_reuse_address_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_reuse_port_set, _efl_net_socket_udp_reuse_port_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_reuse_port_get, _efl_net_socket_udp_reuse_port_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_multicast_join, _efl_net_socket_udp_multicast_join),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_multicast_leave, _efl_net_socket_udp_multicast_leave),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_multicast_groups_get, _efl_net_socket_udp_multicast_groups_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_multicast_time_to_live_set, _efl_net_socket_udp_multicast_time_to_live_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_multicast_time_to_live_get, _efl_net_socket_udp_multicast_time_to_live_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_multicast_loopback_set, _efl_net_socket_udp_multicast_loopback_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_multicast_loopback_get, _efl_net_socket_udp_multicast_loopback_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_bind_set, _efl_net_socket_udp_bind_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_bind_get, _efl_net_socket_udp_bind_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_udp_init, _efl_net_socket_udp_init),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_net_socket_udp_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_socket_udp_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_loop_fd_set, _efl_net_socket_udp_efl_loop_fd_fd_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_read, _efl_net_socket_udp_efl_io_reader_read),
      EFL_OBJECT_OP_FUNC(efl_io_writer_write, _efl_net_socket_udp_efl_io_writer_write),
      EFL_NET_SOCKET_UDP_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SOCKET_UDP_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SOCKET_UDP_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_socket_udp_class_desc = {
   EO_VERSION,
   "Efl.Net.Socket.Udp",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Socket_Udp_Data),
   _efl_net_socket_udp_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_socket_udp_class_get, &_efl_net_socket_udp_class_desc, EFL_NET_SOCKET_FD_CLASS, NULL);
