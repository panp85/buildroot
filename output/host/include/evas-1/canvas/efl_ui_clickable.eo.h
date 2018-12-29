#ifndef _EFL_UI_CLICKABLE_EO_H_
#define _EFL_UI_CLICKABLE_EO_H_

#ifndef _EFL_UI_CLICKABLE_EO_CLASS_TYPE
#define _EFL_UI_CLICKABLE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Clickable;

#endif

#ifndef _EFL_UI_CLICKABLE_EO_TYPES
#define _EFL_UI_CLICKABLE_EO_TYPES


#endif
/** Efl UI clickable interface
 *
 * @ingroup Efl_Ui_Clickable
 */
#define EFL_UI_CLICKABLE_INTERFACE efl_ui_clickable_interface_get()

EWAPI const Efl_Class *efl_ui_clickable_interface_get(void);

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_CLICKED;

/** Called when object was clicked
 *
 * @ingroup Efl_Ui_Clickable
 */
#define EFL_UI_EVENT_CLICKED (&(_EFL_UI_EVENT_CLICKED))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_CLICKED_DOUBLE;

/** Called when object received a double click
 *
 * @ingroup Efl_Ui_Clickable
 */
#define EFL_UI_EVENT_CLICKED_DOUBLE (&(_EFL_UI_EVENT_CLICKED_DOUBLE))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_CLICKED_TRIPLE;

/** Called when object received a triple click
 *
 * @ingroup Efl_Ui_Clickable
 */
#define EFL_UI_EVENT_CLICKED_TRIPLE (&(_EFL_UI_EVENT_CLICKED_TRIPLE))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_CLICKED_RIGHT;

/** Called when object received a right click
 *
 * @ingroup Efl_Ui_Clickable
 */
#define EFL_UI_EVENT_CLICKED_RIGHT (&(_EFL_UI_EVENT_CLICKED_RIGHT))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_PRESSED;

/** Called when the object was pressed
 *
 * @ingroup Efl_Ui_Clickable
 */
#define EFL_UI_EVENT_PRESSED (&(_EFL_UI_EVENT_PRESSED))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_UNPRESSED;

/** Called when the object is now longer pressed
 *
 * @ingroup Efl_Ui_Clickable
 */
#define EFL_UI_EVENT_UNPRESSED (&(_EFL_UI_EVENT_UNPRESSED))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_LONGPRESSED;

/** Called when the object received a longpress
 *
 * @ingroup Efl_Ui_Clickable
 */
#define EFL_UI_EVENT_LONGPRESSED (&(_EFL_UI_EVENT_LONGPRESSED))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_REPEATED;

/** Called when the object received repeated presses/clicks
 *
 * @ingroup Efl_Ui_Clickable
 */
#define EFL_UI_EVENT_REPEATED (&(_EFL_UI_EVENT_REPEATED))

#endif
