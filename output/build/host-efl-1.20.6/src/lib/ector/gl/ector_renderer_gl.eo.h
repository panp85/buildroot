#ifndef _ECTOR_RENDERER_GL_EO_H_
#define _ECTOR_RENDERER_GL_EO_H_

#ifndef _ECTOR_RENDERER_GL_EO_CLASS_TYPE
#define _ECTOR_RENDERER_GL_EO_CLASS_TYPE

typedef Eo Ector_Renderer_GL;

#endif

#ifndef _ECTOR_RENDERER_GL_EO_TYPES
#define _ECTOR_RENDERER_GL_EO_TYPES


#endif
/** Ector GL renderer abstract class
 *
 * @ingroup Ector_Renderer_GL
 */
#define ECTOR_RENDERER_GL_CLASS ector_renderer_gl_class_get()

EWAPI const Efl_Class *ector_renderer_gl_class_get(void);

/**
 * @brief Fill operation
 *
 * @param[in] flags GL flags
 * @param[in] vertex GL vertex
 * @param[in] vertex_count GL vertex count
 * @param[in] mul_col Premultiplied color
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Ector_Renderer_GL
 */
EOAPI Eina_Bool ector_renderer_gl_fill(Eo *obj, uint64_t flags, GLshort *vertex, unsigned int vertex_count, unsigned int mul_col);

#endif
