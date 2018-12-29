
void _efl_net_server_ssl_ssl_context_set(Eo *obj, Efl_Net_Server_Ssl_Data *pd, Efl_Net_Ssl_Context *ssl_context);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_server_ssl_context_set, EFL_FUNC_CALL(ssl_context), Efl_Net_Ssl_Context *ssl_context);

Efl_Net_Ssl_Context *_efl_net_server_ssl_ssl_context_get(Eo *obj, Efl_Net_Server_Ssl_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_ssl_context_get, Efl_Net_Ssl_Context *, NULL);

Eina_Error _efl_net_server_ssl_socket_activate(Eo *obj, Efl_Net_Server_Ssl_Data *pd, const char *address);

EOAPI EFL_FUNC_BODYV(efl_net_server_ssl_socket_activate, Eina_Error, 0, EFL_FUNC_CALL(address), const char *address);

int _efl_net_server_ssl_family_get(Eo *obj, Efl_Net_Server_Ssl_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_ssl_family_get, int, 0);

Eina_Bool _efl_net_server_ssl_close_on_exec_set(Eo *obj, Efl_Net_Server_Ssl_Data *pd, Eina_Bool close_on_exec);

EOAPI EFL_FUNC_BODYV(efl_net_server_ssl_close_on_exec_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(close_on_exec), Eina_Bool close_on_exec);

Eina_Bool _efl_net_server_ssl_close_on_exec_get(Eo *obj, Efl_Net_Server_Ssl_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_ssl_close_on_exec_get, Eina_Bool, 0);

Eina_Bool _efl_net_server_ssl_reuse_address_set(Eo *obj, Efl_Net_Server_Ssl_Data *pd, Eina_Bool reuse_address);

EOAPI EFL_FUNC_BODYV(efl_net_server_ssl_reuse_address_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(reuse_address), Eina_Bool reuse_address);

Eina_Bool _efl_net_server_ssl_reuse_address_get(Eo *obj, Efl_Net_Server_Ssl_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_ssl_reuse_address_get, Eina_Bool, 0);

Eina_Bool _efl_net_server_ssl_reuse_port_set(Eo *obj, Efl_Net_Server_Ssl_Data *pd, Eina_Bool reuse_port);

EOAPI EFL_FUNC_BODYV(efl_net_server_ssl_reuse_port_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(reuse_port), Eina_Bool reuse_port);

Eina_Bool _efl_net_server_ssl_reuse_port_get(Eo *obj, Efl_Net_Server_Ssl_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_ssl_reuse_port_get, Eina_Bool, 0);

void _efl_net_server_ssl_ipv6_only_set(Eo *obj, Efl_Net_Server_Ssl_Data *pd, Eina_Bool ipv6_only);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_server_ssl_ipv6_only_set, EFL_FUNC_CALL(ipv6_only), Eina_Bool ipv6_only);

Eina_Bool _efl_net_server_ssl_ipv6_only_get(Eo *obj, Efl_Net_Server_Ssl_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_ssl_ipv6_only_get, Eina_Bool, 0);

Efl_Object *_efl_net_server_ssl_efl_object_constructor(Eo *obj, Efl_Net_Server_Ssl_Data *pd);


void _efl_net_server_ssl_efl_object_destructor(Eo *obj, Efl_Net_Server_Ssl_Data *pd);


Eina_Error _efl_net_server_ssl_efl_net_server_serve(Eo *obj, Efl_Net_Server_Ssl_Data *pd, const char *address);


Eina_Bool _efl_net_server_ssl_efl_net_server_client_announce(Eo *obj, Efl_Net_Server_Ssl_Data *pd, Efl_Net_Socket *client);


const char *_efl_net_server_ssl_efl_net_server_address_get(Eo *obj, Efl_Net_Server_Ssl_Data *pd);


unsigned int _efl_net_server_ssl_efl_net_server_clients_count_get(Eo *obj, Efl_Net_Server_Ssl_Data *pd);


void _efl_net_server_ssl_efl_net_server_clients_limit_set(Eo *obj, Efl_Net_Server_Ssl_Data *pd, unsigned int limit, Eina_Bool reject_excess);


void _efl_net_server_ssl_efl_net_server_clients_limit_get(Eo *obj, Efl_Net_Server_Ssl_Data *pd, unsigned int *limit, Eina_Bool *reject_excess);


Eina_Bool _efl_net_server_ssl_efl_net_server_serving_get(Eo *obj, Efl_Net_Server_Ssl_Data *pd);


static Eina_Bool
_efl_net_server_ssl_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SERVER_SSL_EXTRA_OPS
#define EFL_NET_SERVER_SSL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_server_ssl_context_set, _efl_net_server_ssl_ssl_context_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_ssl_context_get, _efl_net_server_ssl_ssl_context_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_ssl_socket_activate, _efl_net_server_ssl_socket_activate),
      EFL_OBJECT_OP_FUNC(efl_net_server_ssl_family_get, _efl_net_server_ssl_family_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_ssl_close_on_exec_set, _efl_net_server_ssl_close_on_exec_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_ssl_close_on_exec_get, _efl_net_server_ssl_close_on_exec_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_ssl_reuse_address_set, _efl_net_server_ssl_reuse_address_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_ssl_reuse_address_get, _efl_net_server_ssl_reuse_address_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_ssl_reuse_port_set, _efl_net_server_ssl_reuse_port_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_ssl_reuse_port_get, _efl_net_server_ssl_reuse_port_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_ssl_ipv6_only_set, _efl_net_server_ssl_ipv6_only_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_ssl_ipv6_only_get, _efl_net_server_ssl_ipv6_only_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_net_server_ssl_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_server_ssl_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_net_server_serve, _efl_net_server_ssl_efl_net_server_serve),
      EFL_OBJECT_OP_FUNC(efl_net_server_client_announce, _efl_net_server_ssl_efl_net_server_client_announce),
      EFL_OBJECT_OP_FUNC(efl_net_server_address_get, _efl_net_server_ssl_efl_net_server_address_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_clients_count_get, _efl_net_server_ssl_efl_net_server_clients_count_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_clients_limit_set, _efl_net_server_ssl_efl_net_server_clients_limit_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_clients_limit_get, _efl_net_server_ssl_efl_net_server_clients_limit_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_serving_get, _efl_net_server_ssl_efl_net_server_serving_get),
      EFL_NET_SERVER_SSL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SERVER_SSL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SERVER_SSL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_server_ssl_class_desc = {
   EO_VERSION,
   "Efl.Net.Server.Ssl",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Server_Ssl_Data),
   _efl_net_server_ssl_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_server_ssl_class_get, &_efl_net_server_ssl_class_desc, EFL_LOOP_USER_CLASS, EFL_NET_SERVER_INTERFACE, NULL);
