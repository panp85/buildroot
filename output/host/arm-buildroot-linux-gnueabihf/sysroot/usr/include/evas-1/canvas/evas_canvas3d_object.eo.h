#ifndef _EVAS_CANVAS3D_OBJECT_EO_H_
#define _EVAS_CANVAS3D_OBJECT_EO_H_

#ifndef _EVAS_CANVAS3D_OBJECT_EO_CLASS_TYPE
#define _EVAS_CANVAS3D_OBJECT_EO_CLASS_TYPE

typedef Eo Evas_Canvas3D_Object;

#endif

#ifndef _EVAS_CANVAS3D_OBJECT_EO_TYPES
#define _EVAS_CANVAS3D_OBJECT_EO_TYPES


#endif
/** Evas 3D canvas object class
 *
 * @ingroup Evas_Canvas3D_Object
 */
#define EVAS_CANVAS3D_OBJECT_CLASS evas_canvas3d_object_class_get()

EWAPI const Efl_Class *evas_canvas3d_object_class_get(void);

/**
 * @brief Notify the object regarding its  state change.
 *
 * @param[in] state State that is changed.
 * @param[in] ref The Object that caused the change.
 *
 * @ingroup Evas_Canvas3D_Object
 */
EOAPI void evas_canvas3d_object_change(Eo *obj, Evas_Canvas3D_State state, Evas_Canvas3D_Object *ref);

/**
 * @brief Returns the type of the object.
 *
 * @return Object type
 *
 * @ingroup Evas_Canvas3D_Object
 */
EOAPI Evas_Canvas3D_Object_Type evas_canvas3d_object_type_get(const Eo *obj);

/**
 * @brief Sets the type of the object.
 *
 * @param[in] type Object type
 *
 * @ingroup Evas_Canvas3D_Object
 */
EOAPI void evas_canvas3d_object_type_set(Eo *obj, Evas_Canvas3D_Object_Type type);

/**
 * @brief Returns the status of a particular state of the object.
 *
 * @param[in] state State whose status is being asked.
 *
 * @return @c true if the status is dirty, @c false otherwise
 *
 * @ingroup Evas_Canvas3D_Object
 */
EOAPI Eina_Bool evas_canvas3d_object_dirty_get(const Eo *obj, Evas_Canvas3D_State state);

/** Update request for the object.
 *
 * @ingroup Evas_Canvas3D_Object
 */
EOAPI void evas_canvas3d_object_update(Eo *obj);

/**
 * @brief Pure virtual update_notify function.
 *
 * Update request for the object.
 *
 * @ingroup Evas_Canvas3D_Object
 */
EOAPI void evas_canvas3d_object_update_notify(Eo *obj);

/**
 * @brief Pure virtual change_notify function.
 *
 * Update request for the object.
 *
 * @param[in] state State that is changed.
 * @param[in] ref The Object that caused the change.
 *
 * @ingroup Evas_Canvas3D_Object
 */
EOAPI void evas_canvas3d_object_change_notify(Eo *obj, Evas_Canvas3D_State state, Evas_Canvas3D_Object *ref);

/**
 * @brief Pure virtual register samrt callback function.
 *
 * @param[in] event Event type.
 * @param[in] data User data.
 *
 * @ingroup Evas_Canvas3D_Object
 */
EOAPI void evas_canvas3d_object_callback_register(Eo *obj, const char *event, const void *data);

/**
 * @brief Pure virtual unregister smart callback function.
 *
 * @param[in] event Event type.
 *
 * @ingroup Evas_Canvas3D_Object
 */
EOAPI void evas_canvas3d_object_callback_unregister(Eo *obj, const char *event);

EWAPI extern const Efl_Event_Description _EVAS_CANVAS3D_OBJECT_EVENT_CLICKED;

/** Clicked Event.
 *
 * @ingroup Evas_Canvas3D_Object
 */
#define EVAS_CANVAS3D_OBJECT_EVENT_CLICKED (&(_EVAS_CANVAS3D_OBJECT_EVENT_CLICKED))

EWAPI extern const Efl_Event_Description _EVAS_CANVAS3D_OBJECT_EVENT_COLLISION;

/** Collision Event.
 *
 * @ingroup Evas_Canvas3D_Object
 */
#define EVAS_CANVAS3D_OBJECT_EVENT_COLLISION (&(_EVAS_CANVAS3D_OBJECT_EVENT_COLLISION))

#endif
