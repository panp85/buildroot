#ifndef _EFL_UI_NSTATE_EO_H_
#define _EFL_UI_NSTATE_EO_H_

#ifndef _EFL_UI_NSTATE_EO_CLASS_TYPE
#define _EFL_UI_NSTATE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Nstate;

#endif

#ifndef _EFL_UI_NSTATE_EO_TYPES
#define _EFL_UI_NSTATE_EO_TYPES


#endif
/** Efl UI nstate class
 *
 * @ingroup Efl_Ui_Nstate
 */
#define EFL_UI_NSTATE_CLASS efl_ui_nstate_class_get()

EWAPI const Efl_Class *efl_ui_nstate_class_get(void);

#ifdef EFL_UI_NSTATE_PROTECTED
/** Activate widget
 *
 * @ingroup Efl_Ui_Nstate
 */
EOAPI void efl_ui_nstate_activate(Eo *obj);
#endif

/**
 * @brief Maximum number of states
 *
 * @param[in] nstate The number of states.
 *
 * @ingroup Efl_Ui_Nstate
 */
EOAPI void efl_ui_nstate_count_set(Eo *obj, int nstate);

/**
 * @brief Maximum number of states
 *
 * @return The number of states.
 *
 * @ingroup Efl_Ui_Nstate
 */
EOAPI int efl_ui_nstate_count_get(const Eo *obj);

/**
 * @brief Set the particular state given in (0...nstate}.
 *
 * @param[in] state The state.
 *
 * @ingroup Efl_Ui_Nstate
 */
EOAPI void efl_ui_nstate_value_set(Eo *obj, int state);

/**
 * @brief Get the state value.
 *
 * @return The state.
 *
 * @ingroup Efl_Ui_Nstate
 */
EOAPI int efl_ui_nstate_value_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_UI_NSTATE_EVENT_STATE_CHANGED;

/** Called when nstate widget changed
 *
 * @ingroup Efl_Ui_Nstate
 */
#define EFL_UI_NSTATE_EVENT_STATE_CHANGED (&(_EFL_UI_NSTATE_EVENT_STATE_CHANGED))

#endif
