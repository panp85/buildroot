#ifndef _EFL_TEXT_FONT_EO_H_
#define _EFL_TEXT_FONT_EO_H_

#ifndef _EFL_TEXT_FONT_EO_CLASS_TYPE
#define _EFL_TEXT_FONT_EO_CLASS_TYPE

typedef Eo Efl_Text_Font;

#endif

#ifndef _EFL_TEXT_FONT_EO_TYPES
#define _EFL_TEXT_FONT_EO_TYPES

/** Type of font weight
 *
 * @ingroup Efl_Text_Font
 */
typedef enum
{
  EFL_TEXT_FONT_WEIGHT_NORMAL = 0, /**< Normal font weight */
  EFL_TEXT_FONT_WEIGHT_THIN, /**< Thin font weight */
  EFL_TEXT_FONT_WEIGHT_ULTRALIGHT, /**< Ultralight font weight */
  EFL_TEXT_FONT_WEIGHT_EXTRALIGHT, /**< Extralight font weight */
  EFL_TEXT_FONT_WEIGHT_LIGHT, /**< Light font weight */
  EFL_TEXT_FONT_WEIGHT_BOOK, /**< Book font weight */
  EFL_TEXT_FONT_WEIGHT_MEDIUM, /**< Medium font weight */
  EFL_TEXT_FONT_WEIGHT_SEMIBOLD, /**< Semibold font weight */
  EFL_TEXT_FONT_WEIGHT_BOLD, /**< Bold font weight */
  EFL_TEXT_FONT_WEIGHT_ULTRABOLD, /**< Ultrabold font weight */
  EFL_TEXT_FONT_WEIGHT_EXTRABOLD, /**< Extrabold font weight */
  EFL_TEXT_FONT_WEIGHT_BLACK, /**< Black font weight */
  EFL_TEXT_FONT_WEIGHT_EXTRABLACK /**< Extrablack font weight */
} Efl_Text_Font_Weight;

/** Type of font width
 *
 * @ingroup Efl_Text_Font
 */
typedef enum
{
  EFL_TEXT_FONT_WIDTH_NORMAL = 0, /**< Normal font width */
  EFL_TEXT_FONT_WIDTH_ULTRACONDENSED, /**< Ultracondensed font width */
  EFL_TEXT_FONT_WIDTH_EXTRACONDENSED, /**< Extracondensed font width */
  EFL_TEXT_FONT_WIDTH_CONDENSED, /**< Condensed font width */
  EFL_TEXT_FONT_WIDTH_SEMICONDENSED, /**< Semicondensed font width */
  EFL_TEXT_FONT_WIDTH_SEMIEXPANDED, /**< Semiexpanded font width */
  EFL_TEXT_FONT_WIDTH_EXPANDED, /**< Expanded font width */
  EFL_TEXT_FONT_WIDTH_EXTRAEXPANDED, /**< Extraexpanded font width */
  EFL_TEXT_FONT_WIDTH_ULTRAEXPANDED /**< Ultraexpanded font width */
} Efl_Text_Font_Width;

/** Type of font slant
 *
 * @ingroup Efl_Text_Font
 */
typedef enum
{
  EFL_TEXT_FONT_SLANT_NORMAL = 0, /**< Normal font slant */
  EFL_TEXT_FONT_SLANT_OBLIQUE, /**< Oblique font slant */
  EFL_TEXT_FONT_SLANT_ITALIC /**< Italic font slant */
} Efl_Text_Font_Slant;


#endif
/** Font settings of the text
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Font
 */
#define EFL_TEXT_FONT_INTERFACE efl_text_font_interface_get()

EWAPI const Efl_Class *efl_text_font_interface_get(void);

/**
 * @brief The font name and size that is used for the displayed text
 *
 * @param[in] font
 * @param[in] size
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Font
 */
EOAPI void efl_text_font_set(Eo *obj, const char *font, int size);

/**
 * @brief The font name and size that is used for the displayed text
 *
 * @param[out] font
 * @param[out] size
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Font
 */
EOAPI void efl_text_font_get(const Eo *obj, const char **font, int *size);

/**
 * @brief The source that will be used to lookup the font of the text
 *
 * The source can be either a path to a font file e.g. "/path/to/font.ttf", or
 * an eet file e.g. "/path/to/font.eet".
 *
 * @param[in] font_source
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Font
 */
EOAPI void efl_text_font_source_set(Eo *obj, const char *font_source);

/**
 * @brief The source that will be used to lookup the font of the text
 *
 * The source can be either a path to a font file e.g. "/path/to/font.ttf", or
 * an eet file e.g. "/path/to/font.eet".
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Font
 */
EOAPI const char *efl_text_font_source_get(const Eo *obj);

/**
 * @brief Comma-separated list of font fallbacks
 *
 * Will be used in case the primary font isn't available.
 *
 * @param[in] font_fallbacks
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Font
 */
EOAPI void efl_text_font_fallbacks_set(Eo *obj, const char *font_fallbacks);

/**
 * @brief Comma-separated list of font fallbacks
 *
 * Will be used in case the primary font isn't available.
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Font
 */
EOAPI const char *efl_text_font_fallbacks_get(const Eo *obj);

/**
 * @brief Type of weight of the displayed font
 *
 * Default is @c Efl.Text.Font.Weight.normal\.
 *
 * @param[in] font_weight
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Font
 */
EOAPI void efl_text_font_weight_set(Eo *obj, Efl_Text_Font_Weight font_weight);

/**
 * @brief Type of weight of the displayed font
 *
 * Default is @c Efl.Text.Font.Weight.normal\.
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Font
 */
EOAPI Efl_Text_Font_Weight efl_text_font_weight_get(const Eo *obj);

/**
 * @brief Type of slant of the displayed font
 *
 * Default is @c Efl.Text.Font.Slant.normal\.
 *
 * @param[in] style
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Font
 */
EOAPI void efl_text_font_slant_set(Eo *obj, Efl_Text_Font_Slant style);

/**
 * @brief Type of slant of the displayed font
 *
 * Default is @c Efl.Text.Font.Slant.normal\.
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Font
 */
EOAPI Efl_Text_Font_Slant efl_text_font_slant_get(const Eo *obj);

/**
 * @brief Type of width of the displayed font
 *
 * Default is @c Efl.Text.Font.Width.normal\.
 *
 * @param[in] width
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Font
 */
EOAPI void efl_text_font_width_set(Eo *obj, Efl_Text_Font_Width width);

/**
 * @brief Type of width of the displayed font
 *
 * Default is @c Efl.Text.Font.Width.normal\.
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Font
 */
EOAPI Efl_Text_Font_Width efl_text_font_width_get(const Eo *obj);

/**
 * @brief Specific language of the displayed font
 *
 * This is used to lookup fonts suitable to the specified language, as well as
 * helping the font shaper backend. The language @c lang can be either a code
 * e.g "en_US", "auto" to use the system locale, or "none".
 *
 * @param[in] lang
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Font
 */
EOAPI void efl_text_font_lang_set(Eo *obj, const char *lang);

/**
 * @brief Specific language of the displayed font
 *
 * This is used to lookup fonts suitable to the specified language, as well as
 * helping the font shaper backend. The language @c lang can be either a code
 * e.g "en_US", "auto" to use the system locale, or "none".
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Font
 */
EOAPI const char *efl_text_font_lang_get(const Eo *obj);

#endif
