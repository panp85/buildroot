#ifndef _ELDBUS_MODEL_PROXY_EO_H_
#define _ELDBUS_MODEL_PROXY_EO_H_

#ifndef _ELDBUS_MODEL_PROXY_EO_CLASS_TYPE
#define _ELDBUS_MODEL_PROXY_EO_CLASS_TYPE

typedef Eo Eldbus_Model_Proxy;

#endif

#ifndef _ELDBUS_MODEL_PROXY_EO_TYPES
#define _ELDBUS_MODEL_PROXY_EO_TYPES


#endif
/** Eldbus model proxy class
 *
 * @ingroup Eldbus_Model_Proxy
 */
#define ELDBUS_MODEL_PROXY_CLASS eldbus_model_proxy_class_get()

EWAPI const Efl_Class *eldbus_model_proxy_class_get(void);

/**
 * @brief Custom Eldbus_Model_Proxy constructor.
 *
 * @param[in] object Eldbus object
 * @param[in] interface The introspected interface
 *
 * @since 1.16
 *
 * @ingroup Eldbus_Model_Proxy
 */
EOAPI void eldbus_model_proxy_constructor(Eo *obj, Eldbus_Object *object, const Eldbus_Introspection_Interface *interface);

/**
 * @brief Proxy name
 *
 * @return Proxy name
 *
 * @ingroup Eldbus_Model_Proxy
 */
EOAPI const char *eldbus_model_proxy_name_get(const Eo *obj);

#endif
