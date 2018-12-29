
Eina_Error _efl_net_server_fd_socket_activate(Eo *obj, Efl_Net_Server_Fd_Data *pd, const char *address);

EOAPI EFL_FUNC_BODYV(efl_net_server_fd_socket_activate, Eina_Error, 0, EFL_FUNC_CALL(address), const char *address);

void _efl_net_server_fd_family_set(Eo *obj, Efl_Net_Server_Fd_Data *pd, int family);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_server_fd_family_set, EFL_FUNC_CALL(family), int family);

int _efl_net_server_fd_family_get(Eo *obj, Efl_Net_Server_Fd_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_fd_family_get, int, 0);

Eina_Bool _efl_net_server_fd_close_on_exec_set(Eo *obj, Efl_Net_Server_Fd_Data *pd, Eina_Bool close_on_exec);

EOAPI EFL_FUNC_BODYV(efl_net_server_fd_close_on_exec_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(close_on_exec), Eina_Bool close_on_exec);

Eina_Bool _efl_net_server_fd_close_on_exec_get(Eo *obj, Efl_Net_Server_Fd_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_fd_close_on_exec_get, Eina_Bool, 0);

Eina_Bool _efl_net_server_fd_reuse_address_set(Eo *obj, Efl_Net_Server_Fd_Data *pd, Eina_Bool reuse_address);

EOAPI EFL_FUNC_BODYV(efl_net_server_fd_reuse_address_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(reuse_address), Eina_Bool reuse_address);

Eina_Bool _efl_net_server_fd_reuse_address_get(Eo *obj, Efl_Net_Server_Fd_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_fd_reuse_address_get, Eina_Bool, 0);

Eina_Bool _efl_net_server_fd_reuse_port_set(Eo *obj, Efl_Net_Server_Fd_Data *pd, Eina_Bool reuse_port);

EOAPI EFL_FUNC_BODYV(efl_net_server_fd_reuse_port_set, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(reuse_port), Eina_Bool reuse_port);

Eina_Bool _efl_net_server_fd_reuse_port_get(Eo *obj, Efl_Net_Server_Fd_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_fd_reuse_port_get, Eina_Bool, 0);

void _efl_net_server_fd_process_incoming_data(Eo *obj, Efl_Net_Server_Fd_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_net_server_fd_process_incoming_data);
EOAPI EFL_VOID_FUNC_BODYV(efl_net_server_fd_client_add, EFL_FUNC_CALL(client_fd), int client_fd);
EOAPI EFL_VOID_FUNC_BODYV(efl_net_server_fd_client_reject, EFL_FUNC_CALL(client_fd), int client_fd);

Efl_Object *_efl_net_server_fd_efl_object_finalize(Eo *obj, Efl_Net_Server_Fd_Data *pd);


Efl_Object *_efl_net_server_fd_efl_object_constructor(Eo *obj, Efl_Net_Server_Fd_Data *pd);


void _efl_net_server_fd_efl_object_destructor(Eo *obj, Efl_Net_Server_Fd_Data *pd);


void _efl_net_server_fd_efl_loop_fd_fd_set(Eo *obj, Efl_Net_Server_Fd_Data *pd, int fd);


void _efl_net_server_fd_efl_net_server_address_set(Eo *obj, Efl_Net_Server_Fd_Data *pd, const char *address);


const char *_efl_net_server_fd_efl_net_server_address_get(Eo *obj, Efl_Net_Server_Fd_Data *pd);


void _efl_net_server_fd_efl_net_server_clients_count_set(Eo *obj, Efl_Net_Server_Fd_Data *pd, unsigned int count);


unsigned int _efl_net_server_fd_efl_net_server_clients_count_get(Eo *obj, Efl_Net_Server_Fd_Data *pd);


void _efl_net_server_fd_efl_net_server_clients_limit_set(Eo *obj, Efl_Net_Server_Fd_Data *pd, unsigned int limit, Eina_Bool reject_excess);


void _efl_net_server_fd_efl_net_server_clients_limit_get(Eo *obj, Efl_Net_Server_Fd_Data *pd, unsigned int *limit, Eina_Bool *reject_excess);


void _efl_net_server_fd_efl_net_server_serving_set(Eo *obj, Efl_Net_Server_Fd_Data *pd, Eina_Bool serving);


Eina_Bool _efl_net_server_fd_efl_net_server_serving_get(Eo *obj, Efl_Net_Server_Fd_Data *pd);


Eina_Error _efl_net_server_fd_efl_net_server_serve(Eo *obj, Efl_Net_Server_Fd_Data *pd, const char *address);


Eina_Bool _efl_net_server_fd_efl_net_server_client_announce(Eo *obj, Efl_Net_Server_Fd_Data *pd, Efl_Net_Socket *client);


static Eina_Bool
_efl_net_server_fd_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SERVER_FD_EXTRA_OPS
#define EFL_NET_SERVER_FD_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_socket_activate, _efl_net_server_fd_socket_activate),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_family_set, _efl_net_server_fd_family_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_family_get, _efl_net_server_fd_family_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_close_on_exec_set, _efl_net_server_fd_close_on_exec_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_close_on_exec_get, _efl_net_server_fd_close_on_exec_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_reuse_address_set, _efl_net_server_fd_reuse_address_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_reuse_address_get, _efl_net_server_fd_reuse_address_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_reuse_port_set, _efl_net_server_fd_reuse_port_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_reuse_port_get, _efl_net_server_fd_reuse_port_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_process_incoming_data, _efl_net_server_fd_process_incoming_data),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_client_add, NULL),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_client_reject, NULL),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_net_server_fd_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_net_server_fd_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_server_fd_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_loop_fd_set, _efl_net_server_fd_efl_loop_fd_fd_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_address_set, _efl_net_server_fd_efl_net_server_address_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_address_get, _efl_net_server_fd_efl_net_server_address_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_clients_count_set, _efl_net_server_fd_efl_net_server_clients_count_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_clients_count_get, _efl_net_server_fd_efl_net_server_clients_count_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_clients_limit_set, _efl_net_server_fd_efl_net_server_clients_limit_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_clients_limit_get, _efl_net_server_fd_efl_net_server_clients_limit_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_serving_set, _efl_net_server_fd_efl_net_server_serving_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_serving_get, _efl_net_server_fd_efl_net_server_serving_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_serve, _efl_net_server_fd_efl_net_server_serve),
      EFL_OBJECT_OP_FUNC(efl_net_server_client_announce, _efl_net_server_fd_efl_net_server_client_announce),
      EFL_NET_SERVER_FD_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SERVER_FD_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SERVER_FD_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_server_fd_class_desc = {
   EO_VERSION,
   "Efl.Net.Server.Fd",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Server_Fd_Data),
   _efl_net_server_fd_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_server_fd_class_get, &_efl_net_server_fd_class_desc, EFL_LOOP_FD_CLASS, EFL_NET_SERVER_INTERFACE, NULL);
