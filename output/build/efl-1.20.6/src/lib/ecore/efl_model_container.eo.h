#ifndef _EFL_MODEL_CONTAINER_EO_H_
#define _EFL_MODEL_CONTAINER_EO_H_

#ifndef _EFL_MODEL_CONTAINER_EO_CLASS_TYPE
#define _EFL_MODEL_CONTAINER_EO_CLASS_TYPE

typedef Eo Efl_Model_Container;

#endif

#ifndef _EFL_MODEL_CONTAINER_EO_TYPES
#define _EFL_MODEL_CONTAINER_EO_TYPES


#endif
/**
 * @brief Class used to create data models from Eina containers.
 *
 * Each container supplied represent a series of property values, each item
 * being the property value for a child object (@Efl.Model.Container.Item).
 *
 * The data in the given containers are copied and stored internally.
 *
 * Several containers can be supplied, and the number of allocated children is
 * based on the container with the biggest size.
 *
 * @ingroup Efl_Model_Container
 */
#define EFL_MODEL_CONTAINER_CLASS efl_model_container_class_get()

EWAPI const Efl_Class *efl_model_container_class_get(void);

/**
 * @brief Gets the type of the given property.
 *
 * @param[in] name Property name
 *
 * @return Property type
 *
 * @ingroup Efl_Model_Container
 */
EOAPI const Eina_Value_Type *efl_model_container_child_property_value_type_get(Eo *obj, const char *name);

/**
 * @brief Gets the values for the given property.
 *
 * @param[in] name Property name
 *
 * @return The currently wrapped values
 *
 * @ingroup Efl_Model_Container
 */
EOAPI Eina_Iterator *efl_model_container_child_property_values_get(Eo *obj, const char *name) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Adds the given property to child objects and supply the values.
 *
 * Each item will represent the value of the given property in the respective
 * child within the data model.
 *
 * New children objects are allocated as necessary.
 *
 * Value type is required for compatibility with the @ref Efl_Model API.
 *
 * @param[in] name Property name
 * @param[in] type Property type
 * @param[in] values Values to be added
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Model_Container
 */
EOAPI Eina_Bool efl_model_container_child_property_add(Eo *obj, const char *name, const Eina_Value_Type *type, Eina_Iterator *values);

#endif
