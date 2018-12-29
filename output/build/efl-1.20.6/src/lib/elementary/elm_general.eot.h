#ifndef _ELM_GENERAL_EOT_H_
#define _ELM_GENERAL_EOT_H_

#ifndef _ELM_GENERAL_EOT_TYPES
#define _ELM_GENERAL_EOT_TYPES

/** Data on the event when an Elementary policy has changed
 *
 * @ingroup Elm_Event
 */
typedef struct _Elm_Event_Policy_Changed
{
  unsigned int policy; /**< the policy identifier */
  int new_value; /**< value the policy had before the change */
  int old_value; /**< new value the policy got */
} Elm_Event_Policy_Changed;

/** Policy identifiers.
 *
 * @ingroup Elm
 */
typedef enum
{
  ELM_POLICY_QUIT = 0, /**< under which circumstances the application should
                        * quit automatically. See also @ref ELM_POLICY_QUIT. */
  ELM_POLICY_EXIT, /**< defines elm_exit() behaviour. See also
                    * @ref ELM_POLICY_EXIT.
                    *
                    * @since 1.8 */
  ELM_POLICY_THROTTLE, /**< defines how throttling should work. See also
                        * @ref ELM_POLICY_THROTTLE
                        *
                        * @since 1.8 */
  ELM_POLICY_LAST /**< Sentinel value to indicate last enum field during
                   * iteration */
} Elm_Policy;

/** Possible values for the #ELM_POLICY_QUIT policy
 *
 * @ingroup Elm_Policy
 */
typedef enum
{
  ELM_POLICY_QUIT_NONE = 0, /**< never quit the application automatically */
  ELM_POLICY_QUIT_LAST_WINDOW_CLOSED, /**< quit when the application's last
                                       * window is closed */
  ELM_POLICY_QUIT_LAST_WINDOW_HIDDEN /**< quit when the application's last
                                      * window is hidden
                                      *
                                      * @since 1.14 */
} Elm_Policy_Quit;

/** Possible values for the #ELM_POLICY_EXIT policy.
 *
 * @since 1.8
 *
 * @ingroup Elm_Policy
 */
typedef enum
{
  ELM_POLICY_EXIT_NONE = 0, /**< just quit the main loop on elm_exit() */
  ELM_POLICY_EXIT_WINDOWS_DEL /**< delete all the windows after quitting the
                               * main loop */
} Elm_Policy_Exit;

/** Possible values for the #ELM_POLICY_THROTTLE policy.
 *
 * @since 1.8
 *
 * @ingroup Elm_Policy
 */
typedef enum
{
  ELM_POLICY_THROTTLE_CONFIG = 0, /**< do whatever elementary config is
                                   * configured to do */
  ELM_POLICY_THROTTLE_HIDDEN_ALWAYS, /**< always throttle when all windows are
                                      * no longer visible */
  ELM_POLICY_THROTTLE_NEVER /**< never throttle when windows are all hidden,
                             * regardless of config settings */
} Elm_Policy_Throttle;

/** Possible values for the #ELM_OBJECT_SELECT_MODE policy.
 *
 * @since 1.7
 *
 * @ingroup Elm_Object
 */
typedef enum
{
  ELM_OBJECT_SELECT_MODE_DEFAULT = 0, /**< default select mode. Once an item is
                                       * selected, it would stay highlighted
                                       * and not going to call selected
                                       * callback again even it was clicked.
                                       * Items can get focus. */
  ELM_OBJECT_SELECT_MODE_ALWAYS, /**< always select mode. Item selected
                                  * callbacks will be called every time for
                                  * click events, even after the item was
                                  * already selected. Items can get focus. */
  ELM_OBJECT_SELECT_MODE_NONE, /**< no select mode. Items will never be
                                * highlighted and selected but the size will be
                                * adjusted by the finger size configuration.
                                * Items can't get focus. */
  ELM_OBJECT_SELECT_MODE_DISPLAY_ONLY, /**< no select mode with no finger size
                                        * rule. Items will never be highlighted
                                        * and selected and ignore the finger
                                        * size. So the item size can be reduced
                                        * below than the finger size
                                        * configuration. Items can't get focus.
                                        */
  ELM_OBJECT_SELECT_MODE_MAX /**< canary value: any value greater or equal to
                              * ELM_OBJECT_SELECT_MODE_MAX is forbidden. */
} Elm_Object_Select_Mode;

/** Possible values for the #ELM_OBJECT_MULTI_SELECT_MODE policy.
 *
 * @since 1.8
 *
 * @ingroup Elm_Object
 */
typedef enum
{
  ELM_OBJECT_MULTI_SELECT_MODE_DEFAULT = 0, /**< default multiple select mode */
  ELM_OBJECT_MULTI_SELECT_MODE_WITH_CONTROL, /**< disallow mutiple selection
                                              * when clicked without control
                                              * key pressed */
  ELM_OBJECT_MULTI_SELECT_MODE_MAX /**< canary value: any value greater or equal
                                    * to ELM_OBJECT_MULTI_SELECT_MODE_MAX is
                                    * forbidden. */
} Elm_Object_Multi_Select_Mode;

/**
 * @brief Line wrapping types. Type of word or character wrapping to use.
 *
 * See also @ref elm_entry_line_wrap_set, @ref
 * elm_popup_content_text_wrap_type_set, @ref elm_label_line_wrap_set.
 *
 * @ingroup Elm_Wrap
 */
typedef enum
{
  ELM_WRAP_NONE = 0, /**< No wrap - value is zero. */
  ELM_WRAP_CHAR, /**< Char wrap - wrap between characters. */
  ELM_WRAP_WORD, /**< Word wrap - wrap in allowed wrapping points (as defined in
                  * the unicode standard). */
  ELM_WRAP_MIXED, /**< Mixed wrap - Word wrap, and if that fails, char wrap. */
  ELM_WRAP_LAST /**< Sentinel value to indicate last enum field during iteration
                 */
} Elm_Wrap_Type;

/** Focus directions.
 *
 * @ingroup Elm
 */
typedef enum
{
  ELM_FOCUS_PREVIOUS = 0, /**< previous direction */
  ELM_FOCUS_NEXT, /**< next direction */
  ELM_FOCUS_UP, /**< up direction */
  ELM_FOCUS_DOWN, /**< down direction */
  ELM_FOCUS_RIGHT, /**< right direction */
  ELM_FOCUS_LEFT /**< left direction */
} Elm_Focus_Direction;

/** Focus region show mode.
 *
 * @ingroup Elm_Focus_Region
 */
typedef enum
{
  ELM_FOCUS_REGION_SHOW_WIDGET = 0, /**< As a widget. */
  ELM_FOCUS_REGION_SHOW_ITEM /**< As an item. */
} Elm_Focus_Region_Show_Mode;

/** Focus Movement Policy.
 *
 * @since 1.10
 *
 * @ingroup Efl_Ui_Focus
 */
typedef enum
{
  EFL_UI_FOCUS_MOVE_POLICY_CLICK = 0, /**< Move focus by mouse click or touch.
                                       * Elementary focus is set on mouse click
                                       * and this is checked at mouse up time.
                                       * (default) */
  EFL_UI_FOCUS_MOVE_POLICY_IN, /**< Move focus by mouse in. Elementary focus is
                                * set on mouse move when the mouse pointer is
                                * moved into an object. */
  EFL_UI_FOCUS_MOVE_POLICY_KEY_ONLY /**< Move focus by key. Elementary focus is
                                     * set on key input like Left, Right, Up,
                                     * Down, Tab, or Shift+Tab. */
} Efl_Ui_Focus_Move_Policy;

/** Slider's indicator visiblity mode.
 *
 * @since 1.13
 *
 * @ingroup Efl_Ui_Slider
 */
typedef enum
{
  EFL_UI_SLIDER_INDICATOR_VISIBLE_MODE_DEFAULT = 0, /**< show indicator on mouse
                                                     * down or change in slider
                                                     * value */
  EFL_UI_SLIDER_INDICATOR_VISIBLE_MODE_ALWAYS, /**< Always show the indicator.
                                                */
  EFL_UI_SLIDER_INDICATOR_VISIBLE_MODE_ON_FOCUS, /**< Show the indicator on
                                                  * focus */
  EFL_UI_SLIDER_INDICATOR_VISIBLE_MODE_NONE /**< Never show the indicator */
} Efl_Ui_Slider_Indicator_Visible_Mode;

/** Focus Autoscroll Mode
 *
 * @since 1.10
 *
 * @ingroup Efl_Ui_Focus
 */
typedef enum
{
  EFL_UI_FOCUS_AUTOSCROLL_MODE_SHOW = 0, /**< Directly show the focused region
                                          * or item automatically. */
  EFL_UI_FOCUS_AUTOSCROLL_MODE_NONE, /**< Do not show the focused region or item
                                      * automatically. */
  EFL_UI_FOCUS_AUTOSCROLL_MODE_BRING_IN /**< Bring in the focused region or item
                                         * automatically which might invole the
                                         * scrolling. */
} Efl_Ui_Focus_Autoscroll_Mode;

/** Software cursor mode.
 *
 * @since 1.7
 *
 * @ingroup Efl_Ui
 */
typedef enum
{
  EFL_UI_SOFTCURSOR_MODE_AUTO = 0, /**< Auto-detect if a software cursor should
                                    * be used (default). */
  EFL_UI_SOFTCURSOR_MODE_ON, /**< Always use a softcursor. */
  EFL_UI_SOFTCURSOR_MODE_OFF /**< Never use a softcursor. */
} Efl_Ui_Softcursor_Mode;

/** Elementary icon types
 *
 * @ingroup Elm_Icon
 */
typedef enum
{
  ELM_ICON_NONE = 0, /**< Icon has no type set */
  ELM_ICON_FILE, /**< Icon is of type file */
  ELM_ICON_STANDARD /**< Icon is of type standard */
} Elm_Icon_Type;


#endif

#endif
