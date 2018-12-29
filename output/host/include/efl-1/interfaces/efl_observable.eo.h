#ifndef _EFL_OBSERVABLE_EO_H_
#define _EFL_OBSERVABLE_EO_H_

#ifndef _EFL_OBSERVABLE_EO_CLASS_TYPE
#define _EFL_OBSERVABLE_EO_CLASS_TYPE

typedef Eo Efl_Observable;

#endif

#ifndef _EFL_OBSERVABLE_EO_TYPES
#define _EFL_OBSERVABLE_EO_TYPES


#endif
/** Efl observable class
 *
 * @ingroup Efl_Observable
 */
#define EFL_OBSERVABLE_CLASS efl_observable_class_get()

EWAPI const Efl_Class *efl_observable_class_get(void);

/**
 * @brief Add an observer to a group of observers.
 *
 * @note Observers that observe this observable are grouped by the @c key and
 * an observer can belong to multiple groups at the same time.
 *
 * @param[in] key A key to classify observer groups
 * @param[in] obs An observer object
 *
 * @since 1.19
 *
 * @ingroup Efl_Observable
 */
EOAPI void efl_observable_observer_add(Eo *obj, const char *key, Efl_Observer *obs);

/**
 * @brief Delete an observer from a group of observers.
 *
 * See also @ref efl_observable_observer_add().
 *
 * @param[in] key A key to classify observer groups
 * @param[in] obs An observer object
 *
 * @since 1.19
 *
 * @ingroup Efl_Observable
 */
EOAPI void efl_observable_observer_del(Eo *obj, const char *key, Efl_Observer *obs);

/**
 * @brief Clear an observer from all groups of observers.
 *
 * @param[in] obs An observer object
 *
 * @since 1.19
 *
 * @ingroup Efl_Observable
 */
EOAPI void efl_observable_observer_clean(Eo *obj, Efl_Observer *obs);

/**
 * @brief Return a new iterator associated with a group of observers.
 *
 * @param[in] key A key to classify observer groups
 *
 * @return Iterator for observers group
 *
 * @since 1.19
 *
 * @ingroup Efl_Observable
 */
EOAPI Eina_Iterator *efl_observable_observers_iterator_new(Eo *obj, const char *key);

/**
 * @brief Update all observers in a group by calling their update() method.
 *
 * @param[in] key A key to classify observer groups
 * @param[in] data Required data to update observer
 *
 * @since 1.19
 *
 * @ingroup Efl_Observable
 */
EOAPI void efl_observable_observers_update(Eo *obj, const char *key, void *data);

/**
 * @brief Return a new iterator associated to this observable.
 *
 * @return Iterator for observer
 *
 * @since 1.19
 *
 * @ingroup Efl_Observable
 */
EOAPI Eina_Iterator *efl_observable_iterator_tuple_new(Eo *obj);

#endif
