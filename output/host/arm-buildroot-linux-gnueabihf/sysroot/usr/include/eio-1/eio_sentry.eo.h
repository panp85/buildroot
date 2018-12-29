#ifndef _EIO_SENTRY_EO_H_
#define _EIO_SENTRY_EO_H_

#ifndef _EIO_SENTRY_EO_CLASS_TYPE
#define _EIO_SENTRY_EO_CLASS_TYPE

typedef Eo Eio_Sentry;

#endif

#ifndef _EIO_SENTRY_EO_TYPES
#define _EIO_SENTRY_EO_TYPES

/** Wraps the data about a monitor event on a file.
 *
 * @ingroup Eio_Sentry
 */
typedef struct _Eio_Sentry_Event
{
  const char *trigger; /**< The cause of the event. */
  const char *source; /**< The original monitored path. */
} Eio_Sentry_Event;


#endif
/** Monitors files and directories for changes.
 *
 * @ingroup Eio_Sentry
 */
#define EIO_SENTRY_CLASS eio_sentry_class_get()

EWAPI const Efl_Class *eio_sentry_class_get(void);

/**
 * @brief Adds a new path to the list of monitored paths.
 *
 * @param[in] path Path to monitor
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Eio_Sentry
 */
EOAPI Eina_Bool eio_sentry_add(Eo *obj, const char *path);

/**
 * @brief Removes the given path from the monitored list.
 *
 * @param[in] path Path to remove from monitoring
 *
 * @ingroup Eio_Sentry
 */
EOAPI void eio_sentry_del(Eo *obj, const char *path);

EWAPI extern const Efl_Event_Description _EIO_SENTRY_EVENT_FILE_CREATED;

/** Called when a file was created
 * @return Eio_Sentry_Event
 *
 * @ingroup Eio_Sentry
 */
#define EIO_SENTRY_EVENT_FILE_CREATED (&(_EIO_SENTRY_EVENT_FILE_CREATED))

EWAPI extern const Efl_Event_Description _EIO_SENTRY_EVENT_FILE_DELETED;

/** Called when a file was deleted
 * @return Eio_Sentry_Event
 *
 * @ingroup Eio_Sentry
 */
#define EIO_SENTRY_EVENT_FILE_DELETED (&(_EIO_SENTRY_EVENT_FILE_DELETED))

EWAPI extern const Efl_Event_Description _EIO_SENTRY_EVENT_FILE_MODIFIED;

/** Called when a file was modified
 * @return Eio_Sentry_Event
 *
 * @ingroup Eio_Sentry
 */
#define EIO_SENTRY_EVENT_FILE_MODIFIED (&(_EIO_SENTRY_EVENT_FILE_MODIFIED))

EWAPI extern const Efl_Event_Description _EIO_SENTRY_EVENT_FILE_CLOSED;

/** Called when a file was closed
 * @return Eio_Sentry_Event
 *
 * @ingroup Eio_Sentry
 */
#define EIO_SENTRY_EVENT_FILE_CLOSED (&(_EIO_SENTRY_EVENT_FILE_CLOSED))

EWAPI extern const Efl_Event_Description _EIO_SENTRY_EVENT_DIRECTORY_CREATED;

/** Called when a directory was created
 * @return Eio_Sentry_Event
 *
 * @ingroup Eio_Sentry
 */
#define EIO_SENTRY_EVENT_DIRECTORY_CREATED (&(_EIO_SENTRY_EVENT_DIRECTORY_CREATED))

EWAPI extern const Efl_Event_Description _EIO_SENTRY_EVENT_DIRECTORY_DELETED;

/** Called when a directory was deleted
 * @return Eio_Sentry_Event
 *
 * @ingroup Eio_Sentry
 */
#define EIO_SENTRY_EVENT_DIRECTORY_DELETED (&(_EIO_SENTRY_EVENT_DIRECTORY_DELETED))

EWAPI extern const Efl_Event_Description _EIO_SENTRY_EVENT_DIRECTORY_MODIFIED;

/** called when a directory was modified
 * @return Eio_Sentry_Event
 *
 * @ingroup Eio_Sentry
 */
#define EIO_SENTRY_EVENT_DIRECTORY_MODIFIED (&(_EIO_SENTRY_EVENT_DIRECTORY_MODIFIED))

EWAPI extern const Efl_Event_Description _EIO_SENTRY_EVENT_DIRECTORY_CLOSED;

/** Called when a directory was closed
 * @return Eio_Sentry_Event
 *
 * @ingroup Eio_Sentry
 */
#define EIO_SENTRY_EVENT_DIRECTORY_CLOSED (&(_EIO_SENTRY_EVENT_DIRECTORY_CLOSED))

EWAPI extern const Efl_Event_Description _EIO_SENTRY_EVENT_SELF_RENAME;

/** Called when the object was renamed
 * @return Eio_Sentry_Event
 *
 * @ingroup Eio_Sentry
 */
#define EIO_SENTRY_EVENT_SELF_RENAME (&(_EIO_SENTRY_EVENT_SELF_RENAME))

EWAPI extern const Efl_Event_Description _EIO_SENTRY_EVENT_SELF_DELETED;

/** Called when the object was deleted
 * @return Eio_Sentry_Event
 *
 * @ingroup Eio_Sentry
 */
#define EIO_SENTRY_EVENT_SELF_DELETED (&(_EIO_SENTRY_EVENT_SELF_DELETED))

EWAPI extern const Efl_Event_Description _EIO_SENTRY_EVENT_ERROR;

/** Called in case of an error
 * @return Eio_Sentry_Event
 *
 * @ingroup Eio_Sentry
 */
#define EIO_SENTRY_EVENT_ERROR (&(_EIO_SENTRY_EVENT_ERROR))

#endif
