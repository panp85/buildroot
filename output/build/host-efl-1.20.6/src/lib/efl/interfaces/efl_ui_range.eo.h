#ifndef _EFL_UI_RANGE_EO_H_
#define _EFL_UI_RANGE_EO_H_

#ifndef _EFL_UI_RANGE_EO_CLASS_TYPE
#define _EFL_UI_RANGE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Range;

#endif

#ifndef _EFL_UI_RANGE_EO_TYPES
#define _EFL_UI_RANGE_EO_TYPES


#endif
/** Efl UI progress interface
 *
 * @ingroup Efl_Ui_Range
 */
#define EFL_UI_RANGE_INTERFACE efl_ui_range_interface_get()

EWAPI const Efl_Class *efl_ui_range_interface_get(void);

/**
 * @brief Control the (exact) length of the bar region of a given range widget
 *
 * This sets the minimum width (when in horizontal mode) or height (when in
 * vertical mode) of the actual bar area of the range bar @c obj. This in turn
 * affects the object's minimum size. Use this when you're not setting other
 * size hints expanding on the given direction (like weight and alignment
 * hints) and you would like it to have a specific size.
 *
 * @note Icon, label and unit text around @c obj will require their own space,
 * which will make @c obj to require more the @c size, actually.
 *
 * @param[in] size The length of the range's bar region
 *
 * @ingroup Efl_Ui_Range
 */
EOAPI void efl_ui_range_span_size_set(Eo *obj, int size);

/**
 * @brief Control the (exact) length of the bar region of a given range widget
 *
 * This sets the minimum width (when in horizontal mode) or height (when in
 * vertical mode) of the actual bar area of the range bar @c obj. This in turn
 * affects the object's minimum size. Use this when you're not setting other
 * size hints expanding on the given direction (like weight and alignment
 * hints) and you would like it to have a specific size.
 *
 * @note Icon, label and unit text around @c obj will require their own space,
 * which will make @c obj to require more the @c size, actually.
 *
 * @return The length of the range's bar region
 *
 * @ingroup Efl_Ui_Range
 */
EOAPI int efl_ui_range_span_size_get(const Eo *obj);

/**
 * @brief Control the range value (in percentage) on a given range widget
 *
 * Use this call to set range levels.
 *
 * @note If you pass a value out of the specified interval for @c val, it will
 * be interpreted as the closest of the boundary values in the interval.
 *
 * @param[in] val The range value (must be between $0.0 and 1.0)
 *
 * @ingroup Efl_Ui_Range
 */
EOAPI void efl_ui_range_value_set(Eo *obj, double val);

/**
 * @brief Control the range value (in percentage) on a given range widget
 *
 * Use this call to set range levels.
 *
 * @note If you pass a value out of the specified interval for @c val, it will
 * be interpreted as the closest of the boundary values in the interval.
 *
 * @return The range value (must be between $0.0 and 1.0)
 *
 * @ingroup Efl_Ui_Range
 */
EOAPI double efl_ui_range_value_get(const Eo *obj);

/**
 * @brief Set the minimum and maximum values for given range widget.
 *
 * Define the allowed range of values to be selected by the user.
 *
 * If actual value is less than @c min, it will be updated to @c min. If it is
 * bigger then @c max, will be updated to @c max. Actual value can be get with
 * @ref efl_ui_range_value_get
 *
 * By default, min is equal to 0.0, and max is equal to 1.0.
 *
 * @warning maximum must be greater than minimum, otherwise behavior is
 * undefined.
 *
 * @param[in] min The minimum value.
 * @param[in] max The maximum value.
 *
 * @ingroup Efl_Ui_Range
 */
EOAPI void efl_ui_range_min_max_set(Eo *obj, double min, double max);

/**
 * @brief Get the minimum and maximum values of the given range widget.
 *
 * @note If only one value is needed, the other pointer can be passed as
 * @c null.
 *
 * @param[out] min The minimum value.
 * @param[out] max The maximum value.
 *
 * @ingroup Efl_Ui_Range
 */
EOAPI void efl_ui_range_min_max_get(const Eo *obj, double *min, double *max);

/**
 * @brief Control the format string for a given range widget's units label
 *
 * If @c NULL is passed on @c format, it will make @c obj's units area to be
 * hidden completely. If not, it'll set the <b>format string</b> for the units
 * label's text. The units label is provided a floating point value, so the
 * units text is up display at most one floating point value. Note that the
 * units label is optional. Use a format string such as "%1.2f meters" for
 * example.
 *
 * @note The default format string for a range is an integer percentage, as in
 * $"%.0f %%".
 *
 * @param[in] units The format string for @c obj's units label
 *
 * @ingroup Efl_Ui_Range
 */
EOAPI void efl_ui_range_unit_format_set(Eo *obj, const char *units);

/**
 * @brief Control the format string for a given range widget's units label
 *
 * If @c NULL is passed on @c format, it will make @c obj's units area to be
 * hidden completely. If not, it'll set the <b>format string</b> for the units
 * label's text. The units label is provided a floating point value, so the
 * units text is up display at most one floating point value. Note that the
 * units label is optional. Use a format string such as "%1.2f meters" for
 * example.
 *
 * @note The default format string for a range is an integer percentage, as in
 * $"%.0f %%".
 *
 * @return The format string for @c obj's units label
 *
 * @ingroup Efl_Ui_Range
 */
EOAPI const char *efl_ui_range_unit_format_get(const Eo *obj);

/**
 * @brief This enables two indicators in given range widget.
 *
 * @param[in] enable @c true if two indicators are enabled, @c false otherwise
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Range
 */
EOAPI void efl_ui_range_interval_enabled_set(Eo *obj, Eina_Bool enable);

/**
 * @brief This enables two indicators in given range widget.
 *
 * @return @c true if two indicators are enabled, @c false otherwise
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Range
 */
EOAPI Eina_Bool efl_ui_range_interval_enabled_get(const Eo *obj);

/**
 * @brief Sets up a start and end range point for given range widget.
 *
 * @param[in] from Interval minimum value
 * @param[in] to Interval maximum value
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Range
 */
EOAPI void efl_ui_range_interval_set(Eo *obj, double from, double to);

/**
 * @brief Sets up a start and end range point for given range widget.
 *
 * @param[out] from Interval minimum value
 * @param[out] to Interval maximum value
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Range
 */
EOAPI void efl_ui_range_interval_get(const Eo *obj, double *from, double *to);

#endif
