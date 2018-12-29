EOAPI EFL_VOID_FUNC_BODYV(efl_net_socket_address_local_set, EFL_FUNC_CALL(address), const char *address);
EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_address_local_get, const char *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(efl_net_socket_address_remote_set, EFL_FUNC_CALL(address), const char *address);
EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_address_remote_get, const char *, NULL);

static Eina_Bool
_efl_net_socket_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SOCKET_EXTRA_OPS
#define EFL_NET_SOCKET_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_local_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_local_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_remote_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_remote_get, NULL),
      EFL_NET_SOCKET_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SOCKET_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SOCKET_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_socket_class_desc = {
   EO_VERSION,
   "Efl.Net.Socket",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_net_socket_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_socket_interface_get, &_efl_net_socket_class_desc, EFL_IO_READER_INTERFACE, EFL_IO_WRITER_INTERFACE, EFL_IO_CLOSER_MIXIN, NULL);
