#ifndef _EFL_PROMISE_EO_H_
#define _EFL_PROMISE_EO_H_

#ifndef _EFL_PROMISE_EO_CLASS_TYPE
#define _EFL_PROMISE_EO_CLASS_TYPE

typedef Eo Efl_Promise;

#endif

#ifndef _EFL_PROMISE_EO_TYPES
#define _EFL_PROMISE_EO_TYPES


#endif
/** Efl promise class
 *
 * @ingroup Efl_Promise
 */
#define EFL_PROMISE_CLASS efl_promise_class_get()

EWAPI const Efl_Class *efl_promise_class_get(void);

/**
 * @brief Updates the progress and send it immediately to all connected
 * Efl_Future.
 *
 * The progress is not kept and when the function return it will not be
 * accessed anymore. The pointer is owned by the caller and will remain so
 * after the return of the function call.
 *
 * @param[in] p Progress to be set
 *
 * @ingroup Efl_Promise
 */
EOAPI void efl_promise_progress_set(Eo *obj, const void *p);

/**
 * @brief Requests a new future linked to this promise.
 *
 * Efl_Future are optional and will be automatically deleted if no then
 * callback have been set before the next iteration of the main loop.
 *
 * The returned new future.
 *
 * @return Returns a future where the value will be set by calling value_set
 * while the progress will be updated by progress_set.
 *
 * @ingroup Efl_Promise
 */
EOAPI Efl_Future *efl_promise_future_get(const Eo *obj);

/**
 * @brief The value expected by all connected future.
 *
 * This function can be called only once and you can not call #failed.set after
 * that. The value will be owned by the promise until it is destroyed. The
 * value will be cleaned when the promise and all the future depending on it
 * are destroyed.
 *
 * @param[in] v The pointer to the value.
 * @param[in] free_cb The function to call to free the value.
 *
 * @ingroup Efl_Promise
 */
EOAPI void efl_promise_value_set(Eo *obj, void *v, Eina_Free_Cb free_cb);

/**
 * @brief Defines the failure state of this promise.
 *
 * This function can be called only once and you can not call #value.set after
 * that.
 *
 * @param[in] err The reason for failure of this promise.
 *
 * @ingroup Efl_Promise
 */
EOAPI void efl_promise_failed_set(Eo *obj, Eina_Error err);

/**
 * @brief Connects a future output to this promise.
 *
 * This helper will automatically trigger #value.set or #failed.set when the
 * future succeed or fail respectively with the value provided by the future.
 *
 * @param[in] f The future to connect this promise to.
 *
 * @return Returns @c false if unable to setup the connection.
 *
 * @ingroup Efl_Promise
 */
EOAPI Eina_Bool efl_promise_connect(Eo *obj, Efl_Future *f);

EWAPI extern const Efl_Event_Description _EFL_PROMISE_EVENT_FUTURE_SET;

/** This event is triggered whenever a future is fully set to receive all
 * events and that the user of it do not hold any more reference on it.
 * @return Efl_Future *
 *
 * @ingroup Efl_Promise
 */
#define EFL_PROMISE_EVENT_FUTURE_SET (&(_EFL_PROMISE_EVENT_FUTURE_SET))

EWAPI extern const Efl_Event_Description _EFL_PROMISE_EVENT_FUTURE_PROGRESS_SET;

/** This event is triggered whenever a future has a progress callback
 * registered and the user does not hold any more reference on it.
 * @return Efl_Future *
 *
 * @ingroup Efl_Promise
 */
#define EFL_PROMISE_EVENT_FUTURE_PROGRESS_SET (&(_EFL_PROMISE_EVENT_FUTURE_PROGRESS_SET))

EWAPI extern const Efl_Event_Description _EFL_PROMISE_EVENT_FUTURE_NONE;

/** This event is triggered whenever there is no more future connected to the
 * promise.
 *
 * @ingroup Efl_Promise
 */
#define EFL_PROMISE_EVENT_FUTURE_NONE (&(_EFL_PROMISE_EVENT_FUTURE_NONE))

#endif
