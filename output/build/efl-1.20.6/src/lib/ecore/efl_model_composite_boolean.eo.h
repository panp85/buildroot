#ifndef _EFL_MODEL_COMPOSITE_BOOLEAN_EO_H_
#define _EFL_MODEL_COMPOSITE_BOOLEAN_EO_H_

#ifndef _EFL_MODEL_COMPOSITE_BOOLEAN_EO_CLASS_TYPE
#define _EFL_MODEL_COMPOSITE_BOOLEAN_EO_CLASS_TYPE

typedef Eo Efl_Model_Composite_Boolean;

#endif

#ifndef _EFL_MODEL_COMPOSITE_BOOLEAN_EO_TYPES
#define _EFL_MODEL_COMPOSITE_BOOLEAN_EO_TYPES


#endif
/** Efl model composite boolean class
 *
 * @ingroup Efl_Model_Composite_Boolean
 */
#define EFL_MODEL_COMPOSITE_BOOLEAN_CLASS efl_model_composite_boolean_class_get()

EWAPI const Efl_Class *efl_model_composite_boolean_class_get(void);

/**
 * @brief Composite model
 *
 * @param[in] model Efl model
 *
 * @ingroup Efl_Model_Composite_Boolean
 */
EOAPI void efl_model_composite_boolean_composite_model_set(Eo *obj, Efl_Model *model);

/**
 * @brief Composite model
 *
 * @return Efl model
 *
 * @ingroup Efl_Model_Composite_Boolean
 */
EOAPI Efl_Model *efl_model_composite_boolean_composite_model_get(const Eo *obj);

/**
 * @brief Adds property
 *
 * @param[in] name Property name
 * @param[in] initial_value Initial property value @c bool
 *
 * @ingroup Efl_Model_Composite_Boolean
 */
EOAPI void efl_model_composite_boolean_property_add(Eo *obj, const char *name, Eina_Bool initial_value);

#endif
