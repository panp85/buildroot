#ifndef _EFL_TEXT_PROPERTIES_EO_H_
#define _EFL_TEXT_PROPERTIES_EO_H_

#ifndef _EFL_TEXT_PROPERTIES_EO_CLASS_TYPE
#define _EFL_TEXT_PROPERTIES_EO_CLASS_TYPE

typedef Eo Efl_Text_Properties;

#endif

#ifndef _EFL_TEXT_PROPERTIES_EO_TYPES
#define _EFL_TEXT_PROPERTIES_EO_TYPES

/** Efl font size type
 *
 * @ingroup Efl_Font_Size
 */
typedef int Efl_Font_Size;


#endif
/** Efl text properties interface
 *
 * @ingroup Efl_Text_Properties
 */
#define EFL_TEXT_PROPERTIES_INTERFACE efl_text_properties_interface_get()

EWAPI const Efl_Class *efl_text_properties_interface_get(void);

/**
 * @brief Set the font family or filename, and size on a given text object.
 *
 * This function allows the font name and size of a text object to be set. The
 * font string has to follow fontconfig's convention on naming fonts, as it's
 * the underlying library used to query system fonts by Evas (see the fc-list
 * command's output, on your system, to get an idea). Alternatively, one can
 * use a full path to a font file.
 *
 * See also @ref efl_text_properties_font_get,
 * @ref efl_text_properties_font_source_get.
 *
 * @param[in] font The font family name or filename.
 * @param[in] size The font size, in points.
 *
 * @ingroup Efl_Text_Properties
 */
EOAPI void efl_text_properties_font_set(Eo *obj, const char *font, Efl_Font_Size size);

/**
 * @brief Retrieve the font family and size in use on a given text object.
 *
 * This function allows the font name and size of a text object to be queried.
 * Be aware that the font name string is still owned by Evas and should not
 * have free() called on it by the caller of the function.
 *
 * See also @ref efl_text_properties_font_set.
 *
 * @param[out] font The font family name or filename.
 * @param[out] size The font size, in points.
 *
 * @ingroup Efl_Text_Properties
 */
EOAPI void efl_text_properties_font_get(const Eo *obj, const char **font, Efl_Font_Size *size);

/**
 * @brief Set the font (source) file to be used on a given text object.
 *
 * This function allows the font file to be explicitly set for a given text
 * object, overriding system lookup, which will first occur in the given file's
 * contents.
 *
 * See also @ref efl_text_properties_font_set.
 *
 * @param[in] font_source The font file's path.
 *
 * @ingroup Efl_Text_Properties
 */
EOAPI void efl_text_properties_font_source_set(Eo *obj, const char *font_source);

/**
 * @brief Get the font file's path which is being used on a given text object.
 *
 * See @ref efl_text_properties_font_get for more details.
 *
 * @return The font file's path.
 *
 * @ingroup Efl_Text_Properties
 */
EOAPI const char *efl_text_properties_font_source_get(const Eo *obj);

#endif
