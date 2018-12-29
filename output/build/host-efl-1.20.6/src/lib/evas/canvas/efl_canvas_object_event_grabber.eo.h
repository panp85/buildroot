#ifndef _EFL_CANVAS_OBJECT_EVENT_GRABBER_EO_H_
#define _EFL_CANVAS_OBJECT_EVENT_GRABBER_EO_H_

#ifndef _EFL_CANVAS_OBJECT_EVENT_GRABBER_EO_CLASS_TYPE
#define _EFL_CANVAS_OBJECT_EVENT_GRABBER_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Object_Event_Grabber;

#endif

#ifndef _EFL_CANVAS_OBJECT_EVENT_GRABBER_EO_TYPES
#define _EFL_CANVAS_OBJECT_EVENT_GRABBER_EO_TYPES


#endif
/**
 * @brief Low-level rectangle object.
 *
 * This provides a smart version of the typical "event rectangle", which allows
 * objects to set this as their parent and route events to a group of objects.
 * Events will not propagate to non-member objects below this object.
 *
 * Adding members is done just like a normal smart object, using
 * efl_canvas_group_member_add (Eo API) or evas_object_smart_member_add
 * (legacy).
 *
 * Child objects are not modified in any way, unlike other types of smart
 * objects.
 *
 * It is a user error for any child objects to be stacked above the event
 * grabber parent while the event grabber is visible. A critical error will be
 * raised if this is detected at any point.
 *
 * @since 1.20
 *
 * @ingroup Efl_Canvas_Object_Event_Grabber
 */
#define EFL_CANVAS_OBJECT_EVENT_GRABBER_CLASS efl_canvas_object_event_grabber_class_get()

EWAPI const Efl_Class *efl_canvas_object_event_grabber_class_get(void);

/**
 * @brief Stops the grabber from updating its internal stacking order while
 * visible
 *
 * @param[in] set
 *
 * @since 1.20
 *
 * @ingroup Efl_Canvas_Object_Event_Grabber
 */
EOAPI void efl_canvas_object_event_grabber_freeze_when_visible_set(Eo *obj, Eina_Bool set);

/** Stops the grabber from updating its internal stacking order while visible
 *
 * @since 1.20
 *
 * @ingroup Efl_Canvas_Object_Event_Grabber
 */
EOAPI Eina_Bool efl_canvas_object_event_grabber_freeze_when_visible_get(const Eo *obj);

#endif
