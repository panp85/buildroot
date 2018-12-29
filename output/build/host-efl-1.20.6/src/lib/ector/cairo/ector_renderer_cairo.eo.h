#ifndef _ECTOR_RENDERER_CAIRO_EO_H_
#define _ECTOR_RENDERER_CAIRO_EO_H_

#ifndef _ECTOR_RENDERER_CAIRO_EO_CLASS_TYPE
#define _ECTOR_RENDERER_CAIRO_EO_CLASS_TYPE

typedef Eo Ector_Renderer_Cairo;

#endif

#ifndef _ECTOR_RENDERER_CAIRO_EO_TYPES
#define _ECTOR_RENDERER_CAIRO_EO_TYPES


#endif
/** Ector cairo renderer abstract class
 *
 * @ingroup Ector_Renderer_Cairo
 */
#define ECTOR_RENDERER_CAIRO_CLASS ector_renderer_cairo_class_get()

EWAPI const Efl_Class *ector_renderer_cairo_class_get(void);

/**
 * @brief Fill operation
 *
 * @param[in] mul_col Premultiplied color
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Ector_Renderer_Cairo
 */
EOAPI Eina_Bool ector_renderer_cairo_fill(Eo *obj, unsigned int mul_col);

#endif
