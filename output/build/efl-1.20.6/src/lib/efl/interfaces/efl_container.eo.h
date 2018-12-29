#ifndef _EFL_CONTAINER_EO_H_
#define _EFL_CONTAINER_EO_H_

#ifndef _EFL_CONTAINER_EO_CLASS_TYPE
#define _EFL_CONTAINER_EO_CLASS_TYPE

typedef Eo Efl_Container;

#endif

#ifndef _EFL_CONTAINER_EO_TYPES
#define _EFL_CONTAINER_EO_TYPES


#endif
/** API common to all UI container objects.
 *
 * @ingroup Efl_Container
 */
#define EFL_CONTAINER_INTERFACE efl_container_interface_get()

EWAPI const Efl_Class *efl_container_interface_get(void);

/**
 * @brief Swallowed sub-object contained in this object.
 *
 * @param[in] content The object to swallow.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Container
 */
EOAPI Eina_Bool efl_content_set(Eo *obj, Efl_Gfx *content);

/**
 * @brief Swallowed sub-object contained in this object.
 *
 * @return The object to swallow.
 *
 * @ingroup Efl_Container
 */
EOAPI Efl_Gfx *efl_content_get(const Eo *obj);

/**
 * @brief Unswallow the object in the current container and return it.
 *
 * @return Unswallowed object
 *
 * @ingroup Efl_Container
 */
EOAPI Efl_Gfx *efl_content_unset(Eo *obj);

/**
 * @brief Unswallow an object from this container.
 *
 * @param[in] content To be removed content
 *
 * @return @c false if @c content was not a child or can not be removed.
 *
 * @ingroup Efl_Container
 */
EOAPI Eina_Bool efl_content_remove(Eo *obj, Efl_Gfx *content);

/**
 * @brief Begin iterating over this object's contents.
 *
 * @return Iterator to object content
 *
 * @ingroup Efl_Container
 */
EOAPI Eina_Iterator *efl_content_iterate(Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Returns the number of UI elements packed in this container.
 *
 * @return Number of packed UI elements
 *
 * @ingroup Efl_Container
 */
EOAPI int efl_content_count(Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_CONTAINER_EVENT_CONTENT_ADDED;

/** Sent after a new item was added.
 * @return Efl_Gfx *
 *
 * @ingroup Efl_Container
 */
#define EFL_CONTAINER_EVENT_CONTENT_ADDED (&(_EFL_CONTAINER_EVENT_CONTENT_ADDED))

EWAPI extern const Efl_Event_Description _EFL_CONTAINER_EVENT_CONTENT_REMOVED;

/** Sent after an item was removed, before unref.
 * @return Efl_Gfx *
 *
 * @ingroup Efl_Container
 */
#define EFL_CONTAINER_EVENT_CONTENT_REMOVED (&(_EFL_CONTAINER_EVENT_CONTENT_REMOVED))

#endif
