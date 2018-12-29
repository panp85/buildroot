#ifndef _EFL_UI_WIN_EO_H_
#define _EFL_UI_WIN_EO_H_

#ifndef _EFL_UI_WIN_EO_CLASS_TYPE
#define _EFL_UI_WIN_EO_CLASS_TYPE

typedef Eo Efl_Ui_Win;

#endif

#ifndef _EFL_UI_WIN_EO_TYPES
#define _EFL_UI_WIN_EO_TYPES

/**
 * @brief Defines the types of window that can be created
 *
 * These are hints set on the window so that a running Window Manager knows how
 * the window should be handled and/or what kind of decorations it should have.
 *
 * Currently, only the X11 backed engines use them.
 *
 * @ingroup Efl_Ui_Win
 */
typedef enum
{
  EFL_UI_WIN_UNKNOWN = -1 /* +1 */, /**< Default, unknown, type */
  EFL_UI_WIN_BASIC, /**< A normal window. Indicates a normal, top-level window.
                     * Almost every window will be created with this type. */
  EFL_UI_WIN_DIALOG_BASIC, /**< Used for simple dialog windows. */
  EFL_UI_WIN_DESKTOP, /**< For special desktop windows, like a background window
                       * holding desktop icons. */
  EFL_UI_WIN_DOCK, /**< The window is used as a dock or panel. Usually would be
                    * kept on top of any other window by the Window Manager. */
  EFL_UI_WIN_TOOLBAR, /**< The window is used to hold a floating toolbar, or
                       * similar. */
  EFL_UI_WIN_MENU, /**< Similar to #ELM_WIN_TOOLBAR. */
  EFL_UI_WIN_UTILITY, /**< A persistent utility window, like a toolbox or
                       * palette. */
  EFL_UI_WIN_SPLASH, /**< Splash window for a starting up application. */
  EFL_UI_WIN_DROPDOWN_MENU, /**< The window is a dropdown menu, as when an
                             *  entry in a menubar is clicked. This hint exists
                             * for completion only, as the EFL way of
                             * implementing a menu would not normally use a
                             * separate window for its contents. */
  EFL_UI_WIN_POPUP_MENU, /**< Like #ELM_WIN_DROPDOWN_MENU, but for the menu
                          * triggered by right-clicking an object. */
  EFL_UI_WIN_TOOLTIP, /**< The window is a tooltip. A short piece of explanatory
                       * text that typically appear after the mouse cursor
                       * hovers over an object for a while. Typically not very
                       * commonly used in the EFL. */
  EFL_UI_WIN_NOTIFICATION, /**< A notification window, like a warning about
                            * battery life or a new E-Mail received. */
  EFL_UI_WIN_COMBO, /**< A window holding the contents of a combo box. Not
                     * usually used in the EFL. */
  EFL_UI_WIN_DND, /**< Used to indicate the window is a representation of an
                   * object being dragged across different windows, or even
                   * applications. Typically used with elm_win_override_set().
                   */
  EFL_UI_WIN_INLINED_IMAGE, /**< The window is rendered onto an image buffer. No
                             * actual window is created for this type, instead
                             * the window and all of its contents will be
                             * rendered to an image buffer. This allows to have
                             * children window inside a parent one just like
                             * any other object would be, and do other things
                             * like applying @ref Evas_Map effects to it. This
                             * is the only type of window that requires the
                             * parent parameter of @ref elm_win_add to be a
                             * valid @ref Efl_Canvas_Object. */
  EFL_UI_WIN_SOCKET_IMAGE, /**< The window is rendered onto an image buffer and
                            * can be shown other process's plug image object.
                            * No actual window is created for this type,
                            * instead the window and all of its contents will
                            * be rendered to an image buffer and can be shown
                            * other process's plug image object. */
  EFL_UI_WIN_FAKE, /**< This window was created using a pre-existing canvas. The
                    * window widget can be deleted, but the canvas must be
                    * managed externally.
                    *
                    * @since 1.13 */
  EFL_UI_WIN_NAVIFRAME_BASIC /**< Used for naviframe style replacement with a
                              * back button instead of a close button.
                              *
                              * @since 1.19 */
} Efl_Ui_Win_Type;

/**
 * @brief The different layouts that can be requested for the virtual keyboard.
 *
 * When the application window is being managed by Illume, it may request any
 * of the following layouts for the virtual keyboard.
 *
 * @ingroup Efl_Ui_Win
 */
typedef enum
{
  EFL_UI_WIN_KEYBOARD_UNKNOWN = 0, /**< Unknown keyboard state */
  EFL_UI_WIN_KEYBOARD_OFF, /**< Request to deactivate the keyboard */
  EFL_UI_WIN_KEYBOARD_ON, /**< Enable keyboard with default layout */
  EFL_UI_WIN_KEYBOARD_ALPHA, /**< Alpha (a-z) keyboard layout */
  EFL_UI_WIN_KEYBOARD_NUMERIC, /**< Numeric keyboard layout */
  EFL_UI_WIN_KEYBOARD_PIN, /**< PIN keyboard layout */
  EFL_UI_WIN_KEYBOARD_PHONE_NUMBER, /**< Phone keyboard layout */
  EFL_UI_WIN_KEYBOARD_HEX, /**< Hexadecimal numeric keyboard layout */
  EFL_UI_WIN_KEYBOARD_TERMINAL, /**< Full (QWERTY) keyboard layout */
  EFL_UI_WIN_KEYBOARD_PASSWORD, /**< Password keyboard layout */
  EFL_UI_WIN_KEYBOARD_IP, /**< IP keyboard layout */
  EFL_UI_WIN_KEYBOARD_HOST, /**< Host keyboard layout */
  EFL_UI_WIN_KEYBOARD_FILE, /**< File keyboard layout */
  EFL_UI_WIN_KEYBOARD_URL, /**< URL keyboard layout */
  EFL_UI_WIN_KEYBOARD_KEYPAD, /**< Keypad layout */
  EFL_UI_WIN_KEYBOARD_J2ME /**< J2ME keyboard layout */
} Efl_Ui_Win_Keyboard_Mode;

/** Defines the type indicator that can be shown
 *
 * @ingroup Efl_Ui_Win
 */
typedef enum
{
  EFL_UI_WIN_INDICATOR_TYPE_UNKNOWN = 0, /**< Unknown indicator type */
  EFL_UI_WIN_INDICATOR_BG_OPAQUE, /**< The icon of indicator is opaque, the
                                   * background of indicator is also opaque.
                                   * The content of window is located the end
                                   * of indicator. The area of indicator and
                                   * window content are not overlapped */
  EFL_UI_WIN_INDICATOR_BG_TRANSPARENT, /**< The icon of indicator is opaque, but
                                        * the background is transparent. The
                                        * content of window is located under
                                        * the indicator in Z-order. The area of
                                        * indicator and window content are
                                        * overlapped */
  EFL_UI_WIN_INDICATOR_HIDDEN /**< The indicator is hidden, So user can see only
                               * the content of window like the video mode. If
                               * user flicks the upper side of window, the
                               * incator is shown temporarily. */
} Efl_Ui_Win_Indicator_Type;

/** Define the keygrab modes of window. A window may send commands to the
 * Keyrouter according this mode, and perform different actions.
 *
 * @ingroup Efl_Ui_Win
 */
typedef enum
{
  EFL_UI_WIN_KEYGRAB_UNKNOWN = 0, /**< Unknown keygrab mode */
  EFL_UI_WIN_KEYGRAB_SHARED = 256 /* 1 >> 8 */, /**< Getting the grabbed-key
                                                 * together with the other
                                                 * client windows */
  EFL_UI_WIN_KEYGRAB_TOPMOST = 512 /* 1 >> 9 */, /**< Getting the grabbed-key
                                                  * only when window is top of
                                                  * the stack */
  EFL_UI_WIN_KEYGRAB_EXCLUSIVE = 1024 /* 1 >> 10 */, /**< Getting the
                                                      * grabbed-key exclusively
                                                      * regardless of window's
                                                      * position */
  EFL_UI_WIN_KEYGRAB_OVERRIDE_EXCLUSIVE = 2048 /* 1 >> 11 */ /**< Getting the grabbed-key exclusively
                                                              * regardless of window's position.
                                                              * Being overrided the grab by the
                                                              * other client window */
} Efl_Ui_Win_Keygrab_Mode;

/** Defines the mode of a modal window
 *
 * @ingroup Efl_Ui_Win
 */
typedef enum
{
  EFL_UI_WIN_MODAL_NONE = 0, /**< The window is not modal window. */
  EFL_UI_WIN_MODAL_MODAL /**< The window is modal window. */
} Efl_Ui_Win_Modal_Mode;

/** Defines the mode of a urgent window.
 *
 * @ingroup Efl_Ui_Win
 */
typedef enum
{
  EFL_UI_WIN_URGENT_NONE = 0, /**< The window is not a urgent window. */
  EFL_UI_WIN_URGENT_URGENT /**< The window is a urgent window. */
} Efl_Ui_Win_Urgent_Mode;

/**
 * @brief Define the move or resize mode of window.
 *
 * The user can request the display server to start moving or resizing the
 * window by combining these modes. However, only limited combinations are
 * allowed.
 *
 * Currently, only the following 9 combinations are allowed, and possibly more
 * combinations may be added in the future: 1. move, 2. top, 3. bottom, 4.
 * left, 5. right, 6. top | left, 7. top | right, 8. bottom | left, 9. bottom |
 * right.
 *
 * @since 1.19
 *
 * @ingroup Efl_Ui_Win
 */
typedef enum
{
  EFL_UI_WIN_MOVE_RESIZE_MOVE = 1, /**< Start moving window */
  EFL_UI_WIN_MOVE_RESIZE_TOP = 2 /* 1 >> 1 */, /**< Start resizing window to the
                                                * top */
  EFL_UI_WIN_MOVE_RESIZE_BOTTOM = 4 /* 1 >> 2 */, /**< Start resizing window to
                                                   * the bottom */
  EFL_UI_WIN_MOVE_RESIZE_LEFT = 8 /* 1 >> 3 */, /**< Start resizing window to
                                                 * the left */
  EFL_UI_WIN_MOVE_RESIZE_RIGHT = 16 /* 1 >> 4 */ /**< Start resizing window to
                                                  * the right */
} Efl_Ui_Win_Move_Resize_Mode;


#endif
/** Efl UI window class
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_CLASS efl_ui_win_class_get()

EWAPI const Efl_Class *efl_ui_win_class_get(void);

/**
 * @brief In some environments, like phones, you may have an indicator that
 * shows battery status, reception, time etc. This is the indicator.
 *
 * Sometimes you don't want it because you provide the same functionality
 * inside your app, so this will request that the indicator is disabled in this
 * circumstance. The default is depend on the environments. For example, like
 * phones, default is to enable the indicator. But like TV, default is to
 * disable the indicator.
 *
 * @param[in] enabled If @c true, the indicator is enabled, If @c false, the
 * indicator is disabled.
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_indicator_enabled_set(Eo *obj, Eina_Bool enabled);

/**
 * @brief In some environments, like phones, you may have an indicator that
 * shows battery status, reception, time etc. This is the indicator.
 *
 * Sometimes you don't want it because you provide the same functionality
 * inside your app, so this will request that the indicator is disabled in this
 * circumstance. The default is depend on the environments. For example, like
 * phones, default is to enable the indicator. But like TV, default is to
 * disable the indicator.
 *
 * @return If @c true, the indicator is enabled, If @c false, the indicator is
 * disabled.
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_indicator_enabled_get(const Eo *obj);

/**
 * @brief The indicator type of the window.
 *
 * @param[in] type The type, one of #Efl_Ui_Win_Indicator_Type.
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_indicator_type_set(Eo *obj, Efl_Ui_Win_Indicator_Type type);

/**
 * @brief The indicator type of the window.
 *
 * @return The type, one of #Efl_Ui_Win_Indicator_Type.
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Efl_Ui_Win_Indicator_Type efl_ui_win_indicator_type_get(const Eo *obj);

/**
 * @brief Sets the keyboard mode of the window.
 *
 * @param[in] mode The mode, one of #Efl_Ui_Win_Keyboard_Mode.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_keyboard_mode_set(Eo *obj, Efl_Ui_Win_Keyboard_Mode mode);

/**
 * @brief Get the keyboard mode of the window.
 *
 * @return The mode, one of #Efl_Ui_Win_Keyboard_Mode.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Efl_Ui_Win_Keyboard_Mode efl_ui_win_keyboard_mode_get(const Eo *obj);

/**
 * @brief Set the array of available window rotations.
 *
 * This function is used to set the available rotations to give the hints to
 * WM. WM will refer this hints and set the orientation window properly.
 *
 * @param[in] rotations The array of rotation value.
 * @param[in] count The size of the rotations array.
 *
 * @since 1.9
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_wm_available_rotations_set(Eo *obj, const int *rotations, unsigned int count);

/**
 * @brief Get the array of available window rotations.
 *
 * This function is used to get the available rotations.
 *
 * @param[out] rotations The array of rotation value.
 * @param[out] count The size of the rotations array.
 *
 * @return @c true on success, @c false otherwise
 *
 * @since 1.9
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_wm_available_rotations_get(const Eo *obj, int **rotations, unsigned int *count);

/**
 * @brief Constrain the maximum width and height of a window to the width and
 * height of its screen.
 *
 * When @c constrain is @c true, @c obj will never resize larger than the
 * screen.
 *
 * @param[in] constrain @c true to restrict the window's maximum size.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_screen_constrain_set(Eo *obj, Eina_Bool constrain);

/**
 * @brief Get the constraints on the maximum width and height of a window
 * relative to the width and height of its screen.
 *
 * When this function returns @c true, @c obj will never resize larger than the
 * screen.
 *
 * @return @c true to restrict the window's maximum size.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_screen_constrain_get(const Eo *obj);

/**
 * @brief Set the style for the focus highlight on this window.
 *
 * Sets the style to use for theming the highlight of focused objects on the
 * given window. If @c style is NULL, the default will be used.
 *
 * @param[in] style The style or @c null if none.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_focus_highlight_style_set(Eo *obj, const char *style);

/**
 * @brief Get the style set for the focus highlight object.
 *
 * @return The style or @c null if none.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI const char *efl_ui_win_focus_highlight_style_get(const Eo *obj);

/**
 * @brief Set the enabled status for the focus highlight in a window.
 *
 * This function will enable or disable the focus highlight only for the given
 * window, regardless of the global setting for it.
 *
 * @param[in] enabled The enabled value for the highlight.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_focus_highlight_enabled_set(Eo *obj, Eina_Bool enabled);

/**
 * @brief Get the enabled value of the focus highlight for this window.
 *
 * @return The enabled value for the highlight.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_focus_highlight_enabled_get(const Eo *obj);

/**
 * @brief Set the animate status for the focus highlight for this window.
 *
 * This function will enable or disable the animation of focus highlight only
 * for the given window, regardless of the global setting for it.
 *
 * @param[in] animate The enabled value for the highlight animation.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_focus_highlight_animate_set(Eo *obj, Eina_Bool animate);

/**
 * @brief Get the animate value of the focus highlight for this window.
 *
 * @return The enabled value for the highlight animation.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_focus_highlight_animate_get(const Eo *obj);

/**
 * @brief Set the window to be skipped by keyboard focus.
 *
 * This sets the window to be skipped by normal keyboard input. This means a
 * window manager will be asked to not focus this window as well as omit it
 * from things like the taskbar, pager, "alt-tab" list etc. etc.
 *
 * Call this and enable it on a window BEFORE you show it for the first time,
 * otherwise it may have no effect.
 *
 * Use this for windows that have only output information or might only be
 * interacted with by the mouse or fingers, and never for typing input. Be
 * careful that this may have side-effects like making the window
 * non-accessible in some cases unless the window is specially handled. Use
 * this with care.
 *
 * @param[in] skip The skip flag state ($true if it is to be skipped).
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_prop_focus_skip_set(Eo *obj, Eina_Bool skip);

/**
 * @brief Get whether a window has focus.
 *
 * @return @c true if window has focus, @c false otherwise
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_focus_get(const Eo *obj);

/**
 * @brief Set the window's autodel state.
 *
 * When closing the window in any way outside of the program control, like
 * pressing the X button in the titlebar or using a command from the Window
 * Manager, a "delete,request" signal is emitted to indicate that this event
 * occurred and the developer can take any action, which may include, or not,
 * destroying the window object.
 *
 * When the @c autodel parameter is set, the window will be automatically
 * destroyed when this event occurs, after the signal is emitted. If @c autodel
 * is @c false, then the window will not be destroyed and is up to the program
 * to do so when it's required.
 *
 * @param[in] autodel If @c true, the window will automatically delete itself
 * when closed.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_autodel_set(Eo *obj, Eina_Bool autodel);

/**
 * @brief Get the window's autodel state.
 *
 * @return If @c true, the window will automatically delete itself when closed.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_autodel_get(const Eo *obj);

/**
 * @brief Window's autohide state.
 *
 * This property works similarly to @ref efl_ui_win_autodel_get, automatically
 * handling "delete,request" signals when set to @c trze, with the difference
 * that it will hide the window, instead of destroying it.
 *
 * It is specially designed to work together with
 * @c ELM_POLICY_QUIT_LAST_WINDOW_HIDDEN which allows exiting Elementary's main
 * loop when all the windows are hidden.
 *
 * @note @ref efl_ui_win_autodel_get and @c autohide are not mutually
 * exclusive. The window will be deleted if both are set to @c true.
 *
 * @param[in] autohide If @c true, the window will automatically hide itself
 * when closed.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_autohide_set(Eo *obj, Eina_Bool autohide);

/**
 * @brief Window's autohide state.
 *
 * This property works similarly to @ref efl_ui_win_autodel_get, automatically
 * handling "delete,request" signals when set to @c trze, with the difference
 * that it will hide the window, instead of destroying it.
 *
 * It is specially designed to work together with
 * @c ELM_POLICY_QUIT_LAST_WINDOW_HIDDEN which allows exiting Elementary's main
 * loop when all the windows are hidden.
 *
 * @note @ref efl_ui_win_autodel_get and @c autohide are not mutually
 * exclusive. The window will be deleted if both are set to @c true.
 *
 * @return If @c true, the window will automatically hide itself when closed.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_autohide_get(const Eo *obj);

/**
 * @brief Set a window object's icon.
 *
 * This sets an image to be used as the icon for the given window, in the
 * window manager decoration part. The exact pixel dimensions of the object
 * (not object size) will be used, and the image pixels will be used as-is when
 * this function is called. If the image object has been updated, then call
 * this function again to source the image pixels and put them on the window's
 * icon. Note that only Evas image objects are allowed.
 *
 * @param[in] icon The Evas image object to use for an icon.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_icon_object_set(Eo *obj, Efl_Canvas_Object *icon);

/**
 * @brief Get the icon object used for the window.
 *
 * The object returns is the one marked by @ref efl_ui_win_icon_object_set as
 * the object to use for the window icon.
 *
 * @return The Evas image object to use for an icon.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI const Efl_Canvas_Object *efl_ui_win_icon_object_get(const Eo *obj);

/**
 * @brief Set the iconified state of a window.
 *
 * @param[in] iconified If @c true, the window is iconified.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_iconified_set(Eo *obj, Eina_Bool iconified);

/**
 * @brief Get the iconified state of a window.
 *
 * @return If @c true, the window is iconified.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_iconified_get(const Eo *obj);

/**
 * @brief Set the maximized state of a window.
 *
 * @param[in] maximized If @c true, the window is maximized.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_maximized_set(Eo *obj, Eina_Bool maximized);

/**
 * @brief Get the maximized state of a window.
 *
 * @return If @c true, the window is maximized.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_maximized_get(const Eo *obj);

/**
 * @brief Set the fullscreen state of a window.
 *
 * @param[in] fullscreen If @c true, the window is fullscreen.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_fullscreen_set(Eo *obj, Eina_Bool fullscreen);

/**
 * @brief Get the fullscreen state of a window.
 *
 * @return If @c true, the window is fullscreen.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_fullscreen_get(const Eo *obj);

/**
 * @brief Set the sticky state of the window.
 *
 * Hints the Window Manager that the window in @c obj should be left fixed at
 * its position even when the virtual desktop it's on moves or changes.
 *
 * @param[in] sticky If @c true, the window's sticky state is enabled.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_sticky_set(Eo *obj, Eina_Bool sticky);

/**
 * @brief Get the sticky state of the window.
 *
 * @return If @c true, the window's sticky state is enabled.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_sticky_get(const Eo *obj);

/**
 * @brief Set the urgent state of a window.
 *
 * @param[in] urgent The mode of a urgent window, one of
 * #Efl_Ui_Win_Urgent_Mode.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_urgent_set(Eo *obj, Efl_Ui_Win_Urgent_Mode urgent);

/**
 * @brief Get the urgent state of a window.
 *
 * @return The mode of a urgent window, one of #Efl_Ui_Win_Urgent_Mode.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Efl_Ui_Win_Urgent_Mode efl_ui_win_urgent_get(const Eo *obj);

/**
 * @brief Set the modal state of a window.
 *
 * @param[in] modal The mode of a window, one of #Efl_Ui_Win_Modal_Mode.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_modal_set(Eo *obj, Efl_Ui_Win_Modal_Mode modal);

/**
 * @brief Get the modal state of a window.
 *
 * @return The mode of a window, one of #Efl_Ui_Win_Modal_Mode.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Efl_Ui_Win_Modal_Mode efl_ui_win_modal_get(const Eo *obj);

/**
 * @brief Set the noblank property of a window.
 *
 * The "noblank" property is a way to request the display on which the window
 * is shown does not blank, screensave or otherwise hide or obscure the window.
 * It is intended for uses such as media playback on a television where a user
 * may not want to be interrupted by an idle screen. The noblank property may
 * have no effect if the window is iconified/minimized or hidden.
 *
 * @param[in] noblank If @c true, the window is set to noblank.
 *
 * @since 1.11
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_noblank_set(Eo *obj, Eina_Bool noblank);

/**
 * @brief Get the noblank property of a window.
 *
 * @return If @c true, the window is set to noblank.
 *
 * @since 1.11
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_noblank_get(const Eo *obj);

/**
 * @brief Set the borderless state of a window.
 *
 * This function requests the Window Manager to not draw any decoration around
 * the window.
 *
 * @param[in] borderless If @c true, the window is borderless.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_borderless_set(Eo *obj, Eina_Bool borderless);

/**
 * @brief Get the borderless state of a window.
 *
 * @return If @c true, the window is borderless.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_borderless_get(const Eo *obj);

/**
 * @brief Set the role of the window.
 *
 * @param[in] role The role to set.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_role_set(Eo *obj, const char *role);

/**
 * @brief Get the role of the window.
 *
 * The returned string is an internal one and should not be freed or modified.
 * It will also be invalid if a new role is set or if the window is destroyed.
 *
 * @return The role to set.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI const char *efl_ui_win_role_get(const Eo *obj);

/**
 * @brief The window name.
 *
 * The meaning of name depends on the underlying windowing system.
 *
 * The window name is a constructing property that need to be set at creation
 * within @ref eo_add.
 *
 * @note Once set, it can NOT be modified afterward.
 *
 * Can only be used at creation time, within @ref eo_add.
 *
 * @param[in] name Window name
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_name_set(Eo *obj, const char *name);

/**
 * @brief The window name.
 *
 * The meaning of name depends on the underlying windowing system.
 *
 * The window name is a constructing property that need to be set at creation
 * within @ref eo_add.
 *
 * @note Once set, it can NOT be modified afterward.
 *
 * No description supplied.
 *
 * @return Window name
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI const char *efl_ui_win_name_get(const Eo *obj);

/**
 * @brief The type of the window.
 *
 * It is a hint of how the Window Manager should handle it.
 *
 * The window type is a constructing property that need to be set at creation
 * within @ref eo_add.
 *
 * @note Once set, it can NOT be modified afterward.
 *
 * Can only be used at creation time, within @ref eo_add.
 *
 * @param[in] type Window type
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_type_set(Eo *obj, Efl_Ui_Win_Type type);

/**
 * @brief The type of the window.
 *
 * It is a hint of how the Window Manager should handle it.
 *
 * The window type is a constructing property that need to be set at creation
 * within @ref eo_add.
 *
 * @note Once set, it can NOT be modified afterward.
 *
 * If the object is not window object, return #ELM_WIN_UNKNOWN.
 *
 * @return Window type
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Efl_Ui_Win_Type efl_ui_win_type_get(const Eo *obj);

/**
 * @brief The hardware acceleration preference for this window.
 *
 * This is a constructor function, and can only be called before
 * @ref efl_finalize.
 *
 * This property overrides the global EFL configuration option
 * "accel_preference" for this single window, and accepts the same syntax.
 *
 * The @c accel string is a freeform C string that indicates what kind of
 * acceleration is preferred. Here "acceleration" majorly means to rendering
 * and which hardware unit application renders GUIs with. This may or may not
 * be honored, but a best attempt will be made. Known strings are as follows:
 *
 * "gl", "opengl" - try use OpenGL. "3d" - try and use a 3d acceleration unit.
 * "hw", "hardware", "accel" - try any acceleration unit (best possible) "none"
 * - use no acceleration. try use software (since 1.16)
 *
 * Since 1.14, it is also possible to specify some GL properties for the GL
 * window surface. This allows applications to use GLView with depth, stencil
 * and MSAA buffers with direct rendering. The new accel preference string
 * format is thus "{HW Accel}[:depth{value}[:stencil{value}[:msaa{str}$]$]$]".
 *
 * Accepted values for depth are for instance "depth", "depth16", "depth24".
 * Accepted values for stencil are "stencil", "stencil1", "stencil8". For MSAA,
 * only predefined strings are accepted: "msaa", "msaa_low", "msaa_mid" and
 * "msaa_high". The selected configuration is not guaranteed and is only valid
 * in case of GL acceleration. Only the base acceleration string will be saved
 * (e.g. "gl" or "hw").
 *
 * Full examples include:
 *
 * "gl", - try to use OpenGL "hw:depth:stencil", - use HW acceleration with
 * default depth and stencil buffers "opengl:depth24:stencil8:msaa_mid" - use
 * OpenGL with 24-bit depth, 8-bit stencil and a medium number of MSAA samples
 * in the backbuffer.
 *
 * Note that this option may be overriden by environment variables or the
 * configuration option "accel_preference_override".
 *
 * @param[in] accel Acceleration
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_accel_preference_set(Eo *obj, const char *accel);

/**
 * @brief The hardware acceleration preference for this window.
 *
 * This is a constructor function, and can only be called before
 * @ref efl_finalize.
 *
 * This property overrides the global EFL configuration option
 * "accel_preference" for this single window, and accepts the same syntax.
 *
 * The @c accel string is a freeform C string that indicates what kind of
 * acceleration is preferred. Here "acceleration" majorly means to rendering
 * and which hardware unit application renders GUIs with. This may or may not
 * be honored, but a best attempt will be made. Known strings are as follows:
 *
 * "gl", "opengl" - try use OpenGL. "3d" - try and use a 3d acceleration unit.
 * "hw", "hardware", "accel" - try any acceleration unit (best possible) "none"
 * - use no acceleration. try use software (since 1.16)
 *
 * Since 1.14, it is also possible to specify some GL properties for the GL
 * window surface. This allows applications to use GLView with depth, stencil
 * and MSAA buffers with direct rendering. The new accel preference string
 * format is thus "{HW Accel}[:depth{value}[:stencil{value}[:msaa{str}$]$]$]".
 *
 * Accepted values for depth are for instance "depth", "depth16", "depth24".
 * Accepted values for stencil are "stencil", "stencil1", "stencil8". For MSAA,
 * only predefined strings are accepted: "msaa", "msaa_low", "msaa_mid" and
 * "msaa_high". The selected configuration is not guaranteed and is only valid
 * in case of GL acceleration. Only the base acceleration string will be saved
 * (e.g. "gl" or "hw").
 *
 * Full examples include:
 *
 * "gl", - try to use OpenGL "hw:depth:stencil", - use HW acceleration with
 * default depth and stencil buffers "opengl:depth24:stencil8:msaa_mid" - use
 * OpenGL with 24-bit depth, 8-bit stencil and a medium number of MSAA samples
 * in the backbuffer.
 *
 * Note that this option may be overriden by environment variables or the
 * configuration option "accel_preference_override".
 *
 * This will return the value of "accel_preference" when the window was
 * created.
 *
 * @return Acceleration
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI const char *efl_ui_win_accel_preference_get(const Eo *obj);

/**
 * @brief Set the array of available profiles to a window.
 *
 * @param[in] profiles The string array of available profiles.
 * @param[in] count The number of members in profiles.
 *
 * @since 1.8
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_available_profiles_set(Eo *obj, const char **profiles, unsigned int count);

/**
 * @brief Get the array of available profiles of a window.
 *
 * @param[out] profiles The string array of available profiles.
 * @param[out] count The number of members in profiles.
 *
 * @return @c true on success, @c false otherwise
 *
 * @since 1.8
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_available_profiles_get(const Eo *obj, char ***profiles, unsigned int *count);

/**
 * @brief Set the alpha channel state of a window.
 *
 * If @c alpha is true, the alpha channel of the canvas will be enabled
 * possibly making parts of the window completely or partially transparent.
 * This is also subject to the underlying system supporting it, like for
 * example, running under a compositing manager.
 *
 * @note Alpha window can be enabled automatically by window theme style's
 * property. If "alpha" data.item is "1" or "true" in window style(eg.
 * elm/win/base/default), the window is switched to alpha automatically without
 * the explicit api call.
 *
 * @param[in] alpha @c true if the window alpha channel is enabled, @c false
 * otherwise.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_alpha_set(Eo *obj, Eina_Bool alpha);

/**
 * @brief Get the alpha channel state of a window.
 *
 * @return @c true if the window alpha channel is enabled, @c false otherwise.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_alpha_get(const Eo *obj);

#ifdef EFL_UI_WIN_BETA
/**
 * @brief Get the stack ID string of the window as an opaque string.
 *
 * This ID is immutable and can never be modified. It will be an opaque string
 * that has no specific desfined format or content other than it being a string
 * (no character with a value of 0).
 *
 * This string is intended for use as a stack master ID to be use by other
 * windows to make this window part of a stack of windows to be placed on top
 * of eachother as if they are a series of dialogs or questions one after the
 * other and that you may go back through history.
 *
 * @return An opaque string that has no specific format, but identified a
 * specific unique window on the display.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI const char *efl_ui_win_stack_id_get(const Eo *obj);
#endif

#ifdef EFL_UI_WIN_BETA
/**
 * @brief Set the window stack ID to use as the master top-level.
 *
 * This sets the ID string to be used as the master top-level window as the
 * base of a stack of windows. This must be set before the first time the
 * window is shown and should never be changed after that point in time ever
 * again.
 *
 * @param[in] id An opaque string that has no specific format, but identified a
 * specific unique window on the display.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_stack_master_id_set(Eo *obj, const char *id);
#endif

#ifdef EFL_UI_WIN_BETA
/**
 * @brief Get the stack master Id that has been set.
 *
 * @return An opaque string that has no specific format, but identified a
 * specific unique window on the display.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI const char *efl_ui_win_stack_master_id_get(const Eo *obj);
#endif

#ifdef EFL_UI_WIN_BETA
/**
 * @brief The stack base state of this window
 *
 * This is a boolean flag that determines if this window will become the base
 * of a stack at all. You must enable this on a base (bottom of a window stack
 * for things to work correctly.
 *
 * This state should be set before a window is shown for the first time and
 * never changed again after that.
 *
 * @param[in] base @c true if this is a stack base window, @c false otherwise.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_stack_base_set(Eo *obj, Eina_Bool base);
#endif

#ifdef EFL_UI_WIN_BETA
/**
 * @brief The stack base state of this window
 *
 * This is a boolean flag that determines if this window will become the base
 * of a stack at all. You must enable this on a base (bottom of a window stack
 * for things to work correctly.
 *
 * This state should be set before a window is shown for the first time and
 * never changed again after that.
 *
 * @return @c true if this is a stack base window, @c false otherwise.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_stack_base_get(const Eo *obj);
#endif

#ifdef EFL_UI_WIN_BETA
/**
 * @brief Pop (delete) all windows in the stack above this window.
 *
 * This will try and delete all the windows in the stack that are above the
 * window.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_stack_pop_to(Eo *obj);
#endif

/**
 * @brief Create a socket to provide the service for Plug widget.
 *
 * @param[in] svcname The name of the service to be advertised. Eensure that it
 * is unique (when combined with @c svcnum) otherwise creation may fail.
 * @param[in] svcnum A number (any value, 0 being the common default) to
 * differentiate multiple instances of services with the same name.
 * @param[in] svcsys A boolean that if true, specifies to create a system-wide
 * service all users can connect to, otherwise the service is private to the
 * user id that created the service.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_socket_listen(Eo *obj, const char *svcname, int svcnum, Eina_Bool svcsys);

/**
 * @brief Activate a window object.
 *
 * This function sends a request to the Window Manager to activate the window
 * pointed by @c obj. If honored by the WM, the window will receive the
 * keyboard focus.
 *
 * @note This is just a request that a Window Manager may ignore, so calling
 * this function does not ensure in any way that the window will be the active
 * one after it.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_activate(Eo *obj);

/**
 * @brief Raise a window object.
 *
 * Places the window pointed by @c obj at the top of the stack, so that it's
 * not covered by any other window.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_raise(Eo *obj);

/**
 * @brief Center a window on its screen
 *
 * This function centers window @c obj horizontally and/or vertically based on
 * the values of @c h and @c v.
 *
 * @param[in] h If @c true, center horizontally. If @c false, do not change
 * horizontal location.
 * @param[in] v If @c true, center vertically. If @c false, do not change
 * vertical location.
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI void efl_ui_win_center(Eo *obj, Eina_Bool h, Eina_Bool v);

/**
 * @brief Set keygrab value of the window
 *
 * This function grabs the @c key of window using @c grab_mode.
 *
 * @param[in] key This string is the keyname to grab.
 * @param[in] modifiers A combinaison of modifier keys that must be present to
 * trigger the event. Not supported yet.
 * @param[in] not_modifiers A combinaison of modifier keys that must not be
 * present to trigger the event. Not supported yet.
 * @param[in] priority Not supported yet.
 * @param[in] grab_mode Describes how the key should be grabbed, wrt. focus and
 * stacking.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_keygrab_set(Eo *obj, const char *key, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers, int priority, Efl_Ui_Win_Keygrab_Mode grab_mode);

/**
 * @brief Unset keygrab value of the window
 *
 * This function unset keygrab value. Ungrab @c key of window.
 *
 * @param[in] key This string is the keyname to grab.
 * @param[in] modifiers A combinaison of modifier keys that must be present to
 * trigger the event. Not supported yet.
 * @param[in] not_modifiers A combinaison of modifier keys that must not be
 * present to trigger the event. Not supported yet.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_keygrab_unset(Eo *obj, const char *key, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers);

/**
 * @brief Start moving or resizing the window.
 *
 * The user can request the display server to start moving or resizing the
 * window by combining modes from @ref Efl_Ui_Win_Move_Resize_Mode. This API
 * can only be called if none of the following conditions is true:
 *
 * 1. Called in the absence of a pointer down event, 2. Called more than once
 * before a pointer up event, 3. Called when the window is already being
 * resized or moved, 4. Called with an unsupported combination of modes.
 *
 * Right usage: 1. Pointer (mouse or touch) down event, 2.
 * @ref efl_ui_win_move_resize_start called only once with a supported mode, 3.
 * Pointer (mouse or touch) up event.
 *
 * If a pointer up event occurs after calling the function, it automatically
 * ends the window move and resize operation.
 *
 * Currently, only the following 9 combinations are allowed, and possibly more
 * combinations may be added in the future: 1. @ref EFL_UI_WIN_MOVE_RESIZE_MOVE
 * 2. @ref EFL_UI_WIN_MOVE_RESIZE_TOP 3. @ref EFL_UI_WIN_MOVE_RESIZE_BOTTOM 4.
 * @ref EFL_UI_WIN_MOVE_RESIZE_LEFT 5. @ref EFL_UI_WIN_MOVE_RESIZE_RIGHT 6.
 * @ref EFL_UI_WIN_MOVE_RESIZE_TOP | @ref EFL_UI_WIN_MOVE_RESIZE_LEFT 7.
 * @ref EFL_UI_WIN_MOVE_RESIZE_TOP | @ref EFL_UI_WIN_MOVE_RESIZE_RIGHT 8.
 * @ref EFL_UI_WIN_MOVE_RESIZE_BOTTOM | @ref EFL_UI_WIN_MOVE_RESIZE_LEFT 9.
 * @ref EFL_UI_WIN_MOVE_RESIZE_BOTTOM | @ref EFL_UI_WIN_MOVE_RESIZE_RIGHT
 *
 * In particular move and resize can not happen simultaneously.
 *
 * @note the result of this API can only guarantee that the request has been
 * forwarded to the server, but there is no guarantee that the request can be
 * processed by the display server.
 *
 * @param[in] mode The requested move or resize mode.
 *
 * @return @c true if the request was successfully sent to the display server,
 * @c false in case of error.
 *
 * @since 1.19
 *
 * @ingroup Efl_Ui_Win
 */
EOAPI Eina_Bool efl_ui_win_move_resize_start(Eo *obj, Efl_Ui_Win_Move_Resize_Mode mode);

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_DELETE_REQUEST;

/** Called when the window got a delete request
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_DELETE_REQUEST (&(_EFL_UI_WIN_EVENT_DELETE_REQUEST))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_WITHDRAWN;

/** Called when window was withdrawn
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_WITHDRAWN (&(_EFL_UI_WIN_EVENT_WITHDRAWN))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_ICONIFIED;

/** Called when window was iconified
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_ICONIFIED (&(_EFL_UI_WIN_EVENT_ICONIFIED))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_NORMAL;

/** Called when window got into normal state
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_NORMAL (&(_EFL_UI_WIN_EVENT_NORMAL))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_STICK;

/** Called when window was set sticky
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_STICK (&(_EFL_UI_WIN_EVENT_STICK))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_UNSTICK;

/** Called when window is no  longer set sticky
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_UNSTICK (&(_EFL_UI_WIN_EVENT_UNSTICK))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_FULLSCREEN;

/** Called when window was set fullscreen
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_FULLSCREEN (&(_EFL_UI_WIN_EVENT_FULLSCREEN))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_UNFULLSCREEN;

/** Called when window is no longer set fullscreen
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_UNFULLSCREEN (&(_EFL_UI_WIN_EVENT_UNFULLSCREEN))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_MAXIMIZED;

/** Called when window is set maximized
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_MAXIMIZED (&(_EFL_UI_WIN_EVENT_MAXIMIZED))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_UNMAXIMIZED;

/** Called when window is no longer set maximized
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_UNMAXIMIZED (&(_EFL_UI_WIN_EVENT_UNMAXIMIZED))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_IOERR;

/** Called on input output error
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_IOERR (&(_EFL_UI_WIN_EVENT_IOERR))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_INDICATOR_PROP_CHANGED;

/** Called when indicator property changed
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_INDICATOR_PROP_CHANGED (&(_EFL_UI_WIN_EVENT_INDICATOR_PROP_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_ROTATION_CHANGED;

/** Called when window rotation changed
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_ROTATION_CHANGED (&(_EFL_UI_WIN_EVENT_ROTATION_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_PROFILE_CHANGED;

/** Called when profile changed
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_PROFILE_CHANGED (&(_EFL_UI_WIN_EVENT_PROFILE_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_WM_ROTATION_CHANGED;

/** Called when window manager rotation changed
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_WM_ROTATION_CHANGED (&(_EFL_UI_WIN_EVENT_WM_ROTATION_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_THEME_CHANGED;

/** Called when theme changed
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_THEME_CHANGED (&(_EFL_UI_WIN_EVENT_THEME_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_UI_WIN_EVENT_ELM_ACTION_BLOCK_MENU;

/** Called when elementary block menu action happened
 *
 * @ingroup Efl_Ui_Win
 */
#define EFL_UI_WIN_EVENT_ELM_ACTION_BLOCK_MENU (&(_EFL_UI_WIN_EVENT_ELM_ACTION_BLOCK_MENU))

#endif
