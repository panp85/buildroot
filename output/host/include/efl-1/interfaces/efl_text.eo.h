#ifndef _EFL_TEXT_EO_H_
#define _EFL_TEXT_EO_H_

#ifndef _EFL_TEXT_EO_CLASS_TYPE
#define _EFL_TEXT_EO_CLASS_TYPE

typedef Eo Efl_Text;

#endif

#ifndef _EFL_TEXT_EO_TYPES
#define _EFL_TEXT_EO_TYPES


#endif
/** Efl text interface
 *
 * @ingroup Efl_Text
 */
#define EFL_TEXT_INTERFACE efl_text_interface_get()

EWAPI const Efl_Class *efl_text_interface_get(void);

/**
 * @brief Sets the text string to be displayed by the given text object.
 *
 * See also @ref efl_text_get.
 *
 * @param[in] text Text string to display on it.
 *
 * @ingroup Efl_Text
 */
EOAPI void efl_text_set(Eo *obj, const char *text);

/**
 * @brief Retrieves the text string currently being displayed by the given text
 * object.
 *
 * Do not free() the return value.
 *
 * See also @ref efl_text_set.
 *
 * @return Text string to display on it.
 *
 * @ingroup Efl_Text
 */
EOAPI const char *efl_text_get(const Eo *obj);

#endif
