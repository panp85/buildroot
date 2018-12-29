#ifndef _EFL_UI_IMAGE_ZOOMABLE_EO_H_
#define _EFL_UI_IMAGE_ZOOMABLE_EO_H_

#ifndef _EFL_UI_IMAGE_ZOOMABLE_EO_CLASS_TYPE
#define _EFL_UI_IMAGE_ZOOMABLE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Image_Zoomable;

#endif

#ifndef _EFL_UI_IMAGE_ZOOMABLE_EO_TYPES
#define _EFL_UI_IMAGE_ZOOMABLE_EO_TYPES


#endif
/** Elementary Image Zoomable class
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_CLASS efl_ui_image_zoomable_class_get()

EWAPI const Efl_Class *efl_ui_image_zoomable_class_get(void);

/**
 * @brief Set the gesture state for photocam.
 *
 * This sets the gesture state to on or off for photocam. The default is off.
 * This will start multi touch zooming.
 *
 * @param[in] gesture The gesture state.
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
EOAPI void efl_ui_image_zoomable_gesture_enabled_set(Eo *obj, Eina_Bool gesture);

/**
 * @brief Get the gesture state for photocam.
 *
 * This gets the current gesture state for the photocam object.
 *
 * @return The gesture state.
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
EOAPI Eina_Bool efl_ui_image_zoomable_gesture_enabled_get(const Eo *obj);

/**
 * @brief Set the viewed region of the image
 *
 * This shows the region of the image without using animation.
 *
 * @param[in] x X-coordinate of region in image original pixels
 * @param[in] y Y-coordinate of region in image original pixels
 * @param[in] w Width of region in image original pixels
 * @param[in] h Height of region in image original pixels
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
EOAPI void efl_ui_image_zoomable_image_region_set(Eo *obj, int x, int y, int w, int h);

/**
 * @brief Get the region of the image that is currently shown
 *
 * See also @ref efl_ui_image_zoomable_image_region_set.
 *
 * @param[out] x X-coordinate of region in image original pixels
 * @param[out] y Y-coordinate of region in image original pixels
 * @param[out] w Width of region in image original pixels
 * @param[out] h Height of region in image original pixels
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
EOAPI void efl_ui_image_zoomable_image_region_get(const Eo *obj, int *x, int *y, int *w, int *h);

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_PRESS;

/** Called when photocam got pressed
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_PRESS (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_PRESS))

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD;

/** Called when photocam loading started
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD))

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED;

/** Called when photocam loading finished
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED))

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD_DETAIL;

/** Called when photocal detail loading started
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD_DETAIL (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD_DETAIL))

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED_DETAIL;

/** Called when photocam detail loading finished
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED_DETAIL (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED_DETAIL))

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_START;

/** Called when photocam download started
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_START (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_START))

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_PROGRESS;

/** Called when photocam download progress updated
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_PROGRESS (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_PROGRESS))

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_DONE;

/** Called when photocam download finished
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_DONE (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_DONE))

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_ERROR;

/** Called when photocam download failed
 *
 * @ingroup Efl_Ui_Image_Zoomable
 */
#define EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_ERROR (&(_EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_ERROR))

#endif
