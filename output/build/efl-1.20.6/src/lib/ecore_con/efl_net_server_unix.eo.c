
void _efl_net_server_unix_unlink_before_bind_set(Eo *obj, Efl_Net_Server_Unix_Data *pd, Eina_Bool unlink_before_bind);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_server_unix_unlink_before_bind_set, EFL_FUNC_CALL(unlink_before_bind), Eina_Bool unlink_before_bind);

Eina_Bool _efl_net_server_unix_unlink_before_bind_get(Eo *obj, Efl_Net_Server_Unix_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_unix_unlink_before_bind_get, Eina_Bool, 0);

void _efl_net_server_unix_leading_directories_create_set(Eo *obj, Efl_Net_Server_Unix_Data *pd, Eina_Bool leading_directories_create, unsigned int mode);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_server_unix_leading_directories_create_set, EFL_FUNC_CALL(leading_directories_create, mode), Eina_Bool leading_directories_create, unsigned int mode);

void _efl_net_server_unix_leading_directories_create_get(Eo *obj, Efl_Net_Server_Unix_Data *pd, Eina_Bool *leading_directories_create, unsigned int *mode);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_server_unix_leading_directories_create_get, EFL_FUNC_CALL(leading_directories_create, mode), Eina_Bool *leading_directories_create, unsigned int *mode);

void _efl_net_server_unix_efl_object_destructor(Eo *obj, Efl_Net_Server_Unix_Data *pd);


Eina_Error _efl_net_server_unix_efl_net_server_serve(Eo *obj, Efl_Net_Server_Unix_Data *pd, const char *address);


void _efl_net_server_unix_efl_net_server_fd_client_add(Eo *obj, Efl_Net_Server_Unix_Data *pd, int client_fd);


void _efl_net_server_unix_efl_net_server_fd_client_reject(Eo *obj, Efl_Net_Server_Unix_Data *pd, int client_fd);


Eina_Error _efl_net_server_unix_efl_net_server_fd_socket_activate(Eo *obj, Efl_Net_Server_Unix_Data *pd, const char *address);


static Eina_Bool
_efl_net_server_unix_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SERVER_UNIX_EXTRA_OPS
#define EFL_NET_SERVER_UNIX_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_server_unix_unlink_before_bind_set, _efl_net_server_unix_unlink_before_bind_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_unix_unlink_before_bind_get, _efl_net_server_unix_unlink_before_bind_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_unix_leading_directories_create_set, _efl_net_server_unix_leading_directories_create_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_unix_leading_directories_create_get, _efl_net_server_unix_leading_directories_create_get),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_server_unix_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_net_server_serve, _efl_net_server_unix_efl_net_server_serve),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_client_add, _efl_net_server_unix_efl_net_server_fd_client_add),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_client_reject, _efl_net_server_unix_efl_net_server_fd_client_reject),
      EFL_OBJECT_OP_FUNC(efl_net_server_fd_socket_activate, _efl_net_server_unix_efl_net_server_fd_socket_activate),
      EFL_NET_SERVER_UNIX_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SERVER_UNIX_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SERVER_UNIX_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_server_unix_class_desc = {
   EO_VERSION,
   "Efl.Net.Server.Unix",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Server_Unix_Data),
   _efl_net_server_unix_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_server_unix_class_get, &_efl_net_server_unix_class_desc, EFL_NET_SERVER_FD_CLASS, NULL);
