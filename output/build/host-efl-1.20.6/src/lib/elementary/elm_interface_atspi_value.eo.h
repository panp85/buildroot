#ifndef _ELM_INTERFACE_ATSPI_VALUE_EO_H_
#define _ELM_INTERFACE_ATSPI_VALUE_EO_H_

#ifndef _ELM_INTERFACE_ATSPI_VALUE_EO_CLASS_TYPE
#define _ELM_INTERFACE_ATSPI_VALUE_EO_CLASS_TYPE

typedef Eo Elm_Interface_Atspi_Value;

#endif

#ifndef _ELM_INTERFACE_ATSPI_VALUE_EO_TYPES
#define _ELM_INTERFACE_ATSPI_VALUE_EO_TYPES


#endif
/** Elementary AT-SPI value interface
 *
 * @ingroup Elm_Interface_Atspi_Value
 */
#define ELM_INTERFACE_ATSPI_VALUE_INTERFACE elm_interface_atspi_value_interface_get()

EWAPI const Efl_Class *elm_interface_atspi_value_interface_get(void);

#ifdef ELM_INTERFACE_ATSPI_VALUE_PROTECTED
/**
 * @brief Value and text property
 *
 * @param[in] value Value of widget casted to floating point number.
 * @param[in] text string describing value in given context eg. small, enough
 *
 * @return @c true if setting widgets value has succeed, @c false otherwise.
 *
 * @ingroup Elm_Interface_Atspi_Value
 */
EOAPI Eina_Bool elm_interface_atspi_value_and_text_set(Eo *obj, double value, const char *text);
#endif

#ifdef ELM_INTERFACE_ATSPI_VALUE_PROTECTED
/**
 * @brief Value and text property
 *
 * Gets value displayed by a accessible widget.
 *
 * @param[out] value Value of widget casted to floating point number.
 * @param[out] text string describing value in given context eg. small, enough
 *
 * @ingroup Elm_Interface_Atspi_Value
 */
EOAPI void elm_interface_atspi_value_and_text_get(const Eo *obj, double *value, const char **text);
#endif

#ifdef ELM_INTERFACE_ATSPI_VALUE_PROTECTED
/**
 * @brief Gets a range of all possible values and its description
 *
 * @param[out] lower_limit Lower limit of the range
 * @param[out] upper_limit Upper limit of the range
 * @param[out] description Description of the range
 *
 * @ingroup Elm_Interface_Atspi_Value
 */
EOAPI void elm_interface_atspi_value_range_get(const Eo *obj, double *lower_limit, double *upper_limit, const char **description);
#endif

#ifdef ELM_INTERFACE_ATSPI_VALUE_PROTECTED
/**
 * @brief Gets an minimal incrementation value
 *
 * @return Minimal incrementation value
 *
 * @ingroup Elm_Interface_Atspi_Value
 */
EOAPI double elm_interface_atspi_value_increment_get(const Eo *obj);
#endif

#endif
