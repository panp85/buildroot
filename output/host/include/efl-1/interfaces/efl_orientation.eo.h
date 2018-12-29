#ifndef _EFL_ORIENTATION_EO_H_
#define _EFL_ORIENTATION_EO_H_

#ifndef _EFL_ORIENTATION_EO_CLASS_TYPE
#define _EFL_ORIENTATION_EO_CLASS_TYPE

typedef Eo Efl_Orientation;

#endif

#ifndef _EFL_ORIENTATION_EO_TYPES
#define _EFL_ORIENTATION_EO_TYPES

/**
 * @brief Orientation
 *
 * See also @ref Efl_Orientation
 *
 * @ingroup Efl
 */
typedef enum
{
  EFL_ORIENT_NONE = 0, /**< Default, same as up */
  EFL_ORIENT_UP = 0, /**< Orient up */
  EFL_ORIENT_RIGHT = 90, /**< Orient right */
  EFL_ORIENT_DOWN = 180, /**< Orient down */
  EFL_ORIENT_LEFT = 270, /**< Orient left */
  EFL_ORIENT_VERTICAL = 0, /**< Orient vertical */
  EFL_ORIENT_HORIZONTAL = 90 /**< Orient horizontal */
} Efl_Orient;


#endif
/** Efl orientation interface
 *
 * @ingroup Efl_Orientation
 */
#define EFL_ORIENTATION_INTERFACE efl_orientation_interface_get()

EWAPI const Efl_Class *efl_orientation_interface_get(void);

/**
 * @brief Control the orientation of a given widget
 *
 * Use this function to change how your widget is to be disposed: vertically or
 * horizontally or inverted vertically or inverted horizontally
 *
 * @param[in] dir Direction
 *
 * @ingroup Efl_Orientation
 */
EOAPI void efl_orientation_set(Eo *obj, Efl_Orient dir);

/**
 * @brief Control the orientation of a given widget
 *
 * Use this function to change how your widget is to be disposed: vertically or
 * horizontally or inverted vertically or inverted horizontally
 *
 * @return Direction
 *
 * @ingroup Efl_Orientation
 */
EOAPI Efl_Orient efl_orientation_get(const Eo *obj);

#endif
