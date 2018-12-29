EWAPI const Efl_Event_Description _EFL_NET_DIALER_EVENT_RESOLVED =
   EFL_EVENT_DESCRIPTION("resolved");
EWAPI const Efl_Event_Description _EFL_NET_DIALER_EVENT_ERROR =
   EFL_EVENT_DESCRIPTION("error");
EWAPI const Efl_Event_Description _EFL_NET_DIALER_EVENT_CONNECTED =
   EFL_EVENT_DESCRIPTION("connected");
EOAPI EFL_FUNC_BODYV(efl_net_dialer_dial, Eina_Error, 0, EFL_FUNC_CALL(address), const char *address);
EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_address_dial_set, EFL_FUNC_CALL(address), const char *address);
EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_address_dial_get, const char *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_connected_set, EFL_FUNC_CALL(connected), Eina_Bool connected);
EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_connected_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_proxy_set, EFL_FUNC_CALL(proxy_url), const char *proxy_url);
EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_proxy_get, const char *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_timeout_dial_set, EFL_FUNC_CALL(seconds), double seconds);
EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_timeout_dial_get, double, 0);

static Eina_Bool
_efl_net_dialer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_DIALER_EXTRA_OPS
#define EFL_NET_DIALER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_dialer_dial, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_address_dial_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_address_dial_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_connected_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_connected_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_proxy_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_proxy_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_timeout_dial_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_timeout_dial_get, NULL),
      EFL_NET_DIALER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_DIALER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_DIALER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_dialer_class_desc = {
   EO_VERSION,
   "Efl.Net.Dialer",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_net_dialer_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_dialer_interface_get, &_efl_net_dialer_class_desc, EFL_NET_SOCKET_INTERFACE, NULL);
