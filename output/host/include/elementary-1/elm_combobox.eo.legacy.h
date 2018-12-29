#ifndef _ELM_COMBOBOX_EO_LEGACY_H_
#define _ELM_COMBOBOX_EO_LEGACY_H_

#ifndef _ELM_COMBOBOX_EO_CLASS_TYPE
#define _ELM_COMBOBOX_EO_CLASS_TYPE

typedef Eo Elm_Combobox;

#endif

#ifndef _ELM_COMBOBOX_EO_TYPES
#define _ELM_COMBOBOX_EO_TYPES


#endif

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
EAPI Eina_Bool elm_combobox_expanded_get(const Elm_Combobox *obj);

/** This triggers the combobox popup from code, the same as if the user had
 * clicked the button.
 *
 * @since 1.17
 *
 * @ingroup Elm_Combobox
 */
EAPI void elm_combobox_hover_begin(Elm_Combobox *obj);

/** This dismisses the combobox popup as if the user had clicked outside the
 * hover.
 *
 * @since 1.17
 *
 * @ingroup Elm_Combobox
 */
EAPI void elm_combobox_hover_end(Elm_Combobox *obj);

#endif
