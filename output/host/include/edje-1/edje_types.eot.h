#ifndef _EDJE_TYPES_EOT_H_
#define _EDJE_TYPES_EOT_H_

#ifndef _EDJE_TYPES_EOT_TYPES
#define _EDJE_TYPES_EOT_TYPES

/** All available cursor states
 *
 * @ingroup Edje
 */
typedef enum
{
  EDJE_CURSOR_MAIN = 0, /**< Main cursor state */
  EDJE_CURSOR_SELECTION_BEGIN, /**< Selection begin cursor state */
  EDJE_CURSOR_SELECTION_END, /**< Selection end cursor state */
  EDJE_CURSOR_PREEDIT_START, /**< Pre-edit start cursor state */
  EDJE_CURSOR_PREEDIT_END, /**< Pre-edit end cursor starge */
  EDJE_CURSOR_USER, /**< User cursor state */
  EDJE_CURSOR_USER_EXTRA /**< User extra cursor state */
} Edje_Cursor;

/** All Text auto capital mode type values
 *
 * @ingroup Edje_Text
 */
typedef enum
{
  EDJE_TEXT_AUTOCAPITAL_TYPE_NONE = 0, /**< None mode value */
  EDJE_TEXT_AUTOCAPITAL_TYPE_WORD, /**< Word mode value */
  EDJE_TEXT_AUTOCAPITAL_TYPE_SENTENCE, /**< Sentence mode value */
  EDJE_TEXT_AUTOCAPITAL_TYPE_ALLCHARACTER /**< All characters mode value */
} Edje_Text_Autocapital_Type;

/** Input hints
 *
 * @ingroup Edje
 */
typedef enum
{
  EDJE_INPUT_HINT_NONE = 0, /**< No active hints
                             *
                             * @since 1.12 */
  EDJE_INPUT_HINT_AUTO_COMPLETE = 1 /* 1 >> 0 */, /**< Suggest word auto
                                                   * completion
                                                   *
                                                   * @since 1.12 */
  EDJE_INPUT_HINT_SENSITIVE_DATA = 2 /* 1 >> 1 */ /**< Typed text should not be
                                                   * stored.
                                                   *
                                                   * @since 1.12 */
} Edje_Input_Hints;

/** Input panel language
 *
 * @ingroup Edje_Input_Panel
 */
typedef enum
{
  EDJE_INPUT_PANEL_LANG_AUTOMATIC = 0, /**< Automatic
                                        *
                                        * @since 1.2 */
  EDJE_INPUT_PANEL_LANG_ALPHABET /**< Alphabet
                                  *
                                  * @since 1.2 */
} Edje_Input_Panel_Lang;

/** Input panel retrun key types
 *
 * @ingroup Edje_Input_Panel
 */
typedef enum
{
  EDJE_INPUT_PANEL_RETURN_KEY_TYPE_DEFAULT = 0, /**< Default
                                                 *
                                                 * @since 1.2 */
  EDJE_INPUT_PANEL_RETURN_KEY_TYPE_DONE, /**< Done
                                          *
                                          * @since 1.2 */
  EDJE_INPUT_PANEL_RETURN_KEY_TYPE_GO, /**< Go
                                        *
                                        * @since 1.2 */
  EDJE_INPUT_PANEL_RETURN_KEY_TYPE_JOIN, /**< Join
                                          *
                                          * @since 1.2 */
  EDJE_INPUT_PANEL_RETURN_KEY_TYPE_LOGIN, /**< Login
                                           *
                                           * @since 1.2 */
  EDJE_INPUT_PANEL_RETURN_KEY_TYPE_NEXT, /**< Next
                                          *
                                          * @since 1.2 */
  EDJE_INPUT_PANEL_RETURN_KEY_TYPE_SEARCH, /**< Search or magnifier icon
                                            *
                                            * @since 1.2 */
  EDJE_INPUT_PANEL_RETURN_KEY_TYPE_SEND, /**< Send
                                          *
                                          * @since 1.2 */
  EDJE_INPUT_PANEL_RETURN_KEY_TYPE_SIGNIN /**< Sign-in
                                           *
                                           * @since 1.8 */
} Edje_Input_Panel_Return_Key_Type;

/** Input panel layout
 *
 * @ingroup Edje_Input_Panel
 */
typedef enum
{
  EDJE_INPUT_PANEL_LAYOUT_NORMAL = 0, /**< Default layout */
  EDJE_INPUT_PANEL_LAYOUT_NUMBER, /**< Number layout */
  EDJE_INPUT_PANEL_LAYOUT_EMAIL, /**< Email layout */
  EDJE_INPUT_PANEL_LAYOUT_URL, /**< URL layout */
  EDJE_INPUT_PANEL_LAYOUT_PHONENUMBER, /**< Phone Number layout */
  EDJE_INPUT_PANEL_LAYOUT_IP, /**< IP layout */
  EDJE_INPUT_PANEL_LAYOUT_MONTH, /**< Month layout */
  EDJE_INPUT_PANEL_LAYOUT_NUMBERONLY, /**< Number Only layout */
  EDJE_INPUT_PANEL_LAYOUT_INVALID, /**< Never use this */
  EDJE_INPUT_PANEL_LAYOUT_HEX, /**< Hexadecimal layout
                                *
                                * @since 1.2 */
  EDJE_INPUT_PANEL_LAYOUT_TERMINAL, /**< Command-line terminal layout including
                                     * esc, alt, ctrl key, so on (no
                                     * auto-correct, no auto-capitalization)
                                     *
                                     * @since 1.2 */
  EDJE_INPUT_PANEL_LAYOUT_PASSWORD, /**< Like normal, but no auto-correct, no
                                     * auto-capitalization etc.
                                     *
                                     * @since 1.2 */
  EDJE_INPUT_PANEL_LAYOUT_DATETIME, /**< Date and time layout
                                     *
                                     * @since 1.8 */
  EDJE_INPUT_PANEL_LAYOUT_EMOTICON, /**< Emoticon layout
                                     *
                                     * @since 1.10 */
  EDJE_INPUT_PANEL_LAYOUT_VOICE /**< Voice layout, but if the IME does not
                                 * support voice layout, then normal layout
                                 * will be shown.
                                 *
                                 * @since 1.19 */
} Edje_Input_Panel_Layout;

/** Perspective info for maps inside edje objects
 *
 * @ingroup Edje
 */
typedef struct _Edje_Perspective Edje_Perspective;

/** Selector to access one color among the colors belonging to a color class.
 *
 * @since 1.18
 *
 * @ingroup Edje_Color_Class
 */
typedef enum
{
  EDJE_COLOR_CLASS_MODE_COLOR = 0, /**< The default color. For instance, the
                                    * color of the text itself. */
  EDJE_COLOR_CLASS_MODE_COLOR2, /**< The 2nd color. For instance, the outline of
                                 * the text. */
  EDJE_COLOR_CLASS_MODE_COLOR3 /**< The 3rd color. For instance, the shadow of
                                * the text. */
} Edje_Color_Class_Mode;


#endif

#endif
