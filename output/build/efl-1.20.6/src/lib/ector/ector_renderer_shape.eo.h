#ifndef _ECTOR_RENDERER_SHAPE_EO_H_
#define _ECTOR_RENDERER_SHAPE_EO_H_

#ifndef _ECTOR_RENDERER_SHAPE_EO_CLASS_TYPE
#define _ECTOR_RENDERER_SHAPE_EO_CLASS_TYPE

typedef Eo Ector_Renderer_Shape;

#endif

#ifndef _ECTOR_RENDERER_SHAPE_EO_TYPES
#define _ECTOR_RENDERER_SHAPE_EO_TYPES


#endif
/** Ector shape renderer mixin
 *
 * @ingroup Ector_Renderer_Shape
 */
#define ECTOR_RENDERER_SHAPE_MIXIN ector_renderer_shape_mixin_get()

EWAPI const Efl_Class *ector_renderer_shape_mixin_get(void);

/**
 * @brief Fill property
 *
 * @param[in] r Ector fill renderer
 *
 * @ingroup Ector_Renderer_Shape
 */
EOAPI void ector_renderer_shape_fill_set(Eo *obj, const Ector_Renderer *r);

/**
 * @brief Fill property
 *
 * @return Ector fill renderer
 *
 * @ingroup Ector_Renderer_Shape
 */
EOAPI const Ector_Renderer *ector_renderer_shape_fill_get(const Eo *obj);

/**
 * @brief Stroke fill property
 *
 * @param[in] r Ector stroke fill renderer
 *
 * @ingroup Ector_Renderer_Shape
 */
EOAPI void ector_renderer_shape_stroke_fill_set(Eo *obj, const Ector_Renderer *r);

/**
 * @brief Stroke fill property
 *
 * @return Ector stroke fill renderer
 *
 * @ingroup Ector_Renderer_Shape
 */
EOAPI const Ector_Renderer *ector_renderer_shape_stroke_fill_get(const Eo *obj);

/**
 * @brief Stroke marker property
 *
 * @param[in] r Ector stroke marker renderer
 *
 * @ingroup Ector_Renderer_Shape
 */
EOAPI void ector_renderer_shape_stroke_marker_set(Eo *obj, const Ector_Renderer *r);

/**
 * @brief Stroke marker property
 *
 * @return Ector stroke marker renderer
 *
 * @ingroup Ector_Renderer_Shape
 */
EOAPI const Ector_Renderer *ector_renderer_shape_stroke_marker_get(const Eo *obj);

#endif
