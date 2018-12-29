#ifndef _ELM_GENLIST_PAN_EO_H_
#define _ELM_GENLIST_PAN_EO_H_

#ifndef _ELM_GENLIST_PAN_EO_CLASS_TYPE
#define _ELM_GENLIST_PAN_EO_CLASS_TYPE

typedef Eo Elm_Genlist_Pan;

#endif

#ifndef _ELM_GENLIST_PAN_EO_TYPES
#define _ELM_GENLIST_PAN_EO_TYPES


#endif
/** Elementary genlist pan class
 *
 * @ingroup Elm_Genlist_Pan
 */
#define ELM_GENLIST_PAN_CLASS elm_genlist_pan_class_get()

EWAPI const Efl_Class *elm_genlist_pan_class_get(void);

EWAPI extern const Efl_Event_Description _ELM_GENLIST_PAN_EVENT_ITEM_FOCUSED;

/** Called when item got focus
 *
 * @ingroup Elm_Genlist_Pan
 */
#define ELM_GENLIST_PAN_EVENT_ITEM_FOCUSED (&(_ELM_GENLIST_PAN_EVENT_ITEM_FOCUSED))

EWAPI extern const Efl_Event_Description _ELM_GENLIST_PAN_EVENT_ITEM_UNFOCUSED;

/** Called when item lost focus
 *
 * @ingroup Elm_Genlist_Pan
 */
#define ELM_GENLIST_PAN_EVENT_ITEM_UNFOCUSED (&(_ELM_GENLIST_PAN_EVENT_ITEM_UNFOCUSED))

#endif
