#ifndef _EFL_IO_QUEUE_EO_H_
#define _EFL_IO_QUEUE_EO_H_

#ifndef _EFL_IO_QUEUE_EO_CLASS_TYPE
#define _EFL_IO_QUEUE_EO_CLASS_TYPE

typedef Eo Efl_Io_Queue;

#endif

#ifndef _EFL_IO_QUEUE_EO_TYPES
#define _EFL_IO_QUEUE_EO_TYPES


#endif
/**
 * @brief Generic In-memory queue of data to be used as I/O.
 *
 * This class is to be used to receive temporary data using
 * @ref efl_io_writer_write and hold it until someone calls
 * @ref efl_io_reader_read to consume it.
 *
 * A fixed sized queue can be implemented by setting
 * @ref efl_io_queue_limit_get followed by @ref efl_io_queue_preallocate
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Queue
 */
#define EFL_IO_QUEUE_CLASS efl_io_queue_class_get()

EWAPI const Efl_Class *efl_io_queue_class_get(void);

/**
 * @brief Immediately pre-allocate a buffer of at least a given size.
 *
 * @param[in] size Amount of bytes to pre-allocate.
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Queue
 */
EOAPI void efl_io_queue_preallocate(Eo *obj, size_t size);

/**
 * @brief Limit how big the buffer can grow.
 *
 * This affects both @ref efl_io_queue_preallocate and how buffer grows when
 * @ref efl_io_writer_write is called.
 *
 * If you want a buffer of an exact size, always set the limit before any
 * further calls that can grow it.
 *
 * Constructor-only property to set buffer limit. 0 is unlimited
 *
 * @param[in] size Defines a maximum buffer size, or 0 to allow unlimited
 * amount of bytes
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Queue
 */
EOAPI void efl_io_queue_limit_set(Eo *obj, size_t size);

/**
 * @brief Limit how big the buffer can grow.
 *
 * This affects both @ref efl_io_queue_preallocate and how buffer grows when
 * @ref efl_io_writer_write is called.
 *
 * If you want a buffer of an exact size, always set the limit before any
 * further calls that can grow it.
 *
 * @return Defines a maximum buffer size, or 0 to allow unlimited amount of
 * bytes
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Queue
 */
EOAPI size_t efl_io_queue_limit_get(const Eo *obj);

/**
 * @brief How many bytes are available for read
 *
 * @return Bytes available to read
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Queue
 */
EOAPI size_t efl_io_queue_usage_get(const Eo *obj);

/**
 * @brief Get a temporary access to queue's internal read memory.
 *
 * The memory pointed by slice may be changed by other methods of this class.
 * The event "slice,changed" will be called in those situations.
 *
 * @return Slice of the current buffer, may be invalidated if
 * @ref efl_io_writer_write, @ref efl_io_closer_close or
 * @ref efl_io_reader_read are called. It is the full slice available for
 * reading.
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Queue
 */
EOAPI Eina_Slice efl_io_queue_slice_get(const Eo *obj);

/**
 * @brief Discard the given number of bytes.
 *
 * This has the same effect as reading and discarding the given amount of
 * bytes, without executing the actual copy.
 *
 * It's often paired with @ref efl_io_queue_slice_get, if users read the
 * information from the slice and once they're done, that data must be
 * discarded.
 *
 * As an example, some protocols provide messages with a "size" header, then
 * @ref efl_io_queue_slice_get is used to peek into the available memory to see
 * if there is a "size" and if the rest of the slice is the full payload, in
 * this case the slice may be handled to some processing function. When the
 * function is done, that amount of data must be discarded -- with this
 * function.
 *
 * @param[in] amount Bytes to discard
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Queue
 */
EOAPI void efl_io_queue_discard(Eo *obj, size_t amount);

/**
 * @brief Clear the queue. Same as reading all data.
 *
 * This is equivalent as calling @ref efl_io_queue_discard with
 * @ref efl_io_queue_usage_get amount of bytes.
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Queue
 */
EOAPI void efl_io_queue_clear(Eo *obj);

/**
 * @brief Mark this end-of-stream.
 *
 * That will set @ref efl_io_reader_eos_get to @c true and forbid any further
 * writes.
 *
 * Unlike @ref efl_io_closer_close, this won't clear anything.
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Queue
 */
EOAPI void efl_io_queue_eos_mark(Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_IO_QUEUE_EVENT_SLICE_CHANGED;

/** The read-slice returned by @ref efl_io_queue_slice_get may have changed.
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Queue
 */
#define EFL_IO_QUEUE_EVENT_SLICE_CHANGED (&(_EFL_IO_QUEUE_EVENT_SLICE_CHANGED))

#endif
