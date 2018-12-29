#ifndef _EFL_UI_SLIDER_EO_LEGACY_H_
#define _EFL_UI_SLIDER_EO_LEGACY_H_

#ifndef _EFL_UI_SLIDER_EO_CLASS_TYPE
#define _EFL_UI_SLIDER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Slider;

#endif

#ifndef _EFL_UI_SLIDER_EO_TYPES
#define _EFL_UI_SLIDER_EO_TYPES


#endif

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
EAPI void elm_slider_indicator_format_set(Efl_Ui_Slider *obj, const char *indicator);

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
EAPI const char *elm_slider_indicator_format_get(const Efl_Ui_Slider *obj);

/**
 * @brief Set whether to enlarge slider indicator (augmented knob) or not.
 *
 * By default, indicator will be bigger while dragged by the user.
 *
 * @warning It won't display values set with
 * @ref elm_slider_indicator_format_set if you disable indicator.
 *
 * @param[in] show @c true will make it enlarge, @c false will let the knob
 * always at default size.
 *
 * @ingroup Efl_Ui_Slider
 */
EAPI void elm_slider_indicator_show_set(Efl_Ui_Slider *obj, Eina_Bool show);

/**
 * @brief Get whether a given slider widget's enlarging indicator or not.
 *
 * @return @c true will make it enlarge, @c false will let the knob always at
 * default size.
 *
 * @ingroup Efl_Ui_Slider
 */
EAPI Eina_Bool elm_slider_indicator_show_get(const Efl_Ui_Slider *obj);

/**
 * @brief Show the indicator of slider on focus.
 *
 * @param[in] flag @c true if indicator is shown on focus, @c false otherwise
 *
 * @ingroup Efl_Ui_Slider
 */
EAPI void elm_slider_indicator_show_on_focus_set(Efl_Ui_Slider *obj, Eina_Bool flag);

/**
 * @brief Get whether the indicator of the slider is set or not.
 *
 * @return @c true if indicator is shown on focus, @c false otherwise
 *
 * @ingroup Efl_Ui_Slider
 */
EAPI Eina_Bool elm_slider_indicator_show_on_focus_get(const Efl_Ui_Slider *obj);

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
EAPI void elm_slider_step_set(Efl_Ui_Slider *obj, double step);

/**
 * @brief Get the step by which slider indicator moves.
 *
 * @return The step value.
 *
 * @since 1.8
 *
 * @ingroup Efl_Ui_Slider
 */
EAPI double elm_slider_step_get(const Efl_Ui_Slider *obj);

/**
 * @brief Set/Get the visible mode of indicator.
 *
 * @param[in] indicator_visible_mode The indicator visible mode.
 *
 * @ingroup Efl_Ui_Slider
 */
EAPI void elm_slider_indicator_visible_mode_set(Efl_Ui_Slider *obj, Efl_Ui_Slider_Indicator_Visible_Mode indicator_visible_mode);

/**
 * @brief Set/Get the visible mode of indicator.
 *
 * @return The indicator visible mode.
 *
 * @ingroup Efl_Ui_Slider
 */
EAPI Efl_Ui_Slider_Indicator_Visible_Mode elm_slider_indicator_visible_mode_get(const Efl_Ui_Slider *obj);

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
EAPI void elm_slider_indicator_format_function_set(Efl_Ui_Slider *obj, slider_func_type func, slider_freefunc_type free_func);

#endif
