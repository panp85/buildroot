#ifndef _EFL_UI_IMAGE_EO_H_
#define _EFL_UI_IMAGE_EO_H_

#ifndef _EFL_UI_IMAGE_EO_CLASS_TYPE
#define _EFL_UI_IMAGE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Image;

#endif

#ifndef _EFL_UI_IMAGE_EO_TYPES
#define _EFL_UI_IMAGE_EO_TYPES

/** Enumeration that defines scale types for the object's internal image.
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Image
 */
typedef enum
{
  EFL_UI_IMAGE_SCALE_TYPE_FILL = 0, /**< Scale the internal image so that it
                                     * matches  the object's area exactly. The
                                     * image's aspect ratio might be changed.
                                     */
  EFL_UI_IMAGE_SCALE_TYPE_FIT_INSIDE, /**< Scale the internal image so that it
                                       * fits inside the object's area while
                                       * maintaining the aspect ratio. At least
                                       * one of the dimensions of the image
                                       * should be equal to the corresponding
                                       * dimension  of the object. */
  EFL_UI_IMAGE_SCALE_TYPE_FIT_OUTSIDE, /**< Scale the internal image so that it
                                        * covers the entire object area while
                                        * maintaining the aspect ratio. At
                                        * least one of the dimensions of the
                                        * image should be equal to the
                                        * corresponding  dimension of the
                                        * object. */
  EFL_UI_IMAGE_SCALE_TYPE_NONE /**< Not scale the internal image */
} Efl_Ui_Image_Scale_Type;

/** Structure associated with smart callback 'download,progress'.
 *
 * @since 1.8
 *
 * @ingroup Efl_Ui_Image
 */
typedef struct _Efl_Ui_Image_Progress
{
  double now; /**< Current percentage */
  double total; /**< Total percentage */
} Efl_Ui_Image_Progress;

/** Structure associated with smart callback 'download,progress'.
 *
 * @since 1.8
 *
 * @ingroup Efl_Ui_Image
 */
typedef struct _Efl_Ui_Image_Error
{
  int status; /**< Error status of the download */
  Eina_Bool open_error; /**< @c true if the error happened when opening the
                         * file, @c false otherwise */
} Efl_Ui_Image_Error;


#endif
/** Efl UI image class
 *
 * @ingroup Efl_Ui_Image
 */
#define EFL_UI_IMAGE_CLASS efl_ui_image_class_get()

EWAPI const Efl_Class *efl_ui_image_class_get(void);

/**
 * @brief Control how the internal image is scaled.
 *
 * @param[in] scale_type Image scale type
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Image
 */
EOAPI void efl_ui_image_scale_type_set(Eo *obj, Efl_Ui_Image_Scale_Type scale_type);

/**
 * @brief Control how the internal image is scaled.
 *
 * @return Image scale type
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Image
 */
EOAPI Efl_Ui_Image_Scale_Type efl_ui_image_scale_type_get(const Eo *obj);

/**
 * @brief Enable or disable scaling up or down the internal image.
 *
 * @param[in] scale_up If @c true, the internal image might be scaled up if
 * necessary according to the scale type. if @c false, the internal image is
 * not scaled up no matter what the scale type is.
 * @param[in] scale_down If @c true, the internal image might be scaled down if
 * necessary according to the scale type. if @c false, the internal image is
 * not scaled down no matter what the scale type is.
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Image
 */
EOAPI void efl_ui_image_scalable_set(Eo *obj, Eina_Bool scale_up, Eina_Bool scale_down);

/**
 * @brief Enable or disable scaling up or down the internal image.
 *
 * @param[out] scale_up If @c true, the internal image might be scaled up if
 * necessary according to the scale type. if @c false, the internal image is
 * not scaled up no matter what the scale type is.
 * @param[out] scale_down If @c true, the internal image might be scaled down
 * if necessary according to the scale type. if @c false, the internal image is
 * not scaled down no matter what the scale type is.
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Image
 */
EOAPI void efl_ui_image_scalable_get(const Eo *obj, Eina_Bool *scale_up, Eina_Bool *scale_down);

/**
 * @brief Control how the internal image is positioned inside an image object.
 *
 * @param[in] align_x Alignment in the horizontal axis (0 <= align_x <= 1).
 * @param[in] align_y Alignment in the vertical axis (0 <= align_y <= 1).
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Image
 */
EOAPI void efl_ui_image_align_set(Eo *obj, double align_x, double align_y);

/**
 * @brief Control how the internal image is positioned inside an image object.
 *
 * @param[out] align_x Alignment in the horizontal axis (0 <= align_x <= 1).
 * @param[out] align_y Alignment in the vertical axis (0 <= align_y <= 1).
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Image
 */
EOAPI void efl_ui_image_align_get(const Eo *obj, double *align_x, double *align_y);

/**
 * @brief Set the image by icon standards names.
 *
 * For example, freedesktop.org defines standard icon names such as "home",
 * "network", etc. There can be different icon sets to match those icon keys.
 * The "name" given as parameter is one of these "keys", and will be used to
 * look in the freedesktop.org paths and elementary theme.
 *
 * If name is not found in any of the expected locations and it is the absolute
 * path of an image file, this image will be used. Lookup order used by
 * @ref efl_ui_image_icon_set can be set using "icon_theme" in config.
 *
 * @note The image set by this function can be changed by @ref efl_file_set.
 *
 * @note This function does not accept relative icon path.
 *
 * See also @ref efl_ui_image_icon_get.
 *
 * @param[in] name The icon name
 *
 * @return @c true on success, @c false on error
 *
 * @ingroup Efl_Ui_Image
 */
EOAPI Eina_Bool efl_ui_image_icon_set(Eo *obj, const char *name);

/**
 * @brief Get the icon name of image set by icon standard names.
 *
 * If the image was set using efl_file_set() instead of
 * @ref efl_ui_image_icon_set, then this function will return null.
 *
 * @return The icon name
 *
 * @ingroup Efl_Ui_Image
 */
EOAPI const char *efl_ui_image_icon_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_EVENT_DROP;

/** Called when drop from drag and drop happened
 *
 * @ingroup Efl_Ui_Image
 */
#define EFL_UI_IMAGE_EVENT_DROP (&(_EFL_UI_IMAGE_EVENT_DROP))

#endif
