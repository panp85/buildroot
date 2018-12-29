#ifndef _EFL_UI_SELECTABLE_EO_H_
#define _EFL_UI_SELECTABLE_EO_H_

#ifndef _EFL_UI_SELECTABLE_EO_CLASS_TYPE
#define _EFL_UI_SELECTABLE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Selectable;

#endif

#ifndef _EFL_UI_SELECTABLE_EO_TYPES
#define _EFL_UI_SELECTABLE_EO_TYPES


#endif
/** Efl UI selectable interface
 *
 * @ingroup Efl_Ui_Selectable
 */
#define EFL_UI_SELECTABLE_INTERFACE efl_ui_selectable_interface_get()

EWAPI const Efl_Class *efl_ui_selectable_interface_get(void);

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_SELECTED;

/** Called when selected
 *
 * @ingroup Efl_Ui_Selectable
 */
#define EFL_UI_EVENT_SELECTED (&(_EFL_UI_EVENT_SELECTED))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_UNSELECTED;

/** Called when no longer selected
 *
 * @ingroup Efl_Ui_Selectable
 */
#define EFL_UI_EVENT_UNSELECTED (&(_EFL_UI_EVENT_UNSELECTED))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_SELECTION_PASTE;

/** Called when selection got pasted
 *
 * @ingroup Efl_Ui_Selectable
 */
#define EFL_UI_EVENT_SELECTION_PASTE (&(_EFL_UI_EVENT_SELECTION_PASTE))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_SELECTION_COPY;

/** Called when selection was copied
 *
 * @ingroup Efl_Ui_Selectable
 */
#define EFL_UI_EVENT_SELECTION_COPY (&(_EFL_UI_EVENT_SELECTION_COPY))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_SELECTION_CUT;

/** Called when selection was cut
 *
 * @ingroup Efl_Ui_Selectable
 */
#define EFL_UI_EVENT_SELECTION_CUT (&(_EFL_UI_EVENT_SELECTION_CUT))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_SELECTION_START;

/** Called at selection start
 *
 * @ingroup Efl_Ui_Selectable
 */
#define EFL_UI_EVENT_SELECTION_START (&(_EFL_UI_EVENT_SELECTION_START))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_SELECTION_CHANGED;

/** Called when selection changed
 *
 * @ingroup Efl_Ui_Selectable
 */
#define EFL_UI_EVENT_SELECTION_CHANGED (&(_EFL_UI_EVENT_SELECTION_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_SELECTION_CLEARED;

/** Called when selection was cleared
 *
 * @ingroup Efl_Ui_Selectable
 */
#define EFL_UI_EVENT_SELECTION_CLEARED (&(_EFL_UI_EVENT_SELECTION_CLEARED))

#endif
