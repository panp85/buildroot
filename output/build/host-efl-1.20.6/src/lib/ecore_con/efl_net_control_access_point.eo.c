EWAPI const Efl_Event_Description _EFL_NET_CONTROL_ACCESS_POINT_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");

Efl_Future *_efl_net_control_access_point_connect(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY(efl_net_control_access_point_connect, Efl_Future *, NULL);

void _efl_net_control_access_point_disconnect(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_net_control_access_point_disconnect);

void _efl_net_control_access_point_forget(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_net_control_access_point_forget);

Efl_Net_Control_Access_Point_State _efl_net_control_access_point_state_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_state_get, Efl_Net_Control_Access_Point_State, 0);

Efl_Net_Control_Access_Point_Error _efl_net_control_access_point_error_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_error_get, Efl_Net_Control_Access_Point_Error, 0);

const char *_efl_net_control_access_point_name_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_name_get, const char *, NULL);

void _efl_net_control_access_point_priority_set(Eo *obj, Efl_Net_Control_Access_Point_Data *pd, unsigned int priority);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_control_access_point_priority_set, EFL_FUNC_CALL(priority), unsigned int priority);

unsigned int _efl_net_control_access_point_priority_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_priority_get, unsigned int, 0);

Efl_Net_Control_Technology *_efl_net_control_access_point_technology_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_technology_get, Efl_Net_Control_Technology *, NULL);

uint8_t _efl_net_control_access_point_strength_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_strength_get, uint8_t, 0);

Eina_Bool _efl_net_control_access_point_roaming_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_roaming_get, Eina_Bool, 0);

void _efl_net_control_access_point_auto_connect_set(Eo *obj, Efl_Net_Control_Access_Point_Data *pd, Eina_Bool auto_connect);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_control_access_point_auto_connect_set, EFL_FUNC_CALL(auto_connect), Eina_Bool auto_connect);

Eina_Bool _efl_net_control_access_point_auto_connect_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_auto_connect_get, Eina_Bool, 0);

Eina_Bool _efl_net_control_access_point_remembered_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_remembered_get, Eina_Bool, 0);

Eina_Bool _efl_net_control_access_point_immutable_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_immutable_get, Eina_Bool, 0);

Efl_Net_Control_Access_Point_Security _efl_net_control_access_point_security_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_security_get, Efl_Net_Control_Access_Point_Security, 0);

Eina_Iterator *_efl_net_control_access_point_name_servers_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_name_servers_get, Eina_Iterator *, NULL);

Eina_Iterator *_efl_net_control_access_point_time_servers_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_time_servers_get, Eina_Iterator *, NULL);

Eina_Iterator *_efl_net_control_access_point_domains_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_domains_get, Eina_Iterator *, NULL);

void _efl_net_control_access_point_ipv4_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd, Efl_Net_Control_Access_Point_Ipv4_Method *method, const char **address, const char **netmask, const char **gateway);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_control_access_point_ipv4_get, EFL_FUNC_CALL(method, address, netmask, gateway), Efl_Net_Control_Access_Point_Ipv4_Method *method, const char **address, const char **netmask, const char **gateway);

void _efl_net_control_access_point_ipv6_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd, Efl_Net_Control_Access_Point_Ipv6_Method *method, const char **address, uint8_t *prefix_length, const char **netmask, const char **gateway);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_control_access_point_ipv6_get, EFL_FUNC_CALL(method, address, prefix_length, netmask, gateway), Efl_Net_Control_Access_Point_Ipv6_Method *method, const char **address, uint8_t *prefix_length, const char **netmask, const char **gateway);

void _efl_net_control_access_point_proxy_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd, Efl_Net_Control_Access_Point_Proxy_Method *method, const char **url, Eina_Iterator **servers, Eina_Iterator **excludes);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_control_access_point_proxy_get, EFL_FUNC_CALL(method, url, servers, excludes), Efl_Net_Control_Access_Point_Proxy_Method *method, const char **url, Eina_Iterator **servers, Eina_Iterator **excludes);

void _efl_net_control_access_point_configuration_name_servers_set(Eo *obj, Efl_Net_Control_Access_Point_Data *pd, Eina_Iterator *name_servers);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_control_access_point_configuration_name_servers_set, EFL_FUNC_CALL(name_servers), Eina_Iterator *name_servers);

Eina_Iterator *_efl_net_control_access_point_configuration_name_servers_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_configuration_name_servers_get, Eina_Iterator *, NULL);

void _efl_net_control_access_point_configuration_time_servers_set(Eo *obj, Efl_Net_Control_Access_Point_Data *pd, Eina_Iterator *time_servers);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_control_access_point_configuration_time_servers_set, EFL_FUNC_CALL(time_servers), Eina_Iterator *time_servers);

Eina_Iterator *_efl_net_control_access_point_configuration_time_servers_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_configuration_time_servers_get, Eina_Iterator *, NULL);

void _efl_net_control_access_point_configuration_domains_set(Eo *obj, Efl_Net_Control_Access_Point_Data *pd, Eina_Iterator *domains);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_control_access_point_configuration_domains_set, EFL_FUNC_CALL(domains), Eina_Iterator *domains);

Eina_Iterator *_efl_net_control_access_point_configuration_domains_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_point_configuration_domains_get, Eina_Iterator *, NULL);

void _efl_net_control_access_point_configuration_ipv4_set(Eo *obj, Efl_Net_Control_Access_Point_Data *pd, Efl_Net_Control_Access_Point_Ipv4_Method method, const char *address, const char *netmask, const char *gateway);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_control_access_point_configuration_ipv4_set, EFL_FUNC_CALL(method, address, netmask, gateway), Efl_Net_Control_Access_Point_Ipv4_Method method, const char *address, const char *netmask, const char *gateway);

void _efl_net_control_access_point_configuration_ipv4_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd, Efl_Net_Control_Access_Point_Ipv4_Method *method, const char **address, const char **netmask, const char **gateway);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_control_access_point_configuration_ipv4_get, EFL_FUNC_CALL(method, address, netmask, gateway), Efl_Net_Control_Access_Point_Ipv4_Method *method, const char **address, const char **netmask, const char **gateway);

void _efl_net_control_access_point_configuration_ipv6_set(Eo *obj, Efl_Net_Control_Access_Point_Data *pd, Efl_Net_Control_Access_Point_Ipv6_Method method, const char *address, uint8_t prefix_length, const char *netmask, const char *gateway);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_control_access_point_configuration_ipv6_set, EFL_FUNC_CALL(method, address, prefix_length, netmask, gateway), Efl_Net_Control_Access_Point_Ipv6_Method method, const char *address, uint8_t prefix_length, const char *netmask, const char *gateway);

void _efl_net_control_access_point_configuration_ipv6_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd, Efl_Net_Control_Access_Point_Ipv6_Method *method, const char **address, uint8_t *prefix_length, const char **netmask, const char **gateway);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_control_access_point_configuration_ipv6_get, EFL_FUNC_CALL(method, address, prefix_length, netmask, gateway), Efl_Net_Control_Access_Point_Ipv6_Method *method, const char **address, uint8_t *prefix_length, const char **netmask, const char **gateway);

void _efl_net_control_access_point_configuration_proxy_set(Eo *obj, Efl_Net_Control_Access_Point_Data *pd, Efl_Net_Control_Access_Point_Proxy_Method method, const char *url, Eina_Iterator *servers, Eina_Iterator *excludes);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_control_access_point_configuration_proxy_set, EFL_FUNC_CALL(method, url, servers, excludes), Efl_Net_Control_Access_Point_Proxy_Method method, const char *url, Eina_Iterator *servers, Eina_Iterator *excludes);

void _efl_net_control_access_point_configuration_proxy_get(Eo *obj, Efl_Net_Control_Access_Point_Data *pd, Efl_Net_Control_Access_Point_Proxy_Method *method, const char **url, Eina_Iterator **servers, Eina_Iterator **excludes);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_control_access_point_configuration_proxy_get, EFL_FUNC_CALL(method, url, servers, excludes), Efl_Net_Control_Access_Point_Proxy_Method *method, const char **url, Eina_Iterator **servers, Eina_Iterator **excludes);

void _efl_net_control_access_point_efl_object_destructor(Eo *obj, Efl_Net_Control_Access_Point_Data *pd);


static Eina_Bool
_efl_net_control_access_point_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_CONTROL_ACCESS_POINT_EXTRA_OPS
#define EFL_NET_CONTROL_ACCESS_POINT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_connect, _efl_net_control_access_point_connect),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_disconnect, _efl_net_control_access_point_disconnect),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_forget, _efl_net_control_access_point_forget),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_state_get, _efl_net_control_access_point_state_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_error_get, _efl_net_control_access_point_error_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_name_get, _efl_net_control_access_point_name_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_priority_set, _efl_net_control_access_point_priority_set),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_priority_get, _efl_net_control_access_point_priority_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_technology_get, _efl_net_control_access_point_technology_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_strength_get, _efl_net_control_access_point_strength_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_roaming_get, _efl_net_control_access_point_roaming_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_auto_connect_set, _efl_net_control_access_point_auto_connect_set),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_auto_connect_get, _efl_net_control_access_point_auto_connect_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_remembered_get, _efl_net_control_access_point_remembered_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_immutable_get, _efl_net_control_access_point_immutable_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_security_get, _efl_net_control_access_point_security_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_name_servers_get, _efl_net_control_access_point_name_servers_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_time_servers_get, _efl_net_control_access_point_time_servers_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_domains_get, _efl_net_control_access_point_domains_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_ipv4_get, _efl_net_control_access_point_ipv4_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_ipv6_get, _efl_net_control_access_point_ipv6_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_proxy_get, _efl_net_control_access_point_proxy_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_configuration_name_servers_set, _efl_net_control_access_point_configuration_name_servers_set),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_configuration_name_servers_get, _efl_net_control_access_point_configuration_name_servers_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_configuration_time_servers_set, _efl_net_control_access_point_configuration_time_servers_set),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_configuration_time_servers_get, _efl_net_control_access_point_configuration_time_servers_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_configuration_domains_set, _efl_net_control_access_point_configuration_domains_set),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_configuration_domains_get, _efl_net_control_access_point_configuration_domains_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_configuration_ipv4_set, _efl_net_control_access_point_configuration_ipv4_set),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_configuration_ipv4_get, _efl_net_control_access_point_configuration_ipv4_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_configuration_ipv6_set, _efl_net_control_access_point_configuration_ipv6_set),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_configuration_ipv6_get, _efl_net_control_access_point_configuration_ipv6_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_configuration_proxy_set, _efl_net_control_access_point_configuration_proxy_set),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_point_configuration_proxy_get, _efl_net_control_access_point_configuration_proxy_get),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_control_access_point_efl_object_destructor),
      EFL_NET_CONTROL_ACCESS_POINT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_CONTROL_ACCESS_POINT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_CONTROL_ACCESS_POINT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_control_access_point_class_desc = {
   EO_VERSION,
   "Efl.Net.Control.Access_Point",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Control_Access_Point_Data),
   _efl_net_control_access_point_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_control_access_point_class_get, &_efl_net_control_access_point_class_desc, EFL_LOOP_USER_CLASS, NULL);
