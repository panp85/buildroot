#ifndef _EFL_MODEL_CONTAINER_ITEM_EO_H_
#define _EFL_MODEL_CONTAINER_ITEM_EO_H_

#ifndef _EFL_MODEL_CONTAINER_ITEM_EO_CLASS_TYPE
#define _EFL_MODEL_CONTAINER_ITEM_EO_CLASS_TYPE

typedef Eo Efl_Model_Container_Item;

#endif

#ifndef _EFL_MODEL_CONTAINER_ITEM_EO_TYPES
#define _EFL_MODEL_CONTAINER_ITEM_EO_TYPES


#endif
/**
 * @brief Used as a child of @ref Efl_Model_Container.
 *
 * Provides the @ref Efl_Model API for elements of @ref Efl_Model_Container.
 * Should not be used in another context, so do not manually create objects of
 * this class.
 *
 * @ingroup Efl_Model_Container_Item
 */
#define EFL_MODEL_CONTAINER_ITEM_CLASS efl_model_container_item_class_get()

EWAPI const Efl_Class *efl_model_container_item_class_get(void);

/**
 * @brief Defines @ref Efl_Model_Container_Item internal data.
 *
 * @param[in] parent_data Pointer to the private data of the
 * @ref Efl_Model_Container parent object.
 * @param[in] index Index of this item within the @ref Efl_Model_Container
 * children.
 *
 * @ingroup Efl_Model_Container_Item
 */
EOAPI void efl_model_container_item_define(Eo *obj, void *parent_data, unsigned int index);

/** Invalidates the object preventing it from using the given parent data.
 *
 * @ingroup Efl_Model_Container_Item
 */
EOAPI void efl_model_container_item_invalidate(Eo *obj);

#endif
