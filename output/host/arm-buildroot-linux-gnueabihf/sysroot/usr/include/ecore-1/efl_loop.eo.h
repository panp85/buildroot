#ifndef _EFL_LOOP_EO_H_
#define _EFL_LOOP_EO_H_

#ifndef _EFL_LOOP_EO_CLASS_TYPE
#define _EFL_LOOP_EO_CLASS_TYPE

typedef Eo Efl_Loop;

#endif

#ifndef _EFL_LOOP_EO_TYPES
#define _EFL_LOOP_EO_TYPES

/** EFL loop arguments data structure
 *
 * @ingroup Efl_Loop
 */
typedef struct _Efl_Loop_Arguments
{
  const Eina_Array *argv; /**< Array with loop arguments */
  Eina_Bool initialization; /**< Set to @c true when the program should
                             * initialize its internal state. This happen once
                             * per process instance. */
} Efl_Loop_Arguments;


#endif
/**
 * @brief The Efl Main Loop
 *
 * Efl main loop provide a clean and tiny event loop library with many modules
 * to do lots of convenient things for a programmer, to save time and effort.
 * It's small and lean, designed to work from embedded systems all the way up
 * to large and powerful multi-cpu workstations. The main loop has a number of
 * primitives to be used with its main loop. It serializes all the primitives
 * and allows for great responsiveness without the need for threads (or any
 * other concurrency), but provide them if you need to.
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_CLASS efl_loop_class_get()

EWAPI const Efl_Class *efl_loop_class_get(void);

/**
 * @brief Points to the main loop instance of the application.
 *
 * @return Application main loop
 *
 * @ingroup Efl_Loop
 */
EOAPI Efl_Loop *efl_loop_main_get(const Eo *obj);

/**
 * @brief Indicates the version of EFL with which this application was
 * compiled.
 *
 * This might differ from @ref efl_loop_efl_version_get.
 *
 * @return Efl version
 *
 * @ingroup Efl_Loop
 */
EOAPI const Efl_Version *efl_loop_app_efl_version_get(const Eo *obj);

/**
 * @brief Indicates the currently running version of EFL.
 *
 * This might differ from @ref efl_loop_app_efl_version_get.
 *
 * @return Efl version
 *
 * @ingroup Efl_Loop
 */
EOAPI const Efl_Version *efl_loop_efl_version_get(const Eo *obj);

/** Runs a single iteration of the main loop to process everything on the
 * queue.
 *
 * @ingroup Efl_Loop
 */
EOAPI void efl_loop_iterate(Eo *obj);

/**
 * @brief Runs a single iteration of the main loop to process everything on the
 * queue with block/non-blocking status.
 *
 * @param[in] may_block A flag if the main loop has a possibility of blocking.
 *
 * @return Return from single iteration run
 *
 * @ingroup Efl_Loop
 */
EOAPI int efl_loop_iterate_may_block(Eo *obj, int may_block);

/**
 * @brief Runs the application main loop.
 *
 * @return Value set by quit()
 *
 * @ingroup Efl_Loop
 */
EOAPI unsigned char efl_loop_begin(Eo *obj);

/**
 * @brief Quits the main loop once all the events currently on the queue have
 * been processed.
 *
 * @param[in] exit_code Returned value by begin()
 *
 * @ingroup Efl_Loop
 */
EOAPI void efl_loop_quit(Eo *obj, unsigned char exit_code);

/**
 * @brief Will execute that promise in the near future.
 *
 * @param[in] data The data to be given when the promise is done.
 *
 * @return The promise that will be triggered.
 *
 * @ingroup Efl_Loop
 */
EOAPI Efl_Future *efl_loop_job(Eo *obj, const void *data);

/**
 * @brief Will trigger this promise when the specified timeout occur.
 *
 * @param[in] time The time from now in second that the main loop will wait
 * before triggering it.
 * @param[in] data The data to be given when the promise is done.
 *
 * @return The promise that will be triggered.
 *
 * @ingroup Efl_Loop
 */
EOAPI Efl_Future *efl_loop_timeout(Eo *obj, double time, const void *data);

/**
 * @brief Will register a manager of a specific class to be answered by
 * eo.provider_find.
 *
 * @param[in] klass The class provided by the registered provider.
 * @param[in] provider The provider for the newly registered class that has to
 * provide that said Efl.Class.
 *
 * @return @c true if successfully register, @c false otherwise.
 *
 * @ingroup Efl_Loop
 */
EOAPI Eina_Bool efl_loop_register(Eo *obj, const Efl_Class *klass, const Efl_Object *provider);

/**
 * @brief Will unregister a manager of a specific class that was previously
 * registered and answered by eo.provider_find.
 *
 * @param[in] klass The class provided by the provider to unregister for.
 * @param[in] provider The provider for the registered class to unregister.
 *
 * @return @c true if successfully unregistered, @c false otherwise.
 *
 * @ingroup Efl_Loop
 */
EOAPI Eina_Bool efl_loop_unregister(Eo *obj, const Efl_Class *klass, const Efl_Object *provider);

EWAPI extern const Efl_Event_Description _EFL_LOOP_EVENT_IDLE_ENTER;

/** Event occurs once the main loop enters the idle state.
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_EVENT_IDLE_ENTER (&(_EFL_LOOP_EVENT_IDLE_ENTER))

EWAPI extern const Efl_Event_Description _EFL_LOOP_EVENT_IDLE_EXIT;

/** Event occurs once the main loop exits the idle state.
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_EVENT_IDLE_EXIT (&(_EFL_LOOP_EVENT_IDLE_EXIT))

EWAPI extern const Efl_Event_Description _EFL_LOOP_EVENT_IDLE;

/** Event occurs once the main loop is idler. Be carefull, this will spin your
 * CPU high if you keep listening on this event.
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_EVENT_IDLE (&(_EFL_LOOP_EVENT_IDLE))

EWAPI extern const Efl_Event_Description _EFL_LOOP_EVENT_ARGUMENTS;

/** Event happens when args are provided to the loop by args_add().
 * @return Efl_Loop_Arguments
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_EVENT_ARGUMENTS (&(_EFL_LOOP_EVENT_ARGUMENTS))

EWAPI extern const Efl_Event_Description _EFL_LOOP_EVENT_POLL_HIGH;

/** Event occurs multiple time per second. The exact tick is undefined and
 * could be adjusted system wide.
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_EVENT_POLL_HIGH (&(_EFL_LOOP_EVENT_POLL_HIGH))

EWAPI extern const Efl_Event_Description _EFL_LOOP_EVENT_POLL_MEDIUM;

/** Event occurs multiple time per minute. The exact tick is undefined and
 * could be adjusted system wide.
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_EVENT_POLL_MEDIUM (&(_EFL_LOOP_EVENT_POLL_MEDIUM))

EWAPI extern const Efl_Event_Description _EFL_LOOP_EVENT_POLL_LOW;

/** Event occurs multiple time every 15 minutes. The exact tick is undefined
 * and could be adjusted system wide.
 *
 * @ingroup Efl_Loop
 */
#define EFL_LOOP_EVENT_POLL_LOW (&(_EFL_LOOP_EVENT_POLL_LOW))

#endif
