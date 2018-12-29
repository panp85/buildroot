#ifndef _EFL_UI_ZOOM_EO_H_
#define _EFL_UI_ZOOM_EO_H_

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
/** Efl UI zoom interface
 *
 * @ingroup Efl_Ui_Zoom
 */
#define EFL_UI_ZOOM_INTERFACE efl_ui_zoom_interface_get()

EWAPI const Efl_Class *efl_ui_zoom_interface_get(void);

/**
 * @brief Enable zoom animation
 *
 * This sets the zoom animation state to on or off for zoomable. The default is
 * off. This will stop zooming using animation on zoom level changes and change
 * instantly. This will stop any existing animations that are running.
 *
 * @param[in] paused The pause state.
 *
 * @ingroup Efl_Ui_Zoom
 */
EOAPI void efl_ui_zoom_animation_set(Eo *obj, Eina_Bool paused);

/**
 * @brief Disable zoom animation
 *
 * This gets the current zoom animation state for the zoomable object.
 *
 * @return The pause state.
 *
 * @ingroup Efl_Ui_Zoom
 */
EOAPI Eina_Bool efl_ui_zoom_animation_get(const Eo *obj);

/**
 * @brief Set the zoom level of the photo
 *
 * This sets the zoom level. If @c zoom is 1, it means no zoom. If it's smaller
 * than 1, it means zoom in. If it's bigger than 1, it means zoom out. For
 *  example, @c zoom 1 will be 1:1 pixel for pixel. @c zoom 2 will be 2:1 (that
 * is 2x2 photo pixels will display as 1 on-screen pixel) which is a zoom out.
 * 4:1 will be 4x4 photo pixels as 1 screen pixel, and so on. The @c zoom
 * parameter must be greater than 0. It is suggested to stick to powers of 2.
 * (1, 2, 4, 8, 16, 32, etc.).
 *
 * @param[in] zoom The zoom level to set
 *
 * @ingroup Efl_Ui_Zoom
 */
EOAPI void efl_ui_zoom_set(Eo *obj, double zoom);

/**
 * @brief Get the zoom level of the photo
 *
 * This returns the current zoom level of the zoomable object. Note that if you
 * set the fill mode to other than #EFL_UI_ZOOM_MODE_MANUAL (which is the
 * default), the zoom level may be changed at any time by the  zoomable object
 * itself to account for photo size and zoomable viewport size.
 *
 * @return The zoom level to set
 *
 * @ingroup Efl_Ui_Zoom
 */
EOAPI double efl_ui_zoom_get(const Eo *obj);

/**
 * @brief Set the zoom mode
 *
 * This sets the zoom mode to manual or one of several automatic levels. Manual
 * (EFL_UI_ZOOM_MODE_MANUAL) means that zoom is set manually by
 * @ref efl_ui_zoom_set and will stay at that level until changed by code or
 * until zoom mode is changed. This is the default mode. The Automatic modes
 * will allow the zoomable object to automatically adjust zoom mode based on
 * properties.
 *
 * #EFL_UI_ZOOM_MODE_AUTO_FIT) will adjust zoom so the photo fits EXACTLY
 * inside the scroll frame with no pixels outside this region.
 * #EFL_UI_ZOOM_MODE_AUTO_FILL will be similar but ensure no pixels within the
 * frame are left unfilled.
 *
 * @param[in] mode The zoom mode.
 *
 * @ingroup Efl_Ui_Zoom
 */
EOAPI void efl_ui_zoom_mode_set(Eo *obj, Efl_Ui_Zoom_Mode mode);

/**
 * @brief Get the zoom mode
 *
 * This gets the current zoom mode of the zoomable object.
 *
 * @return The zoom mode.
 *
 * @ingroup Efl_Ui_Zoom
 */
EOAPI Efl_Ui_Zoom_Mode efl_ui_zoom_mode_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_ZOOM_START;

/** Called when zooming started
 *
 * @ingroup Efl_Ui_Zoom
 */
#define EFL_UI_EVENT_ZOOM_START (&(_EFL_UI_EVENT_ZOOM_START))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_ZOOM_STOP;

/** Called when zooming stopped
 *
 * @ingroup Efl_Ui_Zoom
 */
#define EFL_UI_EVENT_ZOOM_STOP (&(_EFL_UI_EVENT_ZOOM_STOP))

EWAPI extern const Efl_Event_Description _EFL_UI_EVENT_ZOOM_CHANGE;

/** Called when zooming changed
 *
 * @ingroup Efl_Ui_Zoom
 */
#define EFL_UI_EVENT_ZOOM_CHANGE (&(_EFL_UI_EVENT_ZOOM_CHANGE))

#endif
