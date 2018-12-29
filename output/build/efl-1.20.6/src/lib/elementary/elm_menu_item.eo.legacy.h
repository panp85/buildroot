#ifndef _ELM_MENU_ITEM_EO_LEGACY_H_
#define _ELM_MENU_ITEM_EO_LEGACY_H_

#ifndef _ELM_MENU_ITEM_EO_CLASS_TYPE
#define _ELM_MENU_ITEM_EO_CLASS_TYPE

typedef Eo Elm_Menu_Item;

#endif

#ifndef _ELM_MENU_ITEM_EO_TYPES
#define _ELM_MENU_ITEM_EO_TYPES


#endif

/**
 * @brief Set the icon of a menu item to the standard icon with the given name.
 *
 * Once this icon is set, any previously set icon will be deleted. To hide icon
 * set it to "".
 *
 * @param[in] icon The name of icon object.
 *
 * @ingroup Elm_Menu_Item
 */
EAPI void elm_menu_item_icon_name_set(Elm_Menu_Item *obj, const char *icon);

/**
 * @brief Get the string representation from the icon of a menu item
 *
 * Once this icon is set, any previously set icon will be deleted. To hide icon
 * set it to "".
 *
 * @return The name of icon object.
 *
 * @ingroup Elm_Menu_Item
 */
EAPI const char *elm_menu_item_icon_name_get(const Elm_Menu_Item *obj);

/**
 * @brief Get the item index
 *
 * @return Item index
 *
 * @ingroup Elm_Menu_Item
 */
EAPI unsigned int elm_menu_item_index_get(const Elm_Menu_Item *obj);

/**
 * @brief Remove all sub-items (children) of the given item
 *
 * This removes all items that are children (and their descendants) of the
 * given item @c it.
 *
 * @since 1.8
 *
 * @ingroup Elm_Menu_Item
 */
EAPI void elm_menu_item_subitems_clear(Elm_Menu_Item *obj);

/**
 * @brief Returns a list of @c item's subitems.
 *
 * @return A list of @c item's subitems
 *
 * @ingroup Elm_Menu_Item
 */
EAPI const Eina_List *elm_menu_item_subitems_get(const Elm_Menu_Item *obj);

/**
 * @brief Returns whether @c item is a separator.
 *
 * @return @c true if the item is a separator.
 *
 * @ingroup Elm_Menu_Item
 */
EAPI Eina_Bool elm_menu_item_is_separator(const Elm_Menu_Item *obj);

/**
 * @brief Get the real Evas(Edje) object created to implement the view of a
 * given menu item.
 *
 * @warning Don't manipulate this object!
 *
 * @return The base Edje object containing the swallowed content associated
 * with the item.
 *
 * @ingroup Elm_Menu_Item
 */
EAPI Efl_Canvas_Object *elm_menu_item_object_get(const Elm_Menu_Item *obj);

#endif
