#ifndef _EFL_GFX_GRADIENT_EO_H_
#define _EFL_GFX_GRADIENT_EO_H_

#ifndef _EFL_GFX_GRADIENT_EO_CLASS_TYPE
#define _EFL_GFX_GRADIENT_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Gradient;

#endif

#ifndef _EFL_GFX_GRADIENT_EO_TYPES
#define _EFL_GFX_GRADIENT_EO_TYPES


#endif
/** Efl graphics gradient interface
 *
 * @ingroup Efl_Gfx_Gradient
 */
#define EFL_GFX_GRADIENT_INTERFACE efl_gfx_gradient_interface_get()

EWAPI const Efl_Class *efl_gfx_gradient_interface_get(void);

/**
 * @brief Set the list of color stops for the gradient
 *
 * @param[in] colors Color stops list
 * @param[in] length Length of the list
 *
 * @ingroup Efl_Gfx_Gradient
 */
EOAPI void efl_gfx_gradient_stop_set(Eo *obj, const Efl_Gfx_Gradient_Stop *colors, unsigned int length);

/**
 * @brief Get the list of color stops.
 *
 * @param[out] colors Color stops list
 * @param[out] length Length of the list
 *
 * @ingroup Efl_Gfx_Gradient
 */
EOAPI void efl_gfx_gradient_stop_get(const Eo *obj, const Efl_Gfx_Gradient_Stop **colors, unsigned int *length);

/**
 * @brief Specifies the spread method that should be used for this gradient.
 *
 * @param[in] s Spread type to be used
 *
 * @ingroup Efl_Gfx_Gradient
 */
EOAPI void efl_gfx_gradient_spread_set(Eo *obj, Efl_Gfx_Gradient_Spread s);

/**
 * @brief Returns the spread method use by this gradient. The default is
 * EFL_GFX_GRADIENT_SPREAD_PAD.
 *
 * @return Spread type to be used
 *
 * @ingroup Efl_Gfx_Gradient
 */
EOAPI Efl_Gfx_Gradient_Spread efl_gfx_gradient_spread_get(const Eo *obj);

#endif
