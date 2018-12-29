#ifndef _ELM_LIST_ITEM_EO_LEGACY_H_
#define _ELM_LIST_ITEM_EO_LEGACY_H_

#ifndef _ELM_LIST_ITEM_EO_CLASS_TYPE
#define _ELM_LIST_ITEM_EO_CLASS_TYPE

typedef Eo Elm_List_Item;

#endif

#ifndef _ELM_LIST_ITEM_EO_TYPES
#define _ELM_LIST_ITEM_EO_TYPES


#endif

/**
 * @brief Set or unset item as a separator.
 *
 * Items aren't set as separator by default.
 *
 * If set as separator it will display separator theme, so won't display icons
 * or label.
 *
 * @param[in] setting @c true means item @c it is a separator. @c false
 * indicates it's not.
 *
 * @ingroup Elm_List_Item
 */
EAPI void elm_list_item_separator_set(Elm_List_Item *obj, Eina_Bool setting);

/**
 * @brief Get a value whether item is a separator or not.
 *
 * @return @c true means item @c it is a separator. @c false indicates it's
 * not.
 *
 * @ingroup Elm_List_Item
 */
EAPI Eina_Bool elm_list_item_separator_get(const Elm_List_Item *obj);

/**
 * @brief Set the selected state of an item.
 *
 * This sets the selected state of the given item.
 *
 * If a new item is selected the previously selected will be unselected, unless
 * multiple selection is enabled with @ref elm_list_multi_select_set.
 * Previously selected item can be get with function @ref
 * elm_list_selected_item_get.
 *
 * Selected items will be highlighted.
 *
 * @param[in] selected The selected state.
 *
 * @ingroup Elm_List_Item
 */
EAPI void elm_list_item_selected_set(Elm_List_Item *obj, Eina_Bool selected);

/**
 * @brief Get whether the item is selected or not.
 *
 * @return The selected state.
 *
 * @ingroup Elm_List_Item
 */
EAPI Eina_Bool elm_list_item_selected_get(const Elm_List_Item *obj);

/**
 * @brief Get the real Evas(Edje) object created to implement the view of a
 * given list item.
 *
 * Base object is the @c Evas_Object that represents that item.
 *
 * @return The base Edje object associated with the item.
 *
 * @ingroup Elm_List_Item
 */
EAPI Efl_Canvas_Object *elm_list_item_object_get(const Elm_List_Item *obj);

/**
 * @brief Get the item before the item in list.
 *
 * @note If it is the first item, @c null will be returned.
 *
 * @return The item before or @c null.
 *
 * @ingroup Elm_List_Item
 */
EAPI Elm_Widget_Item *elm_list_item_prev(const Elm_List_Item *obj);

/**
 * @brief Get the item after the item in list.
 *
 * @note If it is the last item, @c null will be returned.
 *
 * @return The item after or @c null.
 *
 * @ingroup Elm_List_Item
 */
EAPI Elm_Widget_Item *elm_list_item_next(const Elm_List_Item *obj);

/**
 * @brief Show item in the list view.
 *
 * It won't animate list until item is visible. If such behavior is wanted, use
 * @ref elm_list_item_bring_in instead.
 *
 * @ingroup Elm_List_Item
 */
EAPI void elm_list_item_show(Elm_List_Item *obj);

/**
 * @brief Bring in the given item to list view.
 *
 * This causes list to jump to the given item and show it (by scrolling), if it
 * is not fully visible.
 *
 * This may use animation to do so and take a period of time.
 *
 * If animation isn't wanted, @ref elm_list_item_show can be used.
 *
 * @ingroup Elm_List_Item
 */
EAPI void elm_list_item_bring_in(Elm_List_Item *obj);

#endif
