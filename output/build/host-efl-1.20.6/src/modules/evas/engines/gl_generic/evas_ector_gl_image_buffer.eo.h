#ifndef _EVAS_ECTOR_GL_IMAGE_BUFFER_EO_H_
#define _EVAS_ECTOR_GL_IMAGE_BUFFER_EO_H_

#ifndef _EVAS_ECTOR_GL_IMAGE_BUFFER_EO_CLASS_TYPE
#define _EVAS_ECTOR_GL_IMAGE_BUFFER_EO_CLASS_TYPE

typedef Eo Evas_Ector_GL_Image_Buffer;

#endif

#ifndef _EVAS_ECTOR_GL_IMAGE_BUFFER_EO_TYPES
#define _EVAS_ECTOR_GL_IMAGE_BUFFER_EO_TYPES


#endif
/** An Ector GL buffer wrapping an existing Evas_GL_Image.
 *
 * @ingroup Evas_Ector_GL_Image_Buffer
 */
#define EVAS_ECTOR_GL_IMAGE_BUFFER_CLASS evas_ector_gl_image_buffer_class_get()

EWAPI const Efl_Class *evas_ector_gl_image_buffer_class_get(void);

#endif
