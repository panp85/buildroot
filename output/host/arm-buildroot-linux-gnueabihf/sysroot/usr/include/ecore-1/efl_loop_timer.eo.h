#ifndef _EFL_LOOP_TIMER_EO_H_
#define _EFL_LOOP_TIMER_EO_H_

#ifndef _EFL_LOOP_TIMER_EO_CLASS_TYPE
#define _EFL_LOOP_TIMER_EO_CLASS_TYPE

typedef Eo Efl_Loop_Timer;

#endif

#ifndef _EFL_LOOP_TIMER_EO_TYPES
#define _EFL_LOOP_TIMER_EO_TYPES


#endif
/**
 * @brief Timers are objects that will call a given callback at some point in
 * the future and repeat that tick at a given interval.
 *
 * Timers require the ecore main loop to be running and functioning properly.
 * They do not guarantee exact timing, but try to work on a "best effort"
 * basis.
 *
 * @ingroup Efl_Loop_Timer
 */
#define EFL_LOOP_TIMER_CLASS efl_loop_timer_class_get()

EWAPI const Efl_Class *efl_loop_timer_class_get(void);

/**
 * @brief Interval the timer ticks on.
 *
 * If set during a timer call, this will affect the next interval.
 *
 * @param[in] in The new interval in seconds
 *
 * @ingroup Efl_Loop_Timer
 */
EOAPI void efl_loop_timer_interval_set(Eo *obj, double in);

/**
 * @brief Interval the timer ticks on.
 *
 * @return The new interval in seconds
 *
 * @ingroup Efl_Loop_Timer
 */
EOAPI double efl_loop_timer_interval_get(const Eo *obj);

/**
 * @brief Pending time regarding a timer.
 *
 * @return Pending time
 *
 * @ingroup Efl_Loop_Timer
 */
EOAPI double efl_loop_timer_pending_get(const Eo *obj);

/** Resets a timer to its full interval. This effectively makes the timer start
 * ticking off from zero now.
 *
 * @since 1.2
 *
 * @ingroup Efl_Loop_Timer
 */
EOAPI void efl_loop_timer_reset(Eo *obj);

/** This effectively reset a timer, but based on the time when this iteration
 * of the main loop started.
 *
 * @since 1.18
 *
 * @ingroup Efl_Loop_Timer
 */
EOAPI void efl_loop_timer_loop_reset(Eo *obj);

/**
 * @brief Adds some delay for the next occurrence of a timer. This doesn't
 * affect the interval of a timer.
 *
 * @param[in] add The amount of time to delay the timer by in seconds
 *
 * @ingroup Efl_Loop_Timer
 */
EOAPI void efl_loop_timer_delay(Eo *obj, double add);

EWAPI extern const Efl_Event_Description _EFL_LOOP_TIMER_EVENT_TICK;

/** Event triggered when the specified time as passed.
 *
 * @ingroup Efl_Loop_Timer
 */
#define EFL_LOOP_TIMER_EVENT_TICK (&(_EFL_LOOP_TIMER_EVENT_TICK))

#endif
