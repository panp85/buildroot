#ifndef _EFL_INPUT_DEVICE_EO_H_
#define _EFL_INPUT_DEVICE_EO_H_

#ifndef _EFL_INPUT_DEVICE_EO_CLASS_TYPE
#define _EFL_INPUT_DEVICE_EO_CLASS_TYPE

typedef Eo Efl_Input_Device;

#endif

#ifndef _EFL_INPUT_DEVICE_EO_TYPES
#define _EFL_INPUT_DEVICE_EO_TYPES

/**
 * @brief General type of input device.
 *
 * Legacy support since 1.8 as @c Evas_Device_Class.
 *
 * @ingroup Efl_Input_Device
 */
typedef enum
{
  EFL_INPUT_DEVICE_TYPE_NONE = 0, /**< Not a device. */
  EFL_INPUT_DEVICE_TYPE_SEAT, /**< The user/seat (the user themselves). */
  EFL_INPUT_DEVICE_TYPE_KEYBOARD, /**< A regular keyboard, numberpad or attached
                                   * buttons. */
  EFL_INPUT_DEVICE_TYPE_MOUSE, /**< A mouse, trackball or touchpad relative
                                * motion device. */
  EFL_INPUT_DEVICE_TYPE_TOUCH, /**< A touchscreen with fingers or stylus. */
  EFL_INPUT_DEVICE_TYPE_PEN, /**< A special pen device. */
  EFL_INPUT_DEVICE_TYPE_WAND, /**< A laser pointer, wii-style or "minority
                               * report" pointing device. */
  EFL_INPUT_DEVICE_TYPE_GAMEPAD /**< A gamepad controller or joystick. */
} Efl_Input_Device_Type;


#endif
/** Represents a pointing device, such as a touch finger, a pen or a mouse.
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Device
 */
#define EFL_INPUT_DEVICE_CLASS efl_input_device_class_get()

EWAPI const Efl_Class *efl_input_device_class_get(void);

/**
 * @brief Device type property
 *
 * @param[in] klass Input device class
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Device
 */
EOAPI void efl_input_device_type_set(Eo *obj, Efl_Input_Device_Type klass);

/**
 * @brief Device type property
 *
 * @return Input device class
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Device
 */
EOAPI Efl_Input_Device_Type efl_input_device_type_get(const Eo *obj);

/**
 * @brief Device source property
 *
 * @param[in] src Input device
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Device
 */
EOAPI void efl_input_device_source_set(Eo *obj, Efl_Input_Device *src);

/**
 * @brief Device source property
 *
 * @return Input device
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Device
 */
EOAPI Efl_Input_Device *efl_input_device_source_get(const Eo *obj);

/**
 * @brief Get the @ref Efl_Input_Device that represents a seat.
 *
 * This method will find the seat the device belongs to.
 *
 * For this, it walk through device's parents looking for a device with
 * @ref EFL_INPUT_DEVICE_TYPE_SEAT. It may be the device itself.
 *
 * In case no seat is found, @c null is returned.
 *
 * @return The seat this device belongs to.
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Device
 */
EOAPI Efl_Input_Device *efl_input_device_seat_get(const Eo *obj);

/**
 * @brief Seat id number
 *
 * @param[in] id The id of the seat
 *
 * @since 1.20
 *
 * @ingroup Efl_Input_Device
 */
EOAPI void efl_input_device_seat_id_set(Eo *obj, unsigned int id);

/**
 * @brief Seat id number
 *
 * @return The id of the seat
 *
 * @since 1.20
 *
 * @ingroup Efl_Input_Device
 */
EOAPI unsigned int efl_input_device_seat_id_get(const Eo *obj);

/**
 * @brief Lists the children attached to this device.
 *
 * This is only meaningful with seat devices, as they are groups of real input
 * devices.
 *
 * @since 1.20
 *
 * @ingroup Efl_Input_Device
 */
EOAPI Eina_Iterator *efl_input_device_children_iterate(Eo *obj);

/**
 * @brief Determine whether a device has pointer capabilities.
 *
 * Returns 1 for Mouse, Touch, Pen, Pointer, and Wand type devices.
 *
 * If a seat device is passed, returns the number of pointer devices in the
 * seat.
 *
 * @since 1.20
 *
 * @ingroup Efl_Input_Device
 */
EOAPI unsigned int efl_input_device_has_pointer_caps(Eo *obj);

#endif
