#ifndef _ECTOR_RENDERER_EO_H_
#define _ECTOR_RENDERER_EO_H_

#ifndef _ECTOR_RENDERER_EO_CLASS_TYPE
#define _ECTOR_RENDERER_EO_CLASS_TYPE

typedef Eo Ector_Renderer;

#endif

#ifndef _ECTOR_RENDERER_EO_TYPES
#define _ECTOR_RENDERER_EO_TYPES

/** Quality values
 *
 * @ingroup Ector
 */
typedef enum
{
  ECTOR_QUALITY_BEST = 0, /**< Best quality */
  ECTOR_QUALITY_GOOD, /**< Good quality */
  ECTOR_QUALITY_FAST, /**< Lower quality */
  ECTOR_QUALITY_LAST /**< Sentinel value to indicate last enum field during
                      * iteration */
} Ector_Quality;


#endif
/** Ector renderer abstract interface
 *
 * @ingroup Ector_Renderer
 */
#define ECTOR_RENDERER_CLASS ector_renderer_class_get()

EWAPI const Efl_Class *ector_renderer_class_get(void);

/**
 * @brief Surface associated to this renderer
 *
 * Do not use.
 *
 * @param[in] s Associated surface
 *
 * @ingroup Ector_Renderer
 */
EOAPI void ector_renderer_surface_set(Eo *obj, Ector_Surface *s);

/**
 * @brief Surface associated to this renderer
 *
 * Gets the surface associated to this renderer. Can not be set.
 *
 * @return Associated surface
 *
 * @ingroup Ector_Renderer
 */
EOAPI Ector_Surface *ector_renderer_surface_get(const Eo *obj);

/**
 * @brief Transformation property
 *
 * @param[in] m Transformation matrix
 *
 * @ingroup Ector_Renderer
 */
EOAPI void ector_renderer_transformation_set(Eo *obj, const Eina_Matrix3 *m);

/**
 * @brief Transformation property
 *
 * @return Transformation matrix
 *
 * @ingroup Ector_Renderer
 */
EOAPI const Eina_Matrix3 *ector_renderer_transformation_get(const Eo *obj);

/**
 * @brief Renderer origin
 *
 * @param[in] x X coordinate
 * @param[in] y Y coordinate
 *
 * @ingroup Ector_Renderer
 */
EOAPI void ector_renderer_origin_set(Eo *obj, double x, double y);

/**
 * @brief Renderer origin
 *
 * @param[out] x X coordinate
 * @param[out] y Y coordinate
 *
 * @ingroup Ector_Renderer
 */
EOAPI void ector_renderer_origin_get(const Eo *obj, double *x, double *y);

/**
 * @brief The given Ector renderer visible or invisible.
 *
 * @param[in] v @c true if to make the object visible, @c false otherwise
 *
 * @ingroup Ector_Renderer
 */
EOAPI void ector_renderer_visibility_set(Eo *obj, Eina_Bool v);

/**
 * @brief The given Ector renderer visible or invisible.
 *
 * @return @c true if to make the object visible, @c false otherwise
 *
 * @ingroup Ector_Renderer
 */
EOAPI Eina_Bool ector_renderer_visibility_get(const Eo *obj);

/**
 * @brief Retrieves the general/main color of the given Ector renderer.
 *
 * Retrieves the main color's RGB component (and alpha channel) values, which
 * range from 0 to 255. For the alpha channel, which defines the object's
 * transparency level, 0 means totally transparent, while 255 means opaque.
 * These color values are premultiplied by the alpha value.
 *
 * Use null pointers on the components you're not interested in, they'll be
 * ignored by the function.
 *
 * @param[in] r The red component of the given color.
 * @param[in] g The green component of the given color.
 * @param[in] b The blue component of the given color.
 * @param[in] a The alpha component of the given color.
 *
 * @ingroup Ector_Renderer
 */
EOAPI void ector_renderer_color_set(Eo *obj, int r, int g, int b, int a);

/**
 * @brief Retrieves the general/main color of the given Ector renderer.
 *
 * Retrieves the main color's RGB component (and alpha channel) values, which
 * range from 0 to 255. For the alpha channel, which defines the object's
 * transparency level, 0 means totally transparent, while 255 means opaque.
 * These color values are premultiplied by the alpha value.
 *
 * Use null pointers on the components you're not interested in, they'll be
 * ignored by the function.
 *
 * @param[out] r The red component of the given color.
 * @param[out] g The green component of the given color.
 * @param[out] b The blue component of the given color.
 * @param[out] a The alpha component of the given color.
 *
 * @ingroup Ector_Renderer
 */
EOAPI void ector_renderer_color_get(const Eo *obj, int *r, int *g, int *b, int *a);

/**
 * @brief Rendering mask
 *
 * @param[in] r Rendering mask
 *
 * @ingroup Ector_Renderer
 */
EOAPI void ector_renderer_mask_set(Eo *obj, Ector_Renderer *r);

/**
 * @brief Rendering mask
 *
 * @return Rendering mask
 *
 * @ingroup Ector_Renderer
 */
EOAPI Ector_Renderer *ector_renderer_mask_get(const Eo *obj);

/**
 * @brief Quality of the renderer
 *
 * @param[in] q Quality of the renderer
 *
 * @ingroup Ector_Renderer
 */
EOAPI void ector_renderer_quality_set(Eo *obj, Ector_Quality q);

/**
 * @brief Quality of the renderer
 *
 * @return Quality of the renderer
 *
 * @ingroup Ector_Renderer
 */
EOAPI Ector_Quality ector_renderer_quality_get(const Eo *obj);

/**
 * @brief Cyclic redundancy check
 *
 * @return CRC value
 *
 * @ingroup Ector_Renderer
 */
EOAPI unsigned int ector_renderer_crc_get(const Eo *obj);

/**
 * @brief Retrieves the bounds of the renderer
 *
 * @param[out] r Bounds as @ref Eina_Rectangle
 *
 * @ingroup Ector_Renderer
 */
EOAPI void ector_renderer_bounds_get(Eo *obj, Eina_Rectangle *r);

/**
 * @brief Actual draw operation
 *
 * @param[in] op Renderer operation
 * @param[in] clips Array of @ref Eina_Rectangle clip
 * @param[in] mul_col Premultiplied color
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Ector_Renderer
 */
EOAPI Eina_Bool ector_renderer_draw(Eo *obj, Efl_Gfx_Render_Op op, Eina_Array *clips, unsigned int mul_col);

/**
 * @brief Prepare for rendering
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Ector_Renderer
 */
EOAPI Eina_Bool ector_renderer_prepare(Eo *obj);

/**
 * @brief Done with rendering
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Ector_Renderer
 */
EOAPI Eina_Bool ector_renderer_done(Eo *obj);

#endif
