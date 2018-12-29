#ifndef _EFL_GFX_EO_H_
#define _EFL_GFX_EO_H_

#ifndef _EFL_GFX_EO_CLASS_TYPE
#define _EFL_GFX_EO_CLASS_TYPE

typedef Eo Efl_Gfx;

#endif

#ifndef _EFL_GFX_EO_TYPES
#define _EFL_GFX_EO_TYPES


#endif
/** Efl graphics interface
 *
 * @ingroup Efl_Gfx
 */
#define EFL_GFX_INTERFACE efl_gfx_interface_get()

EWAPI const Efl_Class *efl_gfx_interface_get(void);

/**
 * @brief The 2D position of a canvas object.
 *
 * The position is absolute, in pixels, relative to the top-left corner of the
 * window, within its border decorations (application space).
 *
 * Moves the given Evas object to the given location inside its canvas'
 * viewport.
 *
 * @param[in] x X coordinate
 * @param[in] y Y coordinate
 *
 * @ingroup Efl_Gfx
 */
EOAPI void efl_gfx_position_set(Eo *obj, int x, int y);

/**
 * @brief The 2D position of a canvas object.
 *
 * The position is absolute, in pixels, relative to the top-left corner of the
 * window, within its border decorations (application space).
 *
 * Retrieves the position of the given Evas object.
 *
 * @param[out] x X coordinate
 * @param[out] y Y coordinate
 *
 * @ingroup Efl_Gfx
 */
EOAPI void efl_gfx_position_get(const Eo *obj, int *x, int *y);

/**
 * @brief The 2D size of a canvas object.
 *
 * Changes the size of the given object.
 *
 * Note that setting the actual size of an object might be the job of its
 * container, so this function might have no effect. Look at
 * @c Efl.Gfx.Size.Hint instead, when manipulating widgets.
 *
 * @param[in] w Width
 * @param[in] h Height
 *
 * @ingroup Efl_Gfx
 */
EOAPI void efl_gfx_size_set(Eo *obj, int w, int h);

/**
 * @brief The 2D size of a canvas object.
 *
 * Retrieves the (rectangular) size of the given Evas object.
 *
 * @param[out] w Width
 * @param[out] h Height
 *
 * @ingroup Efl_Gfx
 */
EOAPI void efl_gfx_size_get(const Eo *obj, int *w, int *h);

/**
 * @brief Rectangular geometry that combines both position and size.
 *
 * @param[in] x X coordinate
 * @param[in] y Y coordinate
 * @param[in] w Width
 * @param[in] h Height
 *
 * @ingroup Efl_Gfx
 */
EOAPI void efl_gfx_geometry_set(Eo *obj, int x, int y, int w, int h);

/**
 * @brief Rectangular geometry that combines both position and size.
 *
 * @param[out] x X coordinate
 * @param[out] y Y coordinate
 * @param[out] w Width
 * @param[out] h Height
 *
 * @ingroup Efl_Gfx
 */
EOAPI void efl_gfx_geometry_get(const Eo *obj, int *x, int *y, int *w, int *h);

/**
 * @brief Sets the general/main color of the given Evas object to the given
 * one.
 *
 * See also @ref efl_gfx_color_get (for an example)
 *
 * These color values are expected to be premultiplied by alpha.
 *
 * @param[in] r The red component of the given color.
 * @param[in] g The green component of the given color.
 * @param[in] b The blue component of the given color.
 * @param[in] a The alpha component of the given color.
 *
 * @ingroup Efl_Gfx
 */
EOAPI void efl_gfx_color_set(Eo *obj, int r, int g, int b, int a);

/**
 * @brief Retrieves the general/main color of the given Evas object.
 *
 * Retrieves the main color's RGB component (and alpha channel) values, which
 * range from 0 to 255. For the alpha channel, which defines the object's
 * transparency level, 0 means totally transparent, while 255 means opaque.
 * These color values are premultiplied by the alpha value.
 *
 * Usually youll use this attribute for text and rectangle objects, where the
 * main color is their unique one. If set for objects which themselves have
 * colors, like the images one, those colors get modulated by this one.
 *
 * All newly created Evas rectangles get the default color values of 255 255
 * 255 255 (opaque white).
 *
 * Use null pointers on the components you're not interested in: they'll be
 * ignored by the function.
 *
 * See the full @ref Example_Evas_Object_Manipulation "example".
 *
 * @param[out] r The red component of the given color.
 * @param[out] g The green component of the given color.
 * @param[out] b The blue component of the given color.
 * @param[out] a The alpha component of the given color.
 *
 * @ingroup Efl_Gfx
 */
EOAPI void efl_gfx_color_get(const Eo *obj, int *r, int *g, int *b, int *a);

/**
 * @brief Sets a specifc color of the given Efl.Gfx object to the given one.
 *
 * See also @ref efl_gfx_color_get (for an example)
 *
 * These color values are expected to be premultiplied by alpha.
 *
 * @param[in] part The part you are interested in.
 * @param[in] r The red component of the given color.
 * @param[in] g The green component of the given color.
 * @param[in] b The blue component of the given color.
 * @param[in] a The alpha component of the given color.
 *
 * @return @c true when color was set, @c false otherwise
 *
 * @ingroup Efl_Gfx
 */
EOAPI Eina_Bool efl_gfx_color_part_set(Eo *obj, const char * part, int r, int g, int b, int a);

/**
 * @brief Retrieves a specific color of the given Evas object.
 *
 * Retrieves a specific color's RGB component (and alpha channel) values, which
 * range from 0 to 255. For the alpha channel, which defines the object's
 * transparency level, 0 means totally transparent, while 255 means opaque.
 * These color values are premultiplied by the alpha value.
 *
 * The main color being mapped to null.
 *
 * Usually youll use this attribute for text and rectangle objects, where the
 * main color is their unique one. If set for objects which themselves have
 * colors, like the images one, those colors get modulated by this one.
 *
 * Use null pointers on the components you're not interested in: they'll be
 * ignored by the function.
 *
 * @param[in] part The part you are interested in.
 * @param[out] r The red component of the given color.
 * @param[out] g The green component of the given color.
 * @param[out] b The blue component of the given color.
 * @param[out] a The alpha component of the given color.
 *
 * @return @c true when color was retrieved, @c false otherwise
 *
 * @ingroup Efl_Gfx
 */
EOAPI Eina_Bool efl_gfx_color_part_get(const Eo *obj, const char * part, int *r, int *g, int *b, int *a);

/**
 * @brief Makes the given Evas object visible or invisible.
 *
 * @param[in] v @c true if to make the object visible, @c false otherwise
 *
 * @ingroup Efl_Gfx
 */
EOAPI void efl_gfx_visible_set(Eo *obj, Eina_Bool v);

/**
 * @brief Retrieves whether or not the given Evas object is visible.
 *
 * @return @c true if to make the object visible, @c false otherwise
 *
 * @ingroup Efl_Gfx
 */
EOAPI Eina_Bool efl_gfx_visible_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_GFX_EVENT_SHOW;

/** Object just became visible.
 *
 * @ingroup Efl_Gfx
 */
#define EFL_GFX_EVENT_SHOW (&(_EFL_GFX_EVENT_SHOW))

EWAPI extern const Efl_Event_Description _EFL_GFX_EVENT_HIDE;

/** Object just became invisible.
 *
 * @ingroup Efl_Gfx
 */
#define EFL_GFX_EVENT_HIDE (&(_EFL_GFX_EVENT_HIDE))

EWAPI extern const Efl_Event_Description _EFL_GFX_EVENT_MOVE;

/** Object was moved, its position during the event is the new one.
 *
 * @ingroup Efl_Gfx
 */
#define EFL_GFX_EVENT_MOVE (&(_EFL_GFX_EVENT_MOVE))

EWAPI extern const Efl_Event_Description _EFL_GFX_EVENT_RESIZE;

/** Object was resized, its size during the event is the new one.
 *
 * @ingroup Efl_Gfx
 */
#define EFL_GFX_EVENT_RESIZE (&(_EFL_GFX_EVENT_RESIZE))

EWAPI extern const Efl_Event_Description _EFL_GFX_EVENT_CHANGED;

/** Object was changed
 *
 * @ingroup Efl_Gfx
 */
#define EFL_GFX_EVENT_CHANGED (&(_EFL_GFX_EVENT_CHANGED))

#endif
