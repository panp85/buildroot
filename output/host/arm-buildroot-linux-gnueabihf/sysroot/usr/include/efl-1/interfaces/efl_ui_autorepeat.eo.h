#ifndef _EFL_UI_AUTOREPEAT_EO_H_
#define _EFL_UI_AUTOREPEAT_EO_H_

#ifndef _EFL_UI_AUTOREPEAT_EO_CLASS_TYPE
#define _EFL_UI_AUTOREPEAT_EO_CLASS_TYPE

typedef Eo Efl_Ui_Autorepeat;

#endif

#ifndef _EFL_UI_AUTOREPEAT_EO_TYPES
#define _EFL_UI_AUTOREPEAT_EO_TYPES


#endif
/** Efl UI autorepeat interface
 *
 * @ingroup Efl_Ui_Autorepeat
 */
#define EFL_UI_AUTOREPEAT_INTERFACE efl_ui_autorepeat_interface_get()

EWAPI const Efl_Class *efl_ui_autorepeat_interface_get(void);

/**
 * @brief The initial timeout before the autorepeat event is generated
 *
 * Sets the timeout, in seconds, since the button is pressed until the first
 * @c repeated signal is emitted. If @c t is 0.0 or less, there won't be any
 * delay and the event will be fired the moment the button is pressed.
 *
 * See also @ref efl_ui_autorepeat_enabled_set,
 * @ref efl_ui_autorepeat_gap_timeout_set.
 *
 * @param[in] t Timeout in seconds
 *
 * @ingroup Efl_Ui_Autorepeat
 */
EOAPI void efl_ui_autorepeat_initial_timeout_set(Eo *obj, double t);

/**
 * @brief The initial timeout before the autorepeat event is generated
 *
 * Sets the timeout, in seconds, since the button is pressed until the first
 * @c repeated signal is emitted. If @c t is 0.0 or less, there won't be any
 * delay and the event will be fired the moment the button is pressed.
 *
 * See also @ref efl_ui_autorepeat_enabled_set,
 * @ref efl_ui_autorepeat_gap_timeout_set.
 *
 * @return Timeout in seconds
 *
 * @ingroup Efl_Ui_Autorepeat
 */
EOAPI double efl_ui_autorepeat_initial_timeout_get(const Eo *obj);

/**
 * @brief The interval between each generated autorepeat event
 *
 * After the first @c repeated event is fired, all subsequent ones will follow
 * after a delay of @c t seconds for each.
 *
 * See also @ref efl_ui_autorepeat_initial_timeout_set.
 *
 * @param[in] t Interval in seconds
 *
 * @ingroup Efl_Ui_Autorepeat
 */
EOAPI void efl_ui_autorepeat_gap_timeout_set(Eo *obj, double t);

/**
 * @brief The interval between each generated autorepeat event
 *
 * After the first @c repeated event is fired, all subsequent ones will follow
 * after a delay of @c t seconds for each.
 *
 * See also @ref efl_ui_autorepeat_initial_timeout_set.
 *
 * @return Interval in seconds
 *
 * @ingroup Efl_Ui_Autorepeat
 */
EOAPI double efl_ui_autorepeat_gap_timeout_get(const Eo *obj);

/**
 * @brief Turn on/off the autorepeat event generated when the button is kept
 * pressed
 *
 * When off, no autorepeat is performed and buttons emit a normal @c clicked
 * signal when they are clicked.
 *
 * When on, keeping a button pressed will continuously emit a @c repeated
 * signal until the button is released. The time it takes until it starts
 * emitting the signal is given by @ref efl_ui_autorepeat_initial_timeout_set,
 * and the time between each new emission by
 * @ref efl_ui_autorepeat_gap_timeout_set.
 *
 * @param[in] on A bool to turn on/off the event
 *
 * @ingroup Efl_Ui_Autorepeat
 */
EOAPI void efl_ui_autorepeat_enabled_set(Eo *obj, Eina_Bool on);

/**
 * @brief Turn on/off the autorepeat event generated when the button is kept
 * pressed
 *
 * When off, no autorepeat is performed and buttons emit a normal @c clicked
 * signal when they are clicked.
 *
 * When on, keeping a button pressed will continuously emit a @c repeated
 * signal until the button is released. The time it takes until it starts
 * emitting the signal is given by @ref efl_ui_autorepeat_initial_timeout_set,
 * and the time between each new emission by
 * @ref efl_ui_autorepeat_gap_timeout_set.
 *
 * @return A bool to turn on/off the event
 *
 * @ingroup Efl_Ui_Autorepeat
 */
EOAPI Eina_Bool efl_ui_autorepeat_enabled_get(const Eo *obj);

/**
 * @brief Whether the button supports autorepeat.
 *
 * @return @c true if autorepeat is supported, @c false otherwise
 *
 * @ingroup Efl_Ui_Autorepeat
 */
EOAPI Eina_Bool efl_ui_autorepeat_supported_get(const Eo *obj);

#endif
