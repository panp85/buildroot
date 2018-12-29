
Efl_Object *_efl_net_dialer_tcp_efl_object_constructor(Eo *obj, Efl_Net_Dialer_Tcp_Data *pd);


void _efl_net_dialer_tcp_efl_object_destructor(Eo *obj, Efl_Net_Dialer_Tcp_Data *pd);


Eina_Error _efl_net_dialer_tcp_efl_net_dialer_dial(Eo *obj, Efl_Net_Dialer_Tcp_Data *pd, const char *address);


void _efl_net_dialer_tcp_efl_net_dialer_address_dial_set(Eo *obj, Efl_Net_Dialer_Tcp_Data *pd, const char *address);


const char *_efl_net_dialer_tcp_efl_net_dialer_address_dial_get(Eo *obj, Efl_Net_Dialer_Tcp_Data *pd);


void _efl_net_dialer_tcp_efl_net_dialer_connected_set(Eo *obj, Efl_Net_Dialer_Tcp_Data *pd, Eina_Bool connected);


Eina_Bool _efl_net_dialer_tcp_efl_net_dialer_connected_get(Eo *obj, Efl_Net_Dialer_Tcp_Data *pd);


void _efl_net_dialer_tcp_efl_net_dialer_proxy_set(Eo *obj, Efl_Net_Dialer_Tcp_Data *pd, const char *proxy_url);


const char *_efl_net_dialer_tcp_efl_net_dialer_proxy_get(Eo *obj, Efl_Net_Dialer_Tcp_Data *pd);


void _efl_net_dialer_tcp_efl_net_dialer_timeout_dial_set(Eo *obj, Efl_Net_Dialer_Tcp_Data *pd, double seconds);


double _efl_net_dialer_tcp_efl_net_dialer_timeout_dial_get(Eo *obj, Efl_Net_Dialer_Tcp_Data *pd);


Eina_Error _efl_net_dialer_tcp_efl_io_closer_close(Eo *obj, Efl_Net_Dialer_Tcp_Data *pd);


static Eina_Bool
_efl_net_dialer_tcp_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_DIALER_TCP_EXTRA_OPS
#define EFL_NET_DIALER_TCP_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_net_dialer_tcp_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_dialer_tcp_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_dial, _efl_net_dialer_tcp_efl_net_dialer_dial),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_address_dial_set, _efl_net_dialer_tcp_efl_net_dialer_address_dial_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_address_dial_get, _efl_net_dialer_tcp_efl_net_dialer_address_dial_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_connected_set, _efl_net_dialer_tcp_efl_net_dialer_connected_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_connected_get, _efl_net_dialer_tcp_efl_net_dialer_connected_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_proxy_set, _efl_net_dialer_tcp_efl_net_dialer_proxy_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_proxy_get, _efl_net_dialer_tcp_efl_net_dialer_proxy_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_timeout_dial_set, _efl_net_dialer_tcp_efl_net_dialer_timeout_dial_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_timeout_dial_get, _efl_net_dialer_tcp_efl_net_dialer_timeout_dial_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close, _efl_net_dialer_tcp_efl_io_closer_close),
      EFL_NET_DIALER_TCP_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_DIALER_TCP_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_DIALER_TCP_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_dialer_tcp_class_desc = {
   EO_VERSION,
   "Efl.Net.Dialer.Tcp",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Dialer_Tcp_Data),
   _efl_net_dialer_tcp_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_dialer_tcp_class_get, &_efl_net_dialer_tcp_class_desc, EFL_NET_SOCKET_TCP_CLASS, EFL_NET_DIALER_INTERFACE, NULL);
