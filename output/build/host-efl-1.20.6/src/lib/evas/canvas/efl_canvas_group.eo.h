#ifndef _EFL_CANVAS_GROUP_EO_H_
#define _EFL_CANVAS_GROUP_EO_H_

#ifndef _EFL_CANVAS_GROUP_EO_CLASS_TYPE
#define _EFL_CANVAS_GROUP_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Group;

#endif

#ifndef _EFL_CANVAS_GROUP_EO_TYPES
#define _EFL_CANVAS_GROUP_EO_TYPES


#endif
/**
 * @brief A group object is a container of other canvas objects. Its children
 * move along their parent, are often clipped with a common clipper. This is
 * part of the legacy smart object concept.
 *
 * A group is not necessarily a container (see @c Efl.Container), in the sense
 * that a standard widget may not have any empty slots for content, but is
 * still a group of low-level canvas objects (clipper, raw objects, etc...).
 *
 * @ingroup Efl_Canvas_Group
 */
#define EFL_CANVAS_GROUP_CLASS efl_canvas_group_class_get()

EWAPI const Efl_Class *efl_canvas_group_class_get(void);

/**
 * @brief Indicates that the group's layout need to be recalculated.
 *
 * If this flag is set, then the @ref efl_canvas_group_calculate function will
 * be called, during rendering phase of the canvas. After that, this flag will
 * be automatically unset.
 *
 * @note just setting this flag will not make the canvas' whole scene dirty, by
 * itself, and evas_render() will have no effect. To force that, use
 * @ref efl_canvas_group_change, that will also call this function
 * automatically, with @c true as parameter.
 *
 * See also @ref efl_canvas_group_calculate.
 *
 * @param[in] value @c true if the group layout needs to be recalculated,
 * @c false otherwise
 *
 * @ingroup Efl_Canvas_Group
 */
EOAPI void efl_canvas_group_need_recalculate_set(Eo *obj, Eina_Bool value);

/**
 * @brief Indicates that the group's layout need to be recalculated.
 *
 * If this flag is set, then the @ref efl_canvas_group_calculate function will
 * be called, during rendering phase of the canvas. After that, this flag will
 * be automatically unset.
 *
 * @note just setting this flag will not make the canvas' whole scene dirty, by
 * itself, and evas_render() will have no effect. To force that, use
 * @ref efl_canvas_group_change, that will also call this function
 * automatically, with @c true as parameter.
 *
 * See also @ref efl_canvas_group_calculate.
 *
 * @return @c true if the group layout needs to be recalculated, @c false
 * otherwise
 *
 * @ingroup Efl_Canvas_Group
 */
EOAPI Eina_Bool efl_canvas_group_need_recalculate_get(const Eo *obj);

/**
 * @brief Marks the object as dirty.
 *
 * This also forcefully marks the given object as needing recalculation. As an
 * effect, on the next rendering cycle its @ref efl_canvas_group_calculate
 * method will be called.
 *
 * @ingroup Efl_Canvas_Group
 */
EOAPI void efl_canvas_group_change(Eo *obj);

/**
 * @brief Triggers an immediate recalculation of this object's geometry.
 *
 * This will also reset the flag @ref efl_canvas_group_need_recalculate_get.
 *
 * @ingroup Efl_Canvas_Group
 */
EOAPI void efl_canvas_group_calculate(Eo *obj);

/**
 * @brief Returns an iterator over the children of this object, that are canvas
 * objects.
 *
 * This returns the list of "smart" children. This might be different from both
 * the @c Efl.Object children list as well as the @c Efl.Container content
 * list.
 *
 * @return Iterator to object children
 *
 * @ingroup Efl_Canvas_Group
 */
EOAPI Eina_Iterator *efl_canvas_group_children_iterate(const Eo *obj);

/**
 * @brief Set an Evas object as a member of a given smart object.
 *
 * Members will automatically be stacked and layered together with the smart
 * object. The various stacking functions will operate on members relative to
 * the other members instead of the entire canvas, since they now live on an
 * exclusive layer (see evas_object_stack_above(), for more details).
 *
 * Any @c smart_obj object's specific implementation of the @c member_add()
 * smart function will take place too, naturally.
 *
 * See also @ref efl_canvas_group_member_del.
 *
 * @param[in] sub_obj The member object.
 *
 * @ingroup Efl_Canvas_Group
 */
EOAPI void efl_canvas_group_member_add(Eo *obj, Efl_Canvas_Object *sub_obj) EINA_ARG_NONNULL(2);

/**
 * @brief Removes a member object from a given smart object.
 *
 * This removes a member object from a smart object, if it was added to any.
 * The object will still be on the canvas, but no longer associated with
 * whichever smart object it was associated with.
 *
 * See also @ref efl_canvas_group_member_add for more details.
 *
 * @param[in] sub_obj The member object.
 *
 * @ingroup Efl_Canvas_Group
 */
EOAPI void efl_canvas_group_member_del(Eo *obj, Efl_Canvas_Object *sub_obj);

#endif
