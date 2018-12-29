#ifndef _ELM_WIDGET_EO_LEGACY_H_
#define _ELM_WIDGET_EO_LEGACY_H_

#ifndef _ELM_WIDGET_EO_CLASS_TYPE
#define _ELM_WIDGET_EO_CLASS_TYPE

typedef Eo Elm_Widget;

#endif

#ifndef _ELM_WIDGET_EO_TYPES
#define _ELM_WIDGET_EO_TYPES

/** Used in 'Virtual' function @ref Elm.Widget.activate.
 *
 * @ingroup Elm
 */
typedef enum
{
  ELM_ACTIVATE_DEFAULT = 0, /**< Activate default */
  ELM_ACTIVATE_UP, /**< Activate up */
  ELM_ACTIVATE_DOWN, /**< Activate down */
  ELM_ACTIVATE_RIGHT, /**< Activate right */
  ELM_ACTIVATE_LEFT, /**< Activate left */
  ELM_ACTIVATE_BACK /**< Activate back */
} Elm_Activate;

/** Return codes when a Elementary theme is applied
 *
 * @ingroup Elm_Theme
 */
typedef enum
{
  ELM_THEME_APPLY_FAILED = 0, /**< Failed to apply theme */
  ELM_THEME_APPLY_DEFAULT = 1, /**< Default return value */
  ELM_THEME_APPLY_SUCCESS = 3 /**< Success to apply theme */
} Elm_Theme_Apply;

/** Elementary tooltip
 *
 * @ingroup Elm
 */
typedef struct _Elm_Tooltip Elm_Tooltip;


#endif

/**
 * @brief Focus property
 *
 * @param[in] focus @c true if the widget has focus, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_set(Elm_Widget *obj, Eina_Bool focus);

/**
 * @brief Focus property
 *
 * @return @c true if the widget has focus, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_focus_get(const Elm_Widget *obj);

/**
 * @brief Lock the Y axis from being dragged
 *
 * @param[in] lock @c true if the Y axis is locked, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_drag_lock_y_set(Elm_Widget *obj, Eina_Bool lock);

/**
 * @brief Lock the Y axis from being dragged
 *
 * @return @c true if the Y axis is locked, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_drag_lock_y_get(const Elm_Widget *obj);

/**
 * @brief Control the widget focus highlight style.
 *
 * @param[in] style The name of the focus highlight style.
 *
 * @return @c true on success, @c false otherwise.
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_focus_highlight_style_set(Elm_Widget *obj, const char *style);

/**
 * @brief Control the widget focus highlight style.
 *
 * @return The name of the focus highlight style.
 *
 * @ingroup Elm_Widget
 */
EAPI const char *elm_widget_focus_highlight_style_get(const Elm_Widget *obj);

/**
 * @brief Make the elementary object and its children to be unfocusable (or
 * focusable). If the tree is set as unfocusable, newest focused object which
 * is not in this tree will get focus. This API can be helpful for an object to
 * be deleted. When an object will be deleted soon, it and its children may not
 * want to get focus (by focus reverting or by other focus controls). Then,
 * just use this API before deleting.
 *
 * @param[in] tree_unfocusable @c true for unfocusable, @c false for focusable.
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_tree_unfocusable_set(Elm_Widget *obj, Eina_Bool tree_unfocusable);

/**
 * @brief Make the elementary object and its children to be unfocusable (or
 * focusable). If the tree is set as unfocusable, newest focused object which
 * is not in this tree will get focus. This API can be helpful for an object to
 * be deleted. When an object will be deleted soon, it and its children may not
 * want to get focus (by focus reverting or by other focus controls). Then,
 * just use this API before deleting.
 *
 * @return @c true for unfocusable, @c false for focusable.
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_tree_unfocusable_get(const Elm_Widget *obj);

/**
 * @brief Widget theme
 *
 * @param[in] th Elementary theme
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_theme_set(Elm_Widget *obj, Elm_Theme *th);

/**
 * @brief Widget theme
 *
 * @return Elementary theme
 *
 * @ingroup Elm_Widget
 */
EAPI Elm_Theme *elm_widget_theme_get(const Elm_Widget *obj);

/**
 * @brief Enabled / disabled property
 *
 * @param[in] disabled @c true if the widget is disabled, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_disabled_set(Elm_Widget *obj, Eina_Bool disabled);

/**
 * @brief Enabled / disabled property
 *
 * @return @c true if the widget is disabled, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_disabled_get(const Elm_Widget *obj);

/**
 * @brief Highlight ignore
 *
 * @param[in] ignore @c true if highlights are ignored, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_highlight_ignore_set(Elm_Widget *obj, Eina_Bool ignore);

/**
 * @brief Highlight ignore
 *
 * @return @c true if highlights are ignored, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_highlight_ignore_get(const Elm_Widget *obj);

/**
 * @brief Orientation mode disabled or enabled
 *
 * @param[in] disabled @c true if orientation mode is disabled, @c false
 * otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_orientation_mode_disabled_set(Elm_Widget *obj, Eina_Bool disabled);

/**
 * @brief Orientation mode disabled or enabled
 *
 * @return @c true if orientation mode is disabled, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_orientation_mode_disabled_get(const Elm_Widget *obj);

/**
 * @brief Theme style
 *
 * @param[in] style Style name
 *
 * @return Theme style
 *
 * @ingroup Elm_Widget
 */
EAPI Elm_Theme_Apply elm_widget_style_set(Elm_Widget *obj, const char *style);

/**
 * @brief Theme style
 *
 * @return Style name
 *
 * @ingroup Elm_Widget
 */
EAPI const char *elm_widget_style_get(const Elm_Widget *obj);

/**
 * @brief A custom chain of objects to pass focus.
 *
 * @note On focus cycle, only will be evaluated children of this container.
 *
 * This function overwrites any previous custom focus chain within the list of
 * objects. The previous list will be deleted and this list will be managed by
 * elementary. After it is set, don't modify it.
 *
 * @param[in] objs Chain of objects to pass focus
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_custom_chain_set(Elm_Widget *obj, Eina_List *objs);

/**
 * @brief A custom chain of objects to pass focus.
 *
 * @note On focus cycle, only will be evaluated children of this container.
 *
 * @return Chain of objects
 *
 * @ingroup Elm_Widget
 */
EAPI const Eina_List *elm_widget_focus_custom_chain_get(const Elm_Widget *obj);

/**
 * @brief The ability for an Elementary object to be focused.
 *
 * Unfocusable objects do nothing when programmatically focused, being the
 * nearest focusable parent object the one really getting focus. Also, when
 * they receive mouse input, they will get the event, but not take away the
 * focus from where it was previously.
 *
 * @note Objects which are meant to be interacted with by input events are
 * created able to be focused, by default. All the others are not.
 *
 * @param[in] can_focus @c true if the object can be focused, @c false if not.
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_can_focus_set(Elm_Widget *obj, Eina_Bool can_focus);

/**
 * @brief The ability for an Elementary object to be focused.
 *
 * Unfocusable objects do nothing when programmatically focused, being the
 * nearest focusable parent object the one really getting focus. Also, when
 * they receive mouse input, they will get the event, but not take away the
 * focus from where it was previously.
 *
 * @note Objects which are meant to be interacted with by input events are
 * created able to be focused, by default. All the others are not.
 *
 * @return @c true if the object can be focused, @c false if not.
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_can_focus_get(const Elm_Widget *obj);

/**
 * @brief Highlight in theme property
 *
 * @param[in] highlight @c true if widget gets hightlight, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_highlight_in_theme_set(Elm_Widget *obj, Eina_Bool highlight);

/**
 * @brief Highlight in theme property
 *
 * @return @c true if widget gets hightlight, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_highlight_in_theme_get(const Elm_Widget *obj);

/**
 * @brief The internal widget parent
 *
 * @param[in] parent Widget parent object
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_parent_set(Elm_Widget *obj, Efl_Canvas_Object *parent);

/**
 * @brief The internal widget parent
 *
 * @return Widget parent object
 *
 * @ingroup Elm_Widget
 */
EAPI Efl_Canvas_Object *elm_widget_parent_get(const Elm_Widget *obj);

/**
 * @brief Accessibility information
 *
 * @param[in] txt Accessibility text description
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_access_info_set(Elm_Widget *obj, const char *txt);

/**
 * @brief Accessibility information
 *
 * @return Accessibility text description
 *
 * @ingroup Elm_Widget
 */
EAPI const char *elm_widget_access_info_get(const Elm_Widget *obj);

/**
 * @brief Drag lock on X axis
 *
 * @param[in] lock @c true if drag is locked on X axis, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_drag_lock_x_set(Elm_Widget *obj, Eina_Bool lock);

/**
 * @brief Drag lock on X axis
 *
 * @return @c true if drag is locked on X axis, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_drag_lock_x_get(const Elm_Widget *obj);

/**
 * @brief Accessibility highlight in theme
 *
 * @param[in] highlight @c true if highlighted, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_access_highlight_in_theme_set(Elm_Widget *obj, Eina_Bool highlight);

/**
 * @brief Accessibility highlight in theme
 *
 * @return @c true if highlighted, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_access_highlight_in_theme_get(const Elm_Widget *obj);

/**
 * @brief Control the focus_region_show mode.
 *
 * @param[in] mode Focus region show mode
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_region_show_mode_set(Elm_Widget *obj, Elm_Focus_Region_Show_Mode mode);

/**
 * @brief Control the focus_region_show mode.
 *
 * @return Focus region show mode
 *
 * @ingroup Elm_Widget
 */
EAPI Elm_Focus_Region_Show_Mode elm_widget_focus_region_show_mode_get(const Elm_Widget *obj);

/**
 * @brief Parent highlight property
 *
 * @param[in] highlighted @c true if highlighted, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_parent_highlight_set(Elm_Widget *obj, Eina_Bool highlighted);

/**
 * @brief Theme object property
 *
 * @param[in] edj Edje object
 * @param[in] wname Widget name
 * @param[in] welement Widget element
 * @param[in] wstyle Widget style
 *
 * @return Theme apply
 *
 * @ingroup Elm_Widget
 */
EAPI Elm_Theme_Apply elm_widget_theme_object_set(Elm_Widget *obj, Efl_Canvas_Object *edj, const char *wname, const char *welement, const char *wstyle);

/**
 * @brief Hover object property
 *
 * @param[in] sobj Hover sub object
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_hover_object_set(Elm_Widget *obj, Efl_Canvas_Object *sobj);

/**
 * @brief Region hook on show property
 *
 * @param[in] func Region hook function
 * @param[in] data Data pointer
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_on_show_region_hook_set(Elm_Widget *obj, region_hook_func_type func, void *data);

/**
 * @brief Translate domain text part property
 *
 * @param[in] part Part name
 * @param[in] domain Domain
 * @param[in] translatable @c true if translatable, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_domain_part_text_translatable_set(Elm_Widget *obj, const char *part, const char *domain, Eina_Bool translatable);

/**
 * @brief Widget orientation
 *
 * @param[in] rotation Orientation
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_orientation_set(Elm_Widget *obj, int rotation);

/**
 * @brief Resize object property
 *
 * @param[in] sobj Object
 * @param[in] sub_obj @c true if sub object exists, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_resize_object_set(Elm_Widget *obj, Efl_Canvas_Object *sobj, Eina_Bool sub_obj);

/**
 * @brief Domain translatable text part property
 *
 * @param[in] part Part name
 * @param[in] domain Domain name
 * @param[in] label Label
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_domain_translatable_part_text_set(Elm_Widget *obj, const char *part, const char *domain, const char *label);

/**
 * @brief Function to operate on a given widget's scrollable children when
 * necessary.
 *
 * @warning free the returned list with eina_list_free().
 *
 * @return List of scrollable children
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_List *elm_widget_scrollable_children_get(const Elm_Widget *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Scroll hold property
 *
 * @return FIXME
 *
 * @ingroup Elm_Widget
 */
EAPI int elm_widget_scroll_hold_get(const Elm_Widget *obj);

/**
 * @brief Drag child locked Y axis property
 *
 * @return FIXME
 *
 * @ingroup Elm_Widget
 */
EAPI int elm_widget_drag_child_locked_y_get(const Elm_Widget *obj);

/**
 * @brief Control item loop feature.
 *
 * @param[in] enable @c true if item loop is enabled, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_item_loop_enabled_set(Elm_Widget *obj, Eina_Bool enable);

/**
 * @brief Control item loop feature.
 *
 * @return @c true if item loop is enabled, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_item_loop_enabled_get(const Elm_Widget *obj);

/**
 * @brief Child can focus property
 *
 * @return @c true if child can focus, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_child_can_focus_get(const Elm_Widget *obj);

/**
 * @brief Scroll freeze property
 *
 * @return FIXME
 *
 * @ingroup Elm_Widget
 */
EAPI int elm_widget_scroll_freeze_get(const Elm_Widget *obj);

/**
 * @brief Focus region property
 *
 * @param[out] x X coordinate
 * @param[out] y Y coordinate
 * @param[out] w Width
 * @param[out] h Height
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_focus_region_get(const Elm_Widget *obj, int *x, int *y, int *w, int *h);

/**
 * @brief Top widget property
 *
 * @return Top widget
 *
 * @ingroup Elm_Widget
 */
EAPI Efl_Canvas_Object *elm_widget_top_get(const Elm_Widget *obj);

/**
 * @brief Focus order property
 *
 * @return FIXME
 *
 * @ingroup Elm_Widget
 */
EAPI unsigned int elm_widget_focus_order_get(const Elm_Widget *obj);

/**
 * @brief Drag child locked X axis
 *
 * @return FIXME
 *
 * @ingroup Elm_Widget
 */
EAPI int elm_widget_drag_child_locked_x_get(const Elm_Widget *obj);

/**
 * @brief Can focus children list
 *
 * @return List of children which can focus
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_List *elm_widget_can_focus_child_list_get(const Elm_Widget *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Get the focused widget item.
 *
 * @return Focused item
 *
 * @ingroup Elm_Widget
 */
EAPI Elm_Widget_Item *elm_widget_focused_item_get(const Elm_Widget *obj);

/**
 * @brief Parents bounce property
 *
 * @param[out] horiz @c true if parents bounce horizontally, @c false otherwise
 * @param[out] vert @c true if parents bounce vertically, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_parents_bounce_get(const Elm_Widget *obj, Eina_Bool *horiz, Eina_Bool *vert);


/**
 * @brief Highlight property
 *
 * @return @c true if widget is highlight, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_highlight_get(const Elm_Widget *obj);

/**
 * @brief Current focused object in object tree.
 *
 * @return Current focused or @c null, if there is no focused object.
 *
 * @ingroup Elm_Widget
 */
EAPI Efl_Canvas_Object *elm_widget_focused_object_get(const Elm_Widget *obj);

/**
 * @brief Second parent property
 *
 * @param[in] parent Second parent
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_parent2_set(Elm_Widget *obj, Efl_Canvas_Object *parent);

/**
 * @brief Second parent property
 *
 * @return Second parent
 *
 * @ingroup Elm_Widget
 */
EAPI Efl_Canvas_Object *elm_widget_parent2_get(const Elm_Widget *obj);

/**
 * @brief Part text property
 *
 * @param[in] part Part name
 * @param[in] label Label
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_part_text_set(Elm_Widget *obj, const char * part, const char *label);

/**
 * @brief Part text property
 *
 * @param[in] part Part name
 *
 * @return Label
 *
 * @ingroup Elm_Widget
 */
EAPI const char *elm_widget_part_text_get(const Elm_Widget *obj, const char * part);

/**
 * @brief Get newest focus in order
 *
 * @param[out] newest_focus_order Newest focus order
 * @param[in] can_focus_only @c true only us widgets which can focus, @c false
 * otherweise
 *
 * @return Handle to focused widget
 *
 * @ingroup Elm_Widget
 */
EAPI Efl_Canvas_Object *elm_widget_newest_focus_order_get(const Elm_Widget *obj, unsigned int *newest_focus_order, Eina_Bool can_focus_only);

/** Push scroll hold
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_scroll_hold_push(Elm_Widget *obj);

/**
 * @brief Set the next object with specific focus direction.
 *
 * @param[in] next Focus next object
 * @param[in] dir Focus direction
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_next_object_set(Elm_Widget *obj, Efl_Canvas_Object *next, Elm_Focus_Direction dir);

/**
 * @brief Get the next object with specific focus direction.
 *
 * @param[in] dir Focus direction
 *
 * @return Focus next object
 *
 * @since 1.8
 *
 * @ingroup Elm_Widget
 */
EAPI Efl_Canvas_Object *elm_widget_focus_next_object_get(const Elm_Widget *obj, Elm_Focus_Direction dir);

/**
 * @brief Set the next object item with specific focus direction.
 *
 * @param[in] next_item Focus next object item
 * @param[in] dir Focus direction
 *
 * @since 1.16
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_next_item_set(Elm_Widget *obj, Elm_Widget_Item *next_item, Elm_Focus_Direction dir);

/**
 * @brief Get the next object item with specific focus direction.
 *
 * @param[in] dir Focus direction
 *
 * @return Focus next object item
 *
 * @since 1.16
 *
 * @ingroup Elm_Widget
 */
EAPI Elm_Widget_Item *elm_widget_focus_next_item_get(const Elm_Widget *obj, Elm_Focus_Direction dir);

/** Handle focus tree unfocusable
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_tree_unfocusable_handle(Elm_Widget *obj);

/**
 * @brief Prepend object to custom focus chain.
 *
 * @note If @"relative_child" equal to @c null or not in custom chain, the
 * object will be added in begin.
 *
 * @note On focus cycle, only will be evaluated children of this container.
 *
 * @param[in] child The child to be added in custom chain.
 * @param[in] relative_child The relative object to position the child.
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_custom_chain_prepend(Elm_Widget *obj, Efl_Canvas_Object *child, Efl_Canvas_Object *relative_child);

/**
 * @brief Translate part text
 *
 * @param[in] part Part name
 * @param[in] text Text
 *
 * @return Translated text
 *
 * @ingroup Elm_Widget
 */
EAPI const char *elm_widget_part_text_translate(Elm_Widget *obj, const char *part, const char *text);

/**
 * @brief Get the focus highlight geometry of widget.
 *
 * @param[out] x X coordinate
 * @param[out] y Y coordinate
 * @param[out] w Width
 * @param[out] h Height
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_highlight_geometry_get(const Elm_Widget *obj, int *x, int *y, int *w, int *h);


/**
 * @brief 'Virtual' function handling sub objects being added.
 *
 * @param[in] sobj Sub object
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_sub_object_add(Elm_Widget *obj, Efl_Canvas_Object *sobj);


/**
 * @brief 'Virtual' function handling input events on the widget.
 *
 * @param[in] source Source object
 * @param[in] type Callback type
 * @param[in] event_info Event info
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_event(Elm_Widget *obj, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


/**
 * @brief 'Virtual' function handling focus in/out events on the widget
 *
 * @param[in] item Widget
 *
 * @return @c true if this widget can handle focus, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_on_focus(Elm_Widget *obj, Elm_Widget_Item *item);

/**
 * @brief 'Virtual' function returning an inner area of a widget that should be
 * brought into the visible area of a broader viewport, may this context arise.
 *
 * @param[out] x X coordinate
 * @param[out] y Y coordinate
 * @param[out] w Width
 * @param[out] h Height
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_on_focus_region(Elm_Widget *obj, int *x, int *y, int *w, int *h);

/**
 * @brief Give focus to next object with specific focus direction in object
 * tree.
 *
 * @param[in] dir Direction to move the focus.
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_cycle(Elm_Widget *obj, Elm_Focus_Direction dir);

/**
 * @brief 'Virtual' function handling passing focus to sub-objects given a
 * direction, in degrees.
 *
 * @param[in] base Base object
 * @param[in] degree Degree
 * @param[out] direction Direction
 * @param[out] direction_item Direction item
 * @param[out] weight Weight
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_focus_direction(Elm_Widget *obj, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);

/**
 * @brief Add signal callback
 *
 * @param[in] emission Signal emission
 * @param[in] source Signal source
 * @param[in] func Signal callback
 * @param[in] data Data pointer
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_signal_callback_add(Elm_Widget *obj, const char *emission, const char *source, Edje_Signal_Cb func, void *data);

/**
 * @brief 'Virtual' function which checks if handling of passing focus to
 * sub-objects is supported by widget.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_focus_next_manager_is(Elm_Widget *obj);

/**
 * @brief Find widget by name
 *
 * @param[in] name Widget name
 * @param[in] recurse Depth in the tree to search for the widget
 *
 * @return Widget
 *
 * @ingroup Elm_Widget
 */
EAPI Efl_Canvas_Object *elm_widget_name_find(const Elm_Widget *obj, const char *name, int recurse);

/**
 * @brief Get focus list direction
 *
 * @param[in] base Base object
 * @param[in] items Item list
 * @param[in] list_data_get Data get function
 * @param[in] degree Degree
 * @param[out] direction Direction
 * @param[out] direction_item Direction item
 * @param[out] weight Weight
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_focus_list_direction_get(const Elm_Widget *obj, const Efl_Canvas_Object *base, const Eina_List *items, list_data_get_func_type list_data_get, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);

/** Clear focused object
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focused_object_clear(Elm_Widget *obj);

/**
 * @brief Go in focus direction
 *
 * @param[in] degree Degree
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_focus_direction_go(Elm_Widget *obj, double degree);

/**
 * @brief Set show region
 *
 * @param[in] x X coordinate
 * @param[in] y Y coordinate
 * @param[in] w Width
 * @param[in] h Height
 * @param[in] forceshow @c true if show should be forced, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_show_region_set(Elm_Widget *obj, int x, int y, int w, int h, Eina_Bool forceshow);

/**
 * @brief Get show region
 *
 * @param[out] x X coordinate
 * @param[out] y Y coordinate
 * @param[out] w Width
 * @param[out] h Height
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_show_region_get(const Elm_Widget *obj, int *x, int *y, int *w, int *h);

/** Pop scroller freeze
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_scroll_freeze_pop(Elm_Widget *obj);

/**
 * @brief Delet widget tooltip
 *
 * @param[in] tt Tooltip to be deleted
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_tooltip_del(Elm_Widget *obj, Elm_Tooltip *tt);

/**
 * @brief Get next focus item
 *
 * @param[in] dir Focus direction
 * @param[out] next Next object
 * @param[out] next_item Next item
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_focus_next_get(const Elm_Widget *obj, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);

/**
 * @brief Get translatable part text
 *
 * @param[in] part Part name
 *
 * @return Part text
 *
 * @ingroup Elm_Widget
 */
EAPI const char *elm_widget_translatable_part_text_get(const Elm_Widget *obj, const char *part);

/**
 * @brief Restore the focus state of the sub-tree.
 *
 * This API will restore the focus state of the sub-tree to the latest state.
 * If a sub-tree is unfocused and wants to get back to the latest focus state,
 * this API will be helpful.
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_restore(Elm_Widget *obj);

/** Pop scroller hold
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_scroll_hold_pop(Elm_Widget *obj);


/** Push scroller freeze
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_scroll_freeze_push(Elm_Widget *obj);

/**
 * @brief Unset a custom focus chain on a given Elementary widget.
 *
 * Any focus chain previously set is removed entirely after this call.
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_custom_chain_unset(Elm_Widget *obj);

/**
 * @brief Steal focus
 *
 * @param[in] item Widget to steal focus from
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_steal(Elm_Widget *obj, Elm_Widget_Item *item);

/** Handle hide focus
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_hide_handle(Elm_Widget *obj);

/**
 * @brief 'Virtual' function handling passing focus to sub-objects.
 *
 * @param[in] dir Focus direction
 * @param[out] next Next object
 * @param[out] next_item Next item
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_focus_next(Elm_Widget *obj, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);

/**
 * @brief Get next item in focus list
 *
 * @param[in] items Item list
 * @param[in] list_data_get Function type
 * @param[in] dir Focus direction
 * @param[out] next Next object
 * @param[out] next_item Next item
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_focus_list_next_get(const Elm_Widget *obj, const Eina_List *items, list_data_get_func_type list_data_get, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


/**
 * @brief 'Virtual' function on the widget being re-themed.
 *
 * @return Theme apply
 *
 * @ingroup Elm_Widget
 */
EAPI Elm_Theme_Apply elm_widget_theme_apply(Elm_Widget *obj);

/**
 * @brief Get focus direction
 *
 * @param[in] base Base
 * @param[in] degree Degree
 * @param[out] direction Direction
 * @param[out] direction_item Direction item
 * @param[out] weight Weight
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_focus_direction_get(const Elm_Widget *obj, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);

/**
 * @brief Delete signal callback
 *
 * @param[in] emission Signal emission
 * @param[in] source Signal source
 * @param[in] func Callback function
 *
 * @return Handle to deleted callback
 *
 * @ingroup Elm_Widget
 */
EAPI void *elm_widget_signal_callback_del(Elm_Widget *obj, const char *emission, const char *source, Edje_Signal_Cb func);

/**
 * @brief Emit signal on widget
 *
 * @param[in] emission Signal string
 * @param[in] source Signal source
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_signal_emit(Elm_Widget *obj, const char *emission, const char *source);

/**
 * @brief 'Virtual' function on the widget being disabled.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_disable(Elm_Widget *obj);

/**
 * @brief 'Virtual' function handling sub objects being removed.
 *
 * @param[in] sobj Object to be deleted
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_sub_object_del(Elm_Widget *obj, Efl_Canvas_Object *sobj);

/**
 * @brief Add tooltip to widget
 *
 * @param[in] tt Tooltip
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_tooltip_add(Elm_Widget *obj, Elm_Tooltip *tt);

/** Show focus region
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_region_show(const Elm_Widget *obj);

/** Handle disable widget focus
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_disabled_handle(Elm_Widget *obj);

/**
 * @brief Append object to custom focus chain.
 *
 * @note If @"relative_child" equal to @c null or not in custom chain, the
 * object will be added in end.
 *
 * @note On focus cycle, only will be evaluated children of this container.
 *
 * @param[in] child The child to be added in custom chain.
 * @param[in] relative_child The relative object to position the child.
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_custom_chain_append(Elm_Widget *obj, Efl_Canvas_Object *child, Efl_Canvas_Object *relative_child);

/**
 * @brief The widget's focus move policy.
 *
 * @param[in] policy Focus move policy
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_move_policy_set(Elm_Widget *obj, Efl_Ui_Focus_Move_Policy policy);

/**
 * @brief The widget's focus move policy.
 *
 * @return Focus move policy
 *
 * @ingroup Elm_Widget
 */
EAPI Efl_Ui_Focus_Move_Policy elm_widget_focus_move_policy_get(const Elm_Widget *obj);

/**
 * @brief Control the widget's focus_move_policy mode setting.
 *
 * @param[in] automatic @c true to follow system focus move policy change,
 * @c false otherwise
 *
 * @since 1.18
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_move_policy_automatic_set(Elm_Widget *obj, Eina_Bool automatic);

/**
 * @brief Control the widget's focus_move_policy mode setting.
 *
 * @return @c true to follow system focus move policy change, @c false
 * otherwise
 *
 * @since 1.18
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_focus_move_policy_automatic_get(const Elm_Widget *obj);

/** No description supplied.
 *
 * @since 1.18
 *
 * @ingroup Elm_Widget
 */
EAPI void elm_widget_focus_reconfigure(Elm_Widget *obj);

/**
 * @brief Register focus with focus manager
 *
 * @param[in] manager The manager to register against
 * @param[in] logical The logical parent to use
 * @param[in,out] logical_flag reference to the flag indicating if the should
 * be logical or not change this flag to the value you have it registered
 *
 * @return return @c true or @c false if the registration was successfull or
 * not
 *
 * @ingroup Elm_Widget
 */
EAPI Eina_Bool elm_widget_focus_register(Elm_Widget *obj, Efl_Ui_Focus_Manager *manager, Efl_Ui_Focus_Object *logical, Eina_Bool *logical_flag);

/**
 * @brief If the widget needs a manager, this function is called
 *
 * It can be used and overriden to inject your own manager or set custom
 * options on the manager
 *
 * @param[in] root the logical root to use in the manager.
 *
 * @ingroup Elm_Widget
 */
EAPI Efl_Ui_Focus_Manager *elm_widget_focus_manager_factory(Elm_Widget *obj, Efl_Ui_Focus_Object *root);

#endif
