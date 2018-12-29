EWAPI const Efl_Event_Description _EFL_NET_SERVER_EVENT_CLIENT_ADD =
   EFL_EVENT_DESCRIPTION_HOT("client,add");
EWAPI const Efl_Event_Description _EFL_NET_SERVER_EVENT_CLIENT_REJECTED =
   EFL_EVENT_DESCRIPTION("client,rejected");
EWAPI const Efl_Event_Description _EFL_NET_SERVER_EVENT_ERROR =
   EFL_EVENT_DESCRIPTION("error");
EWAPI const Efl_Event_Description _EFL_NET_SERVER_EVENT_SERVING =
   EFL_EVENT_DESCRIPTION("serving");
EOAPI EFL_FUNC_BODYV(efl_net_server_serve, Eina_Error, 0, EFL_FUNC_CALL(address), const char *address);
EOAPI EFL_VOID_FUNC_BODYV(efl_net_server_address_set, EFL_FUNC_CALL(address), const char *address);
EOAPI EFL_FUNC_BODY_CONST(efl_net_server_address_get, const char *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(efl_net_server_clients_count_set, EFL_FUNC_CALL(count), unsigned int count);
EOAPI EFL_FUNC_BODY_CONST(efl_net_server_clients_count_get, unsigned int, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_net_server_clients_limit_set, EFL_FUNC_CALL(limit, reject_excess), unsigned int limit, Eina_Bool reject_excess);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_server_clients_limit_get, EFL_FUNC_CALL(limit, reject_excess), unsigned int *limit, Eina_Bool *reject_excess);
EOAPI EFL_FUNC_BODYV(efl_net_server_client_announce, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(client), Efl_Net_Socket *client);
EOAPI EFL_VOID_FUNC_BODYV(efl_net_server_serving_set, EFL_FUNC_CALL(serving), Eina_Bool serving);
EOAPI EFL_FUNC_BODY_CONST(efl_net_server_serving_get, Eina_Bool, 0);

static Eina_Bool
_efl_net_server_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SERVER_EXTRA_OPS
#define EFL_NET_SERVER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_server_serve, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_server_address_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_server_address_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_server_clients_count_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_server_clients_count_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_server_clients_limit_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_server_clients_limit_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_server_client_announce, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_server_serving_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_server_serving_get, NULL),
      EFL_NET_SERVER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SERVER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SERVER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_server_class_desc = {
   EO_VERSION,
   "Efl.Net.Server",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_net_server_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_server_interface_get, &_efl_net_server_class_desc, NULL, NULL);
