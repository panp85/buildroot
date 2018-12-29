#ifndef _EFL_UI_PROGRESSBAR_EO_H_
#define _EFL_UI_PROGRESSBAR_EO_H_

#ifndef _EFL_UI_PROGRESSBAR_EO_CLASS_TYPE
#define _EFL_UI_PROGRESSBAR_EO_CLASS_TYPE

typedef Eo Efl_Ui_Progressbar;

#endif

#ifndef _EFL_UI_PROGRESSBAR_EO_TYPES
#define _EFL_UI_PROGRESSBAR_EO_TYPES


#endif
/** Elementary progressbar class
 *
 * @ingroup Efl_Ui_Progressbar
 */
#define EFL_UI_PROGRESSBAR_CLASS efl_ui_progressbar_class_get()

EWAPI const Efl_Class *efl_ui_progressbar_class_get(void);

/**
 * @brief Control whether a given progress bar widget is at "pulsing mode" or
 * not.
 *
 * By default, progress bars will display values from the low to high value
 * boundaries. There are, though, contexts in which the progress of a given
 * task is unknown. For such cases, one can set a progress bar widget to a
 * "pulsing state", to give the user an idea that some computation is being
 * held, but without exact progress values. In the default theme, it will
 * animate its bar with the contents filling in constantly and back to
 * non-filled, in a loop. To start and stop this pulsing animation, one has to
 * explicitly call elm_progressbar_pulse().
 *
 * @param[in] pulse @c true to put @c obj in pulsing mode, @c false to put it
 * back to its default one
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Progressbar
 */
EOAPI void efl_ui_progressbar_pulse_mode_set(Eo *obj, Eina_Bool pulse);

/**
 * @brief Control whether a given progress bar widget is at "pulsing mode" or
 * not.
 *
 * By default, progress bars will display values from the low to high value
 * boundaries. There are, though, contexts in which the progress of a given
 * task is unknown. For such cases, one can set a progress bar widget to a
 * "pulsing state", to give the user an idea that some computation is being
 * held, but without exact progress values. In the default theme, it will
 * animate its bar with the contents filling in constantly and back to
 * non-filled, in a loop. To start and stop this pulsing animation, one has to
 * explicitly call elm_progressbar_pulse().
 *
 * @return @c true to put @c obj in pulsing mode, @c false to put it back to
 * its default one
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Progressbar
 */
EOAPI Eina_Bool efl_ui_progressbar_pulse_mode_get(const Eo *obj);

/**
 * @brief Start/stop a given progress bar "pulsing" animation, if its under
 * that mode
 *
 * @note This call won't do anything if @c obj is not under "pulsing mode".
 *
 * @param[in] state @c true, to start the pulsing animation, @c false to stop
 * it
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Progressbar
 */
EOAPI void efl_ui_progressbar_pulse_set(Eo *obj, Eina_Bool state);

/**
 * @brief Get the pulsing state on a given progressbar widget.
 *
 * @return @c true, to start the pulsing animation, @c false to stop it
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Progressbar
 */
EOAPI Eina_Bool efl_ui_progressbar_pulse_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_UI_PROGRESSBAR_EVENT_CHANGED;

/** Called when progressbar changed
 *
 * @ingroup Efl_Ui_Progressbar
 */
#define EFL_UI_PROGRESSBAR_EVENT_CHANGED (&(_EFL_UI_PROGRESSBAR_EVENT_CHANGED))

#endif
