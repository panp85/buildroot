#ifndef _EFL_UI_IMAGE_ZOOMABLE_PAN_EO_H_
#define _EFL_UI_IMAGE_ZOOMABLE_PAN_EO_H_

#ifndef _EFL_UI_IMAGE_ZOOMABLE_PAN_EO_CLASS_TYPE
#define _EFL_UI_IMAGE_ZOOMABLE_PAN_EO_CLASS_TYPE

typedef Eo Efl_Ui_Image_Zoomable_Pan;

#endif

#ifndef _EFL_UI_IMAGE_ZOOMABLE_PAN_EO_TYPES
#define _EFL_UI_IMAGE_ZOOMABLE_PAN_EO_TYPES


#endif
/** Elementary photocom pan class
 *
 * @ingroup Efl_Ui_Image_Zoomable_Pan
 */
#define EFL_UI_IMAGE_ZOOMABLE_PAN_CLASS efl_ui_image_zoomable_pan_class_get()

EWAPI const Efl_Class *efl_ui_image_zoomable_pan_class_get(void);

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOAD;

/** Called when load started
 *
 * @ingroup Efl_Ui_Image_Zoomable_Pan
 */
#define EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOAD (&(_EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOAD))

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOADED;

/** Called when load finished
 *
 * @ingroup Efl_Ui_Image_Zoomable_Pan
 */
#define EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOADED (&(_EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOADED))

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOAD_DETAIL;

/** Called when load details started
 *
 * @ingroup Efl_Ui_Image_Zoomable_Pan
 */
#define EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOAD_DETAIL (&(_EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOAD_DETAIL))

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOADED_DETAIL;

/** Called when load details finished
 *
 * @ingroup Efl_Ui_Image_Zoomable_Pan
 */
#define EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOADED_DETAIL (&(_EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOADED_DETAIL))

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_START;

/** Called when download started
 *
 * @ingroup Efl_Ui_Image_Zoomable_Pan
 */
#define EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_START (&(_EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_START))

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_PROGRESS;

/** Called with download progress updates
 *
 * @ingroup Efl_Ui_Image_Zoomable_Pan
 */
#define EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_PROGRESS (&(_EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_PROGRESS))

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_DONE;

/** Called when download finished
 *
 * @ingroup Efl_Ui_Image_Zoomable_Pan
 */
#define EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_DONE (&(_EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_DONE))

EWAPI extern const Efl_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_ERROR;

/** Called when download failed with an error
 *
 * @ingroup Efl_Ui_Image_Zoomable_Pan
 */
#define EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_ERROR (&(_EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_ERROR))

#endif
