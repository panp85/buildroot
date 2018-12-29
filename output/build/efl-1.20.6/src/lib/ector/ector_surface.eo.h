#ifndef _ECTOR_SURFACE_EO_H_
#define _ECTOR_SURFACE_EO_H_

#ifndef _ECTOR_SURFACE_EO_CLASS_TYPE
#define _ECTOR_SURFACE_EO_CLASS_TYPE

typedef Eo Ector_Surface;

#endif

#ifndef _ECTOR_SURFACE_EO_TYPES
#define _ECTOR_SURFACE_EO_TYPES


#endif
/** Surface interface for Ector
 *
 * @ingroup Ector_Surface
 */
#define ECTOR_SURFACE_MIXIN ector_surface_mixin_get()

EWAPI const Efl_Class *ector_surface_mixin_get(void);

/**
 * @brief This define where is (0,0) in pixels coordinate inside the surface
 *
 * @param[in] x X coordinate for reference point
 * @param[in] y Y coordinate for reference point
 *
 * @ingroup Ector_Surface
 */
EOAPI void ector_surface_reference_point_set(Eo *obj, int x, int y);

/**
 * @brief Create a new renderer factory for the given type
 *
 * @param[in] type Efl class
 *
 * @return Renderer factory object
 *
 * @ingroup Ector_Surface
 */
EOAPI Efl_Object *ector_surface_renderer_factory_new(Eo *obj, const Efl_Class *type) EINA_ARG_NONNULL(2);

#endif
