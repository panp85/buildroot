#ifndef _ECTOR_CAIRO_SURFACE_EO_H_
#define _ECTOR_CAIRO_SURFACE_EO_H_

#ifndef _ECTOR_CAIRO_SURFACE_EO_CLASS_TYPE
#define _ECTOR_CAIRO_SURFACE_EO_CLASS_TYPE

typedef Eo Ector_Cairo_Surface;

#endif

#ifndef _ECTOR_CAIRO_SURFACE_EO_TYPES
#define _ECTOR_CAIRO_SURFACE_EO_TYPES


#endif
/**
 * @brief Ector surface on a cairo backend
 *
 * Used to render ector content into a cairo backend.
 *
 * @ingroup Ector_Cairo_Surface
 */
#define ECTOR_CAIRO_SURFACE_CLASS ector_cairo_surface_class_get()

EWAPI const Efl_Class *ector_cairo_surface_class_get(void);

/**
 * @brief Cairo context
 *
 * @param[in] ctx Cairo context
 *
 * @ingroup Ector_Cairo_Surface
 */
EOAPI void ector_cairo_surface_context_set(Eo *obj, cairo_t *ctx);

/**
 * @brief Cairo context
 *
 * @return Cairo context
 *
 * @ingroup Ector_Cairo_Surface
 */
EOAPI cairo_t *ector_cairo_surface_context_get(const Eo *obj);

/**
 * @brief Lookup symbal name in cairo lib
 *
 * @param[in] name Symbol name
 *
 * @return Pointer to cairo lib with this symbol
 *
 * @ingroup Ector_Cairo_Surface
 */
EOAPI void *ector_cairo_surface_symbol_get(Eo *obj, const char *name) EINA_WARN_UNUSED_RESULT;

#endif
