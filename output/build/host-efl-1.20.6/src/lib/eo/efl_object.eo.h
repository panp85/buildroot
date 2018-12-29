#ifndef _EFL_OBJECT_EO_H_
#define _EFL_OBJECT_EO_H_

#ifndef _EFL_OBJECT_EO_CLASS_TYPE
#define _EFL_OBJECT_EO_CLASS_TYPE

typedef Eo Efl_Object;

#endif

#ifndef _EFL_OBJECT_EO_TYPES
#define _EFL_OBJECT_EO_TYPES

/** This struct holds the description of a specific event.
 *
 * @ingroup Efl_Event
 */
typedef struct _Efl_Event_Description
{
  const char *name; /**< name of the event. */
  Eina_Bool unfreezable; /**< @c true if the event cannot be frozen. */
  Eina_Bool legacy_is; /**< Internal use: @c true if a legacy event. */
  Eina_Bool restart; /**< @c true if when the event is triggered again from a
                      * callback, it should start from where it was */
} Efl_Event_Description;


#endif
/** Abstract Efl object class
 *
 * @ingroup Efl_Object
 */
#define EFL_OBJECT_CLASS efl_object_class_get()

EWAPI const Efl_Class *efl_object_class_get(void);

/**
 * @brief The parent of an object.
 *
 * Parents keep references to their children so in order to delete objects that
 * have parents you need to set parent to NULL or use efl_del() that does that
 * for you (and also unrefs the object).
 *
 * The Eo parent is conceptually user set. That means that a parent should not
 * be changed behind the scenes in a surprising manner.
 *
 * For example: if you have a widget that has a box internally, and when you
 * swallow into that widget the object you swallow ends up in the box, the
 * parent should be the widget, and not the box.
 *
 * @param[in] parent The new parent
 *
 * @ingroup Efl_Object
 */
EOAPI void efl_parent_set(Eo *obj, Efl_Object *parent);

/**
 * @brief The parent of an object.
 *
 * Parents keep references to their children so in order to delete objects that
 * have parents you need to set parent to NULL or use efl_del() that does that
 * for you (and also unrefs the object).
 *
 * The Eo parent is conceptually user set. That means that a parent should not
 * be changed behind the scenes in a surprising manner.
 *
 * For example: if you have a widget that has a box internally, and when you
 * swallow into that widget the object you swallow ends up in the box, the
 * parent should be the widget, and not the box.
 *
 * @return The new parent
 *
 * @ingroup Efl_Object
 */
EOAPI Efl_Object *efl_parent_get(const Eo *obj);

/**
 * @brief Unrefs the object and reparents it to NULL.
 *
 * Because efl_del() unrefs and reparents to NULL, it doesn't really delete the
 * object.
 *
 * This method accepts a const object for convenience, so all objects could be
 * passed to it easily.
 *
 * @ingroup Efl_Object
 */
EOAPI void efl_del(const Eo *obj);

/**
 * @brief The name of the object.
 *
 * Every object can have a string name. Names may not contain the following
 * charactors: / ? * [ ] ! \ : They are illegal. Using it in a name will result
 * in undefined behavior later on. An empty string is considered the same as a
 * NULL string or no string for the name at all.
 *
 * @param[in] name The name
 *
 * @ingroup Efl_Object
 */
EOAPI void efl_name_set(Eo *obj, const char *name);

/**
 * @brief The name of the object.
 *
 * Every object can have a string name. Names may not contain the following
 * charactors: / ? * [ ] ! \ : They are illegal. Using it in a name will result
 * in undefined behavior later on. An empty string is considered the same as a
 * NULL string or no string for the name at all.
 *
 * @return The name
 *
 * @ingroup Efl_Object
 */
EOAPI const char *efl_name_get(const Eo *obj);

/**
 * @brief A human readable comment for the object
 *
 * Every object can have a string comment intended for developers and
 * debugging. An empty string is considered the same as a NULL string or no
 * string for the comment at all.
 *
 * @param[in] comment The comment
 *
 * @ingroup Efl_Object
 */
EOAPI void efl_comment_set(Eo *obj, const char *comment);

/**
 * @brief A human readable comment for the object
 *
 * Every object can have a string comment intended for developers and
 * debugging. An empty string is considered the same as a NULL string or no
 * string for the comment at all.
 *
 * @return The comment
 *
 * @ingroup Efl_Object
 */
EOAPI const char *efl_comment_get(const Eo *obj);

/**
 * @brief Return freeze events of object.
 *
 * Return event freeze count.
 *
 * @return The event freeze count of the object
 *
 * @ingroup Efl_Object
 */
EOAPI int efl_event_global_freeze_count_get(const Eo *obj);

/**
 * @brief Return freeze events of object.
 *
 * Return event freeze count.
 *
 * @return The event freeze count of the object
 *
 * @ingroup Efl_Object
 */
EOAPI int efl_event_freeze_count_get(const Eo *obj);

/**
 * @brief True if the object is already finalized, false otherwise.
 *
 * @return @c true if the object is finalized, @c false otherwise
 *
 * @ingroup Efl_Object
 */
EOAPI Eina_Bool efl_finalized_get(const Eo *obj);

/**
 * @brief Searches up in the object tree for a provider which knows the given
 * class/interface.
 *
 * The object from the provider will then be returned. The base implementation
 * calls the provider_find function on the object parent, and returns its
 * result. If no parent is present NULL is returned. Each implementation has to
 * support this function by overriding it and returning itself if the interface
 * matches the parameter. If this is not done the class cannot be found up in
 * the object tree.
 *
 * @param[in] klass The class identifier to search for
 *
 * @return Object from the provider list
 *
 * @ingroup Efl_Object
 */
EOAPI Efl_Object *efl_provider_find(Eo *obj, const Efl_Object *klass);

/**
 * @brief Call the object's constructor.
 *
 * Should not be used with #eo_do. Only use it with #eo_do_super.
 *
 * @return The new object created, can be NULL if aborting
 *
 * @ingroup Efl_Object
 */
EOAPI Efl_Object *efl_constructor(Eo *obj);

/**
 * @brief Call the object's destructor.
 *
 * Should not be used with #eo_do. Only use it with #eo_do_super.
 *
 * @ingroup Efl_Object
 */
EOAPI void efl_destructor(Eo *obj);

/**
 * @brief Called at the end of #eo_add. Should not be called, just overridden.
 *
 * @return The new object created, can be NULL if aborting
 *
 * @ingroup Efl_Object
 */
EOAPI Efl_Object *efl_finalize(Eo *obj);

/**
 * @brief Find a child object with the given name and return it. The search
 * string can be a glob (shell style). It can also specify class name in the
 * format of "class:name" where ":" separates class and name. Both class and
 * name can be globs. If class is specified, and name is empty like "class:"
 * then the search will match any object of that class.
 *
 * @param[in] search The name search string
 *
 * @return The first object found
 *
 * @ingroup Efl_Object
 */
EOAPI Efl_Object *efl_name_find(Eo *obj, const char *search);

/**
 * @brief Thaw events of object.
 *
 * Lets event callbacks be called for the object.
 *
 * @ingroup Efl_Object
 */
EOAPI void efl_event_thaw(Eo *obj);

/**
 * @brief Freeze events of object.
 *
 * Prevents event callbacks from being called for the object.
 *
 * @ingroup Efl_Object
 */
EOAPI void efl_event_freeze(Eo *obj);

/**
 * @brief Thaw events of object.
 *
 * Lets event callbacks be called for the object.
 *
 * @ingroup Efl_Object
 */
EOAPI void efl_event_global_thaw(const Eo *obj);

/**
 * @brief Freeze events of object.
 *
 * Prevents event callbacks from being called for the object.
 *
 * @ingroup Efl_Object
 */
EOAPI void efl_event_global_freeze(const Eo *obj);

/**
 * @brief Stop the current callback call.
 *
 * This stops the current callback call. Any other callbacks for the current
 * event will not be called. This is useful when you want to filter out events.
 * You just add higher priority events and call this on certain conditions to
 * block a certain event.
 *
 * @ingroup Efl_Object
 */
EOAPI void efl_event_callback_stop(Eo *obj);

/**
 * @brief Add an event callback forwarder for an event and an object.
 *
 * @param[in] desc The description of the event to listen to
 * @param[in] new_obj The object to emit events from
 *
 * @ingroup Efl_Object
 */
EOAPI void efl_event_callback_forwarder_add(Eo *obj, const Efl_Event_Description *desc, Efl_Object *new_obj);

/**
 * @brief Remove an event callback forwarder for an event and an object.
 *
 * @param[in] desc The description of the event to listen to
 * @param[in] new_obj The object to emit events from
 *
 * @ingroup Efl_Object
 */
EOAPI void efl_event_callback_forwarder_del(Eo *obj, const Efl_Event_Description *desc, Efl_Object *new_obj);

/**
 * @brief Get an iterator on all childrens
 *
 * @return Children iterator
 *
 * @ingroup Efl_Object
 */
EOAPI Eina_Iterator *efl_children_iterator_new(Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Make an object a composite object of another.
 *
 * The class of comp_obj must be part of the extensions of the class of the
 * parent. It is not possible to attach more then 1 composite of the same
 * class. This functions also sets the parent of comp_obj to parent.
 *
 * See @ref efl_composite_detach, @ref efl_composite_part_is.
 *
 * @param[in] comp_obj the object that will be used to composite the parent.
 *
 * @return @c true if successful. @c false otherwise.
 *
 * @ingroup Efl_Object
 */
EOAPI Eina_Bool efl_composite_attach(Eo *obj, Efl_Object *comp_obj);

/**
 * @brief Detach a composite object from another object.
 *
 * This functions also sets the parent of comp_obj to @c null.
 *
 * See @ref efl_composite_attach, @ref efl_composite_part_is.
 *
 * @param[in] comp_obj The object that will be removed from the parent.
 *
 * @return @c true if successful. @c false otherwise.
 *
 * @ingroup Efl_Object
 */
EOAPI Eina_Bool efl_composite_detach(Eo *obj, Efl_Object *comp_obj);

/**
 * @brief Check if an object is part of a composite object.
 *
 * See @ref efl_composite_attach, @ref efl_composite_part_is.
 *
 * @return @c true if it is. @c false otherwise.
 *
 * @ingroup Efl_Object
 */
EOAPI Eina_Bool efl_composite_part_is(Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_EVENT_CALLBACK_ADD;

/** A callback was added.
 *
 * @ingroup Efl_Object
 */
#define EFL_EVENT_CALLBACK_ADD (&(_EFL_EVENT_CALLBACK_ADD))

EWAPI extern const Efl_Event_Description _EFL_EVENT_CALLBACK_DEL;

/** A callback was deleted.
 *
 * @ingroup Efl_Object
 */
#define EFL_EVENT_CALLBACK_DEL (&(_EFL_EVENT_CALLBACK_DEL))

EWAPI extern const Efl_Event_Description _EFL_EVENT_DEL;

/** Object is being deleted.
 *
 * @ingroup Efl_Object
 */
#define EFL_EVENT_DEL (&(_EFL_EVENT_DEL))

#endif
