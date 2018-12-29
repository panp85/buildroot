#ifndef _EFL_IMAGE_EO_H_
#define _EFL_IMAGE_EO_H_

#ifndef _EFL_IMAGE_EO_CLASS_TYPE
#define _EFL_IMAGE_EO_CLASS_TYPE

typedef Eo Efl_Image;

#endif

#ifndef _EFL_IMAGE_EO_TYPES
#define _EFL_IMAGE_EO_TYPES

/** How an image's data is to be treated by EFL, for optimization.
 *
 * @ingroup Efl_Image
 */
typedef enum
{
  EFL_IMAGE_CONTENT_HINT_NONE = 0, /**< No hint on the content (default). */
  EFL_IMAGE_CONTENT_HINT_DYNAMIC = 1, /**< The content will change over time. */
  EFL_IMAGE_CONTENT_HINT_STATIC = 2 /**< The content won't change over time. */
} Efl_Image_Content_Hint;

/** How an image's data is to be treated by EFL, with regard to scaling cache.
 *
 * @ingroup Efl_Image
 */
typedef enum
{
  EFL_IMAGE_SCALE_HINT_NONE = 0, /**< No hint on the scaling (default). */
  EFL_IMAGE_SCALE_HINT_DYNAMIC = 1, /**< Image will be re-scaled over time, thus
                                     * turning scaling cache OFF for its data.
                                     */
  EFL_IMAGE_SCALE_HINT_STATIC = 2 /**< Image will not be re-scaled over time,
                                   * thus turning scaling cache ON for its
                                   * data. */
} Efl_Image_Scale_Hint;


#endif
/** Common APIs for all 2D images that can be rendered on the canvas.
 *
 * @ingroup Efl_Image
 */
#define EFL_IMAGE_INTERFACE efl_image_interface_get()

EWAPI const Efl_Class *efl_image_interface_get(void);

/**
 * @brief Whether to use high-quality image scaling algorithm for this image.
 *
 * When enabled, a higher quality image scaling algorithm is used when scaling
 * images to sizes other than the source image's original one. This gives
 * better results but is more computationally expensive.
 *
 * @c true by default
 *
 * @param[in] smooth_scale Whether to use smooth scale or not.
 *
 * @ingroup Efl_Image
 */
EOAPI void efl_image_smooth_scale_set(Eo *obj, Eina_Bool smooth_scale);

/**
 * @brief Whether to use high-quality image scaling algorithm for this image.
 *
 * When enabled, a higher quality image scaling algorithm is used when scaling
 * images to sizes other than the source image's original one. This gives
 * better results but is more computationally expensive.
 *
 * @c true by default
 *
 * @return Whether to use smooth scale or not.
 *
 * @ingroup Efl_Image
 */
EOAPI Eina_Bool efl_image_smooth_scale_get(const Eo *obj);

/**
 * @brief The native width/height ratio of the image.
 *
 * Returns 1.0 if not applicable (eg. height = 0).
 *
 * @return The image's ratio.
 *
 * @ingroup Efl_Image
 */
EOAPI double efl_image_ratio_get(const Eo *obj);

/**
 * @brief Dimensions of this image's border, a region that does not scale with
 * the center area.
 *
 * When EFL renders an image, its source may be scaled to fit the size of the
 * object. This function sets an area from the borders of the image inwards
 * which is not to be scaled. This function is useful for making frames and for
 * widget theming, where, for example, buttons may be of varying sizes, but
 * their border size must remain constant.
 *
 * The units used for @c l, @c r, @c t and @c b are canvas units (pixels).
 *
 * @note The border region itself may be scaled by the
 * @ref efl_image_border_scale_set function.
 *
 * @note By default, image objects have no borders set, i.e. @c l, @c r, @c t
 * and @c b start as 0.
 *
 * @note Similar to the concepts of 9-patch images or cap insets.
 *
 * @param[in] l The border's left width.
 * @param[in] r The border's right width.
 * @param[in] t The border's top height.
 * @param[in] b The border's bottom height.
 *
 * @ingroup Efl_Image
 */
EOAPI void efl_image_border_set(Eo *obj, int l, int r, int t, int b);

/**
 * @brief Dimensions of this image's border, a region that does not scale with
 * the center area.
 *
 * When EFL renders an image, its source may be scaled to fit the size of the
 * object. This function sets an area from the borders of the image inwards
 * which is not to be scaled. This function is useful for making frames and for
 * widget theming, where, for example, buttons may be of varying sizes, but
 * their border size must remain constant.
 *
 * The units used for @c l, @c r, @c t and @c b are canvas units (pixels).
 *
 * @note The border region itself may be scaled by the
 * @ref efl_image_border_scale_set function.
 *
 * @note By default, image objects have no borders set, i.e. @c l, @c r, @c t
 * and @c b start as 0.
 *
 * @note Similar to the concepts of 9-patch images or cap insets.
 *
 * @param[out] l The border's left width.
 * @param[out] r The border's right width.
 * @param[out] t The border's top height.
 * @param[out] b The border's bottom height.
 *
 * @ingroup Efl_Image
 */
EOAPI void efl_image_border_get(const Eo *obj, int *l, int *r, int *t, int *b);

/**
 * @brief Scaling factor applied to the image borders.
 *
 * This value multiplies the size of the @ref efl_image_border_get when scaling
 * an object.
 *
 * Default value is 1.0 (no scaling).
 *
 * @param[in] scale The scale factor.
 *
 * @ingroup Efl_Image
 */
EOAPI void efl_image_border_scale_set(Eo *obj, double scale);

/**
 * @brief Scaling factor applied to the image borders.
 *
 * This value multiplies the size of the @ref efl_image_border_get when scaling
 * an object.
 *
 * Default value is 1.0 (no scaling).
 *
 * @return The scale factor.
 *
 * @ingroup Efl_Image
 */
EOAPI double efl_image_border_scale_get(const Eo *obj);

/**
 * @brief Specifies how the center part of the object (not the borders) should
 * be drawn when EFL is rendering it.
 *
 * This function sets how the center part of the image object's source image is
 * to be drawn, which must be one of the values in
 * @ref Efl_Gfx_Border_Fill_Mode. By center we mean the complementary part of
 * that defined by @ref efl_image_border_set. This is very useful for making
 * frames and decorations. You would most probably also be using a filled image
 * (as in @ref efl_gfx_fill_auto_get) to use as a frame.
 *
 * The default value is @ref EFL_GFX_BORDER_FILL_MODE_DEFAULT, ie. render and
 * scale the center area, respecting its transparency.
 *
 * @param[in] fill Fill mode of the center region.
 *
 * @ingroup Efl_Image
 */
EOAPI void efl_image_border_center_fill_set(Eo *obj, Efl_Gfx_Border_Fill_Mode fill);

/**
 * @brief Specifies how the center part of the object (not the borders) should
 * be drawn when EFL is rendering it.
 *
 * This function sets how the center part of the image object's source image is
 * to be drawn, which must be one of the values in
 * @ref Efl_Gfx_Border_Fill_Mode. By center we mean the complementary part of
 * that defined by @ref efl_image_border_set. This is very useful for making
 * frames and decorations. You would most probably also be using a filled image
 * (as in @ref efl_gfx_fill_auto_get) to use as a frame.
 *
 * The default value is @ref EFL_GFX_BORDER_FILL_MODE_DEFAULT, ie. render and
 * scale the center area, respecting its transparency.
 *
 * @return Fill mode of the center region.
 *
 * @ingroup Efl_Image
 */
EOAPI Efl_Gfx_Border_Fill_Mode efl_image_border_center_fill_get(const Eo *obj);

/**
 * @brief This represents the size of the original image in pixels.
 *
 * This may be different from the actual geometry on screen or even the size of
 * the loaded pixel buffer. This is the size of the image as stored in the
 * original file.
 *
 * This is a read-only property, and may return 0x0.
 *
 * @param[out] w The image width.
 * @param[out] h The image height.
 *
 * @since 1.20
 *
 * @ingroup Efl_Image
 */
EOAPI void efl_image_size_get(const Eo *obj, int *w, int *h);

/**
 * @brief Set the content hint setting of a given image object of the canvas.
 *
 * This function sets the content hint value of the given image of the canvas.
 * For example, if you're on the GL engine and your driver implementation
 * supports it, setting this hint to #EVAS_IMAGE_CONTENT_HINT_DYNAMIC will make
 * it need zero copies at texture upload time, which is an "expensive"
 * operation.
 *
 * @param[in] hint Dynamic or static content hint, see
 * @ref Efl_Image_Content_Hint
 *
 * @ingroup Efl_Image
 */
EOAPI void efl_image_content_hint_set(Eo *obj, Efl_Image_Content_Hint hint);

/**
 * @brief Get the content hint setting of a given image object of the canvas.
 *
 * This returns #EVAS_IMAGE_CONTENT_HINT_NONE on error.
 *
 * @return Dynamic or static content hint, see @ref Efl_Image_Content_Hint
 *
 * @ingroup Efl_Image
 */
EOAPI Efl_Image_Content_Hint efl_image_content_hint_get(const Eo *obj);

/**
 * @brief Set the scale hint of a given image of the canvas.
 *
 * This function sets the scale hint value of the given image object in the
 * canvas, which will affect how Evas is to cache scaled versions of its
 * original source image.
 *
 * @param[in] hint Scalable or static size hint, see @ref Efl_Image_Scale_Hint
 *
 * @ingroup Efl_Image
 */
EOAPI void efl_image_scale_hint_set(Eo *obj, Efl_Image_Scale_Hint hint);

/**
 * @brief Get the scale hint of a given image of the canvas.
 *
 * This function returns the scale hint value of the given image object of the
 * canvas.
 *
 * @return Scalable or static size hint, see @ref Efl_Image_Scale_Hint
 *
 * @ingroup Efl_Image
 */
EOAPI Efl_Image_Scale_Hint efl_image_scale_hint_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_IMAGE_EVENT_PRELOAD;

/** Image data has been preloaded.
 *
 * @ingroup Efl_Image
 */
#define EFL_IMAGE_EVENT_PRELOAD (&(_EFL_IMAGE_EVENT_PRELOAD))

EWAPI extern const Efl_Event_Description _EFL_IMAGE_EVENT_RESIZE;

/** Image was resized (its pixel data).
 *
 * @ingroup Efl_Image
 */
#define EFL_IMAGE_EVENT_RESIZE (&(_EFL_IMAGE_EVENT_RESIZE))

EWAPI extern const Efl_Event_Description _EFL_IMAGE_EVENT_UNLOAD;

/** Image data has been unloaded (by some mechanism in EFL that threw out the
 * original image data).
 *
 * @ingroup Efl_Image
 */
#define EFL_IMAGE_EVENT_UNLOAD (&(_EFL_IMAGE_EVENT_UNLOAD))

#endif
