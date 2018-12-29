
Eina_Bool _efl_net_socket_tcp_keep_alive_set(Eo *obj, Efl_Net_Socket_Tcp_Data *pd, Eina_Bool keep_alive);

EOAPI EFL_FUNC_BODYV(efl_net_socket_tcp_keep_alive_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(keep_alive), Eina_Bool keep_alive);

Eina_Bool _efl_net_socket_tcp_keep_alive_get(Eo *obj, Efl_Net_Socket_Tcp_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_tcp_keep_alive_get, Eina_Bool, 0);

Eina_Bool _efl_net_socket_tcp_no_delay_set(Eo *obj, Efl_Net_Socket_Tcp_Data *pd, Eina_Bool no_delay);

EOAPI EFL_FUNC_BODYV(efl_net_socket_tcp_no_delay_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(no_delay), Eina_Bool no_delay);

Eina_Bool _efl_net_socket_tcp_no_delay_get(Eo *obj, Efl_Net_Socket_Tcp_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_tcp_no_delay_get, Eina_Bool, 0);

Eina_Bool _efl_net_socket_tcp_cork_set(Eo *obj, Efl_Net_Socket_Tcp_Data *pd, Eina_Bool cork);

EOAPI EFL_FUNC_BODYV(efl_net_socket_tcp_cork_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(cork), Eina_Bool cork);

Eina_Bool _efl_net_socket_tcp_cork_get(Eo *obj, Efl_Net_Socket_Tcp_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_tcp_cork_get, Eina_Bool, 0);

void _efl_net_socket_tcp_efl_loop_fd_fd_set(Eo *obj, Efl_Net_Socket_Tcp_Data *pd, int fd);


static Eina_Bool
_efl_net_socket_tcp_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SOCKET_TCP_EXTRA_OPS
#define EFL_NET_SOCKET_TCP_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_socket_tcp_keep_alive_set, _efl_net_socket_tcp_keep_alive_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_tcp_keep_alive_get, _efl_net_socket_tcp_keep_alive_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_tcp_no_delay_set, _efl_net_socket_tcp_no_delay_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_tcp_no_delay_get, _efl_net_socket_tcp_no_delay_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_tcp_cork_set, _efl_net_socket_tcp_cork_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_tcp_cork_get, _efl_net_socket_tcp_cork_get),
      EFL_OBJECT_OP_FUNC(efl_loop_fd_set, _efl_net_socket_tcp_efl_loop_fd_fd_set),
      EFL_NET_SOCKET_TCP_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SOCKET_TCP_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SOCKET_TCP_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_socket_tcp_class_desc = {
   EO_VERSION,
   "Efl.Net.Socket.Tcp",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Socket_Tcp_Data),
   _efl_net_socket_tcp_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_socket_tcp_class_get, &_efl_net_socket_tcp_class_desc, EFL_NET_SOCKET_FD_CLASS, NULL);
