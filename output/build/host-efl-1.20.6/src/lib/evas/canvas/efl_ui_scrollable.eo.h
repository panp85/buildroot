#ifndef _EFL_UI_SCROLLABLE_EO_H_
#define _EFL_UI_SCROLLABLE_EO_H_

#ifndef _EFL_UI_SCROLLABLE_EO_CLASS_TYPE
#define _EFL_UI_SCROLLABLE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Scrollable;

#endif

#ifndef _EFL_UI_SCROLLABLE_EO_TYPES
#define _EFL_UI_SCROLLABLE_EO_TYPES


#endif
/** Efl UI scrollable interface
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_SCROLLABLE_INTERFACE efl_ui_scrollable_interface_get()

EWAPI const Efl_Class *efl_ui_scrollable_interface_get(void);

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL;

/** Called when scroll operation started
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL (&(_EFL_UI_EVENT_SCROLL))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL_ANIM_START;

/** Called when scroll animation started
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL_ANIM_START (&(_EFL_UI_EVENT_SCROLL_ANIM_START))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL_ANIM_STOP;

/** Called when scroll animation stopped
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL_ANIM_STOP (&(_EFL_UI_EVENT_SCROLL_ANIM_STOP))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL_DRAG_START;

/** Called when scroll drag started
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL_DRAG_START (&(_EFL_UI_EVENT_SCROLL_DRAG_START))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_SCROLL_DRAG_STOP;

/** Called when scroll drag stopped
 *
 * @ingroup Efl_Ui_Scrollable
 */
#define EFL_UI_EVENT_SCROLL_DRAG_STOP (&(_EFL_UI_EVENT_SCROLL_DRAG_STOP))

#endif
