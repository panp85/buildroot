#ifndef _EFL_UI_ZOOM_EO_LEGACY_H_
#define _EFL_UI_ZOOM_EO_LEGACY_H_

#ifndef _EFL_UI_ZOOM_EO_CLASS_TYPE
#define _EFL_UI_ZOOM_EO_CLASS_TYPE

typedef Eo Efl_Ui_Zoom;

#endif

#ifndef _EFL_UI_ZOOM_EO_TYPES
#define _EFL_UI_ZOOM_EO_TYPES

/** Types of zoom available.
 *
 * @ingroup Efl_Ui_Zoom
 */
typedef enum
{
  EFL_UI_ZOOM_MODE_MANUAL = 0, /**< Zoom controlled normally by efl_ui_zoom_set
                                */
  EFL_UI_ZOOM_MODE_AUTO_FIT, /**< Zoom until photo fits in zoomable object */
  EFL_UI_ZOOM_MODE_AUTO_FILL, /**< Zoom until photo fills zoomable object */
  EFL_UI_ZOOM_MODE_AUTO_FIT_IN, /**< Zoom in until photo fits in zoomable object
                                 */
  EFL_UI_ZOOM_MODE_LAST /**< Sentinel value to indicate last enum field during
                         * iteration */
} Efl_Ui_Zoom_Mode;


#endif







#endif
