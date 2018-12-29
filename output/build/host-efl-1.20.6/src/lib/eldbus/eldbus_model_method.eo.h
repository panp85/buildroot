#ifndef _ELDBUS_MODEL_METHOD_EO_H_
#define _ELDBUS_MODEL_METHOD_EO_H_

#ifndef _ELDBUS_MODEL_METHOD_EO_CLASS_TYPE
#define _ELDBUS_MODEL_METHOD_EO_CLASS_TYPE

typedef Eo Eldbus_Model_Method;

#endif

#ifndef _ELDBUS_MODEL_METHOD_EO_TYPES
#define _ELDBUS_MODEL_METHOD_EO_TYPES


#endif
/** Eldbus model method class
 *
 * @ingroup Eldbus_Model_Method
 */
#define ELDBUS_MODEL_METHOD_CLASS eldbus_model_method_class_get()

EWAPI const Efl_Class *eldbus_model_method_class_get(void);

/**
 * @brief Custom Eldbus_Model_Method constructor.
 *
 * @param[in] proxy Eldbus proxy
 * @param[in] method The introspected method
 *
 * @since 1.16
 *
 * @ingroup Eldbus_Model_Method
 */
EOAPI void eldbus_model_method_constructor(Eo *obj, Eldbus_Proxy *proxy, const Eldbus_Introspection_Method *method);

/**
 * @brief Calls the method. The properties must have been set.
 *
 * The event EMODEL_EVENT_PROPERTIES_CHANGED is raised for output arguments
 * (properties).
 *
 * The event ELDBUS_MODEL_METHOD_EVENT_METHOD_CALLED is raised for a successful
 * call. Otherwise
 *
 * @since 1.16
 *
 * @ingroup Eldbus_Model_Method
 */
EOAPI void eldbus_model_method_call(Eo *obj);

EWAPI extern const Efl_Event_Description _ELDBUS_MODEL_METHOD_EVENT_SUCCESSFUL_CALL;

/** Event dispatched for a successful method call.
 *
 * @ingroup Eldbus_Model_Method
 */
#define ELDBUS_MODEL_METHOD_EVENT_SUCCESSFUL_CALL (&(_ELDBUS_MODEL_METHOD_EVENT_SUCCESSFUL_CALL))

#endif
