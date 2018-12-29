#ifndef _EFL_INPUT_INTERFACE_EO_H_
#define _EFL_INPUT_INTERFACE_EO_H_

#ifndef _EFL_INPUT_INTERFACE_EO_CLASS_TYPE
#define _EFL_INPUT_INTERFACE_EO_CLASS_TYPE

typedef Eo Efl_Input_Interface;

#endif

#ifndef _EFL_INPUT_INTERFACE_EO_TYPES
#define _EFL_INPUT_INTERFACE_EO_TYPES


#endif
/**
 * @brief An object implementing this interface can send pointer events.
 *
 * Windows and canvas objects may send input events.
 *
 * A "pointer" refers to the main pointing device, which could be a mouse,
 * trackpad, finger, pen, etc... In other words, the finger id in any pointer
 * event will always be 0.
 *
 * A "finger" refers to a single point of input, usually in an absolute
 * coordinates input device, and that can support more than one input position
 * at at time (think multi-touch screens). The first finger (id 0) is sent
 * along with a pointer event, so be careful to not handle those events twice.
 * Note that if the input device can support "hovering", it is entirely
 * possible to receive move events without down coming first.
 *
 * A "key" is a key press from a keyboard or equivalent type of input device.
 * Long, repeated, key presses will always happen like this:
 * down...up,down...up,down...up (not down...up or down...down...down...up).
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_INPUT_INTERFACE_INTERFACE efl_input_interface_interface_get()

EWAPI const Efl_Class *efl_input_interface_interface_get(void);

/**
 * @brief This function returns the current known pointer coordinates
 *
 * This function returns the current known canvas unit coordinates of the mouse
 * pointer and sets the contents of the Evas_Coords pointed to by @c x and @c y
 * to contain these coordinates.
 *
 * @param[out] x The pointer to hold the return value of pointer's x position.
 * @param[out] y The pointer to hold the return value of pointer's y position.
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
EOAPI void efl_input_pointer_xy_get(const Eo *obj, int *x, int *y);

/**
 * @brief Returns whether the mouse pointer is logically inside the canvas.
 *
 * When this function is called it will return a value of either @c false or
 * @c true, depending on whether a pointer,in or pointer,out event has been
 * called previously.
 *
 * A return value of @c true indicates the mouse is logically inside the
 * canvas, and @c false implies it is logically outside the canvas.
 *
 * A canvas begins with the mouse being assumed outside ($false).
 *
 * @return @c true if the mouse pointer is inside the canvas, @c false
 * otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
EOAPI Eina_Bool efl_input_pointer_inside_get(const Eo *obj);

/**
 * @brief Returns an iterator over the current known pointer positions.
 *
 * This is used to iterate over the current known multi-touch positions,
 * including the first finger. Each pointer position is represented by an
 * object of type @ref Efl_Input_Pointer.
 *
 * Each finger in a multi touch environment can then be identified by the
 * @ref efl_input_pointer_tool_get property. The order of the pointers in this
 * iterator is not defined.
 *
 * @note If the input surface supports hovering input, some pointers may not be
 * in a "down" state. To retrieve the list of such pointers, set the @c hover
 * value to @c true. Remember though that most devices currently don't support
 * this.
 *
 * @param[in] hover @c false by default, @c true means to include fingers that
 * are currently hovering.
 *
 * @return Iterator to pointer positions
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
EOAPI Eina_Iterator *efl_input_pointer_iterate(const Eo *obj, Eina_Bool hover);

/**
 * @brief Add or remove a given seat to the filter list. If the filter list is
 * empty this object will report mouse, keyboard and focus events from any
 * seat, otherwise those events will only be reported if the event comes from a
 * seat that is in the list.
 *
 * @param[in] seat The seat to act on.
 * @param[in] enable @c true to enable events for a seat or @c false otherwise.
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
EOAPI void efl_input_seat_event_filter_set(Eo *obj, Efl_Input_Device * seat, Eina_Bool enable);

/**
 * @brief Check if input events from a given seat is enabled.
 *
 * @param[in] seat The seat to act on.
 *
 * @return @c true to enable events for a seat or @c false otherwise.
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
EOAPI Eina_Bool efl_input_seat_event_filter_get(const Eo *obj, Efl_Input_Device * seat);

EWAPI extern const Efl_Event_Description _EFL_EVENT_POINTER_MOVE;

/** Main pointer move (current and previous positions are known).
 * @return Efl_Input_Pointer *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_MOVE (&(_EFL_EVENT_POINTER_MOVE))

EWAPI extern const Efl_Event_Description _EFL_EVENT_POINTER_DOWN;

/** Main pointer button pressed (button id is known).
 * @return Efl_Input_Pointer *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_DOWN (&(_EFL_EVENT_POINTER_DOWN))

EWAPI extern const Efl_Event_Description _EFL_EVENT_POINTER_UP;

/** Main pointer button released (button id is known).
 * @return Efl_Input_Pointer *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_UP (&(_EFL_EVENT_POINTER_UP))

EWAPI extern const Efl_Event_Description _EFL_EVENT_POINTER_CANCEL;

/** Main pointer button press was cancelled (button id is known). This can
 * happen in rare cases when the window manager passes the focus to a more
 * urgent window, for instance. You probably don't need to listen to this
 * event, as it will be accompanied by an up event.
 * @return Efl_Input_Pointer *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_CANCEL (&(_EFL_EVENT_POINTER_CANCEL))

EWAPI extern const Efl_Event_Description _EFL_EVENT_POINTER_IN;

/** Pointer entered a window or a widget.
 * @return Efl_Input_Pointer *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_IN (&(_EFL_EVENT_POINTER_IN))

EWAPI extern const Efl_Event_Description _EFL_EVENT_POINTER_OUT;

/** Pointer left a window or a widget.
 * @return Efl_Input_Pointer *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_OUT (&(_EFL_EVENT_POINTER_OUT))

EWAPI extern const Efl_Event_Description _EFL_EVENT_POINTER_WHEEL;

/** Mouse wheel event.
 * @return Efl_Input_Pointer *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_WHEEL (&(_EFL_EVENT_POINTER_WHEEL))

EWAPI extern const Efl_Event_Description _EFL_EVENT_POINTER_AXIS;

/** Pen or other axis event update.
 * @return Efl_Input_Pointer *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_POINTER_AXIS (&(_EFL_EVENT_POINTER_AXIS))

EWAPI extern const Efl_Event_Description _EFL_EVENT_FINGER_MOVE;

/** Finger moved (current and previous positions are known).
 * @return Efl_Input_Pointer *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_FINGER_MOVE (&(_EFL_EVENT_FINGER_MOVE))

EWAPI extern const Efl_Event_Description _EFL_EVENT_FINGER_DOWN;

/** Finger pressed (finger id is known).
 * @return Efl_Input_Pointer *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_FINGER_DOWN (&(_EFL_EVENT_FINGER_DOWN))

EWAPI extern const Efl_Event_Description _EFL_EVENT_FINGER_UP;

/** Finger released (finger id is known).
 * @return Efl_Input_Pointer *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_FINGER_UP (&(_EFL_EVENT_FINGER_UP))

EWAPI extern const Efl_Event_Description _EFL_EVENT_KEY_DOWN;

/** Keyboard key press.
 * @return Efl_Input_Key *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_KEY_DOWN (&(_EFL_EVENT_KEY_DOWN))

EWAPI extern const Efl_Event_Description _EFL_EVENT_KEY_UP;

/** Keyboard key release.
 * @return Efl_Input_Key *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_KEY_UP (&(_EFL_EVENT_KEY_UP))

EWAPI extern const Efl_Event_Description _EFL_EVENT_HOLD;

/** All input events are on hold or resumed.
 * @return Efl_Input_Hold *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_HOLD (&(_EFL_EVENT_HOLD))

EWAPI extern const Efl_Event_Description _EFL_EVENT_FOCUS_IN;

/** A focus in event.
 * @return Efl_Input_Focus *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_FOCUS_IN (&(_EFL_EVENT_FOCUS_IN))

EWAPI extern const Efl_Event_Description _EFL_EVENT_FOCUS_OUT;

/** A focus out event.
 * @return Efl_Input_Focus *
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Interface
 */
#define EFL_EVENT_FOCUS_OUT (&(_EFL_EVENT_FOCUS_OUT))

#endif
