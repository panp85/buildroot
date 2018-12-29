#ifndef _EVAS_ECTOR_GL_BUFFER_EO_H_
#define _EVAS_ECTOR_GL_BUFFER_EO_H_

#ifndef _EVAS_ECTOR_GL_BUFFER_EO_CLASS_TYPE
#define _EVAS_ECTOR_GL_BUFFER_EO_CLASS_TYPE

typedef Eo Evas_Ector_GL_Buffer;

#endif

#ifndef _EVAS_ECTOR_GL_BUFFER_EO_TYPES
#define _EVAS_ECTOR_GL_BUFFER_EO_TYPES


#endif
/**
 * @brief An Ector GL buffer capable of being mapped, drawn and rendered to.
 *
 * Potentially very inefficient (may rely on glReadPixels).
 *
 * @ingroup Evas_Ector_GL_Buffer
 */
#define EVAS_ECTOR_GL_BUFFER_CLASS evas_ector_gl_buffer_class_get()

EWAPI const Efl_Class *evas_ector_gl_buffer_class_get(void);

/**
 * @brief Set the main properties to create a gl buffer.
 *
 * @param[in] engine The current canvas engine
 * @param[in] w Width
 * @param[in] h Height
 * @param[in] cspace Alpha or RGBA
 * @param[in] flags Required buffer capabilities (map/draw/render, etc...)
 *
 * @ingroup Evas_Ector_GL_Buffer
 */
EOAPI void evas_ector_gl_buffer_prepare(Eo *obj, void *engine, int w, int h, Efl_Gfx_Colorspace cspace, Ector_Buffer_Flag flags);

#endif
