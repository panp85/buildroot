#ifndef _EVAS_ECTOR_BUFFER_EO_H_
#define _EVAS_ECTOR_BUFFER_EO_H_

#ifndef _EVAS_ECTOR_BUFFER_EO_CLASS_TYPE
#define _EVAS_ECTOR_BUFFER_EO_CLASS_TYPE

typedef Eo Evas_Ector_Buffer;

#endif

#ifndef _EVAS_ECTOR_BUFFER_EO_TYPES
#define _EVAS_ECTOR_BUFFER_EO_TYPES


#endif
/**
 * @brief Binding layer between ector buffers and evas images.
 *
 * Subclasses implement support for RGBA_Image for SW & GL, and Evas_GL_Image
 * for GL.
 *
 * @note Internal class, not API stable.
 *
 * @ingroup Evas_Ector_Buffer
 */
#define EVAS_ECTOR_BUFFER_INTERFACE evas_ector_buffer_interface_get()

EWAPI const Efl_Class *evas_ector_buffer_interface_get(void);

/**
 * @brief Attach this ector buffer to an existing engine image.
 *
 * @param[in] engine The current Evas.
 * @param[in] image The RGBA_Image or Evas_GL_Image.
 *
 * @ingroup Evas_Ector_Buffer
 */
EOAPI void evas_ector_buffer_engine_image_set(Eo *obj, void *engine, void *image);

/**
 * @brief Fetch an engine image from this ector buffer as a drawable.
 *
 * @return The engine image (RGBA_Image or Evas_GL_Image).
 *
 * @ingroup Evas_Ector_Buffer
 */
EOAPI void *evas_ector_buffer_drawable_image_get(Eo *obj);

/**
 * @brief Fetch an engine image from this ector buffer as a render target.
 *
 * @return The engine image (RGBA_Image or Evas_GL_Image).
 *
 * @ingroup Evas_Ector_Buffer
 */
EOAPI void *evas_ector_buffer_render_image_get(Eo *obj);

/**
 * @brief Release an image from @ref evas_ector_buffer_drawable_image_get or
 * @ref evas_ector_buffer_render_image_get.
 *
 * @param[in] image Return value of @ref evas_ector_buffer_drawable_image_get
 * or @ref evas_ector_buffer_render_image_get.
 *
 * @return @c false in case of error.
 *
 * @ingroup Evas_Ector_Buffer
 */
EOAPI Eina_Bool evas_ector_buffer_engine_image_release(Eo *obj, void *image);

#endif
