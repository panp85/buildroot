#ifndef _EFL_CANVAS_EO_H_
#define _EFL_CANVAS_EO_H_

#ifndef _EFL_CANVAS_EO_CLASS_TYPE
#define _EFL_CANVAS_EO_CLASS_TYPE

typedef Eo Efl_Canvas;

#endif

#ifndef _EFL_CANVAS_EO_TYPES
#define _EFL_CANVAS_EO_TYPES


#endif
/** Common interface for window and some internal classes in EFL.
 *
 * @ingroup Efl_Canvas
 */
#define EFL_CANVAS_INTERFACE efl_canvas_interface_get()

EWAPI const Efl_Class *efl_canvas_interface_get(void);

/**
 * @brief Get the maximum image size evas can possibly handle.
 *
 * This function returns the largest image or surface size that evas can handle
 * in pixels, and if there is one, returns @c true. It returns @c false if no
 * extra constraint on maximum image size exists. You still should check the
 * return values of @c maxw and @c maxh as there may still be a limit, just a
 * much higher one.
 *
 * @param[out] maxw Pointer to hold the return value in pixels of the maximum
 * width.
 * @param[out] maxh Pointer to hold the return value in pixels of the maximum
 * height.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Canvas
 */
EOAPI Eina_Bool efl_canvas_image_max_size_get(const Eo *obj, int *maxw, int *maxh);

/** Call user-provided @c calculate smart functions and unset the flag
 * signalling that the object needs to get recalculated to all smart objects in
 * the canvas.
 *
 * @ingroup Efl_Canvas
 */
EOAPI void efl_canvas_smart_objects_calculate(Eo *obj);

/**
 * @brief Retrieve a list of objects lying over a given position in a canvas.
 *
 * This function will traverse all the layers of the given canvas, from top to
 * bottom, querying for objects with areas covering the given position. The
 * user can remove from query objects which are hidden and/or which are set to
 * pass events.
 *
 * @warning This function will skip objects parented by smart objects, acting
 * only on the ones at the "top level", with regard to object parenting.
 *
 * @param[in] x The horizontal coordinate of the position.
 * @param[in] y The vertical coordinate of the position.
 * @param[in] include_pass_events_objects Boolean flag to include or not
 * objects which pass events in this calculation.
 * @param[in] include_hidden_objects Boolean flag to include or not hidden
 * objects in this calculation.
 *
 * @return The list of objects that are over the given position in @c e.
 *
 * @ingroup Efl_Canvas
 */
EOAPI Eina_Iterator *efl_canvas_objects_at_xy_get(const Eo *obj, int x, int y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Retrieve the object stacked at the top of a given position in a
 * canvas.
 *
 * This function will traverse all the layers of the given canvas, from top to
 * bottom, querying for objects with areas covering the given position. The
 * user can remove from the query objects which are hidden and/or which are set
 * to pass events.
 *
 * @warning This function will skip objects parented by smart objects, acting
 * only on the ones at the "top level", with regard to object parenting.
 *
 * @param[in] x The horizontal coordinate of the position.
 * @param[in] y The vertical coordinate of the position.
 * @param[in] include_pass_events_objects Boolean flag to include or not
 * objects which pass events in this calculation.
 * @param[in] include_hidden_objects Boolean flag to include or not hidden
 * objects in this calculation.
 *
 * @return The Evas object that is over all other objects at the given
 * position.
 *
 * @ingroup Efl_Canvas
 */
EOAPI Efl_Gfx *efl_canvas_object_top_at_xy_get(const Eo *obj, int x, int y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Retrieve a list of objects lying over a given rectangular region in a
 * canvas.
 *
 * This function will traverse all the layers of the given canvas, from top to
 * bottom, querying for objects with areas overlapping with the given
 * rectangular region inside @c e. The user can remove from the query objects
 * which are hidden and/or which are set to pass events.
 *
 * @warning This function will skip objects parented by smart objects, acting
 * only on the ones at the "top level", with regard to object parenting.
 *
 * @param[in] x The top left corner's horizontal coordinate for the rectangular
 * region.
 * @param[in] y The top left corner's vertical coordinate for the rectangular
 * region.
 * @param[in] w The width of the rectangular region.
 * @param[in] h The height of the rectangular region.
 * @param[in] include_pass_events_objects Boolean flag to include or not
 * objects which pass events in this calculation.
 * @param[in] include_hidden_objects Boolean flag to include or not hidden
 * objects in this calculation.
 *
 * @return Iterator to objects
 *
 * @ingroup Efl_Canvas
 */
EOAPI Eina_Iterator *efl_canvas_objects_in_rectangle_get(const Eo *obj, int x, int y, int w, int h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Retrieve the Evas object stacked at the top of a given rectangular
 * region in a canvas
 *
 * This function will traverse all the layers of the given canvas, from top to
 * bottom, querying for objects with areas overlapping with the given
 * rectangular region inside @c e. The user can remove from the query objects
 * which are hidden and/or which are set to pass events.
 *
 * @warning This function will skip objects parented by smart objects, acting
 * only on the ones at the "top level", with regard to object parenting.
 *
 * @param[in] x The top left corner's horizontal coordinate for the rectangular
 * region.
 * @param[in] y The top left corner's vertical coordinate for the rectangular
 * region.
 * @param[in] w The width of the rectangular region.
 * @param[in] h The height of the rectangular region.
 * @param[in] include_pass_events_objects Boolean flag to include or not
 * objects which pass events in this calculation.
 * @param[in] include_hidden_objects Boolean flag to include or not hidden
 * objects in this calculation.
 *
 * @return The object that is over all other objects at the given rectangular
 * region.
 *
 * @ingroup Efl_Canvas
 */
EOAPI Efl_Gfx *efl_canvas_object_top_in_rectangle_get(const Eo *obj, int x, int y, int w, int h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Iterate over the input device seats.
 *
 * @return An iterator over the attached seats.
 *
 * @since 1.20
 *
 * @ingroup Efl_Canvas
 */
EOAPI Eina_Iterator *efl_canvas_seats(Eo *obj);

/**
 * @brief An input device attached to this canvas, found by name.
 *
 * @note This function is meant to find seats and not individual input devices.
 *
 * See also @ref efl_canvas_seat_get to find a seat by id instead of by name.
 *
 * Get a device by name.
 *
 * @param[in] name The name of the seat to find.
 *
 * @return The device or seat, @c null if not found.
 *
 * @ingroup Efl_Canvas
 */
EOAPI Efl_Input_Device *efl_canvas_device_get(const Eo *obj, const char * name);

/**
 * @brief A seat attached to this canvas, found by id.
 *
 * See also @ref efl_canvas_device_get to find a seat by name instead of by id.
 *
 * Get a seat by id.
 *
 * @param[in] id The id of the seat to find.
 *
 * @return The seat or @c null if not found.
 *
 * @ingroup Efl_Canvas
 */
EOAPI Efl_Input_Device *efl_canvas_seat_get(const Eo *obj, int id);

EWAPI extern const Efl_Event_Description _EFL_CANVAS_EVENT_FOCUS_IN;

/** Called when canvas got focus
 * @return Efl_Input_Focus *
 *
 * @ingroup Efl_Canvas
 */
#define EFL_CANVAS_EVENT_FOCUS_IN (&(_EFL_CANVAS_EVENT_FOCUS_IN))

EWAPI extern const Efl_Event_Description _EFL_CANVAS_EVENT_FOCUS_OUT;

/** Called when canvas lost focus
 * @return Efl_Input_Focus *
 *
 * @ingroup Efl_Canvas
 */
#define EFL_CANVAS_EVENT_FOCUS_OUT (&(_EFL_CANVAS_EVENT_FOCUS_OUT))

EWAPI extern const Efl_Event_Description _EFL_CANVAS_EVENT_OBJECT_FOCUS_IN;

/** Called when object got focus
 * @return Efl_Input_Focus *
 *
 * @ingroup Efl_Canvas
 */
#define EFL_CANVAS_EVENT_OBJECT_FOCUS_IN (&(_EFL_CANVAS_EVENT_OBJECT_FOCUS_IN))

EWAPI extern const Efl_Event_Description _EFL_CANVAS_EVENT_OBJECT_FOCUS_OUT;

/** Called when object lost focus
 * @return Efl_Input_Focus *
 *
 * @ingroup Efl_Canvas
 */
#define EFL_CANVAS_EVENT_OBJECT_FOCUS_OUT (&(_EFL_CANVAS_EVENT_OBJECT_FOCUS_OUT))

EWAPI extern const Efl_Event_Description _EFL_CANVAS_EVENT_RENDER_PRE;

/** Called when pre render happens
 *
 * @ingroup Efl_Canvas
 */
#define EFL_CANVAS_EVENT_RENDER_PRE (&(_EFL_CANVAS_EVENT_RENDER_PRE))

EWAPI extern const Efl_Event_Description _EFL_CANVAS_EVENT_RENDER_POST;

/** Called when post render happens
 *
 * @ingroup Efl_Canvas
 */
#define EFL_CANVAS_EVENT_RENDER_POST (&(_EFL_CANVAS_EVENT_RENDER_POST))

EWAPI extern const Efl_Event_Description _EFL_CANVAS_EVENT_DEVICE_CHANGED;

/** Called when input device changed
 * @return Efl_Input_Device *
 *
 * @ingroup Efl_Canvas
 */
#define EFL_CANVAS_EVENT_DEVICE_CHANGED (&(_EFL_CANVAS_EVENT_DEVICE_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_CANVAS_EVENT_DEVICE_ADDED;

/** Called when input device was added
 * @return Efl_Input_Device *
 *
 * @ingroup Efl_Canvas
 */
#define EFL_CANVAS_EVENT_DEVICE_ADDED (&(_EFL_CANVAS_EVENT_DEVICE_ADDED))

EWAPI extern const Efl_Event_Description _EFL_CANVAS_EVENT_DEVICE_REMOVED;

/** Called when input device was removed
 * @return Efl_Input_Device *
 *
 * @ingroup Efl_Canvas
 */
#define EFL_CANVAS_EVENT_DEVICE_REMOVED (&(_EFL_CANVAS_EVENT_DEVICE_REMOVED))

#endif
