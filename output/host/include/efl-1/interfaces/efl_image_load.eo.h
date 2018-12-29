#ifndef _EFL_IMAGE_LOAD_EO_H_
#define _EFL_IMAGE_LOAD_EO_H_

#ifndef _EFL_IMAGE_LOAD_EO_CLASS_TYPE
#define _EFL_IMAGE_LOAD_EO_CLASS_TYPE

typedef Eo Efl_Image_Load;

#endif

#ifndef _EFL_IMAGE_LOAD_EO_TYPES
#define _EFL_IMAGE_LOAD_EO_TYPES


#endif
/** Common APIs for all loadable 2D images.
 *
 * @ingroup Efl_Image_Load
 */
#define EFL_IMAGE_LOAD_INTERFACE efl_image_load_interface_get()

EWAPI const Efl_Class *efl_image_load_interface_get(void);

/**
 * @brief Begin preloading an image object's image data in the background.
 *
 * Once the background task is done, the event @c load,done will be emitted.
 *
 * @ingroup Efl_Image_Load
 */
EOAPI void efl_image_load_async_start(Eo *obj);

/**
 * @brief Cancel preloading an image object's image data in the background.
 *
 * The event @c load,cancelled should be triggered soon after cancellation
 * happened, and the object should be left in a state where it has no image
 * data. If cancel is called too late, the image will be kept in memory.
 *
 * @ingroup Efl_Image_Load
 */
EOAPI void efl_image_load_async_cancel(Eo *obj);

/**
 * @brief The load size of an image.
 *
 * The image will be loaded into memory as if it was the specified size instead
 * of its original size. This can save a lot of memory, and is important for
 * scalable types like svg.
 *
 * By default, the load size is not specified, so it is 0x0.
 *
 * Requests the canvas to load the image at the given size.
 *
 * EFL will try to load the image at the requested size, but does not guarantee
 * an exact match between the request and the loaded image dimensions.
 *
 * @param[in] w Width of the image's load size.
 * @param[in] h Height of the image's load size.
 *
 * @ingroup Efl_Image_Load
 */
EOAPI void efl_image_load_size_set(Eo *obj, int w, int h);

/**
 * @brief The load size of an image.
 *
 * The image will be loaded into memory as if it was the specified size instead
 * of its original size. This can save a lot of memory, and is important for
 * scalable types like svg.
 *
 * By default, the load size is not specified, so it is 0x0.
 *
 * Returns the requested load size.
 *
 * @param[out] w Width of the image's load size.
 * @param[out] h Height of the image's load size.
 *
 * @ingroup Efl_Image_Load
 */
EOAPI void efl_image_load_size_get(const Eo *obj, int *w, int *h);

/**
 * @brief Set the DPI resolution of an image object's source image.
 *
 * This function sets the DPI resolution of a given loaded canvas image. Most
 * useful for the SVG image loader.
 *
 * @param[in] dpi The DPI resolution.
 *
 * @ingroup Efl_Image_Load
 */
EOAPI void efl_image_load_dpi_set(Eo *obj, double dpi);

/**
 * @brief Get the DPI resolution of a loaded image object in the canvas.
 *
 * This function returns the DPI resolution of the given canvas image.
 *
 * @return The DPI resolution.
 *
 * @ingroup Efl_Image_Load
 */
EOAPI double efl_image_load_dpi_get(const Eo *obj);

/**
 * @brief Indicates whether the @ref efl_image_load_region_get property is
 * supported for the current file.
 *
 * @return @c true if region load of the image is supported, @c false otherwise
 *
 * @since 1.2
 *
 * @ingroup Efl_Image_Load
 */
EOAPI Eina_Bool efl_image_load_region_support_get(const Eo *obj);

/**
 * @brief Inform a given image object to load a selective region of its source
 * image.
 *
 * This function is useful when one is not showing all of an image's area on
 * its image object.
 *
 * @note The image loader for the image format in question has to support
 * selective region loading in order to this function to take effect.
 *
 * @param[in] x X-offset of the region to be loaded.
 * @param[in] y Y-offset of the region to be loaded.
 * @param[in] w Width of the region to be loaded.
 * @param[in] h Height of the region to be loaded.
 *
 * @ingroup Efl_Image_Load
 */
EOAPI void efl_image_load_region_set(Eo *obj, int x, int y, int w, int h);

/**
 * @brief Retrieve the coordinates of a given image object's selective (source
 * image) load region.
 *
 * @note Use @c null pointers on the coordinates you're not interested in:
 * they'll be ignored by the function.
 *
 * @param[out] x X-offset of the region to be loaded.
 * @param[out] y Y-offset of the region to be loaded.
 * @param[out] w Width of the region to be loaded.
 * @param[out] h Height of the region to be loaded.
 *
 * @ingroup Efl_Image_Load
 */
EOAPI void efl_image_load_region_get(const Eo *obj, int *x, int *y, int *w, int *h);

/**
 * @brief Defines whether the orientation information in the image file should
 * be honored.
 *
 * The orientation can for instance be set in the EXIF tags of a JPEG image. If
 * this flag is @c false, then the orientation will be ignored at load time,
 * otherwise the image will be loaded with the proper orientation.
 *
 * @param[in] enable @c true means that it should honor the orientation
 * information.
 *
 * @since 1.1
 *
 * @ingroup Efl_Image_Load
 */
EOAPI void efl_image_load_orientation_set(Eo *obj, Eina_Bool enable);

/**
 * @brief Defines whether the orientation information in the image file should
 * be honored.
 *
 * The orientation can for instance be set in the EXIF tags of a JPEG image. If
 * this flag is @c false, then the orientation will be ignored at load time,
 * otherwise the image will be loaded with the proper orientation.
 *
 * @return @c true means that it should honor the orientation information.
 *
 * @since 1.1
 *
 * @ingroup Efl_Image_Load
 */
EOAPI Eina_Bool efl_image_load_orientation_get(const Eo *obj);

/**
 * @brief The scale down factor is a divider on the original image size.
 *
 * Setting the scale down factor can reduce load time and memory usage, at the
 * cost of having a scaled down image in memory.
 *
 * This function sets the scale down factor of a given canvas image. Most
 * useful for the SVG image loader, but also applies to JPEG, PNG and BMP.
 *
 * Powers of two (2, 4, 8) are best supported (especially with JPEG)
 *
 * Requests the image loader to scale down by @c div times. Call this before
 * starting the actual image load.
 *
 * @param[in] div The scale down dividing factor.
 *
 * @ingroup Efl_Image_Load
 */
EOAPI void efl_image_load_scale_down_set(Eo *obj, int div);

/**
 * @brief The scale down factor is a divider on the original image size.
 *
 * Setting the scale down factor can reduce load time and memory usage, at the
 * cost of having a scaled down image in memory.
 *
 * This function sets the scale down factor of a given canvas image. Most
 * useful for the SVG image loader, but also applies to JPEG, PNG and BMP.
 *
 * Powers of two (2, 4, 8) are best supported (especially with JPEG)
 *
 * @return The scale down dividing factor.
 *
 * @ingroup Efl_Image_Load
 */
EOAPI int efl_image_load_scale_down_get(const Eo *obj);

/**
 * @brief Retrieves a number representing any error that occurred during the
 * last loading of the given image object's source image.
 *
 * @return A value giving the last error that occurred, one of
 * @ref Efl_Image_Load_Error values. @ref EFL_IMAGE_LOAD_ERROR_NONE is returned
 * if there was no error.
 *
 * @ingroup Efl_Image_Load
 */
EOAPI Efl_Image_Load_Error efl_image_load_error_get(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Initial load should skip header check and leave it all to data load
 *
 * If this is true, then future loads of images will defer header loading to a
 * preload stage and/or data load later on rather than at the start when the
 * load begins (e.g. when file is set).
 *
 * Set the skip header state for susbsequent loads of a file.
 *
 * @param[in] skip Will be true if header is to be skipped.
 *
 * @ingroup Efl_Image_Load
 */
EOAPI void efl_image_load_skip_header_set(Eo *obj, Eina_Bool skip);

/**
 * @brief Initial load should skip header check and leave it all to data load
 *
 * If this is true, then future loads of images will defer header loading to a
 * preload stage and/or data load later on rather than at the start when the
 * load begins (e.g. when file is set).
 *
 * @return Will be true if header is to be skipped.
 *
 * @ingroup Efl_Image_Load
 */
EOAPI Eina_Bool efl_image_load_skip_header_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_IMAGE_LOAD_EVENT_LOAD_DONE;

/** Called when he image was loaded
 *
 * @ingroup Efl_Image_Load
 */
#define EFL_IMAGE_LOAD_EVENT_LOAD_DONE (&(_EFL_IMAGE_LOAD_EVENT_LOAD_DONE))

EWAPI extern const Efl_Event_Description _EFL_IMAGE_LOAD_EVENT_LOAD_ERROR;

/** Called when an error happened during image loading
 * @return Efl_Image_Load_Error
 *
 * @ingroup Efl_Image_Load
 */
#define EFL_IMAGE_LOAD_EVENT_LOAD_ERROR (&(_EFL_IMAGE_LOAD_EVENT_LOAD_ERROR))

EWAPI extern const Efl_Event_Description _EFL_IMAGE_LOAD_EVENT_LOAD_CANCELLED;

/** Called when the image loading was cancelled
 *
 * @ingroup Efl_Image_Load
 */
#define EFL_IMAGE_LOAD_EVENT_LOAD_CANCELLED (&(_EFL_IMAGE_LOAD_EVENT_LOAD_CANCELLED))

#endif
