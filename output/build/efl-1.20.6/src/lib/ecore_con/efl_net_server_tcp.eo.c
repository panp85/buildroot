
void _efl_net_server_tcp_ipv6_only_set(Eo *obj, Efl_Net_Server_Tcp_Data *pd, Eina_Bool ipv6_only);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_server_tcp_ipv6_only_set, EFL_FUNC_CALL(ipv6_only), Eina_Bool ipv6_only);

Eina_Bool _efl_net_server_tcp_ipv6_only_get(Eo *obj, Efl_Net_Server_Tcp_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_tcp_ipv6_only_get, Eina_Bool, 0);

Efl_Object *_efl_net_server_tcp_efl_object_constructor(Eo *obj, Efl_Net_Server_Tcp_Data *pd);


void _efl_net_server_tcp_efl_object_destructor(Eo *obj, Efl_Net_Server_Tcp_Data *pd);


Eina_Error _efl_net_server_tcp_efl_net_server_serve(Eo *obj, Efl_Net_Server_Tcp_Data *pd, const char *address);


void _efl_net_server_tcp_efl_net_server_fd_client_add(Eo *obj, Efl_Net_Server_Tcp_Data *pd, int client_fd);


void _efl_net_server_tcp_efl_net_server_fd_client_reject(Eo *obj, Efl_Net_Server_Tcp_Data *pd, int client_fd);


Eina_Error _efl_net_server_tcp_efl_net_server_fd_socket_activate(Eo *obj, Efl_Net_Server_Tcp_Data *pd, const char *address);


static Eina_Bool
_efl_net_server_tcp_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SERVER_TCP_EXTRA_OPS
#define EFL_NET_SERVER_TCP_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_server_tcp_ipv6_only_set, _efl_net_server_tcp_ipv6_only_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_tcp_ipv6_only_get, _efl_net_server_tcp_ipv6_only_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_net_server_tcp_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_server_tcp_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_net_server_serve, _efl_net_server_tcp_efl_net_server_serve),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_client_add, _efl_net_server_tcp_efl_net_server_fd_client_add),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_client_reject, _efl_net_server_tcp_efl_net_server_fd_client_reject),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_socket_activate, _efl_net_server_tcp_efl_net_server_fd_socket_activate),
      EFL_NET_SERVER_TCP_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SERVER_TCP_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SERVER_TCP_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_server_tcp_class_desc = {
   EO_VERSION,
   "Efl.Net.Server.Tcp",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Server_Tcp_Data),
   _efl_net_server_tcp_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_server_tcp_class_get, &_efl_net_server_tcp_class_desc, EFL_NET_SERVER_FD_CLASS, NULL);
