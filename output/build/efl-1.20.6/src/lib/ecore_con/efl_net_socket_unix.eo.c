
void _efl_net_socket_unix_efl_loop_fd_fd_set(Eo *obj, Efl_Net_Socket_Unix_Data *pd, int fd);


static Eina_Bool
_efl_net_socket_unix_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SOCKET_UNIX_EXTRA_OPS
#define EFL_NET_SOCKET_UNIX_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_loop_fd_set, _efl_net_socket_unix_efl_loop_fd_fd_set),
      EFL_NET_SOCKET_UNIX_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SOCKET_UNIX_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SOCKET_UNIX_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_socket_unix_class_desc = {
   EO_VERSION,
   "Efl.Net.Socket.Unix",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Socket_Unix_Data),
   _efl_net_socket_unix_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_socket_unix_class_get, &_efl_net_socket_unix_class_desc, EFL_NET_SOCKET_FD_CLASS, NULL);
