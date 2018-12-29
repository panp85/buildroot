#ifndef _EFL_SCREEN_EO_H_
#define _EFL_SCREEN_EO_H_

#ifndef _EFL_SCREEN_EO_CLASS_TYPE
#define _EFL_SCREEN_EO_CLASS_TYPE

typedef Eo Efl_Screen;

#endif

#ifndef _EFL_SCREEN_EO_TYPES
#define _EFL_SCREEN_EO_TYPES


#endif
/** Efl screen interface
 *
 * @ingroup Efl_Screen
 */
#define EFL_SCREEN_INTERFACE efl_screen_interface_get()

EWAPI const Efl_Class *efl_screen_interface_get(void);

/**
 * @brief Get screen geometry details for the screen that a window is on.
 *
 * @param[out] w Where to return the width value. May be @c null.
 * @param[out] h Where to return the height value. May be @c null.
 *
 * @ingroup Efl_Screen
 */
EOAPI void efl_screen_size_get(const Eo *obj, int *w, int *h);

/**
 * @brief Get the rotation of the screen.
 *
 * Most engines only return multiples of 90.
 *
 * @return The degree of the screen.
 *
 * @since 1.19
 *
 * @ingroup Efl_Screen
 */
EOAPI int efl_screen_rotation_get(const Eo *obj);

/**
 * @brief Get screen dpi for the screen that a window is on.
 *
 * @param[out] xdpi Pointer to value to store return horizontal dpi. May be
 * @c null.
 * @param[out] ydpi Pointer to value to store return vertical dpi. May be
 * @c null.
 *
 * @since 1.7
 *
 * @ingroup Efl_Screen
 */
EOAPI void efl_screen_dpi_get(const Eo *obj, int *xdpi, int *ydpi);

#endif
