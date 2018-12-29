#ifndef _ELM_CTXPOPUP_ITEM_EO_H_
#define _ELM_CTXPOPUP_ITEM_EO_H_

#ifndef _ELM_CTXPOPUP_ITEM_EO_CLASS_TYPE
#define _ELM_CTXPOPUP_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Ctxpopup_Item;

#endif

#ifndef _ELM_CTXPOPUP_ITEM_EO_TYPES
#define _ELM_CTXPOPUP_ITEM_EO_TYPES


#endif
/** Elementary context popup item class
 *
 * @ingroup Elm_Ctxpopup_Item
 */
#define ELM_CTXPOPUP_ITEM_CLASS elm_ctxpopup_item_class_get()

EWAPI const Efl_Class *elm_ctxpopup_item_class_get(void);

/**
 * @brief Init context popup item
 *
 * @param[in] func Smart callback function
 * @param[in] data Data pointer
 *
 * @ingroup Elm_Ctxpopup_Item
 */
EOAPI void elm_obj_ctxpopup_item_init(Eo *obj, Evas_Smart_Cb func, const void *data);

#endif
