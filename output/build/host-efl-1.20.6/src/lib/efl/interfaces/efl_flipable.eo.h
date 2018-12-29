#ifndef _EFL_FLIPABLE_EO_H_
#define _EFL_FLIPABLE_EO_H_

#ifndef _EFL_FLIPABLE_EO_CLASS_TYPE
#define _EFL_FLIPABLE_EO_CLASS_TYPE

typedef Eo Efl_Flipable;

#endif

#ifndef _EFL_FLIPABLE_EO_TYPES
#define _EFL_FLIPABLE_EO_TYPES

/** Flip, See also @ref Efl_Flipable
 *
 * @ingroup Efl
 */
typedef enum
{
  EFL_FLIP_NONE = 0, /**< No flip */
  EFL_FLIP_HORIZONTAL = 1, /**< Flip image horizontally */
  EFL_FLIP_VERTICAL = 2 /**< Flip image vertically */
} Efl_Flip;


#endif
/** Efl flipable interface
 *
 * @ingroup Efl_Flipable
 */
#define EFL_FLIPABLE_INTERFACE efl_flipable_interface_get()

EWAPI const Efl_Class *efl_flipable_interface_get(void);

/**
 * @brief Control the flip of the given image
 *
 * Use this function to change how your image is to be flipped: vertically or
 * horizontally or transpose or traverse
 *
 * @param[in] flip Flip method
 *
 * @ingroup Efl_Flipable
 */
EOAPI void efl_flip_set(Eo *obj, Efl_Flip flip);

/**
 * @brief Control the flip of the given image
 *
 * Use this function to change how your image is to be flipped: vertically or
 * horizontally or transpose or traverse
 *
 * @return Flip method
 *
 * @ingroup Efl_Flipable
 */
EOAPI Efl_Flip efl_flip_get(const Eo *obj);

#endif
