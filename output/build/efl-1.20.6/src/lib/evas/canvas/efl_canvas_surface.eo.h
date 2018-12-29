#ifndef _EFL_CANVAS_SURFACE_EO_H_
#define _EFL_CANVAS_SURFACE_EO_H_

#ifndef _EFL_CANVAS_SURFACE_EO_CLASS_TYPE
#define _EFL_CANVAS_SURFACE_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Surface;

#endif

#ifndef _EFL_CANVAS_SURFACE_EO_TYPES
#define _EFL_CANVAS_SURFACE_EO_TYPES


#endif
/**
 * @brief Native surfaces usually bound to an externally-managed buffer.
 *
 * The attached @ref efl_canvas_surface_native_buffer_get is entirely
 * platform-dependent, which means some of this mixin's subclasses will not
 * work (constructor returns @c null) on some platforms. This class is meant to
 * be used from native code only (C or C++), with direct access to the display
 * system or a buffer allocation system.
 *
 * @ingroup Efl_Canvas_Surface
 */
#define EFL_CANVAS_SURFACE_MIXIN efl_canvas_surface_mixin_get()

EWAPI const Efl_Class *efl_canvas_surface_mixin_get(void);

/**
 * @brief External buffer attached to this native surface.
 *
 * Set to @c null to detach this surface from the external buffer.
 *
 * Set the buffer. If this fails, this function returns @c false, and the
 * surface is left without any attached buffer.
 *
 * @param[in] buffer The external buffer, depends on its type.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Canvas_Surface
 */
EOAPI Eina_Bool efl_canvas_surface_native_buffer_set(Eo *obj, void *buffer) EINA_WARN_UNUSED_RESULT;

/**
 * @brief External buffer attached to this native surface.
 *
 * Set to @c null to detach this surface from the external buffer.
 *
 * @return The external buffer, depends on its type.
 *
 * @ingroup Efl_Canvas_Surface
 */
EOAPI void *efl_canvas_surface_native_buffer_get(const Eo *obj);

#endif
