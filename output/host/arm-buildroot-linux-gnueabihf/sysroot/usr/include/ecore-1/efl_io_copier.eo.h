#ifndef _EFL_IO_COPIER_EO_H_
#define _EFL_IO_COPIER_EO_H_

#ifndef _EFL_IO_COPIER_EO_CLASS_TYPE
#define _EFL_IO_COPIER_EO_CLASS_TYPE

typedef Eo Efl_Io_Copier;

#endif

#ifndef _EFL_IO_COPIER_EO_TYPES
#define _EFL_IO_COPIER_EO_TYPES


#endif
/**
 * @brief Copy from an @ref Efl_Io_Reader source to @ref Efl_Io_Writer
 * destination.
 *
 * During usage it will keep reference to @ref efl_io_copier_source_get and
 * @ref efl_io_copier_destination_get objects, automatically relasing them on
 * destructor.
 *
 * By default the read-write process is done based on fixed-size chunks
 * (@Efl.Io.Copier.read_chunk_size), however if
 * @ref efl_io_copier_line_delimiter_get is set, the behavior changes to wait
 * for such delimiter or a maximum buffer limit is reached
 * (@Efl.Io.Copier.buffer_limit).
 *
 * While a @ref efl_io_copier_source_get is mandatory for the copier to operate
 * properly, the @ref efl_io_copier_destination_get is optional: if it's not
 * provided, all read data is stored in an internal buffer that can be
 * retrieved using @ref efl_io_copier_binbuf_steal, usually called when one of
 * "data", "line" or "done" events are emitted.
 *
 * Most important events:
 *
 * - The "data" event is general and notifies some data was written to
 * @ref efl_io_copier_destination_get (if any, otherwise it will be reported
 * for data when it's read from @ref efl_io_copier_source_get).
 *
 * - The "line" event is only emitted when
 * @ref efl_io_copier_line_delimiter_get is set and not empty. It's simiar to
 * "data".
 *
 * - The "done" event is emitted if @ref efl_io_copier_source_get is
 * @ref efl_io_reader_eos_get @c true and all data was written to
 * @ref efl_io_copier_destination_get (if any, otherwise it will be reported
 * when all data was read from @ref efl_io_copier_source_get).
 *
 * - The "error" event is reported if the @ref efl_io_reader_read,
 * @ref efl_io_writer_write or some other internal error happened, like out of
 * memory. Another common error is ETIMEDOUT if
 * @ref efl_io_copier_timeout_inactivity_get is set.
 *
 * A copier is handful to simplify common I/O use cases, such as:
 *
 * - Read a file or download content to memory: provide only the source and
 * wait for "done" event, calling @ref efl_io_copier_binbuf_steal afterwards.
 *
 * - Download content to disk: provide a network socket as source and use
 * @ref Efl_Io_File as destination, then wait for "done" event.
 *
 * - Link two I/O streams: provide both source and destination streams, such as
 * @ref Efl_Io_Stdin and @ref Efl_Io_Stdout, or some network socket. As data is
 * received from source it will be copied to destination in an endless
 * (asynchronous) loop. You may monitor for "done" if the source may be closed.
 *
 * If @ref efl_io_closer_close is called, then it will be called on
 * @ref efl_io_copier_source_get and @ref efl_io_copier_destination_get if they
 * implement those interfaces.
 *
 * @ref efl_io_closer_close_on_exec_get and
 * @ref efl_io_closer_close_on_destructor_get are respected and applied to both
 * source and destination. Both default to @c true.
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
#define EFL_IO_COPIER_CLASS efl_io_copier_class_get()

EWAPI const Efl_Class *efl_io_copier_class_get(void);

/**
 * @brief Copier source object.
 *
 * The source object must implement the @ref Efl_Io_Reader interface and will
 * provide data to the copier, thus it must be provided in order for the copier
 * to work.
 *
 * The copier will monitor @ref efl_io_reader_can_read_get property and
 * "can_read,changed" event. When it's @c true, then a chunk up to
 * @ref efl_io_copier_read_chunk_size_get is read using @ref efl_io_reader_read
 * into an intermediate storage buffer that can grow up to
 * @ref efl_io_copier_buffer_limit_get.
 *
 * If there is a @ref efl_io_copier_destination_get, the read data is written
 * there and afterwards "data" and "line" events are dispatched. If no
 * destination, it's accumulated in the internal storage and "data" and "line"
 * events are dispatched immediately.
 *
 * If there is a @ref efl_io_copier_line_delimiter_get set, then copier will
 * use that in order to attempt to write a full line at a time, including the
 * delimiter. Exceptions may be if the @ref efl_io_copier_source_get object
 * emitted "eos" and there is no trailing delimiter (ie: missing trailing
 * newline in files), or the @ref efl_io_copier_buffer_limit_get was reached.
 *
 * Once @ref efl_io_reader_eos_get is @c true or "eos" event happen, then the
 * read process is over. If there is no @ref efl_io_copier_destination_get set,
 * then the process is over and "done" event is called. If there is a
 * @ref efl_io_copier_destination_get, then all data must be flushed to it,
 * draining the internal intermediate storage, before "done" event is emitted.
 *
 * If the source object implements @ref Efl_Io_Sizer interface, then the
 * @ref efl_io_copier_progress_get will report the total size. If the
 * destination object also implements @ref Efl_Io_Sizer, then it will be
 * resized to match the source size, providing the hint that may enhance
 * performance (like pre-allocating the total amount and avoid dynamic resize).
 *
 * If the source object implements @ref Efl_Io_Closer and it's not closed, it
 * will be closed when the copier itself is. This may happen, for example, when
 * the copier is deleted and @ref efl_io_closer_close_on_destructor_get is
 * @c true (the default).
 *
 * Common source classes are @ref Efl_Io_Buffer (if fixed data exists in
 * memory), @ref Efl_Io_Queue (used to stream in-memory data) and
 * @ref Efl_Io_File (data is present in the file system). Networking classes
 * are also common source objects.
 *
 * Constructor-only property to set where to read data from
 *
 * @param[in] source @ref Efl_Io_Reader source
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI void efl_io_copier_source_set(Eo *obj, Efl_Io_Reader *source);

/**
 * @brief Copier source object.
 *
 * The source object must implement the @ref Efl_Io_Reader interface and will
 * provide data to the copier, thus it must be provided in order for the copier
 * to work.
 *
 * The copier will monitor @ref efl_io_reader_can_read_get property and
 * "can_read,changed" event. When it's @c true, then a chunk up to
 * @ref efl_io_copier_read_chunk_size_get is read using @ref efl_io_reader_read
 * into an intermediate storage buffer that can grow up to
 * @ref efl_io_copier_buffer_limit_get.
 *
 * If there is a @ref efl_io_copier_destination_get, the read data is written
 * there and afterwards "data" and "line" events are dispatched. If no
 * destination, it's accumulated in the internal storage and "data" and "line"
 * events are dispatched immediately.
 *
 * If there is a @ref efl_io_copier_line_delimiter_get set, then copier will
 * use that in order to attempt to write a full line at a time, including the
 * delimiter. Exceptions may be if the @ref efl_io_copier_source_get object
 * emitted "eos" and there is no trailing delimiter (ie: missing trailing
 * newline in files), or the @ref efl_io_copier_buffer_limit_get was reached.
 *
 * Once @ref efl_io_reader_eos_get is @c true or "eos" event happen, then the
 * read process is over. If there is no @ref efl_io_copier_destination_get set,
 * then the process is over and "done" event is called. If there is a
 * @ref efl_io_copier_destination_get, then all data must be flushed to it,
 * draining the internal intermediate storage, before "done" event is emitted.
 *
 * If the source object implements @ref Efl_Io_Sizer interface, then the
 * @ref efl_io_copier_progress_get will report the total size. If the
 * destination object also implements @ref Efl_Io_Sizer, then it will be
 * resized to match the source size, providing the hint that may enhance
 * performance (like pre-allocating the total amount and avoid dynamic resize).
 *
 * If the source object implements @ref Efl_Io_Closer and it's not closed, it
 * will be closed when the copier itself is. This may happen, for example, when
 * the copier is deleted and @ref efl_io_closer_close_on_destructor_get is
 * @c true (the default).
 *
 * Common source classes are @ref Efl_Io_Buffer (if fixed data exists in
 * memory), @ref Efl_Io_Queue (used to stream in-memory data) and
 * @ref Efl_Io_File (data is present in the file system). Networking classes
 * are also common source objects.
 *
 * @return @ref Efl_Io_Reader source
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI Efl_Io_Reader *efl_io_copier_source_get(const Eo *obj);

/**
 * @brief Copier destination object.
 *
 * If set it must implement @ref Efl_Io_Writer interface and will receive read
 * data once @ref efl_io_writer_can_write_get reports @c true, this is
 * monitored using "can_write,changed" event.
 *
 * The copier will attempt to write all internal intermediate storage data at
 * once, however the destination object may consume less. The actual data
 * written is emitted in the "data" and "line" events.
 *
 * If there is a @ref efl_io_copier_line_delimiter_get set, then copier will
 * use that in order to attempt to write a full line at a time, including the
 * delimiter. Exceptions may be if the @ref efl_io_copier_source_get object
 * emitted "eos" and there is no trailing delimiter (ie: missing trailing
 * newline in files), or the @ref efl_io_copier_buffer_limit_get was reached.
 *
 * If @ref efl_io_copier_source_get is flagged "eos" and all data was written
 * to destination, then "done" event is emitted.
 *
 * If destination is not set (ie: NULL), then data is kept in a internal
 * @ref Eina_Binbuf, that can be stolen with @ref efl_io_copier_binbuf_steal
 * once "data" or "line" events are emitted. It is allowed as a shortcut to
 * easily drain readers and store all data in memory, not requiring an
 * @ref Efl_Io_Buffer or @ref Efl_Io_Copier to be used -- a source and a copier
 * are enough.
 *
 * If both source and destination object implements @ref Efl_Io_Sizer, then
 * destination will be resized to match the source size, providing the hint
 * that may enhance performance (like pre-allocating the total amount and avoid
 * dynamic resize).
 *
 * If the destination object implements @ref Efl_Io_Closer and it's not closed,
 * it will be closed when the copier itself is. This may happen, for example,
 * when the copier is deleted and @ref efl_io_closer_close_on_destructor_get is
 * @c true (the default).
 *
 * Common destination classes are @ref Efl_Io_Buffer (better to wait for all
 * data in memory), @ref Efl_Io_Queue (to handle streaming protocols) and
 * @ref Efl_Io_File (stores data to disk). Networking classes are also common
 * destination objects.
 *
 * Constructor-only property to set where to write data to
 *
 * @param[in] destination @ref Efl_Io_Writer destination
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI void efl_io_copier_destination_set(Eo *obj, Efl_Io_Writer *destination);

/**
 * @brief Copier destination object.
 *
 * If set it must implement @ref Efl_Io_Writer interface and will receive read
 * data once @ref efl_io_writer_can_write_get reports @c true, this is
 * monitored using "can_write,changed" event.
 *
 * The copier will attempt to write all internal intermediate storage data at
 * once, however the destination object may consume less. The actual data
 * written is emitted in the "data" and "line" events.
 *
 * If there is a @ref efl_io_copier_line_delimiter_get set, then copier will
 * use that in order to attempt to write a full line at a time, including the
 * delimiter. Exceptions may be if the @ref efl_io_copier_source_get object
 * emitted "eos" and there is no trailing delimiter (ie: missing trailing
 * newline in files), or the @ref efl_io_copier_buffer_limit_get was reached.
 *
 * If @ref efl_io_copier_source_get is flagged "eos" and all data was written
 * to destination, then "done" event is emitted.
 *
 * If destination is not set (ie: NULL), then data is kept in a internal
 * @ref Eina_Binbuf, that can be stolen with @ref efl_io_copier_binbuf_steal
 * once "data" or "line" events are emitted. It is allowed as a shortcut to
 * easily drain readers and store all data in memory, not requiring an
 * @ref Efl_Io_Buffer or @ref Efl_Io_Copier to be used -- a source and a copier
 * are enough.
 *
 * If both source and destination object implements @ref Efl_Io_Sizer, then
 * destination will be resized to match the source size, providing the hint
 * that may enhance performance (like pre-allocating the total amount and avoid
 * dynamic resize).
 *
 * If the destination object implements @ref Efl_Io_Closer and it's not closed,
 * it will be closed when the copier itself is. This may happen, for example,
 * when the copier is deleted and @ref efl_io_closer_close_on_destructor_get is
 * @c true (the default).
 *
 * Common destination classes are @ref Efl_Io_Buffer (better to wait for all
 * data in memory), @ref Efl_Io_Queue (to handle streaming protocols) and
 * @ref Efl_Io_File (stores data to disk). Networking classes are also common
 * destination objects.
 *
 * @return @ref Efl_Io_Writer destination
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI Efl_Io_Writer *efl_io_copier_destination_get(const Eo *obj);

/**
 * @brief If there is a line delimiter, the reads will buffer/queue up to the
 * line delimiter before calling @ref efl_io_writer_write on the
 * @ref efl_io_copier_destination_get and the event line is emitted with
 * current line. The line may include the delimiter, unless it's end-of-stream
 * on @ref efl_io_copier_source_get or @ref efl_io_copier_buffer_limit_get was
 * reached.
 *
 * Changes line delimiter to use. If empty, no delimiter is to be used
 *
 * @param[in] slice The contents may contain \0 and will be copied
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI void efl_io_copier_line_delimiter_set(Eo *obj, Eina_Slice slice);

/**
 * @brief If there is a line delimiter, the reads will buffer/queue up to the
 * line delimiter before calling @ref efl_io_writer_write on the
 * @ref efl_io_copier_destination_get and the event line is emitted with
 * current line. The line may include the delimiter, unless it's end-of-stream
 * on @ref efl_io_copier_source_get or @ref efl_io_copier_buffer_limit_get was
 * reached.
 *
 * @return The contents may contain \0 and will be copied
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI Eina_Slice efl_io_copier_line_delimiter_get(const Eo *obj);

/**
 * @brief Copier buffer limit property, in bytes.
 *
 * During the read-write cycle, an intermediate storage buffer is used. By
 * default it's zero -- unlimited, and will grow as needed if
 * @ref efl_io_copier_source_get provides data and
 * @ref efl_io_copier_destination_get do not consume it (or if there is no
 * @ref efl_io_copier_destination_get).
 *
 * However when reading data from untrusted sources, like network, one can
 * exhaust the system memory by flooding the copier. In such cases, using a
 * buffer limit is recommended.
 *
 * When the buffer limit is reached, the copier will pause reading data from
 * @ref efl_io_copier_source_get until @ref efl_io_copier_destination_get
 * consumes it. If there is no @ref efl_io_copier_destination_get set, user
 * should call @ref efl_io_copier_binbuf_steal to consume data and reset buffer
 * usage.
 *
 * Setting a buffer limit smaller than current
 * @ref efl_io_copier_read_chunk_size_get will automatically change
 * @ref efl_io_copier_read_chunk_size_get to the new buffer limit.
 *
 * Constructor-only property to set buffer limit. 0 is unlimited
 *
 * @param[in] size Defines a maximum buffer limit, or 0 to allow unlimited
 * amount of bytes
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI void efl_io_copier_buffer_limit_set(Eo *obj, size_t size);

/**
 * @brief Copier buffer limit property, in bytes.
 *
 * During the read-write cycle, an intermediate storage buffer is used. By
 * default it's zero -- unlimited, and will grow as needed if
 * @ref efl_io_copier_source_get provides data and
 * @ref efl_io_copier_destination_get do not consume it (or if there is no
 * @ref efl_io_copier_destination_get).
 *
 * However when reading data from untrusted sources, like network, one can
 * exhaust the system memory by flooding the copier. In such cases, using a
 * buffer limit is recommended.
 *
 * When the buffer limit is reached, the copier will pause reading data from
 * @ref efl_io_copier_source_get until @ref efl_io_copier_destination_get
 * consumes it. If there is no @ref efl_io_copier_destination_get set, user
 * should call @ref efl_io_copier_binbuf_steal to consume data and reset buffer
 * usage.
 *
 * Setting a buffer limit smaller than current
 * @ref efl_io_copier_read_chunk_size_get will automatically change
 * @ref efl_io_copier_read_chunk_size_get to the new buffer limit.
 *
 * @return Defines a maximum buffer limit, or 0 to allow unlimited amount of
 * bytes
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI size_t efl_io_copier_buffer_limit_get(const Eo *obj);

/**
 * @brief Copier read chunk size property, in bytes.
 *
 * When a @ref efl_io_copier_source_get is flagged with
 * @ref efl_io_reader_can_read_get @c true, data will be read using
 * @ref efl_io_reader_read into an intermediate buffer of this size.
 *
 * Setting this value large enough may reduce number of
 * @ref efl_io_reader_read, improving performance at the expense of more memory
 * consumption.
 *
 * This value is bounded by @ref efl_io_copier_buffer_limit_get if it's set.
 *
 * By default it's 4096.
 *
 * Set chunk size for each basic @ref efl_io_reader_read operation.
 *
 * @param[in] size This is the chunk size to use for read operations
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI void efl_io_copier_read_chunk_size_set(Eo *obj, size_t size);

/**
 * @brief Copier read chunk size property, in bytes.
 *
 * When a @ref efl_io_copier_source_get is flagged with
 * @ref efl_io_reader_can_read_get @c true, data will be read using
 * @ref efl_io_reader_read into an intermediate buffer of this size.
 *
 * Setting this value large enough may reduce number of
 * @ref efl_io_reader_read, improving performance at the expense of more memory
 * consumption.
 *
 * This value is bounded by @ref efl_io_copier_buffer_limit_get if it's set.
 *
 * By default it's 4096.
 *
 * @return This is the chunk size to use for read operations
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI size_t efl_io_copier_read_chunk_size_get(const Eo *obj);

/**
 * @brief Progress for read and write.
 *
 * Reports value read from @ref efl_io_copier_source_get, written to
 * @ref efl_io_copier_destination_get and the total, if the source implements
 * @ref Efl_Io_Sizer.
 *
 * @param[out] read Amount of bytes read from source
 * @param[out] written Amount of bytes written to destination
 * @param[out] total If @ref efl_io_copier_source_get is an Efl.Io.Sizer, its
 * total size. Otherwise 0 to report unknown size
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI void efl_io_copier_progress_get(const Eo *obj, uint64_t *read, uint64_t *written, uint64_t *total);

/**
 * @brief Terminates the copier with ETIMEDOUT if it becomes inactive for some
 * time.
 *
 * If the copier cannot do any read or write in the given amount of seconds,
 * then the copier will emit "error" event with ETIMEDOUT value.
 *
 * This is specified in seconds and is only active for greater-than zero.
 * Defaults to inactive.
 *
 * @param[in] seconds Number inactive seconds to timeout this copier. If zero
 * or less, it will be disabled.
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI void efl_io_copier_timeout_inactivity_set(Eo *obj, double seconds);

/**
 * @brief Terminates the copier with ETIMEDOUT if it becomes inactive for some
 * time.
 *
 * If the copier cannot do any read or write in the given amount of seconds,
 * then the copier will emit "error" event with ETIMEDOUT value.
 *
 * This is specified in seconds and is only active for greater-than zero.
 * Defaults to inactive.
 *
 * @return Number inactive seconds to timeout this copier. If zero or less, it
 * will be disabled.
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI double efl_io_copier_timeout_inactivity_get(const Eo *obj);

#ifdef EFL_IO_COPIER_PROTECTED
/**
 * @brief Reports if copier is done.
 *
 * A copier is done if source reached "eos" and all data was written to
 * "destination".
 *
 * The copier is also done when it's @ref efl_io_closer_closed_get.
 *
 * @param[in] done If @c true, source is "eos" and all data was written to
 * "destination". If @c false, it's still pending some more copies
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI void efl_io_copier_done_set(Eo *obj, Eina_Bool done);
#endif

/**
 * @brief Reports if copier is done.
 *
 * A copier is done if source reached "eos" and all data was written to
 * "destination".
 *
 * The copier is also done when it's @ref efl_io_closer_closed_get.
 *
 * @return If @c true, source is "eos" and all data was written to
 * "destination". If @c false, it's still pending some more copies
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI Eina_Bool efl_io_copier_done_get(const Eo *obj);

/**
 * @brief Steals the internal binbuf and return it to caller.
 *
 * The buffer is then owned by caller, which should call eina_binbuf_free()
 * when it's done.
 *
 * Usually call this method when no @ref efl_io_copier_destination_get is set,
 * in this case you should wait for "done", "data" or "line" events and then
 * call it to retrieve (and own!) the data.
 *
 * @return Binbuf
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI Eina_Binbuf *efl_io_copier_binbuf_steal(Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Returns the size of the pending buffer.
 *
 * The pending buffer is an intermediate buffer where data is read from
 * @ref efl_io_copier_source_get before it's written to
 * @ref efl_io_copier_destination_get, if any.
 *
 * This is the equivalent of the size of returned by
 * @ref efl_io_copier_binbuf_steal, however it doesn't steal or modify the
 * buffer at all, just query its internal size.
 *
 * @return The pending buffer size, in bytes.
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI size_t efl_io_copier_pending_size_get(const Eo *obj);

/**
 * @brief Forces reading from source and writing to destination.
 *
 * This executes a single read->write cycle, if more data could be read from
 * source (ie: not EOS) or not all data was written to destination, then
 * @c false is returned. Then to forcefully drain source and write all contents
 * to destination, use in a loop until it returns @c true.
 *
 * The return value matches "done" event, that is, when @c true is returned,
 * the "done" event is emitted.
 *
 * This function may also emit "progress" and "error" events.
 *
 * @note this function may block the main loop execution until operations
 * complete! This is bad for usability, as user interface or other operations
 * may freeze. A better approach is to operate asynchronously and wait for
 * "done" event.
 *
 * @param[in] may_block If @c true, then @ref efl_io_reader_can_read_get and
 * @ref efl_io_writer_can_write_get are not checked and the call may block.
 * @param[in] ignore_line_delimiter Forces flush ignoring line delimiters
 *
 * @return @c true on success, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
EOAPI Eina_Bool efl_io_copier_flush(Eo *obj, Eina_Bool may_block, Eina_Bool ignore_line_delimiter);

EWAPI extern const Efl_Event_Description _EFL_IO_COPIER_EVENT_DONE;

/** All available data was copied from source to destination
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
#define EFL_IO_COPIER_EVENT_DONE (&(_EFL_IO_COPIER_EVENT_DONE))

EWAPI extern const Efl_Event_Description _EFL_IO_COPIER_EVENT_ERROR;

/** An error happened and the copy stopped
 * @return Eina_Error
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
#define EFL_IO_COPIER_EVENT_ERROR (&(_EFL_IO_COPIER_EVENT_ERROR))

EWAPI extern const Efl_Event_Description _EFL_IO_COPIER_EVENT_PROGRESS;

/** Total size changed or Data was read/written
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
#define EFL_IO_COPIER_EVENT_PROGRESS (&(_EFL_IO_COPIER_EVENT_PROGRESS))

EWAPI extern const Efl_Event_Description _EFL_IO_COPIER_EVENT_DATA;

/** When data is read to internal buffer, it's emitted in this event. The
 * memory is only valid during event callback dispatched and should not be
 * modified.
 * @return const Eina_Slice *
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
#define EFL_IO_COPIER_EVENT_DATA (&(_EFL_IO_COPIER_EVENT_DATA))

EWAPI extern const Efl_Event_Description _EFL_IO_COPIER_EVENT_LINE;

/** If @ref efl_io_copier_line_delimiter_get is set, will be emitted with
 * current line. The memory is only valid during event callback dispatched and
 * should not be modified.
 * @return const Eina_Slice *
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Copier
 */
#define EFL_IO_COPIER_EVENT_LINE (&(_EFL_IO_COPIER_EVENT_LINE))

#endif
