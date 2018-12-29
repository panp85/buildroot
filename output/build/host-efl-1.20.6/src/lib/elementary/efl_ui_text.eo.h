#ifndef _EFL_UI_TEXT_EO_H_
#define _EFL_UI_TEXT_EO_H_

#ifndef _EFL_UI_TEXT_EO_CLASS_TYPE
#define _EFL_UI_TEXT_EO_CLASS_TYPE

typedef Eo Efl_Ui_Text;

#endif

#ifndef _EFL_UI_TEXT_EO_TYPES
#define _EFL_UI_TEXT_EO_TYPES

/** EFL UI text anchor information
 *
 * @ingroup Efl_Ui_Text
 */
typedef struct _Efl_Ui_Text_Anchor_Info
{
  const char *name; /**< The name of the anchor, as stated in its href. */
  int button; /**< The mouse button used to click on it. */
  int x; /**< Anchor geometry, relative to canvas. */
  int y; /**< Anchor geometry, relative to canvas. */
  int w; /**< Anchor geometry, relative to canvas. */
  int h; /**< Anchor geometry, relative to canvas. */
} Efl_Ui_Text_Anchor_Info;

/** EFL text hover parent
 *
 * @ingroup Efl_Ui_Text
 */
typedef struct _Efl_Ui_Text_Hover_Parent
{
  int x; /**< Hover parent X coordinate */
  int y; /**< Hover parent Y coordinate */
  int w; /**< Hover parent width */
  int h; /**< Hover parent height */
} Efl_Ui_Text_Hover_Parent;

/** EFL text anchor hover information
 *
 * @ingroup Efl_Ui_Text
 */
typedef struct _Efl_Ui_Text_Anchor_Hover_Info
{
  const Efl_Ui_Text_Anchor_Info *anchor_info; /**< The actual anchor info. */
  Elm_Hover *hover; /**< The hover object to use for the popup. */
  Efl_Ui_Text_Hover_Parent hover_parent; /**< Hover parent widget */
  Eina_Bool hover_left; /**< Hint indicating if there's space for content on the
                         * left side of the hover. Before calling the callback,
                         * the widget will make the necessary calculations to
                         * check which sides are fit to be set with content,
                         * based on the position the hover is activated and its
                         * distance to the edges of its parent object */
  Eina_Bool hover_right; /**< Hint indicating content fits on the right side of
                          * the hover. See @.hover_left. */
  Eina_Bool hover_top; /**< Hint indicating content fits on top of the hover.
                        * @.hover_left. */
  Eina_Bool hover_bottom; /**< Hint indicating content fits below the hover. See
                           * @.hover_left. */
} Efl_Ui_Text_Anchor_Hover_Info;


#endif
/** Efl UI text class
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_CLASS efl_ui_text_class_get()

EWAPI const Efl_Class *efl_ui_text_class_get(void);

/**
 * @brief Enable or disable scrolling in entry
 *
 * Normally the entry is not scrollable unless you enable it with this call.
 *
 * @param[in] scroll @c true if it is to be scrollable, @c false otherwise.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_scrollable_set(Eo *obj, Eina_Bool scroll);

/**
 * @brief Get the scrollable state of the entry
 *
 * Normally the entry is not scrollable. This gets the scrollable state of the
 * entry.
 *
 * @return @c true if it is to be scrollable, @c false otherwise.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI Eina_Bool efl_ui_text_scrollable_get(const Eo *obj);

/**
 * @brief Set the attribute to show the input panel in case of only an user's
 * explicit Mouse Up event. It doesn't request to show the input panel even
 * though it has focus.
 *
 * @param[in] ondemand If @c true, the input panel will be shown in case of
 * only Mouse up event. (Focus event will be ignored.)
 *
 * @since 1.9
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_input_panel_show_on_demand_set(Eo *obj, Eina_Bool ondemand);

/**
 * @brief Get the attribute to show the input panel in case of only an user's
 * explicit Mouse Up event.
 *
 * @return If @c true, the input panel will be shown in case of only Mouse up
 * event. (Focus event will be ignored.)
 *
 * @since 1.9
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI Eina_Bool efl_ui_text_input_panel_show_on_demand_get(const Eo *obj);

/**
 * @brief This disables the entry's contextual (longpress) menu.
 *
 * @param[in] disabled If @c true, the menu is disabled.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_context_menu_disabled_set(Eo *obj, Eina_Bool disabled);

/**
 * @brief This returns whether the entry's contextual (longpress) menu is
 * disabled.
 *
 * @return If @c true, the menu is disabled.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI Eina_Bool efl_ui_text_context_menu_disabled_get(const Eo *obj);

/**
 * @brief Control pasting of text and images for the widget.
 *
 * Normally the entry allows both text and images to be pasted. By setting
 * cnp_mode to be #ELM_CNP_MODE_NO_IMAGE, this prevents images from being copy
 * or past. By setting cnp_mode to be #ELM_CNP_MODE_PLAINTEXT, this remove all
 * tags in text .
 *
 * @note This only changes the behaviour of text.
 *
 * @param[in] cnp_mode One of #Elm_Cnp_Mode: #ELM_CNP_MODE_MARKUP,
 * #ELM_CNP_MODE_NO_IMAGE, #ELM_CNP_MODE_PLAINTEXT.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_cnp_mode_set(Eo *obj, Elm_Cnp_Mode cnp_mode);

/**
 * @brief Getting elm_entry text paste/drop mode.
 *
 * Normally the entry allows both text and images to be pasted. This gets the
 * copy & paste mode of the entry.
 *
 * @return One of #Elm_Cnp_Mode: #ELM_CNP_MODE_MARKUP, #ELM_CNP_MODE_NO_IMAGE,
 * #ELM_CNP_MODE_PLAINTEXT.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI Elm_Cnp_Mode efl_ui_text_cnp_mode_get(const Eo *obj);

/**
 * @brief Set the language mode of the input panel.
 *
 * This API can be used if you want to show the alphabet keyboard mode.
 *
 * @param[in] lang Language to be set to the input panel.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_input_panel_language_set(Eo *obj, Elm_Input_Panel_Lang lang);

/**
 * @brief Get the language mode of the input panel.
 *
 * @return Language to be set to the input panel.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI Elm_Input_Panel_Lang efl_ui_text_input_panel_language_get(const Eo *obj);

/**
 * @brief This disabled the entry's selection handlers.
 *
 * @param[in] disabled If @c true, the selection handlers are disabled.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_selection_handler_disabled_set(Eo *obj, Eina_Bool disabled);

/**
 * @brief This returns whether the entry's selection handlers are disabled.
 *
 * @return If @c true, the selection handlers are disabled.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI Eina_Bool efl_ui_text_selection_handler_disabled_get(const Eo *obj);

/**
 * @brief Set the input panel layout variation of the entry
 *
 * @param[in] variation Layout variation type.
 *
 * @since 1.8
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_input_panel_layout_variation_set(Eo *obj, int variation);

/**
 * @brief Get the input panel layout variation of the entry
 *
 * @return Layout variation type.
 *
 * @since 1.8
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI int efl_ui_text_input_panel_layout_variation_get(const Eo *obj);

/**
 * @brief Set the autocapitalization type on the immodule.
 *
 * @param[in] autocapital_type The type of autocapitalization.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_autocapital_type_set(Eo *obj, Elm_Autocapital_Type autocapital_type);

/**
 * @brief Get the autocapitalization type on the immodule.
 *
 * @return The type of autocapitalization.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI Elm_Autocapital_Type efl_ui_text_autocapital_type_get(const Eo *obj);

/**
 * @brief Sets the entry to password mode.
 *
 * In password mode, entries are implicitly single line and the display of any
 * text in them is replaced with asterisks (*).
 *
 * @param[in] password If true, password mode is enabled.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_password_set(Eo *obj, Eina_Bool password);

/**
 * @brief Get whether the entry is set to password mode.
 *
 * @return If true, password mode is enabled.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI Eina_Bool efl_ui_text_password_get(const Eo *obj);

/**
 * @brief Set the return key on the input panel to be disabled.
 *
 * @param[in] disabled The state to put in in: @c true for disabled, @c false
 * for enabled.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_input_panel_return_key_disabled_set(Eo *obj, Eina_Bool disabled);

/**
 * @brief Get whether the return key on the input panel should be disabled or
 * not.
 *
 * @return The state to put in in: @c true for disabled, @c false for enabled.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI Eina_Bool efl_ui_text_input_panel_return_key_disabled_get(const Eo *obj);

/**
 * @brief Set whether the entry should allow to use the text prediction.
 *
 * @param[in] prediction Whether the entry should allow to use the text
 * prediction.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_prediction_allow_set(Eo *obj, Eina_Bool prediction);

/**
 * @brief Get whether the entry should allow to use the text prediction.
 *
 * @return Whether the entry should allow to use the text prediction.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI Eina_Bool efl_ui_text_prediction_allow_get(const Eo *obj);

/**
 * @brief Sets the input hint which allows input methods to fine-tune their
 * behavior.
 *
 * @param[in] hints Input hint.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_input_hint_set(Eo *obj, Elm_Input_Hints hints);

/**
 * @brief Gets the value of input hint.
 *
 * @return Input hint.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI Elm_Input_Hints efl_ui_text_input_hint_get(const Eo *obj);

/**
 * @brief Set the input panel layout of the entry.
 *
 * @param[in] layout Layout type.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_input_panel_layout_set(Eo *obj, Elm_Input_Panel_Layout layout);

/**
 * @brief Get the input panel layout of the entry.
 *
 * @return Layout type.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI Elm_Input_Panel_Layout efl_ui_text_input_panel_layout_get(const Eo *obj);

/**
 * @brief Set the "return" key type. This type is used to set string or icon on
 * the "return" key of the input panel.
 *
 * An input panel displays the string or icon associated with this type.
 *
 * @param[in] return_key_type The type of "return" key on the input panel.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_input_panel_return_key_type_set(Eo *obj, Elm_Input_Panel_Return_Key_Type return_key_type);

/**
 * @brief Get the "return" key type.
 *
 * @return The type of "return" key on the input panel.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI Elm_Input_Panel_Return_Key_Type efl_ui_text_input_panel_return_key_type_get(const Eo *obj);

/**
 * @brief Sets the attribute to show the input panel automatically.
 *
 * @param[in] enabled If @c true, the input panel is appeared when entry is
 * clicked or has a focus.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_input_panel_enabled_set(Eo *obj, Eina_Bool enabled);

/**
 * @brief Get the attribute to show the input panel automatically.
 *
 * @return If @c true, the input panel is appeared when entry is clicked or has
 * a focus.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI Eina_Bool efl_ui_text_input_panel_enabled_get(const Eo *obj);

/**
 * @brief Set whether the return key on the input panel is disabled
 * automatically when entry has no text.
 *
 * If @c enabled is @c true, The return key on input panel is disabled when the
 * entry has no text. The return key on the input panel is automatically
 * enabled when the entry has text. The default value is @c false.
 *
 * @param[in] enabled If @c enabled is @c true, the return key is automatically
 * disabled when the entry has no text.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_input_panel_return_key_autoenabled_set(Eo *obj, Eina_Bool enabled);

/**
 * @brief This prepends a custom item provider to the list for that entry
 *
 * This prepends the given callback.
 *
 * @param[in] func The function called to provide the item object.
 * @param[in] data The data passed to @c func.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_item_provider_prepend(Eo *obj, Elm_Entry_Item_Provider_Cb func, void *data);

/**
 * @brief Show the input panel (virtual keyboard) based on the input panel
 * property of entry such as layout, autocapital types, and so on.
 *
 * Note that input panel is shown or hidden automatically according to the
 * focus state of entry widget. This API can be used in the case of manually
 * controlling by using @ref efl_ui_text_input_panel_enabled_set(en, @c false).
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_input_panel_show(Eo *obj);

/** This executes a "copy" action on the selected text in the entry.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_selection_copy(Eo *obj);

/**
 * @brief This removes a custom item provider to the list for that entry
 *
 * This removes the given callback. See @ref efl_ui_text_item_provider_append
 * for more information
 *
 * @param[in] func The function called to provide the item object.
 * @param[in] data The data passed to @c func.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_item_provider_remove(Eo *obj, Elm_Entry_Item_Provider_Cb func, void *data);

/**
 * @brief This clears and frees the items in a entry's contextual (longpress)
 * menu.
 *
 * See also @ref efl_ui_text_context_menu_item_add.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_context_menu_clear(Eo *obj);

/**
 * @brief Set the input panel-specific data to deliver to the input panel.
 *
 * This API is used by applications to deliver specific data to the input
 * panel. The data format MUST be negotiated by both application and the input
 * panel. The size and format of data are defined by the input panel.
 *
 * @param[in] data The specific data to be set to the input panel.
 * @param[in] len The length of data, in bytes, to send to the input panel.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_input_panel_imdata_set(Eo *obj, const void *data, int len);

/**
 * @brief Get the specific data of the current input panel.
 *
 * @param[in,out] data The specific data to be got from the input panel.
 * @param[out] len The length of data.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_input_panel_imdata_get(const Eo *obj, void *data, int *len);

/** This executes a "paste" action in the entry.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_selection_paste(Eo *obj);

/**
 * @brief Hide the input panel (virtual keyboard).
 *
 * Note that input panel is shown or hidden automatically according to the
 * focus state of entry widget. This API can be used in the case of manually
 * controlling by using @ref efl_ui_text_input_panel_enabled_set(en, @c false)
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_input_panel_hide(Eo *obj);

/** This ends a selection within the entry as though the user had just released
 * the mouse button while making a selection.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_cursor_selection_end(Eo *obj);

/** This executes a "cut" action on the selected text in the entry.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_selection_cut(Eo *obj);

/**
 * @brief This appends a custom item provider to the list for that entry
 *
 * This appends the given callback. The list is walked from beginning to end
 * with each function called given the item href string in the text. If the
 * function returns an object handle other than @c null (it should create an
 * object to do this), then this object is used to replace that item. If not
 * the next provider is called until one provides an item object, or the
 * default provider in entry does.
 *
 * See also @ref entry-items.
 *
 * @param[in] func The function called to provide the item object.
 * @param[in] data The data passed to @c func.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_item_provider_append(Eo *obj, Elm_Entry_Item_Provider_Cb func, void *data);

/**
 * @brief This adds an item to the entry's contextual menu.
 *
 * A longpress on an entry will make the contextual menu show up, if this
 * hasn't been disabled with @ref efl_ui_text_context_menu_disabled_set. By
 * default, this menu provides a few options like enabling selection mode,
 * which is useful on embedded devices that need to be explicit about it, and
 * when a selection exists it also shows the copy and cut actions.
 *
 * With this function, developers can add other options to this menu to perform
 * any action they deem necessary.
 *
 * @param[in] label The item's text label.
 * @param[in] icon_file The item's icon file.
 * @param[in] icon_type The item's icon type.
 * @param[in] func The callback to execute when the item is clicked.
 * @param[in] data The data to associate with the item for related functions.
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI void efl_ui_text_context_menu_item_add(Eo *obj, const char *label, const char *icon_file, Elm_Icon_Type icon_type, Evas_Smart_Cb func, const void *data);

/**
 * @brief Creates and returns a new cursor for the text.
 *
 * @return Text cursor
 *
 * @ingroup Efl_Ui_Text
 */
EOAPI Efl_Text_Cursor_Cursor *efl_ui_text_cursor_new(Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_ACTIVATED;

/** Called when entry got activated
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_ACTIVATED (&(_EFL_UI_TEXT_EVENT_ACTIVATED))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_CHANGED;

/** Called when entry changed
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_CHANGED (&(_EFL_UI_TEXT_EVENT_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_CHANGED_USER;

/** Called when object changed due to user interaction
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_CHANGED_USER (&(_EFL_UI_TEXT_EVENT_CHANGED_USER))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_VALIDATE;

/** Called when validating
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_VALIDATE (&(_EFL_UI_TEXT_EVENT_VALIDATE))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_CONTEXT_OPEN;

/** Called when context menu was opened
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_CONTEXT_OPEN (&(_EFL_UI_TEXT_EVENT_CONTEXT_OPEN))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_CLICKED;

/** Called when anchor was clicked
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_ANCHOR_CLICKED (&(_EFL_UI_TEXT_EVENT_ANCHOR_CLICKED))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_REJECTED;

/** Called when entry was rejected
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_REJECTED (&(_EFL_UI_TEXT_EVENT_REJECTED))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_MAXLENGTH_REACHED;

/** Called when maximum entry length has been reached
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_MAXLENGTH_REACHED (&(_EFL_UI_TEXT_EVENT_MAXLENGTH_REACHED))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_PREEDIT_CHANGED;

/** Called when entry preedit changed
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_PREEDIT_CHANGED (&(_EFL_UI_TEXT_EVENT_PREEDIT_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_PRESS;

/** Called when entry pressed
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_PRESS (&(_EFL_UI_TEXT_EVENT_PRESS))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_REDO_REQUEST;

/** Called when redo was requested
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_REDO_REQUEST (&(_EFL_UI_TEXT_EVENT_REDO_REQUEST))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_UNDO_REQUEST;

/** Called when undo was requested
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_UNDO_REQUEST (&(_EFL_UI_TEXT_EVENT_UNDO_REQUEST))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_TEXT_SET_DONE;

/** Called when text set finished
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_TEXT_SET_DONE (&(_EFL_UI_TEXT_EVENT_TEXT_SET_DONE))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_ABORTED;

/** Called when entry was aborted
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_ABORTED (&(_EFL_UI_TEXT_EVENT_ABORTED))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_DOWN;

/** Called on anchor down
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_ANCHOR_DOWN (&(_EFL_UI_TEXT_EVENT_ANCHOR_DOWN))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_HOVER_OPENED;

/** Called when hover opened
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_ANCHOR_HOVER_OPENED (&(_EFL_UI_TEXT_EVENT_ANCHOR_HOVER_OPENED))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_IN;

/** Called on anchor in
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_ANCHOR_IN (&(_EFL_UI_TEXT_EVENT_ANCHOR_IN))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_OUT;

/** Called on anchor out
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_ANCHOR_OUT (&(_EFL_UI_TEXT_EVENT_ANCHOR_OUT))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_UP;

/** called on anchor up
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_ANCHOR_UP (&(_EFL_UI_TEXT_EVENT_ANCHOR_UP))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_CURSOR_CHANGED;

/** Called on cursor changed
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_CURSOR_CHANGED (&(_EFL_UI_TEXT_EVENT_CURSOR_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_EVENT_CURSOR_CHANGED_MANUAL;

/** Called on manual cursor change
 *
 * @ingroup Efl_Ui_Text
 */
#define EFL_UI_TEXT_EVENT_CURSOR_CHANGED_MANUAL (&(_EFL_UI_TEXT_EVENT_CURSOR_CHANGED_MANUAL))

#endif
