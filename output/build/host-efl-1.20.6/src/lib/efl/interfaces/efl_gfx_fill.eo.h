#ifndef _EFL_GFX_FILL_EO_H_
#define _EFL_GFX_FILL_EO_H_

#ifndef _EFL_GFX_FILL_EO_CLASS_TYPE
#define _EFL_GFX_FILL_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Fill;

#endif

#ifndef _EFL_GFX_FILL_EO_TYPES
#define _EFL_GFX_FILL_EO_TYPES


#endif
/** Efl graphics fill interface
 *
 * @ingroup Efl_Gfx_Fill
 */
#define EFL_GFX_FILL_INTERFACE efl_gfx_fill_interface_get()

EWAPI const Efl_Class *efl_gfx_fill_interface_get(void);

/**
 * @brief Binds the object's @ref efl_gfx_fill_get property to its actual
 * geometry.
 *
 * If @c true, then every time the object is resized, it will automatically
 * trigger a call to @ref efl_gfx_fill_set with the new size (and 0, 0 as
 * source image's origin), so the image will cover the whole object's area.
 *
 * This property takes precedence over @ref efl_gfx_fill_get. If set to
 * @c false, then @ref efl_gfx_fill_get should be set.
 *
 * This flag is @c true by default (used to be @c false with the old APIs, and
 * was known as "filled").
 *
 * @param[in] filled @c true to make the fill property follow object size or
 * @c false otherwise.
 *
 * @ingroup Efl_Gfx_Fill
 */
EOAPI void efl_gfx_fill_auto_set(Eo *obj, Eina_Bool filled);

/**
 * @brief Binds the object's @ref efl_gfx_fill_get property to its actual
 * geometry.
 *
 * If @c true, then every time the object is resized, it will automatically
 * trigger a call to @ref efl_gfx_fill_set with the new size (and 0, 0 as
 * source image's origin), so the image will cover the whole object's area.
 *
 * This property takes precedence over @ref efl_gfx_fill_get. If set to
 * @c false, then @ref efl_gfx_fill_get should be set.
 *
 * This flag is @c true by default (used to be @c false with the old APIs, and
 * was known as "filled").
 *
 * @return @c true to make the fill property follow object size or @c false
 * otherwise.
 *
 * @ingroup Efl_Gfx_Fill
 */
EOAPI Eina_Bool efl_gfx_fill_auto_get(const Eo *obj);

/**
 * @brief Specifies how to tile an image to fill its rectangle geometry.
 *
 * Note that if @c w or @c h are smaller than the dimensions of the object, the
 * displayed image will be tiled around the object's area. To have only one
 * copy of the bound image drawn, @c x and @c y must be 0 and @c w and @c h
 * need to be the exact width and height of the image object itself,
 * respectively.
 *
 * Setting this property will reset the @ref efl_gfx_fill_auto_get to @c false.
 *
 * @param[in] x The x coordinate (from the top left corner of the bound image)
 * to start drawing from.
 * @param[in] y The y coordinate (from the top left corner of the bound image)
 * to start drawing from.
 * @param[in] w The width the bound image will be displayed at.
 * @param[in] h The height the bound image will be displayed at.
 *
 * @ingroup Efl_Gfx_Fill
 */
EOAPI void efl_gfx_fill_set(Eo *obj, int x, int y, int w, int h);

/**
 * @brief Specifies how to tile an image to fill its rectangle geometry.
 *
 * Note that if @c w or @c h are smaller than the dimensions of the object, the
 * displayed image will be tiled around the object's area. To have only one
 * copy of the bound image drawn, @c x and @c y must be 0 and @c w and @c h
 * need to be the exact width and height of the image object itself,
 * respectively.
 *
 * Setting this property will reset the @ref efl_gfx_fill_auto_get to @c false.
 *
 * @param[out] x The x coordinate (from the top left corner of the bound image)
 * to start drawing from.
 * @param[out] y The y coordinate (from the top left corner of the bound image)
 * to start drawing from.
 * @param[out] w The width the bound image will be displayed at.
 * @param[out] h The height the bound image will be displayed at.
 *
 * @ingroup Efl_Gfx_Fill
 */
EOAPI void efl_gfx_fill_get(const Eo *obj, int *x, int *y, int *w, int *h);

#endif
