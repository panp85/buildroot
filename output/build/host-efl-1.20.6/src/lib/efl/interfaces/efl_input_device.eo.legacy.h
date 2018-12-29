#ifndef _EFL_INPUT_DEVICE_EO_LEGACY_H_
#define _EFL_INPUT_DEVICE_EO_LEGACY_H_

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










#endif
