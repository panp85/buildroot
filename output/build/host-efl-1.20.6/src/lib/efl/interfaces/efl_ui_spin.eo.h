#ifndef _EFL_UI_SPIN_EO_H_
#define _EFL_UI_SPIN_EO_H_

#ifndef _EFL_UI_SPIN_EO_CLASS_TYPE
#define _EFL_UI_SPIN_EO_CLASS_TYPE

typedef Eo Efl_Ui_Spin;

#endif

#ifndef _EFL_UI_SPIN_EO_TYPES
#define _EFL_UI_SPIN_EO_TYPES


#endif
/** Efl UI spinner interface
 *
 * @ingroup Efl_Ui_Spin
 */
#define EFL_UI_SPIN_INTERFACE efl_ui_spin_interface_get()

EWAPI const Efl_Class *efl_ui_spin_interface_get(void);

/**
 * @brief Control the minimum and maximum values for the spinner.
 *
 * Define the allowed range of values to be selected by the user.
 *
 * If actual value is less than @c min, it will be updated to @c min. If it is
 * bigger then @c max, will be updated to @c max.
 *
 * By default, min is equal to 0, and max is equal to 100.
 *
 * @warning Maximum must be greater than minimum.
 *
 * @param[in] min The minimum value.
 * @param[in] max The maximum value.
 *
 * @ingroup Efl_Ui_Spin
 */
EOAPI void efl_ui_spin_min_max_set(Eo *obj, double min, double max);

/**
 * @brief Control the minimum and maximum values for the spinner.
 *
 * Define the allowed range of values to be selected by the user.
 *
 * If actual value is less than @c min, it will be updated to @c min. If it is
 * bigger then @c max, will be updated to @c max.
 *
 * By default, min is equal to 0, and max is equal to 100.
 *
 * @warning Maximum must be greater than minimum.
 *
 * @param[out] min The minimum value.
 * @param[out] max The maximum value.
 *
 * @ingroup Efl_Ui_Spin
 */
EOAPI void efl_ui_spin_min_max_get(const Eo *obj, double *min, double *max);

/**
 * @brief Control the step used to increment or decrement the spinner value.
 *
 * This value will be incremented or decremented to the displayed value. It
 * will be incremented while the user keep right or top arrow pressed, and will
 * be decremented while the user keep left or bottom arrow pressed.
 *
 * The interval to increment / decrement can be set with
 * @ref efl_ui_spin_interval_set.
 *
 * By default step value is equal to 1.
 *
 * @param[in] step The step value.
 *
 * @ingroup Efl_Ui_Spin
 */
EOAPI void efl_ui_spin_step_set(Eo *obj, double step);

/**
 * @brief Control the step used to increment or decrement the spinner value.
 *
 * This value will be incremented or decremented to the displayed value. It
 * will be incremented while the user keep right or top arrow pressed, and will
 * be decremented while the user keep left or bottom arrow pressed.
 *
 * The interval to increment / decrement can be set with
 * @ref efl_ui_spin_interval_set.
 *
 * By default step value is equal to 1.
 *
 * @return The step value.
 *
 * @ingroup Efl_Ui_Spin
 */
EOAPI double efl_ui_spin_step_get(const Eo *obj);

/**
 * @brief Control the value the spinner displays.
 *
 * Value will be presented on the label following format specified with
 * elm_spinner_format_set().
 *
 * Warning The value must to be between min and max values. This values are set
 * by elm_spinner_min_max_set().
 *
 * @param[in] val The value to be displayed.
 *
 * @ingroup Efl_Ui_Spin
 */
EOAPI void efl_ui_spin_value_set(Eo *obj, double val);

/**
 * @brief Control the value the spinner displays.
 *
 * Value will be presented on the label following format specified with
 * elm_spinner_format_set().
 *
 * Warning The value must to be between min and max values. This values are set
 * by elm_spinner_min_max_set().
 *
 * @return The value to be displayed.
 *
 * @ingroup Efl_Ui_Spin
 */
EOAPI double efl_ui_spin_value_get(const Eo *obj);

/**
 * @brief Control the interval on time updates for an user mouse button hold on
 * spinner widgets' arrows.
 *
 * This interval value is decreased while the user holds the mouse pointer
 * either incrementing or decrementing spinner's value.
 *
 * This helps the user to get to a given value distant from the current one
 * easier/faster, as it will start to change quicker and quicker on mouse
 * button holds.
 *
 * The calculation for the next change interval value, starting from the one
 * set with this call, is the previous interval divided by $1.05, so it
 * decreases a little bit.
 *
 * The default starting interval value for automatic changes is $0.85 seconds.
 *
 * @param[in] interval The (first) interval value in seconds.
 *
 * @ingroup Efl_Ui_Spin
 */
EOAPI void efl_ui_spin_interval_set(Eo *obj, double interval);

/**
 * @brief Control the interval on time updates for an user mouse button hold on
 * spinner widgets' arrows.
 *
 * This interval value is decreased while the user holds the mouse pointer
 * either incrementing or decrementing spinner's value.
 *
 * This helps the user to get to a given value distant from the current one
 * easier/faster, as it will start to change quicker and quicker on mouse
 * button holds.
 *
 * The calculation for the next change interval value, starting from the one
 * set with this call, is the previous interval divided by $1.05, so it
 * decreases a little bit.
 *
 * The default starting interval value for automatic changes is $0.85 seconds.
 *
 * @return The (first) interval value in seconds.
 *
 * @ingroup Efl_Ui_Spin
 */
EOAPI double efl_ui_spin_interval_get(const Eo *obj);

#endif
