#ifndef _ECTOR_GL_SURFACE_EO_H_
#define _ECTOR_GL_SURFACE_EO_H_

#ifndef _ECTOR_GL_SURFACE_EO_CLASS_TYPE
#define _ECTOR_GL_SURFACE_EO_CLASS_TYPE

typedef Eo Ector_GL_Surface;

#endif

#ifndef _ECTOR_GL_SURFACE_EO_TYPES
#define _ECTOR_GL_SURFACE_EO_TYPES


#endif
/** Ector GL surface class
 *
 * @ingroup Ector_GL_Surface
 */
#define ECTOR_GL_SURFACE_CLASS ector_gl_surface_class_get()

EWAPI const Efl_Class *ector_gl_surface_class_get(void);

/**
 * @brief Get shader
 *
 * @param[in] flags Flags
 *
 * @return Shader count
 *
 * @ingroup Ector_GL_Surface
 */
EOAPI unsigned int ector_gl_surface_shader_get(Eo *obj, uint64_t flags);

/**
 * @brief Push surface to GPU
 *
 * @param[in] flags GL flags
 * @param[in] vertex GL vertex
 * @param[in] vertex_count GL vertex count
 * @param[in] mul_col Premultiplied color
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Ector_GL_Surface
 */
EOAPI Eina_Bool ector_gl_surface_push(Eo *obj, uint64_t flags, GLshort *vertex, unsigned int vertex_count, unsigned int mul_col);

/**
 * @brief Define state
 *
 * @param[in] op Render operation
 * @param[in] clips Array of @ref Eina_Rectangle clip
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Ector_GL_Surface
 */
EOAPI Eina_Bool ector_gl_surface_state_define(Eo *obj, Efl_Gfx_Render_Op op, Eina_Array *clips);

#endif
