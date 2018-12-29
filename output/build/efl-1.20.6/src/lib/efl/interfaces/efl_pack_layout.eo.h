#ifndef _EFL_PACK_LAYOUT_EO_H_
#define _EFL_PACK_LAYOUT_EO_H_

#ifndef _EFL_PACK_LAYOUT_EO_CLASS_TYPE
#define _EFL_PACK_LAYOUT_EO_CLASS_TYPE

typedef Eo Efl_Pack_Layout;

#endif

#ifndef _EFL_PACK_LAYOUT_EO_TYPES
#define _EFL_PACK_LAYOUT_EO_TYPES


#endif
/**
 * @brief Low-level APIs for object that can lay their children out.
 *
 * Used for containers (box, grid).
 *
 * @ingroup Efl_Pack_Layout
 */
#define EFL_PACK_LAYOUT_INTERFACE efl_pack_layout_interface_get()

EWAPI const Efl_Class *efl_pack_layout_interface_get(void);

/**
 * @brief Requests EFL to call the @ref efl_pack_layout_update method on this
 * object.
 *
 * This @ref efl_pack_layout_update may be called asynchronously.
 *
 * @ingroup Efl_Pack_Layout
 */
EOAPI void efl_pack_layout_request(Eo *obj);

#ifdef EFL_PACK_LAYOUT_PROTECTED
/**
 * @brief Implementation of this container's layout algorithm.
 *
 * EFL will call this function whenever the contents of this container need to
 * be re-layed out on the canvas.
 *
 * This can be overriden to implement custom layout behaviours.
 *
 * @ingroup Efl_Pack_Layout
 */
EOAPI void efl_pack_layout_update(Eo *obj);
#endif

#endif
