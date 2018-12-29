
Efl_Net_Ssl_Context *_efl_net_ssl_context_default_dialer_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ssl_context_default_dialer_get, Efl_Net_Ssl_Context *, NULL);

void _efl_net_ssl_context_setup(Eo *obj, Efl_Net_Ssl_Context_Data *pd, Efl_Net_Ssl_Cipher cipher, Eina_Bool is_dialer);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_ssl_context_setup, EFL_FUNC_CALL(cipher, is_dialer), Efl_Net_Ssl_Cipher cipher, Eina_Bool is_dialer);

void _efl_net_ssl_context_certificates_set(Eo *obj, Efl_Net_Ssl_Context_Data *pd, Eina_Iterator *paths);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_ssl_context_certificates_set, EFL_FUNC_CALL(paths), Eina_Iterator *paths);

Eina_Iterator *_efl_net_ssl_context_certificates_get(Eo *obj, Efl_Net_Ssl_Context_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ssl_context_certificates_get, Eina_Iterator *, NULL);

void _efl_net_ssl_context_private_keys_set(Eo *obj, Efl_Net_Ssl_Context_Data *pd, Eina_Iterator *paths);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_ssl_context_private_keys_set, EFL_FUNC_CALL(paths), Eina_Iterator *paths);

Eina_Iterator *_efl_net_ssl_context_private_keys_get(Eo *obj, Efl_Net_Ssl_Context_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ssl_context_private_keys_get, Eina_Iterator *, NULL);

void _efl_net_ssl_context_certificate_revocation_lists_set(Eo *obj, Efl_Net_Ssl_Context_Data *pd, Eina_Iterator *paths);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_ssl_context_certificate_revocation_lists_set, EFL_FUNC_CALL(paths), Eina_Iterator *paths);

Eina_Iterator *_efl_net_ssl_context_certificate_revocation_lists_get(Eo *obj, Efl_Net_Ssl_Context_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ssl_context_certificate_revocation_lists_get, Eina_Iterator *, NULL);

void _efl_net_ssl_context_certificate_authorities_set(Eo *obj, Efl_Net_Ssl_Context_Data *pd, Eina_Iterator *paths);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_ssl_context_certificate_authorities_set, EFL_FUNC_CALL(paths), Eina_Iterator *paths);

Eina_Iterator *_efl_net_ssl_context_certificate_authorities_get(Eo *obj, Efl_Net_Ssl_Context_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ssl_context_certificate_authorities_get, Eina_Iterator *, NULL);

void _efl_net_ssl_context_default_paths_load_set(Eo *obj, Efl_Net_Ssl_Context_Data *pd, Eina_Bool default_paths_load);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_ssl_context_default_paths_load_set, EFL_FUNC_CALL(default_paths_load), Eina_Bool default_paths_load);

Eina_Bool _efl_net_ssl_context_default_paths_load_get(Eo *obj, Efl_Net_Ssl_Context_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ssl_context_default_paths_load_get, Eina_Bool, 0);

void _efl_net_ssl_context_verify_mode_set(Eo *obj, Efl_Net_Ssl_Context_Data *pd, Efl_Net_Ssl_Verify_Mode verify_mode);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_ssl_context_verify_mode_set, EFL_FUNC_CALL(verify_mode), Efl_Net_Ssl_Verify_Mode verify_mode);

Efl_Net_Ssl_Verify_Mode _efl_net_ssl_context_verify_mode_get(Eo *obj, Efl_Net_Ssl_Context_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ssl_context_verify_mode_get, Efl_Net_Ssl_Verify_Mode, 0);

void _efl_net_ssl_context_hostname_verify_set(Eo *obj, Efl_Net_Ssl_Context_Data *pd, Eina_Bool hostname_verify);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_ssl_context_hostname_verify_set, EFL_FUNC_CALL(hostname_verify), Eina_Bool hostname_verify);

Eina_Bool _efl_net_ssl_context_hostname_verify_get(Eo *obj, Efl_Net_Ssl_Context_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ssl_context_hostname_verify_get, Eina_Bool, 0);

void _efl_net_ssl_context_hostname_set(Eo *obj, Efl_Net_Ssl_Context_Data *pd, const char *hostname);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_ssl_context_hostname_set, EFL_FUNC_CALL(hostname), const char *hostname);

const char *_efl_net_ssl_context_hostname_get(Eo *obj, Efl_Net_Ssl_Context_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_ssl_context_hostname_get, const char *, NULL);

Efl_Object *_efl_net_ssl_context_efl_object_constructor(Eo *obj, Efl_Net_Ssl_Context_Data *pd);


void _efl_net_ssl_context_efl_object_destructor(Eo *obj, Efl_Net_Ssl_Context_Data *pd);


Efl_Object *_efl_net_ssl_context_efl_object_finalize(Eo *obj, Efl_Net_Ssl_Context_Data *pd);


static Eina_Bool
_efl_net_ssl_context_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SSL_CONTEXT_EXTRA_OPS
#define EFL_NET_SSL_CONTEXT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_setup, _efl_net_ssl_context_setup),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_certificates_set, _efl_net_ssl_context_certificates_set),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_certificates_get, _efl_net_ssl_context_certificates_get),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_private_keys_set, _efl_net_ssl_context_private_keys_set),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_private_keys_get, _efl_net_ssl_context_private_keys_get),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_certificate_revocation_lists_set, _efl_net_ssl_context_certificate_revocation_lists_set),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_certificate_revocation_lists_get, _efl_net_ssl_context_certificate_revocation_lists_get),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_certificate_authorities_set, _efl_net_ssl_context_certificate_authorities_set),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_certificate_authorities_get, _efl_net_ssl_context_certificate_authorities_get),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_default_paths_load_set, _efl_net_ssl_context_default_paths_load_set),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_default_paths_load_get, _efl_net_ssl_context_default_paths_load_get),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_verify_mode_set, _efl_net_ssl_context_verify_mode_set),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_verify_mode_get, _efl_net_ssl_context_verify_mode_get),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_hostname_verify_set, _efl_net_ssl_context_hostname_verify_set),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_hostname_verify_get, _efl_net_ssl_context_hostname_verify_get),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_hostname_set, _efl_net_ssl_context_hostname_set),
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_hostname_get, _efl_net_ssl_context_hostname_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_net_ssl_context_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_ssl_context_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_net_ssl_context_efl_object_finalize),
      EFL_NET_SSL_CONTEXT_EXTRA_OPS
   );
   opsp = &ops;

#ifndef EFL_NET_SSL_CONTEXT_EXTRA_CLASS_OPS
#define EFL_NET_SSL_CONTEXT_EXTRA_CLASS_OPS
#endif

   EFL_OPS_DEFINE(cops,
      EFL_OBJECT_OP_FUNC(efl_net_ssl_context_default_dialer_get, _efl_net_ssl_context_default_dialer_get),
      EFL_NET_SSL_CONTEXT_EXTRA_CLASS_OPS
   );
   copsp = &cops;

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_ssl_context_class_desc = {
   EO_VERSION,
   "Efl.Net.Ssl.Context",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Ssl_Context_Data),
   _efl_net_ssl_context_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_ssl_context_class_get, &_efl_net_ssl_context_class_desc, EFL_OBJECT_CLASS, NULL);
