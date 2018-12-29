#ifndef _ELM_INTERFACE_ATSPI_TEXT_EDITABLE_EO_H_
#define _ELM_INTERFACE_ATSPI_TEXT_EDITABLE_EO_H_

#ifndef _ELM_INTERFACE_ATSPI_TEXT_EDITABLE_EO_CLASS_TYPE
#define _ELM_INTERFACE_ATSPI_TEXT_EDITABLE_EO_CLASS_TYPE

typedef Eo Elm_Interface_Atspi_Text_Editable;

#endif

#ifndef _ELM_INTERFACE_ATSPI_TEXT_EDITABLE_EO_TYPES
#define _ELM_INTERFACE_ATSPI_TEXT_EDITABLE_EO_TYPES


#endif
/** Elementary AT-SPI text editable interface
 *
 * @ingroup Elm_Interface_Atspi_Text_Editable
 */
#define ELM_INTERFACE_ATSPI_TEXT_EDITABLE_INTERFACE elm_interface_atspi_text_editable_interface_get()

EWAPI const Efl_Class *elm_interface_atspi_text_editable_interface_get(void);

#ifdef ELM_INTERFACE_ATSPI_TEXT_EDITABLE_PROTECTED
/**
 * @brief Editable content property
 *
 * @param[in] string Content
 *
 * @return @c true if setting the value succeeded, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Text_Editable
 */
EOAPI Eina_Bool elm_interface_atspi_text_editable_content_set(Eo *obj, const char *string);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_EDITABLE_PROTECTED
/**
 * @brief Insert text at given position
 *
 * @param[in] string String to be inserted
 * @param[in] position Position to insert string
 *
 * @return @c true if insert succeeded, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Text_Editable
 */
EOAPI Eina_Bool elm_interface_atspi_text_editable_insert(Eo *obj, const char *string, int position);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_EDITABLE_PROTECTED
/**
 * @brief Copy text between start and end parameter
 *
 * @param[in] start Start position to copy
 * @param[in] end End position to copy
 *
 * @return @c true if copy succeeded, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Text_Editable
 */
EOAPI Eina_Bool elm_interface_atspi_text_editable_copy(Eo *obj, int start, int end);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_EDITABLE_PROTECTED
/**
 * @brief Cut text between start and end parameter
 *
 * @param[in] start Start position to cut
 * @param[in] end End position to cut
 *
 * @return @c true if cut succeeded, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Text_Editable
 */
EOAPI Eina_Bool elm_interface_atspi_text_editable_cut(Eo *obj, int start, int end);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_EDITABLE_PROTECTED
/**
 * @brief Delete text between start and end parameter
 *
 * @param[in] start Start position to delete
 * @param[in] end End position to delete
 *
 * @return @c true if delete succeeded, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Text_Editable
 */
EOAPI Eina_Bool elm_interface_atspi_text_editable_delete(Eo *obj, int start, int end);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_EDITABLE_PROTECTED
/**
 * @brief Paste text at given position
 *
 * @param[in] position Position to insert text
 *
 * @return @c true if paste succeeded, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Text_Editable
 */
EOAPI Eina_Bool elm_interface_atspi_text_editable_paste(Eo *obj, int position);
#endif

#endif
