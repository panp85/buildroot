#ifndef _ECTOR_BUFFER_EO_H_
#define _ECTOR_BUFFER_EO_H_

#ifndef _ECTOR_BUFFER_EO_CLASS_TYPE
#define _ECTOR_BUFFER_EO_CLASS_TYPE

typedef Eo Ector_Buffer;

#endif

#ifndef _ECTOR_BUFFER_EO_TYPES
#define _ECTOR_BUFFER_EO_TYPES

/** Buffer capabilities
 *
 * @ingroup Ector_Buffer
 */
typedef enum
{
  ECTOR_BUFFER_FLAG_NONE = 0, /**< Buffer may not have any backing, indicates an
                               * invalid buffer. */
  ECTOR_BUFFER_FLAG_CPU_READABLE = 1, /**< Can be read from the CPU after map.
                                       * Reading may still be very slow. */
  ECTOR_BUFFER_FLAG_CPU_WRITABLE = 2, /**< Can be written to by the CPU after
                                       * map. Writing may still be very slow.
                                       */
  ECTOR_BUFFER_FLAG_RENDERABLE = 4, /**< Can be rendered to, ie CPU memory for
                                     * SW rendering, or an FBO for GL engine.
                                     */
  ECTOR_BUFFER_FLAG_DRAWABLE = 8, /**< Can be used as a source of pixels to draw
                                   * on Evas. */
  ECTOR_BUFFER_FLAG_CPU_READABLE_FAST = 16, /**< Can be read by the CPU at high
                                             * speed, ie no need for
                                             * glReadPixels. */
  ECTOR_BUFFER_FLAG_CPU_WRITABLE_FAST = 32, /**< Can be written by the CPU at
                                             * high speed, ie no need for GPU
                                             * texture upload. */
  ECTOR_BUFFER_FLAG_UNCACHED = 64 /**< Backed by uncached memory, ie. slow-ish
                                   * reads but faster than glReadPixels. */
} Ector_Buffer_Flag;

/** Buffer access permissions
 *
 * @ingroup Ector_Buffer
 */
typedef enum
{
  ECTOR_BUFFER_ACCESS_FLAG_NONE = 0, /**< No access permission */
  ECTOR_BUFFER_ACCESS_FLAG_READ = 1, /**< Read access permission */
  ECTOR_BUFFER_ACCESS_FLAG_WRITE = 2, /**< Write access permission */
  ECTOR_BUFFER_ACCESS_FLAG_COW = 4 /**< Forces copy-on-write if already mapped
                                    * as read-only. Requires write. */
} Ector_Buffer_Access_Flag;


#endif
/** 2D pixel buffer interface for Ector
 *
 * @since 1.17
 *
 * @ingroup Ector_Buffer
 */
#define ECTOR_BUFFER_MIXIN ector_buffer_mixin_get()

EWAPI const Efl_Class *ector_buffer_mixin_get(void);

/**
 * @brief The (rectangular) size of the pixel buffer.
 *
 * @param[out] w Width
 * @param[out] h Height
 *
 * @since 1.17
 *
 * @ingroup Ector_Buffer
 */
EOAPI void ector_buffer_size_get(const Eo *obj, int *w, int *h);

/**
 * @brief The colorspace of the pixel buffer.
 *
 * @return Colorspace
 *
 * @since 1.17
 *
 * @ingroup Ector_Buffer
 */
EOAPI Efl_Gfx_Colorspace ector_buffer_cspace_get(const Eo *obj);

/**
 * @brief Map a region of this buffer for read or write access by the CPU,
 * fetch data from the GPU if needed. This operation may be slow if
 * cpu_readable_fast or cpu_writeable_fast are not true, or if the required
 * colorspace is different from the internal one.
 *
 * @param[out] length Accessible buffer size in bytes, should not be @c null.
 * @param[in] mode Specifies whether to map for read-only, write-only or
 * read-write access (OR combination of flags).
 * @param[in] x X position of the top-left pixel to map
 * @param[in] y Y position of the top-left pixel to map
 * @param[in] w If 0, defaults to the buffer width
 * @param[in] h If 0, defaults to the buffer height
 * @param[in] cspace Requested colorspace. If different from the internal
 * cspace, map should try to convert the data into a new buffer
 * @param[out] stride Returns the length in bytes of a mapped line
 *
 * @return Pointer to the top-left pixel data. Returns @c null in case of
 * failure
 *
 * @since 1.17
 *
 * @ingroup Ector_Buffer
 */
EOAPI void *ector_buffer_map(Eo *obj, unsigned int *length, Ector_Buffer_Access_Flag mode, unsigned int x, unsigned int y, unsigned int w, unsigned int h, Efl_Gfx_Colorspace cspace, unsigned int *stride) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Unmap a region of this buffer, and upload data to the GPU (if
 * needed).
 *
 * @param[in] data Data pointer returned by a previous call to map
 * @param[in] length Must be the same as returned by map.
 *
 * @since 1.17
 *
 * @ingroup Ector_Buffer
 */
EOAPI void ector_buffer_unmap(Eo *obj, void *data, unsigned int length);

/**
 * @brief Sets the source pixels for this buffer, or allocate a new memory
 * region
 *
 * @param[in] pixels If @c null, allocates an empty buffer
 * @param[in] width Buffer width
 * @param[in] height Buffer height
 * @param[in] cspace Buffer colorspace
 * @param[in] writable Buffer is writable
 *
 * @return True if pixels_set was successful
 *
 * @since 1.17
 *
 * @ingroup Ector_Buffer
 */
EOAPI Eina_Bool ector_buffer_pixels_set(Eo *obj, void *pixels, int width, int height, Efl_Gfx_Colorspace cspace, Eina_Bool writable);

/**
 * @brief The capabilities of this buffer
 *
 * @return A bitmask of capability flags
 *
 * @since 1.17
 *
 * @ingroup Ector_Buffer
 */
EOAPI Ector_Buffer_Flag ector_buffer_flags_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _ECTOR_BUFFER_EVENT_DETACHED;

/** Emitted whenever the previously attached pixels are detached during
 * pixels_set
 *
 * @since 1.17
 *
 * @ingroup Ector_Buffer
 */
#define ECTOR_BUFFER_EVENT_DETACHED (&(_ECTOR_BUFFER_EVENT_DETACHED))

#endif
