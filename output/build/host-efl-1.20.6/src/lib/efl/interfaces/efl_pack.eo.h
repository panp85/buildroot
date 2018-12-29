#ifndef _EFL_PACK_EO_H_
#define _EFL_PACK_EO_H_

#ifndef _EFL_PACK_EO_CLASS_TYPE
#define _EFL_PACK_EO_CLASS_TYPE

typedef Eo Efl_Pack;

#endif

#ifndef _EFL_PACK_EO_TYPES
#define _EFL_PACK_EO_TYPES


#endif
/** API common to all UI container objects.
 *
 * @ingroup Efl_Pack
 */
#define EFL_PACK_INTERFACE efl_pack_interface_get()

EWAPI const Efl_Class *efl_pack_interface_get(void);

/**
 * @brief Removes all packed contents, and unreferences them.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Pack
 */
EOAPI Eina_Bool efl_pack_clear(Eo *obj);

/**
 * @brief Removes all packed contents, without unreferencing them.
 *
 * Use with caution.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Pack
 */
EOAPI Eina_Bool efl_pack_unpack_all(Eo *obj);

/**
 * @brief Removes an existing item from the container, without deleting it.
 *
 * @param[in] subobj Unpacked object
 *
 * @return @c false if @c subobj wasn't a child or can't be removed
 *
 * @ingroup Efl_Pack
 */
EOAPI Eina_Bool efl_pack_unpack(Eo *obj, Efl_Gfx *subobj);

/**
 * @brief Adds an item to this container.
 *
 * Depending on the container this will either fill in the default spot,
 * replacing any already existing element or append to the end of the container
 * if there is no default part.
 *
 * The container takes ownership of this object. This means if packing failed,
 * the object will be unrefed.
 *
 * @param[in] subobj Packed object
 *
 * @return @c false if @c subobj could not be packed.
 *
 * @ingroup Efl_Pack
 */
EOAPI Eina_Bool efl_pack(Eo *obj, Efl_Gfx *subobj);

/**
 * @brief Alignment of the container within its bounds
 *
 * @param[in] align_horiz Horizontal alignment
 * @param[in] align_vert Vertical alignment
 *
 * @ingroup Efl_Pack
 */
EOAPI void efl_pack_align_set(Eo *obj, double align_horiz, double align_vert);

/**
 * @brief Alignment of the container within its bounds
 *
 * @param[out] align_horiz Horizontal alignment
 * @param[out] align_vert Vertical alignment
 *
 * @ingroup Efl_Pack
 */
EOAPI void efl_pack_align_get(const Eo *obj, double *align_horiz, double *align_vert);

/**
 * @brief Padding between items contained in this object.
 *
 * @param[in] pad_horiz Horizontal padding
 * @param[in] pad_vert Vertical padding
 * @param[in] scalable @c true if scalable, @c false otherwise
 *
 * @ingroup Efl_Pack
 */
EOAPI void efl_pack_padding_set(Eo *obj, double pad_horiz, double pad_vert, Eina_Bool scalable);

/**
 * @brief Padding between items contained in this object.
 *
 * @param[out] pad_horiz Horizontal padding
 * @param[out] pad_vert Vertical padding
 * @param[out] scalable @c true if scalable, @c false otherwise
 *
 * @ingroup Efl_Pack
 */
EOAPI void efl_pack_padding_get(const Eo *obj, double *pad_horiz, double *pad_vert, Eina_Bool *scalable);

EWAPI extern const Efl_Event_Description _EFL_PACK_EVENT_LAYOUT_UPDATED;

/** Sent after the layout was updated.
 *
 * @ingroup Efl_Pack
 */
#define EFL_PACK_EVENT_LAYOUT_UPDATED (&(_EFL_PACK_EVENT_LAYOUT_UPDATED))

#endif
