#ifndef _EFL_UI_DRAGGABLE_EO_H_
#define _EFL_UI_DRAGGABLE_EO_H_

#ifndef _EFL_UI_DRAGGABLE_EO_CLASS_TYPE
#define _EFL_UI_DRAGGABLE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Draggable;

#endif

#ifndef _EFL_UI_DRAGGABLE_EO_TYPES
#define _EFL_UI_DRAGGABLE_EO_TYPES


#endif
/** Efl UI draggable interface
 *
 * @ingroup Efl_Ui_Draggable
 */
#define EFL_UI_DRAGGABLE_INTERFACE efl_ui_draggable_interface_get()

EWAPI const Efl_Class *efl_ui_draggable_interface_get(void);

/**
 * @brief Control whether the object's content is changed by drag and drop.
 *
 * If @c drag_target is true, the object can be target of dragging object and
 * the content of this object can be changed into dragging content. For
 * example, If object deals with image and @c drag_target is true, user can
 * drag new image and drop it into this object. And then this object's image
 * can be changed into new image.
 *
 * @param[in] set Turn on or off drop_target. Default is @c false.
 *
 * @ingroup Efl_Ui_Draggable
 */
EOAPI void efl_ui_draggable_drag_target_set(Eo *obj, Eina_Bool set);

/**
 * @brief Control whether the object's content is changed by drag and drop.
 *
 * If @c drag_target is true, the object can be target of dragging object and
 * the content of this object can be changed into dragging content. For
 * example, If object deals with image and @c drag_target is true, user can
 * drag new image and drop it into this object. And then this object's image
 * can be changed into new image.
 *
 * @return Turn on or off drop_target. Default is @c false.
 *
 * @ingroup Efl_Ui_Draggable
 */
EOAPI Eina_Bool efl_ui_draggable_drag_target_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_DRAG;

/** Called when drag operation starts
 *
 * @ingroup Efl_Ui_Draggable
 */
#define EFL_UI_EVENT_DRAG (&(_EFL_UI_EVENT_DRAG))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_DRAG_START;

/** Called when drag started
 *
 * @ingroup Efl_Ui_Draggable
 */
#define EFL_UI_EVENT_DRAG_START (&(_EFL_UI_EVENT_DRAG_START))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_DRAG_STOP;

/** Called when drag stopped
 *
 * @ingroup Efl_Ui_Draggable
 */
#define EFL_UI_EVENT_DRAG_STOP (&(_EFL_UI_EVENT_DRAG_STOP))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_DRAG_END;

/** Called when drag operation ends
 *
 * @ingroup Efl_Ui_Draggable
 */
#define EFL_UI_EVENT_DRAG_END (&(_EFL_UI_EVENT_DRAG_END))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_DRAG_START_UP;

/** Called when drag starts into up direction
 *
 * @ingroup Efl_Ui_Draggable
 */
#define EFL_UI_EVENT_DRAG_START_UP (&(_EFL_UI_EVENT_DRAG_START_UP))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_DRAG_START_DOWN;

/** Called when drag starts into down direction
 *
 * @ingroup Efl_Ui_Draggable
 */
#define EFL_UI_EVENT_DRAG_START_DOWN (&(_EFL_UI_EVENT_DRAG_START_DOWN))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_DRAG_START_RIGHT;

/** Called when drag starts into right direction
 *
 * @ingroup Efl_Ui_Draggable
 */
#define EFL_UI_EVENT_DRAG_START_RIGHT (&(_EFL_UI_EVENT_DRAG_START_RIGHT))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_DRAG_START_LEFT;

/** Called when drag starts into left direction
 *
 * @ingroup Efl_Ui_Draggable
 */
#define EFL_UI_EVENT_DRAG_START_LEFT (&(_EFL_UI_EVENT_DRAG_START_LEFT))

#endif
