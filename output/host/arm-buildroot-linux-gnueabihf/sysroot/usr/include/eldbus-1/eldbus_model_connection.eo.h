#ifndef _ELDBUS_MODEL_CONNECTION_EO_H_
#define _ELDBUS_MODEL_CONNECTION_EO_H_

#ifndef _ELDBUS_MODEL_CONNECTION_EO_CLASS_TYPE
#define _ELDBUS_MODEL_CONNECTION_EO_CLASS_TYPE

typedef Eo Eldbus_Model_Connection;

#endif

#ifndef _ELDBUS_MODEL_CONNECTION_EO_TYPES
#define _ELDBUS_MODEL_CONNECTION_EO_TYPES


#endif
/** Eldbus model connection class
 *
 * @ingroup Eldbus_Model_Connection
 */
#define ELDBUS_MODEL_CONNECTION_CLASS eldbus_model_connection_class_get()

EWAPI const Efl_Class *eldbus_model_connection_class_get(void);

/**
 * @brief Custom Eldbus_Model_Connection constructor.
 *
 * @param[in] type The connection type
 * @param[in] address Remote address of DBus
 * @param[in] private_ Non shared dbus connection
 *
 * @since 1.16
 *
 * @ingroup Eldbus_Model_Connection
 */
EOAPI void eldbus_model_connection_constructor(Eo *obj, Eldbus_Connection_Type type, const char *address, Eina_Bool private_);

/**
 * @brief Connection type
 *
 * @return Connection type
 *
 * @ingroup Eldbus_Model_Connection
 */
EOAPI Eldbus_Connection_Type eldbus_model_connection_type_get(const Eo *obj);

/**
 * @brief Remote DBus address
 *
 * @return Address
 *
 * @ingroup Eldbus_Model_Connection
 */
EOAPI const char *eldbus_model_connection_address_get(const Eo *obj);

/**
 * @brief Indicate if the DBus connection is shared or private
 *
 * @return Private DBus connection
 *
 * @ingroup Eldbus_Model_Connection
 */
EOAPI Eina_Bool eldbus_model_connection_private_get(const Eo *obj);

#endif
