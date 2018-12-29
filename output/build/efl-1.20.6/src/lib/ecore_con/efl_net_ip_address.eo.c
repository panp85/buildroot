
Efl_Net_Ip_Address *_efl_net_ip_address_create(Eo *obj, void *pd, uint16_t port, const Eina_Slice address);

EOAPI EFL_FUNC_BODYV_CONST(efl_net_ip_address_create, Efl_Net_Ip_Address *, NULL, EFL_FUNC_CALL(port, address), uint16_t port, const Eina_Slice address);

Efl_Net_Ip_Address *_efl_net_ip_address_create_sockaddr(Eo *obj, void *pd, const void *sockaddr);

EOAPI EFL_FUNC_BODYV_CONST(efl_net_ip_address_create_sockaddr, Efl_Net_Ip_Address *, NULL, EFL_FUNC_CALL(sockaddr), const void *sockaddr);

Efl_Net_Ip_Address *_efl_net_ip_address_parse(Eo *obj, void *pd, const char *numeric_address);

EOAPI EFL_FUNC_BODYV_CONST(efl_net_ip_address_parse, Efl_Net_Ip_Address *, NULL, EFL_FUNC_CALL(numeric_address), const char *numeric_address);

Efl_Future *_efl_net_ip_address_resolve(Eo *obj, void *pd, const char *address, int family, int flags);

EOAPI EFL_FUNC_BODYV_CONST(efl_net_ip_address_resolve, Efl_Future *, NULL, EFL_FUNC_CALL(address, family, flags), const char *address, int family, int flags);

const char *_efl_net_ip_address_string_get(Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_string_get, const char *, NULL);

void _efl_net_ip_address_family_set(Eo *obj, Efl_Net_Ip_Address_Data *pd, int family);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_ip_address_family_set, EFL_FUNC_CALL(family), int family);

int _efl_net_ip_address_family_get(Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_family_get, int, 0);

void _efl_net_ip_address_port_set(Eo *obj, Efl_Net_Ip_Address_Data *pd, uint16_t port);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_ip_address_port_set, EFL_FUNC_CALL(port), uint16_t port);

uint16_t _efl_net_ip_address_port_get(Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_port_get, uint16_t, 0);

void _efl_net_ip_address_address_set(Eo *obj, Efl_Net_Ip_Address_Data *pd, Eina_Slice address);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_ip_address_set, EFL_FUNC_CALL(address), Eina_Slice address);

Eina_Slice _efl_net_ip_address_address_get(Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_get, Eina_Slice, ((Eina_Slice){0}));

void _efl_net_ip_address_sockaddr_set(Eo *obj, Efl_Net_Ip_Address_Data *pd, const void *sockaddr);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_ip_address_sockaddr_set, EFL_FUNC_CALL(sockaddr), const void *sockaddr);

const void *_efl_net_ip_address_sockaddr_get(Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_sockaddr_get, const void *, NULL);

Eina_Bool _efl_net_ip_address_ipv4_class_a_check(const Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_ipv4_class_a_check, Eina_Bool, EINA_FALSE /* false */);

Eina_Bool _efl_net_ip_address_ipv4_class_b_check(const Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_ipv4_class_b_check, Eina_Bool, EINA_FALSE /* false */);

Eina_Bool _efl_net_ip_address_ipv4_class_c_check(const Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_ipv4_class_c_check, Eina_Bool, EINA_FALSE /* false */);

Eina_Bool _efl_net_ip_address_ipv4_class_d_check(const Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_ipv4_class_d_check, Eina_Bool, EINA_FALSE /* false */);

Eina_Bool _efl_net_ip_address_ipv6_v4mapped_check(const Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_ipv6_v4mapped_check, Eina_Bool, EINA_FALSE /* false */);

Eina_Bool _efl_net_ip_address_ipv6_v4compat_check(const Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_ipv6_v4compat_check, Eina_Bool, EINA_FALSE /* false */);

Eina_Bool _efl_net_ip_address_ipv6_local_link_check(const Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_ipv6_local_link_check, Eina_Bool, EINA_FALSE /* false */);

Eina_Bool _efl_net_ip_address_ipv6_local_site_check(const Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_ipv6_local_site_check, Eina_Bool, EINA_FALSE /* false */);

Eina_Bool _efl_net_ip_address_multicast_check(const Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_multicast_check, Eina_Bool, EINA_FALSE /* false */);

Eina_Bool _efl_net_ip_address_loopback_check(const Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_loopback_check, Eina_Bool, EINA_FALSE /* false */);

Eina_Bool _efl_net_ip_address_any_check(const Eo *obj, Efl_Net_Ip_Address_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ip_address_any_check, Eina_Bool, EINA_FALSE /* false */);

Efl_Object *_efl_net_ip_address_efl_object_finalize(Eo *obj, Efl_Net_Ip_Address_Data *pd);


static Eina_Bool
_efl_net_ip_address_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_IP_ADDRESS_EXTRA_OPS
#define EFL_NET_IP_ADDRESS_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_string_get, _efl_net_ip_address_string_get),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_family_set, _efl_net_ip_address_family_set),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_family_get, _efl_net_ip_address_family_get),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_port_set, _efl_net_ip_address_port_set),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_port_get, _efl_net_ip_address_port_get),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_set, _efl_net_ip_address_address_set),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_get, _efl_net_ip_address_address_get),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_sockaddr_set, _efl_net_ip_address_sockaddr_set),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_sockaddr_get, _efl_net_ip_address_sockaddr_get),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_ipv4_class_a_check, _efl_net_ip_address_ipv4_class_a_check),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_ipv4_class_b_check, _efl_net_ip_address_ipv4_class_b_check),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_ipv4_class_c_check, _efl_net_ip_address_ipv4_class_c_check),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_ipv4_class_d_check, _efl_net_ip_address_ipv4_class_d_check),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_ipv6_v4mapped_check, _efl_net_ip_address_ipv6_v4mapped_check),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_ipv6_v4compat_check, _efl_net_ip_address_ipv6_v4compat_check),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_ipv6_local_link_check, _efl_net_ip_address_ipv6_local_link_check),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_ipv6_local_site_check, _efl_net_ip_address_ipv6_local_site_check),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_multicast_check, _efl_net_ip_address_multicast_check),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_loopback_check, _efl_net_ip_address_loopback_check),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_any_check, _efl_net_ip_address_any_check),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_net_ip_address_efl_object_finalize),
      EFL_NET_IP_ADDRESS_EXTRA_OPS
   );
   opsp = &ops;

#ifndef EFL_NET_IP_ADDRESS_EXTRA_CLASS_OPS
#define EFL_NET_IP_ADDRESS_EXTRA_CLASS_OPS
#endif

   EFL_OPS_DEFINE(cops,
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_create, _efl_net_ip_address_create),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_create_sockaddr, _efl_net_ip_address_create_sockaddr),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_parse, _efl_net_ip_address_parse),
      EFL_OBJECT_OP_FUNC(efl_net_ip_address_resolve, _efl_net_ip_address_resolve),
      EFL_NET_IP_ADDRESS_EXTRA_CLASS_OPS
   );
   copsp = &cops;

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_ip_address_class_desc = {
   EO_VERSION,
   "Efl.Net.Ip_Address",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Ip_Address_Data),
   _efl_net_ip_address_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_ip_address_class_get, &_efl_net_ip_address_class_desc, EFL_OBJECT_CLASS, NULL);
