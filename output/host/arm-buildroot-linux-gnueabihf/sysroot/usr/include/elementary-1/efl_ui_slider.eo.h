#ifndef _EFL_UI_SLIDER_EO_H_
#define _EFL_UI_SLIDER_EO_H_

#ifndef _EFL_UI_SLIDER_EO_CLASS_TYPE
#define _EFL_UI_SLIDER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Slider;

#endif

#ifndef _EFL_UI_SLIDER_EO_TYPES
#define _EFL_UI_SLIDER_EO_TYPES


#endif
/** Elementary slider class
 *
 * @ingroup Efl_Ui_Slider
 */
#define EFL_UI_SLIDER_CLASS efl_ui_slider_class_get()

EWAPI const Efl_Class *efl_ui_slider_class_get(void);

/**
 * @brief Set the format string for the indicator label.
 *
 * The slider may display its value somewhere else then unit label, for
 * example, above the slider knob that is dragged around. This function sets
 * the format string used for this.
 *
 * If @c null, indicator label won't be visible. If not it sets the format
 * string for the label text. To the label text is provided a floating point
 * value, so the label text can display up to 1 floating point value. Note that
 * this is optional.
 *
 * Use a format string such as "%1.2f meters" for example, and it will display
 * values like: "3.14 meters" for a value equal to 3.14159.
 *
 * Default is indicator label disabled.
 *
 * @param[in] indicator The format string for the indicator display.
 *
 * @ingroup Efl_Ui_Slider
 */
EOAPI void efl_ui_slider_indicator_format_set(Eo *obj, const char *indicator);

/**
 * @brief Get the indicator label format of the slider.
 *
 * The slider may display its value somewhere else then unit label, for
 * example, above the slider knob that is dragged around. This function gets
 * the format string used for this.
 *
 * @return The format string for the indicator display.
 *
 * @ingroup Efl_Ui_Slider
 */
EOAPI const char *efl_ui_slider_indicator_format_get(const Eo *obj);

/**
 * @brief Set whether to enlarge slider indicator (augmented knob) or not.
 *
 * By default, indicator will be bigger while dragged by the user.
 *
 * @warning It won't display values set with
 * @ref efl_ui_slider_indicator_format_set if you disable indicator.
 *
 * @param[in] show @c true will make it enlarge, @c false will let the knob
 * always at default size.
 *
 * @ingroup Efl_Ui_Slider
 */
EOAPI void efl_ui_slider_indicator_show_set(Eo *obj, Eina_Bool show);

/**
 * @brief Get whether a given slider widget's enlarging indicator or not.
 *
 * @return @c true will make it enlarge, @c false will let the knob always at
 * default size.
 *
 * @ingroup Efl_Ui_Slider
 */
EOAPI Eina_Bool efl_ui_slider_indicator_show_get(const Eo *obj);

/**
 * @brief Show the indicator of slider on focus.
 *
 * @param[in] flag @c true if indicator is shown on focus, @c false otherwise
 *
 * @ingroup Efl_Ui_Slider
 */
EOAPI void efl_ui_slider_indicator_show_on_focus_set(Eo *obj, Eina_Bool flag);

/**
 * @brief Get whether the indicator of the slider is set or not.
 *
 * @return @c true if indicator is shown on focus, @c false otherwise
 *
 * @ingroup Efl_Ui_Slider
 */
EOAPI Eina_Bool efl_ui_slider_indicator_show_on_focus_get(const Eo *obj);

/**
 * @brief Set the step by which slider indicator will move.
 *
 * This value is used when draggable object is moved automatically i.e., in
 * case of key event when up/down/left/right key is pressed or in case when
 * accessibility is set and flick event is used to inc/dec slider values. By
 * default step value is equal to 0.05.
 *
 * @param[in] step The step value.
 *
 * @since 1.8
 *
 * @ingroup Efl_Ui_Slider
 */
EOAPI void efl_ui_slider_step_set(Eo *obj, double step);

/**
 * @brief Get the step by which slider indicator moves.
 *
 * @return The step value.
 *
 * @since 1.8
 *
 * @ingroup Efl_Ui_Slider
 */
EOAPI double efl_ui_slider_step_get(const Eo *obj);

/**
 * @brief Set/Get the visible mode of indicator.
 *
 * @param[in] indicator_visible_mode The indicator visible mode.
 *
 * @ingroup Efl_Ui_Slider
 */
EOAPI void efl_ui_slider_indicator_visible_mode_set(Eo *obj, Efl_Ui_Slider_Indicator_Visible_Mode indicator_visible_mode);

/**
 * @brief Set/Get the visible mode of indicator.
 *
 * @return The indicator visible mode.
 *
 * @ingroup Efl_Ui_Slider
 */
EOAPI Efl_Ui_Slider_Indicator_Visible_Mode efl_ui_slider_indicator_visible_mode_get(const Eo *obj);

/**
 * @brief Set the format function pointer for the indicator label
 *
 * Set the callback function to format the indicator string.
 *
 * @param[in] func The indicator format function.
 * @param[in] free_func The freeing function for the format string.
 *
 * @ingroup Efl_Ui_Slider
 */
EOAPI void efl_ui_slider_indicator_format_function_set(Eo *obj, slider_func_type func, slider_freefunc_type free_func);

EWAPI extern const Efl_Event_Description _EFL_UI_SLIDER_EVENT_CHANGED;

/** Called when slider changed
 *
 * @ingroup Efl_Ui_Slider
 */
#define EFL_UI_SLIDER_EVENT_CHANGED (&(_EFL_UI_SLIDER_EVENT_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_UI_SLIDER_EVENT_DELAY_CHANGED;

/** Called when delay changed
 *
 * @ingroup Efl_Ui_Slider
 */
#define EFL_UI_SLIDER_EVENT_DELAY_CHANGED (&(_EFL_UI_SLIDER_EVENT_DELAY_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_UI_SLIDER_EVENT_SLIDER_DRAG_START;

/** Called when slider drag started
 *
 * @ingroup Efl_Ui_Slider
 */
#define EFL_UI_SLIDER_EVENT_SLIDER_DRAG_START (&(_EFL_UI_SLIDER_EVENT_SLIDER_DRAG_START))

EWAPI extern const Efl_Event_Description _EFL_UI_SLIDER_EVENT_SLIDER_DRAG_STOP;

/** Called when slider drag stopped
 *
 * @ingroup Efl_Ui_Slider
 */
#define EFL_UI_SLIDER_EVENT_SLIDER_DRAG_STOP (&(_EFL_UI_SLIDER_EVENT_SLIDER_DRAG_STOP))

#endif
