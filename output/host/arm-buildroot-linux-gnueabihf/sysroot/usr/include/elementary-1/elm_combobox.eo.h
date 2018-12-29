#ifndef _ELM_COMBOBOX_EO_H_
#define _ELM_COMBOBOX_EO_H_

#ifndef _ELM_COMBOBOX_EO_CLASS_TYPE
#define _ELM_COMBOBOX_EO_CLASS_TYPE

typedef Eo Elm_Combobox;

#endif

#ifndef _ELM_COMBOBOX_EO_TYPES
#define _ELM_COMBOBOX_EO_TYPES


#endif
/** Elementary combobox class
 *
 * @ingroup Elm_Combobox
 */
#define ELM_COMBOBOX_CLASS elm_combobox_class_get()

EWAPI const Efl_Class *elm_combobox_class_get(void);

/**
 * @brief Returns whether the combobox is expanded.
 *
 * This will return EINA_TRUE if the combobox is expanded or EINA_FALSE if it
 * is not expanded.
 *
 * @return @c true if combobox is expenaded, @c false otherwise
 *
 * @since 1.17
 *
 * @ingroup Elm_Combobox
 */
EOAPI Eina_Bool elm_obj_combobox_expanded_get(const Eo *obj);

/** This triggers the combobox popup from code, the same as if the user had
 * clicked the button.
 *
 * @since 1.17
 *
 * @ingroup Elm_Combobox
 */
EOAPI void elm_obj_combobox_hover_begin(Eo *obj);

/** This dismisses the combobox popup as if the user had clicked outside the
 * hover.
 *
 * @since 1.17
 *
 * @ingroup Elm_Combobox
 */
EOAPI void elm_obj_combobox_hover_end(Eo *obj);

EWAPI extern const Efl_Event_Description _ELM_COMBOBOX_EVENT_DISMISSED;

/** Called when combobox was dismissed
 *
 * @ingroup Elm_Combobox
 */
#define ELM_COMBOBOX_EVENT_DISMISSED (&(_ELM_COMBOBOX_EVENT_DISMISSED))

EWAPI extern const Efl_Event_Description _ELM_COMBOBOX_EVENT_EXPANDED;

/** Called when combobox was expanded
 *
 * @ingroup Elm_Combobox
 */
#define ELM_COMBOBOX_EVENT_EXPANDED (&(_ELM_COMBOBOX_EVENT_EXPANDED))

EWAPI extern const Efl_Event_Description _ELM_COMBOBOX_EVENT_CLICKED;

/** Called when combobox was clicked
 *
 * @ingroup Elm_Combobox
 */
#define ELM_COMBOBOX_EVENT_CLICKED (&(_ELM_COMBOBOX_EVENT_CLICKED))

EWAPI extern const Efl_Event_Description _ELM_COMBOBOX_EVENT_ITEM_SELECTED;

/** Called when combobox item was selected
 *
 * @ingroup Elm_Combobox
 */
#define ELM_COMBOBOX_EVENT_ITEM_SELECTED (&(_ELM_COMBOBOX_EVENT_ITEM_SELECTED))

EWAPI extern const Efl_Event_Description _ELM_COMBOBOX_EVENT_ITEM_PRESSED;

/** Called when combobox item was pressed
 *
 * @ingroup Elm_Combobox
 */
#define ELM_COMBOBOX_EVENT_ITEM_PRESSED (&(_ELM_COMBOBOX_EVENT_ITEM_PRESSED))

EWAPI extern const Efl_Event_Description _ELM_COMBOBOX_EVENT_FILTER_DONE;

/** Called when combobox filter was done
 *
 * @ingroup Elm_Combobox
 */
#define ELM_COMBOBOX_EVENT_FILTER_DONE (&(_ELM_COMBOBOX_EVENT_FILTER_DONE))

#endif
