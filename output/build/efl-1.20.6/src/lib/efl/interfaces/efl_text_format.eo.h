#ifndef _EFL_TEXT_FORMAT_EO_H_
#define _EFL_TEXT_FORMAT_EO_H_

#ifndef _EFL_TEXT_FORMAT_EO_CLASS_TYPE
#define _EFL_TEXT_FORMAT_EO_CLASS_TYPE

typedef Eo Efl_Text_Format;

#endif

#ifndef _EFL_TEXT_FORMAT_EO_TYPES
#define _EFL_TEXT_FORMAT_EO_TYPES

/** Wrap mode of the text (not in effect if not multiline)
 *
 * @ingroup Efl_Text_Format
 */
typedef enum
{
  EFL_TEXT_FORMAT_WRAP_NONE = 0, /**< No wrapping */
  EFL_TEXT_FORMAT_WRAP_CHAR, /**< Wrap mode character */
  EFL_TEXT_FORMAT_WRAP_WORD, /**< Wrap mode word */
  EFL_TEXT_FORMAT_WRAP_MIXED, /**< Wrap mode mixed */
  EFL_TEXT_FORMAT_WRAP_HYPHENATION /**< Wrap mode hyphenation */
} Efl_Text_Format_Wrap;

/** Horizontal alignment of the text
 *
 * @ingroup Efl_Text_Format
 */
typedef enum
{
  EFL_TEXT_HORIZONTAL_ALIGNMENT_AUTO = 0, /**< Respects LTR/RTL (bidirectional)
                                           * settings */
  EFL_TEXT_HORIZONTAL_ALIGNMENT_LOCALE, /**< Respects locale's langauge settings
                                         */
  EFL_TEXT_HORIZONTAL_ALIGNMENT_LEFT, /**< Text is placed at the left end of the
                                       * line */
  EFL_TEXT_HORIZONTAL_ALIGNMENT_RIGHT, /**< Text is placed at the right end of
                                        * the line */
  EFL_TEXT_HORIZONTAL_ALIGNMENT_CENTER /**< Text is places at the center of the
                                        * line */
} Efl_Text_Format_Horizontal_Alignment_Type;

/** Horizontal alignment of the text
 *
 * @ingroup Efl_Text_Format
 */
typedef enum
{
  EFL_TEXT_VERTICAL_ALIGNMENT_TOP = 0, /**< Text is placed at the top */
  EFL_TEXT_VERTICAL_ALIGNMENT_CENTER, /**< Text is placed at the center */
  EFL_TEXT_VERTICAL_ALIGNMENT_BOTTOM /**< Text is placed at the bottom */
} Efl_Text_Format_Vertical_Alignment_Type;


#endif
/**
 * @brief The look and layout of the text
 *
 * The text format can affect the geometry of the text object, as well as how
 * characters are presented.
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
#define EFL_TEXT_FORMAT_INTERFACE efl_text_format_interface_get()

EWAPI const Efl_Class *efl_text_format_interface_get(void);

/**
 * @brief Ellipsis value (number from -1.0 to 1.0)
 *
 * @param[in] value
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI void efl_text_ellipsis_set(Eo *obj, double value);

/** Ellipsis value (number from -1.0 to 1.0)
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI double efl_text_ellipsis_get(const Eo *obj);

/**
 * @brief Wrap mode for use in the text
 *
 * @param[in] wrap
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI void efl_text_wrap_set(Eo *obj, Efl_Text_Format_Wrap wrap);

/** Wrap mode for use in the text
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI Efl_Text_Format_Wrap efl_text_wrap_get(const Eo *obj);

/**
 * @brief Multiline is enabled or not
 *
 * @param[in] enabled
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI void efl_text_multiline_set(Eo *obj, Eina_Bool enabled);

/** Multiline is enabled or not
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI Eina_Bool efl_text_multiline_get(const Eo *obj);

/**
 * @brief Horizontal alignment of text
 *
 * @param[in] value
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI void efl_text_halign_set(Eo *obj, Efl_Text_Format_Horizontal_Alignment_Type value);

/** Horizontal alignment of text
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI Efl_Text_Format_Horizontal_Alignment_Type efl_text_halign_get(const Eo *obj);

/**
 * @brief Vertical alignment of text
 *
 * @param[in] value
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI void efl_text_valign_set(Eo *obj, Efl_Text_Format_Vertical_Alignment_Type value);

/** Vertical alignment of text
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI Efl_Text_Format_Vertical_Alignment_Type efl_text_valign_get(const Eo *obj);

/**
 * @brief Minimal line gap (top and bottom) for each line in the text
 *
 * @c value is absolute size.
 *
 * @param[in] value
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI void efl_text_linegap_set(Eo *obj, double value);

/**
 * @brief Minimal line gap (top and bottom) for each line in the text
 *
 * @c value is absolute size.
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI double efl_text_linegap_get(const Eo *obj);

/**
 * @brief Relative line gap (top and bottom) for each line in the text
 *
 * The original line gap value is multiplied by @c value.
 *
 * @param[in] value
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI void efl_text_linerelgap_set(Eo *obj, double value);

/**
 * @brief Relative line gap (top and bottom) for each line in the text
 *
 * The original line gap value is multiplied by @c value.
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI double efl_text_linerelgap_get(const Eo *obj);

/**
 * @brief Tabstops value
 *
 * @param[in] value
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI void efl_text_tabstops_set(Eo *obj, int value);

/** Tabstops value
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI int efl_text_tabstops_get(const Eo *obj);

/**
 * @brief Whether text is a password
 *
 * @param[in] enabled
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI void efl_text_password_set(Eo *obj, Eina_Bool enabled);

/** Whether text is a password
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI Eina_Bool efl_text_password_get(const Eo *obj);

/**
 * @brief The character used to replace characters that can not be displayed
 *
 * Currently, only used to replace characters if @ref efl_text_password_get is
 * enabled.
 *
 * @param[in] repch
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI void efl_text_replacement_char_set(Eo *obj, const char *repch);

/**
 * @brief The character used to replace characters that can not be displayed
 *
 * Currently, only used to replace characters if @ref efl_text_password_get is
 * enabled.
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Format
 */
EOAPI const char *efl_text_replacement_char_get(const Eo *obj);

#endif
