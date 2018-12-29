#ifndef _EFL_MODEL_ITEM_EO_H_
#define _EFL_MODEL_ITEM_EO_H_

#ifndef _EFL_MODEL_ITEM_EO_CLASS_TYPE
#define _EFL_MODEL_ITEM_EO_CLASS_TYPE

typedef Eo Efl_Model_Item;

#endif

#ifndef _EFL_MODEL_ITEM_EO_TYPES
#define _EFL_MODEL_ITEM_EO_TYPES


#endif
/**
 * @brief Generic model that allows any property to be manually set. Also
 * children of the same type can be added and deleted.
 *
 * Intended to be used in scenarios where the user needs a manually defined
 * data model, like in tests.
 *
 * It does not model anything in particular and does not affect anything else
 * in the system.
 *
 * @ingroup Efl_Model_Item
 */
#define EFL_MODEL_ITEM_CLASS efl_model_item_class_get()

EWAPI const Efl_Class *efl_model_item_class_get(void);

#endif
