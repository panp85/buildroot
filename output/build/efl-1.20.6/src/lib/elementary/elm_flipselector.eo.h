#ifndef _ELM_FLIPSELECTOR_EO_H_
#define _ELM_FLIPSELECTOR_EO_H_

#ifndef _ELM_FLIPSELECTOR_EO_CLASS_TYPE
#define _ELM_FLIPSELECTOR_EO_CLASS_TYPE

typedef Eo Elm_Flipselector;

#endif

#ifndef _ELM_FLIPSELECTOR_EO_TYPES
#define _ELM_FLIPSELECTOR_EO_TYPES


#endif
/** Elementary flipselector class
 *
 * @ingroup Elm_Flipselector
 */
#define ELM_FLIPSELECTOR_CLASS elm_flipselector_class_get()

EWAPI const Efl_Class *elm_flipselector_class_get(void);

/**
 * @brief Get the internal list of items in a given flip selector widget.
 *
 * This list is not to be modified in any way and must not be freed. Use the
 * list members with functions like @ref elm_object_item_text_set, @ref
 * elm_object_item_text_get, @ref elm_object_item_del, @ref
 * elm_flipselector_item_selected_get, @ref elm_flipselector_item_selected_set.
 *
 * @warning This list is only valid until @c obj object's internal items list
 * is changed. It should be fetched again with another call to this function
 * when changes happen.
 *
 * @return List of items
 *
 * @ingroup Elm_Flipselector
 */
EOAPI const Eina_List *elm_obj_flipselector_items_get(const Eo *obj);

/**
 * @brief Get the first item in the given flip selector widget's list of items.
 *
 * See also @ref elm_obj_flipselector_item_append,
 * @ref elm_obj_flipselector_last_item_get.
 *
 * @return The first item or @c null, if it has no items (and on errors).
 *
 * @ingroup Elm_Flipselector
 */
EOAPI Elm_Widget_Item *elm_obj_flipselector_first_item_get(const Eo *obj);

/**
 * @brief Get the last item in the given flip selector widget's list of items.
 *
 * See also @ref elm_obj_flipselector_item_prepend,
 * @ref elm_obj_flipselector_first_item_get.
 *
 * @return The last item or @c null, if it has no items (and on errors).
 *
 * @ingroup Elm_Flipselector
 */
EOAPI Elm_Widget_Item *elm_obj_flipselector_last_item_get(const Eo *obj);

/**
 * @brief Get the currently selected item in a flip selector widget.
 *
 * @return The selected item or @c null, if the widget has no items (and on
 * errors).
 *
 * @ingroup Elm_Flipselector
 */
EOAPI Elm_Widget_Item *elm_obj_flipselector_selected_item_get(const Eo *obj);

/**
 * @brief Prepend a (text) item to a flip selector widget
 *
 * The widget's list of labels to show will be prepended with the given value.
 * If the user wishes so, a callback function pointer can be passed, which will
 * get called when this same item is selected.
 *
 * @note The current selection won't be modified by prepending an element to
 * the list.
 *
 * @note The maximum length of the text label is going to be determined by the
 * widget's theme. Strings larger than that value are going to be truncated.
 *
 * @param[in] label The (text) label of the new item.
 * @param[in] func Convenience callback function to take place when item is
 * selected.
 * @param[in] data Data passed to @c func, above.
 *
 * @return New widget item
 *
 * @ingroup Elm_Flipselector
 */
EOAPI Elm_Widget_Item *elm_obj_flipselector_item_prepend(Eo *obj, const char *label, Evas_Smart_Cb func, void *data);

/**
 * @brief Programmatically select the next item of a flip selector widget
 *
 * @note The selection will be animated. Also, if it reaches the end of its
 * list of member items, it will continue with the first one onwards.
 *
 * @ingroup Elm_Flipselector
 */
EOAPI void elm_obj_flipselector_flip_next(Eo *obj);

/**
 * @brief Append a (text) item to a flip selector widget
 *
 * The widget's list of labels to show will be appended with the given value.
 * If the user wishes so, a callback function pointer can be passed, which will
 * get called when this same item is selected.
 *
 * @note The current selection won't be modified by appending an element to the
 * list.
 *
 * @note The maximum length of the text label is going to be determined by the
 * widget's theme. Strings larger than that value are going to be truncated.
 *
 * @param[in] label The (text) label of the new item.
 * @param[in] func Convenience callback function to take place when item is
 * selected.
 * @param[in] data Data passed to @c func, above.
 *
 * @return New widget item
 *
 * @ingroup Elm_Flipselector
 */
EOAPI Elm_Widget_Item *elm_obj_flipselector_item_append(Eo *obj, const char *label, Evas_Smart_Cb func, const void *data);

/**
 * @brief Programmatically select the previous item of a flip selector widget
 *
 * @note The selection will be animated. Also, if it reaches the beginning of
 * its list of member items, it will continue with the last one backwards.
 *
 * @ingroup Elm_Flipselector
 */
EOAPI void elm_obj_flipselector_flip_prev(Eo *obj);

EWAPI extern const Efl_Event_Description _ELM_FLIPSELECTOR_EVENT_UNDERFLOWED;

/** Called when flipselector is underflowed
 *
 * @ingroup Elm_Flipselector
 */
#define ELM_FLIPSELECTOR_EVENT_UNDERFLOWED (&(_ELM_FLIPSELECTOR_EVENT_UNDERFLOWED))

EWAPI extern const Efl_Event_Description _ELM_FLIPSELECTOR_EVENT_OVERFLOWED;

/** Called when flipselector is overflowed
 *
 * @ingroup Elm_Flipselector
 */
#define ELM_FLIPSELECTOR_EVENT_OVERFLOWED (&(_ELM_FLIPSELECTOR_EVENT_OVERFLOWED))

#endif
