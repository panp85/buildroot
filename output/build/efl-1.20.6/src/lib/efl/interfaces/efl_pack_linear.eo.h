#ifndef _EFL_PACK_LINEAR_EO_H_
#define _EFL_PACK_LINEAR_EO_H_

#ifndef _EFL_PACK_LINEAR_EO_CLASS_TYPE
#define _EFL_PACK_LINEAR_EO_CLASS_TYPE

typedef Eo Efl_Pack_Linear;

#endif

#ifndef _EFL_PACK_LINEAR_EO_TYPES
#define _EFL_PACK_LINEAR_EO_TYPES


#endif
/** API for containers
 *
 * @ingroup Efl_Pack_Linear
 */
#define EFL_PACK_LINEAR_INTERFACE efl_pack_linear_interface_get()

EWAPI const Efl_Class *efl_pack_linear_interface_get(void);

/**
 * @brief Prepend an object at the beginning of this container.
 *
 * This is the same as @ref efl_pack_at($subobj, 0).
 *
 * @param[in] subobj Item to pack.
 *
 * @return @c false if @c subobj could not be packed
 *
 * @ingroup Efl_Pack_Linear
 */
EOAPI Eina_Bool efl_pack_begin(Eo *obj, Efl_Gfx *subobj);

/**
 * @brief Append object at the end of this container.
 *
 * This is the same as @ref efl_pack_at($subobj, -1).
 *
 * @param[in] subobj Item to pack.
 *
 * @return @c false if @c subobj could not be packed
 *
 * @ingroup Efl_Pack_Linear
 */
EOAPI Eina_Bool efl_pack_end(Eo *obj, Efl_Gfx *subobj);

/**
 * @brief Prepend item before other sub object.
 *
 * @param[in] subobj Item to pack.
 * @param[in] existing Item to refer to.
 *
 * @return @c false if @c existing could not be found or @c subobj could not be
 * packed
 *
 * @ingroup Efl_Pack_Linear
 */
EOAPI Eina_Bool efl_pack_before(Eo *obj, Efl_Gfx *subobj, const Efl_Gfx *existing);

/**
 * @brief Append item after other sub object.
 *
 * @param[in] subobj Item to pack.
 * @param[in] existing Item to refer to.
 *
 * @return @c false if @c existing could not be found or @c subobj could not be
 * packed
 *
 * @ingroup Efl_Pack_Linear
 */
EOAPI Eina_Bool efl_pack_after(Eo *obj, Efl_Gfx *subobj, const Efl_Gfx *existing);

/**
 * @brief Inserts @c subobj at the specified @c index.
 *
 * Valid range: -$count to +$count. -1 refers to the last element. Out of range
 * indices will trigger an append.
 *
 * @param[in] subobj Item to pack.
 * @param[in] index A position.
 *
 * @return @c false if @c subobj could not be packed
 *
 * @ingroup Efl_Pack_Linear
 */
EOAPI Eina_Bool efl_pack_at(Eo *obj, Efl_Gfx *subobj, int index);

/**
 * @brief Content at a given index in this container.
 *
 * Index -1 refers to the last item. The valid range is -(count - 1) to (count
 * - 1).
 *
 * @param[in] index Index number
 *
 * @return The object contained at the given @c index.
 *
 * @ingroup Efl_Pack_Linear
 */
EOAPI Efl_Gfx *efl_pack_content_get(Eo *obj, int index);

/**
 * @brief Get the index of a child in this container.
 *
 * @param[in] subobj An object contained in this pack.
 *
 * @return -1 in case of failure, or the index of this item.
 *
 * @ingroup Efl_Pack_Linear
 */
EOAPI int efl_pack_index_get(Eo *obj, const Efl_Gfx *subobj);

/**
 * @brief Pop out item at specified @c index.
 *
 * Equivalent to unpack(content_at($index)).
 *
 * @param[in] index Index number
 *
 * @return The child item if it could be removed.
 *
 * @ingroup Efl_Pack_Linear
 */
EOAPI Efl_Gfx *efl_pack_unpack_at(Eo *obj, int index);

#endif
