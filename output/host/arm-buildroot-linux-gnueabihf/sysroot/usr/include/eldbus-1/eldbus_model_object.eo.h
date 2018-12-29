#ifndef _ELDBUS_MODEL_OBJECT_EO_H_
#define _ELDBUS_MODEL_OBJECT_EO_H_

#ifndef _ELDBUS_MODEL_OBJECT_EO_CLASS_TYPE
#define _ELDBUS_MODEL_OBJECT_EO_CLASS_TYPE

typedef Eo Eldbus_Model_Object;

#endif

#ifndef _ELDBUS_MODEL_OBJECT_EO_TYPES
#define _ELDBUS_MODEL_OBJECT_EO_TYPES


#endif
/** Eldbus model object class
 *
 * @ingroup Eldbus_Model_Object
 */
#define ELDBUS_MODEL_OBJECT_CLASS eldbus_model_object_class_get()

EWAPI const Efl_Class *eldbus_model_object_class_get(void);

/**
 * @brief Custom Eldbus_Model_Object constructor.
 *
 * @param[in] type The connection type
 * @param[in] address Remote address of DBus
 * @param[in] private_ Non shared DBus connection
 * @param[in] bus DBus Name or unique-id
 * @param[in] path DBus path
 *
 * @since 1.16
 *
 * @ingroup Eldbus_Model_Object
 */
EOAPI void eldbus_model_object_constructor(Eo *obj, Eldbus_Connection_Type type, const char *address, Eina_Bool private_, const char *bus, const char *path);

/**
 * @brief Custom Eldbus_Model_Object connection_constructor.
 *
 * @param[in] connection Eldbus connection
 * @param[in] bus DBus Name or unique-id
 * @param[in] path DBus path
 *
 * @since 1.16
 *
 * @ingroup Eldbus_Model_Object
 */
EOAPI void eldbus_model_object_connection_constructor(Eo *obj, Eldbus_Connection *connection, const char *bus, const char *path);

/**
 * @brief Connection type
 *
 * @return Connection type
 *
 * @ingroup Eldbus_Model_Object
 */
EOAPI Eldbus_Connection_Type eldbus_model_object_type_get(const Eo *obj);

/**
 * @brief Remote address of DBus
 *
 * @return Address
 *
 * @ingroup Eldbus_Model_Object
 */
EOAPI const char *eldbus_model_object_address_get(const Eo *obj);

/**
 * @brief Indicate if the DBus connection is shared or private
 *
 * @return Private DBus connection
 *
 * @ingroup Eldbus_Model_Object
 */
EOAPI Eina_Bool eldbus_model_object_private_get(const Eo *obj);

/**
 * @brief DBus Name or unique-id
 *
 * @return DBus name
 *
 * @ingroup Eldbus_Model_Object
 */
EOAPI const char *eldbus_model_object_bus_get(const Eo *obj);

/**
 * @brief DBus path
 *
 * @return DBus path
 *
 * @ingroup Eldbus_Model_Object
 */
EOAPI const char *eldbus_model_object_path_get(const Eo *obj);

#endif
