#ifndef _EFL_UI_TEXT_INTERACTIVE_EO_H_
#define _EFL_UI_TEXT_INTERACTIVE_EO_H_

#ifndef _EFL_UI_TEXT_INTERACTIVE_EO_CLASS_TYPE
#define _EFL_UI_TEXT_INTERACTIVE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Text_Interactive;

#endif

#ifndef _EFL_UI_TEXT_INTERACTIVE_EO_TYPES
#define _EFL_UI_TEXT_INTERACTIVE_EO_TYPES

/**
 * @brief This structure includes all the information about content changes.
 *
 * It's meant to be used to implement undo/redo.
 *
 * @ingroup Efl_Ui_Text_Interactive
 */
typedef struct _Efl_Ui_Text_Interactive_Change_Info
{
  const char *content; /**< The content added/removed */
  size_t position; /**< The position where it was added/removed */
  size_t length; /**< The length of content in characters (not bytes, actual
                  * unicode characters) */
  Eina_Bool insert; /**< @c true if the content was inserted, @c false if
                     * removei */
  Eina_Bool merge; /**< @c true if can be merged with the previous one. Used for
                    * example with insertion when something is already selected
                    */
} Efl_Ui_Text_Interactive_Change_Info;


#endif
/** This is an interface interactive text inputs should implement
 *
 * @ingroup Efl_Ui_Text_Interactive
 */
#define EFL_UI_TEXT_INTERACTIVE_INTERFACE efl_ui_text_interactive_interface_get()

EWAPI const Efl_Class *efl_ui_text_interactive_interface_get(void);

/**
 * @brief Whether or not selection is allowed on this object
 *
 * @param[in] allowed @c true if enabled, @c false otherwise
 *
 * @ingroup Efl_Ui_Text_Interactive
 */
EOAPI void efl_ui_text_interactive_selection_allowed_set(Eo *obj, Eina_Bool allowed);

/**
 * @brief Whether or not selection is allowed on this object
 *
 * @return @c true if enabled, @c false otherwise
 *
 * @ingroup Efl_Ui_Text_Interactive
 */
EOAPI Eina_Bool efl_ui_text_interactive_selection_allowed_get(const Eo *obj);

/**
 * @brief The cursors used for selection handling.
 *
 * If the cursors are equal, there is no selection.
 *
 * You are allowed to retain and modify them. Modifying them modifies the
 * selection of the object.
 *
 * @param[out] start The start of the selection
 * @param[out] end The end of the selection
 *
 * @ingroup Efl_Ui_Text_Interactive
 */
EOAPI void efl_ui_text_interactive_selection_cursors_get(const Eo *obj, Efl_Text_Cursor_Cursor **start, Efl_Text_Cursor_Cursor **end);

/**
 * @brief Whether the entry is editable.
 *
 * By default text interactives are editable. However, setting this property to
 * @c false will make it so key input will be disregarded.
 *
 * @param[in] editable If @c true, user input will be inserted in the entry, if
 * not, the entry is read-only and no user input is allowed.
 *
 * @ingroup Efl_Ui_Text_Interactive
 */
EOAPI void efl_ui_text_interactive_editable_set(Eo *obj, Eina_Bool editable);

/**
 * @brief Whether the entry is editable.
 *
 * By default text interactives are editable. However, setting this property to
 * @c false will make it so key input will be disregarded.
 *
 * @return If @c true, user input will be inserted in the entry, if not, the
 * entry is read-only and no user input is allowed.
 *
 * @ingroup Efl_Ui_Text_Interactive
 */
EOAPI Eina_Bool efl_ui_text_interactive_editable_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_INTERACTIVE_EVENT_CHANGED_USER;

/** The text object has changed due to user interaction
 * @return Efl_Ui_Text_Interactive_Change_Info
 *
 * @ingroup Efl_Ui_Text_Interactive
 */
#define EFL_UI_TEXT_INTERACTIVE_EVENT_CHANGED_USER (&(_EFL_UI_TEXT_INTERACTIVE_EVENT_CHANGED_USER))

EWAPI extern const Efl_Event_Description _EFL_UI_TEXT_INTERACTIVE_EVENT_SELECTION_CHANGED;

/** The selection on the object has changed. Query using
 * @ref efl_ui_text_interactive_selection_cursors_get
 *
 * @ingroup Efl_Ui_Text_Interactive
 */
#define EFL_UI_TEXT_INTERACTIVE_EVENT_SELECTION_CHANGED (&(_EFL_UI_TEXT_INTERACTIVE_EVENT_SELECTION_CHANGED))

#endif
