#ifndef _ELDBUS_MODEL_ARGUMENTS_EO_H_
#define _ELDBUS_MODEL_ARGUMENTS_EO_H_

#ifndef _ELDBUS_MODEL_ARGUMENTS_EO_CLASS_TYPE
#define _ELDBUS_MODEL_ARGUMENTS_EO_CLASS_TYPE

typedef Eo Eldbus_Model_Arguments;

#endif

#ifndef _ELDBUS_MODEL_ARGUMENTS_EO_TYPES
#define _ELDBUS_MODEL_ARGUMENTS_EO_TYPES


#endif
/** Eldbus model arguments class
 *
 * @ingroup Eldbus_Model_Arguments
 */
#define ELDBUS_MODEL_ARGUMENTS_CLASS eldbus_model_arguments_class_get()

EWAPI const Efl_Class *eldbus_model_arguments_class_get(void);

/**
 * @brief Custom Eldbus_Model_Arguments constructor.
 *
 * @param[in] proxy Eldbus proxy
 * @param[in] name Name
 * @param[in] arguments The introspected arguments
 *
 * @since 1.16
 *
 * @ingroup Eldbus_Model_Arguments
 */
EOAPI void eldbus_model_arguments_constructor(Eo *obj, Eldbus_Proxy *proxy, const char *name, const Eina_List *arguments);

/**
 * @brief Name of the argument
 *
 * @return Argument name
 *
 * @ingroup Eldbus_Model_Arguments
 */
EOAPI const char *eldbus_model_arguments_name_get(const Eo *obj);

#endif
