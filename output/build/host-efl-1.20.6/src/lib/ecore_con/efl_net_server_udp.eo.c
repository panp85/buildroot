
void _efl_net_server_udp_ipv6_only_set(Eo *obj, Efl_Net_Server_Udp_Data *pd, Eina_Bool ipv6_only);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_server_udp_ipv6_only_set, EFL_FUNC_CALL(ipv6_only), Eina_Bool ipv6_only);

Eina_Bool _efl_net_server_udp_ipv6_only_get(Eo *obj, Efl_Net_Server_Udp_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_udp_ipv6_only_get, Eina_Bool, 0);

Eina_Bool _efl_net_server_udp_dont_route_set(Eo *obj, Efl_Net_Server_Udp_Data *pd, Eina_Bool dont_route);

EOAPI EFL_FUNC_BODYV(efl_net_server_udp_dont_route_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(dont_route), Eina_Bool dont_route);

Eina_Bool _efl_net_server_udp_dont_route_get(Eo *obj, Efl_Net_Server_Udp_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_udp_dont_route_get, Eina_Bool, 0);

Eina_Error _efl_net_server_udp_multicast_join(Eo *obj, Efl_Net_Server_Udp_Data *pd, const char *address);

EOAPI EFL_FUNC_BODYV(efl_net_server_udp_multicast_join, Eina_Error, 0, EFL_FUNC_CALL(address), const char *address);

Eina_Error _efl_net_server_udp_multicast_leave(Eo *obj, Efl_Net_Server_Udp_Data *pd, const char *address);

EOAPI EFL_FUNC_BODYV(efl_net_server_udp_multicast_leave, Eina_Error, 0, EFL_FUNC_CALL(address), const char *address);

Eina_Iterator *_efl_net_server_udp_multicast_groups_get(Eo *obj, Efl_Net_Server_Udp_Data *pd);

EOAPI EFL_FUNC_BODY(efl_net_server_udp_multicast_groups_get, Eina_Iterator *, NULL);

Eina_Error _efl_net_server_udp_multicast_time_to_live_set(Eo *obj, Efl_Net_Server_Udp_Data *pd, uint8_t ttl);

EOAPI EFL_FUNC_BODYV(efl_net_server_udp_multicast_time_to_live_set, Eina_Error, 0, EFL_FUNC_CALL(ttl), uint8_t ttl);

uint8_t _efl_net_server_udp_multicast_time_to_live_get(Eo *obj, Efl_Net_Server_Udp_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_udp_multicast_time_to_live_get, uint8_t, 0);

Eina_Error _efl_net_server_udp_multicast_loopback_set(Eo *obj, Efl_Net_Server_Udp_Data *pd, Eina_Bool loopback);

EOAPI EFL_FUNC_BODYV(efl_net_server_udp_multicast_loopback_set, Eina_Error, 0, EFL_FUNC_CALL(loopback), Eina_Bool loopback);

Eina_Bool _efl_net_server_udp_multicast_loopback_get(Eo *obj, Efl_Net_Server_Udp_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_udp_multicast_loopback_get, Eina_Bool, 0);

Efl_Object *_efl_net_server_udp_efl_object_constructor(Eo *obj, Efl_Net_Server_Udp_Data *pd);


void _efl_net_server_udp_efl_object_destructor(Eo *obj, Efl_Net_Server_Udp_Data *pd);


Eina_Error _efl_net_server_udp_efl_net_server_serve(Eo *obj, Efl_Net_Server_Udp_Data *pd, const char *address);


void _efl_net_server_udp_efl_net_server_fd_process_incoming_data(Eo *obj, Efl_Net_Server_Udp_Data *pd);


Eina_Error _efl_net_server_udp_efl_net_server_fd_socket_activate(Eo *obj, Efl_Net_Server_Udp_Data *pd, const char *address);


static Eina_Bool
_efl_net_server_udp_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SERVER_UDP_EXTRA_OPS
#define EFL_NET_SERVER_UDP_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_server_udp_ipv6_only_set, _efl_net_server_udp_ipv6_only_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_udp_ipv6_only_get, _efl_net_server_udp_ipv6_only_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_udp_dont_route_set, _efl_net_server_udp_dont_route_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_udp_dont_route_get, _efl_net_server_udp_dont_route_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_udp_multicast_join, _efl_net_server_udp_multicast_join),
      EFL_OBJECT_OP_FUNC(efl_net_server_udp_multicast_leave, _efl_net_server_udp_multicast_leave),
      EFL_OBJECT_OP_FUNC(efl_net_server_udp_multicast_groups_get, _efl_net_server_udp_multicast_groups_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_udp_multicast_time_to_live_set, _efl_net_server_udp_multicast_time_to_live_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_udp_multicast_time_to_live_get, _efl_net_server_udp_multicast_time_to_live_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_udp_multicast_loopback_set, _efl_net_server_udp_multicast_loopback_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_udp_multicast_loopback_get, _efl_net_server_udp_multicast_loopback_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_net_server_udp_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_server_udp_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_net_server_serve, _efl_net_server_udp_efl_net_server_serve),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_process_incoming_data, _efl_net_server_udp_efl_net_server_fd_process_incoming_data),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_socket_activate, _efl_net_server_udp_efl_net_server_fd_socket_activate),
      EFL_NET_SERVER_UDP_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SERVER_UDP_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SERVER_UDP_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_server_udp_class_desc = {
   EO_VERSION,
   "Efl.Net.Server.Udp",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Server_Udp_Data),
   _efl_net_server_udp_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_server_udp_class_get, &_efl_net_server_udp_class_desc, EFL_NET_SERVER_FD_CLASS, NULL);
