#ifndef _EFL_MODEL_EO_H_
#define _EFL_MODEL_EO_H_

#ifndef _EFL_MODEL_EO_CLASS_TYPE
#define _EFL_MODEL_EO_CLASS_TYPE

typedef Eo Efl_Model;

#endif

#ifndef _EFL_MODEL_EO_TYPES
#define _EFL_MODEL_EO_TYPES

/** EFL model property event data structure
 *
 * @ingroup Efl_Model
 */
typedef struct _Efl_Model_Property_Event
{
  Eina_Array *changed_properties; /**< List of changed properties */
  Eina_Array *invalidated_properties; /**< Removed properties identified by name
                                       */
} Efl_Model_Property_Event;


#endif
/** Efl model interface
 *
 * @ingroup Efl_Model
 */
#define EFL_MODEL_INTERFACE efl_model_interface_get()

EWAPI const Efl_Class *efl_model_interface_get(void);

/**
 * @brief Get properties from model.
 *
 * properties_get is due to provide callers a way the fetch the current
 * properties implemented/used by the model. The event
 * EFL_MODEL_EVENT_PROPERTIES_CHANGED will be raised to notify listeners of any
 * modifications in the properties.
 *
 * See also @ref EFL_MODEL_EVENT_PROPERTIES_CHANGED.
 *
 * @return Array of current properties
 *
 * @since 1.14
 *
 * @ingroup Efl_Model
 */
EOAPI const Eina_Array *efl_model_properties_get(const Eo *obj);

/**
 * @brief Set a property value of a given property name.
 *
 * The caller must ensure to call at least efl_model_prop_list before being
 * able to see/set properties. This function sets a new property value into
 * given property name. Once the operation is completed the concrete
 * implementation should raise EFL_MODEL_EVENT_PROPERTIES_CHANGED event in
 * order to notify listeners of the new value of the property.
 *
 * If the model doesn't have the property then there are two possibilities,
 * either raise an error or create the new property in model
 *
 * See @ref efl_model_property_get, @ref EFL_MODEL_EVENT_PROPERTIES_CHANGED
 *
 * @param[in] property Property name
 * @param[in] value New value
 *
 * @return Future returning the recorded value or error
 *
 * @since 1.14
 *
 * @ingroup Efl_Model
 */
EOAPI Efl_Future *efl_model_property_set(Eo *obj, const char *property, const Eina_Value *value);

/**
 * @brief Retrieve the value of a given property name.
 *
 * At this point the caller is free to get values from properties. The event
 * EFL_MODEL_EVENT_PROPERTIES_CHANGED may be raised to notify listeners of the
 * property/value.
 *
 * See @ref efl_model_properties_get, @ref EFL_MODEL_EVENT_PROPERTIES_CHANGED
 *
 * @param[in] property Property name
 *
 * @return Future of the value that was got
 *
 * @since 1.14
 *
 * @ingroup Efl_Model
 */
EOAPI Efl_Future *efl_model_property_get(Eo *obj, const char *property);

/**
 * @brief Get children slice OR full range.
 *
 * children_slice_get behaves in two different ways, it may provide the slice
 * if both @c start AND @c count are non-zero OR full range otherwise.
 *
 * Since 'slice' is a range, for example if we have 20 childs a slice could be
 * the range from 3(start) to 4(count), see:
 *
 * child 0  [no] child 1  [no] child 2  [yes] child 3  [yes] child 4  [yes]
 * child 5  [yes] child 6  [no] child 7  [no]
 *
 * Optionally the user can call children_count_get to know the number of
 * children so a valid range can be known in advance.
 *
 * See @ref efl_model_children_count_get
 *
 * @param[in] start Range begin - start from here. If start and count are 0
 * slice is ignored.
 * @param[in] count Range size. If count and start are 0 slice is ignored.
 *
 * @return Future of the children
 *
 * @since 1.14
 *
 * @ingroup Efl_Model
 */
EOAPI Efl_Future *efl_model_children_slice_get(Eo *obj, unsigned int start, unsigned int count);

/**
 * @brief Get children count.
 *
 * When efl_model_load is completed efl_model_coildren_count_get can be use to
 * get the number of children. children_count_get can also be used before
 * calling children_slice_get so a valid range is known. Event
 * EFL_MODEL_CHILDREN_COUNT_CHANGED is emitted when count is finished.
 *
 * See also @ref efl_model_children_slice_get.
 *
 * @return Future of the children count
 *
 * @since 1.14
 *
 * @ingroup Efl_Model
 */
EOAPI Efl_Future *efl_model_children_count_get(Eo *obj);

/**
 * @brief Add a new child.
 *
 * Add a new child, possibly dummy, depending on the implementation, of a
 * internal keeping. When the child is effectively added the event @ref
 * EFL_MODEL_EVENT_CHILD_ADDED is then raised and the new child is kept along
 * with other children.
 *
 * @return Child object
 *
 * @since 1.14
 *
 * @ingroup Efl_Model
 */
EOAPI Efl_Object *efl_model_child_add(Eo *obj);

/**
 * @brief Remove a child.
 *
 * Remove a child of a internal keeping. When the child is effectively removed
 * the event @ref EFL_MODEL_EVENT_CHILD_REMOVED is then raised to give a chance
 * for listeners to perform any cleanup and/or update references.
 *
 * @param[in] child Child to be removed
 *
 * @since 1.14
 *
 * @ingroup Efl_Model
 */
EOAPI void efl_model_child_del(Eo *obj, Efl_Object *child);

EWAPI extern const Efl_Event_Description _EFL_MODEL_EVENT_PROPERTIES_CHANGED;

/** Event dispatched when properties list is available.
 * @return Efl_Model_Property_Event
 *
 * @ingroup Efl_Model
 */
#define EFL_MODEL_EVENT_PROPERTIES_CHANGED (&(_EFL_MODEL_EVENT_PROPERTIES_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_MODEL_EVENT_CHILD_ADDED;

/** Event dispatched when new child is added.
 * @return Efl_Object *
 *
 * @ingroup Efl_Model
 */
#define EFL_MODEL_EVENT_CHILD_ADDED (&(_EFL_MODEL_EVENT_CHILD_ADDED))

EWAPI extern const Efl_Event_Description _EFL_MODEL_EVENT_CHILD_REMOVED;

/** Event dispatched when child is removed.
 * @return Efl_Object *
 *
 * @ingroup Efl_Model
 */
#define EFL_MODEL_EVENT_CHILD_REMOVED (&(_EFL_MODEL_EVENT_CHILD_REMOVED))

EWAPI extern const Efl_Event_Description _EFL_MODEL_EVENT_CHILDREN_COUNT_CHANGED;

/** Event dispatched when children count is finished.
 *
 * @ingroup Efl_Model
 */
#define EFL_MODEL_EVENT_CHILDREN_COUNT_CHANGED (&(_EFL_MODEL_EVENT_CHILDREN_COUNT_CHANGED))

#endif
