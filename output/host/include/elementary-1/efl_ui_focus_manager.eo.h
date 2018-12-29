#ifndef _EFL_UI_FOCUS_MANAGER_EO_H_
#define _EFL_UI_FOCUS_MANAGER_EO_H_

#ifndef _EFL_UI_FOCUS_MANAGER_EO_CLASS_TYPE
#define _EFL_UI_FOCUS_MANAGER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Focus_Manager;

#endif

#ifndef _EFL_UI_FOCUS_MANAGER_EO_TYPES
#define _EFL_UI_FOCUS_MANAGER_EO_TYPES

/** Those values are describing a direction from the position of view from one
 * item.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus
 */
typedef enum
{
  EFL_UI_FOCUS_DIRECTION_RIGHT = 0, /**< Coordinate-wise the next element on the
                                     * right-hand side */
  EFL_UI_FOCUS_DIRECTION_LEFT = 1, /**< Coordinate-wise the next element on the
                                    * left-hand side */
  EFL_UI_FOCUS_DIRECTION_DOWN = 2, /**< Coordinate-wise the next element
                                    * downward */
  EFL_UI_FOCUS_DIRECTION_UP = 3, /**< Coorinate-wise the next element upwards */
  EFL_UI_FOCUS_DIRECTION_NEXT = 4, /**< Logically-wise the next item in the
                                    * logical tree */
  EFL_UI_FOCUS_DIRECTION_PREV = 5, /**< Logically-wise the prev item in the
                                    * logical tree */
  EFL_UI_FOCUS_DIRECTION_LAST = 6 /**< Last value for this enum, do not use */
} Efl_Ui_Focus_Direction;

/** Structure holding the graph of relations between focussable objects.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus
 */
typedef struct _Efl_Ui_Focus_Relations
{
  Eina_List *right; /**< List of objects on the right side */
  Eina_List *left; /**< [List of objects on the left side */
  Eina_List *top; /**< [List of objects above */
  Eina_List *down; /**< [List of objects below */
  Efl_Ui_Focus_Object *next; /**< [Next object */
  Efl_Ui_Focus_Object *prev; /**< Previous object */
  const char *type; /**< Object type */
  Efl_Ui_Focus_Object *parent; /**< Parent object */
  Efl_Ui_Focus_Manager *redirect; /**< Redirect manager */
} Efl_Ui_Focus_Relations;


#endif
/**
 * @brief Calculates the directions of Efl.Ui.Focus.Direction
 *
 * Each registered item will get a other registered object into each direction,
 * you can get those items for the currently focused item if you call request
 * move.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
#define EFL_UI_FOCUS_MANAGER_CLASS efl_ui_focus_manager_class_get()

EWAPI const Efl_Class *efl_ui_focus_manager_class_get(void);

/**
 * @brief Move the focus into the given direction.
 *
 * This call flushes all changes. This means all changes between the last flush
 * and now are computed
 *
 * @param[in] direction The direction to move to
 *
 * @return The element which is now focused
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI Efl_Ui_Focus_Object *efl_ui_focus_manager_move(Eo *obj, Efl_Ui_Focus_Direction direction);

/**
 * @brief Returns the object which would be the next object to focus in the
 * given direction.
 *
 * @param[in] direction Direction to move focus
 *
 * @return Next object to focus
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI Efl_Ui_Focus_Object *efl_ui_focus_manager_request_move(Eo *obj, Efl_Ui_Focus_Direction direction);

/**
 * @brief Register a new item in the graph.
 *
 * @c parent can not be @c null, it will be used as the parent in the logical
 * tree. @c redirect will be set as redirect property on that manager, once
 * @c child gets focused.
 *
 * @param[in] child The object to register
 * @param[in] parent The parent to use in the logical tree
 * @param[in] redirect The redirect manager to set once this child is focused
 * can be NULL for no redirect
 *
 * @return @c true if successful, @c false otherwise
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI Eina_Bool efl_ui_focus_manager_register(Eo *obj, Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Object *parent, Efl_Ui_Focus_Manager *redirect) EINA_ARG_NONNULL(2, 3);

/**
 * @brief Register a new item just for the logical parent.
 *
 * The item can never get focus, it just helps to build a tree out of the items
 * that are getting focus.
 *
 * @param[in] child The object to register
 * @param[in] parent The parent to use in the logical tree
 * @param[in] redirect The redirect manager to set once this child is focused
 * can be @c null for no redirect
 *
 * @return @c true if successful, @c false otherwise
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI Eina_Bool efl_ui_focus_manager_register_logical(Eo *obj, Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Object *parent, Efl_Ui_Focus_Manager *redirect) EINA_ARG_NONNULL(2, 3);

/**
 * @brief Set a new redirect object for the given child.
 *
 * Once @c child is focused the redirect manager will be set in the redirect
 * property. Set redirect to @c null if nothing should happen.
 *
 * @param[in] child The child to update
 * @param[in] redirect Once @c child got focused this element will be set as
 * redirect
 *
 * @return @c true if successful, @c false otherwise
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI Eina_Bool efl_ui_focus_manager_update_redirect(Eo *obj, Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Manager *redirect) EINA_ARG_NONNULL(2);

/**
 * @brief Set a new logical parent for the given child.
 *
 * @param[in] child The child to update
 * @param[in] parent The parent which now will be the logical parent of child
 *
 * @return @c true if successful, @c false otherwise
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI Eina_Bool efl_ui_focus_manager_update_parent(Eo *obj, Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Object *parent) EINA_ARG_NONNULL(2, 3);

/**
 * @brief Give the list of children a different order.
 *
 * @param[in] parent the parent to update
 * @param[in] children the list with the new order
 *
 * @return @c true if successful, @c false otherwise
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI Eina_Bool efl_ui_focus_manager_update_children(Eo *obj, Efl_Ui_Focus_Object *parent, Eina_List *children) EINA_ARG_NONNULL(2);

/**
 * @brief Give the given order to the parent's child.
 *
 * Children from the list which are no real children are ignored.
 *
 * @param[in] parent the parent to update
 * @param[in] children the order of items
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI void efl_ui_focus_manager_update_order(Eo *obj, Efl_Ui_Focus_Object *parent, Eina_List *children) EINA_ARG_NONNULL(2);

/**
 * @brief Unregister the given item from the focus graph.
 *
 * @param[in] child The child to unregister.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI void efl_ui_focus_manager_unregister(Eo *obj, Efl_Ui_Focus_Object *child);

/**
 * @brief Make the given object the currently focused object in this manager.
 *
 * The object has to be part of this manager object. If you want to focus
 * something in the redirect manager, just call the function on the redirect
 * manager.
 *
 * @param[in] focus The object to be focused. Pass the root to get the first
 * available none logical registered child focused
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI void efl_ui_focus_manager_focus(Eo *obj, Efl_Ui_Focus_Object *focus) EINA_ARG_NONNULL(2);

/**
 * @brief Return the currently focused element of this manager.
 *
 * @return The object that has focus.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI Efl_Ui_Focus_Object *efl_ui_focus_manager_focused(Eo *obj);

/**
 * @brief Add a another manager to serve the move requests.
 *
 * If this value is set, all move requests are redirected to this manager
 * object. Set it to @c null once nothing should be redirected anymore.
 *
 * @param[in] redirect The redirect manager.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI void efl_ui_focus_manager_redirect_set(Eo *obj, Efl_Ui_Focus_Manager *redirect);

/**
 * @brief Add a another manager to serve the move requests.
 *
 * If this value is set, all move requests are redirected to this manager
 * object. Set it to @c null once nothing should be redirected anymore.
 *
 * @return The redirect manager.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI Efl_Ui_Focus_Manager *efl_ui_focus_manager_redirect_get(const Eo *obj);

/**
 * @brief The list of elements which are at the border of the graph.
 *
 * This means one of the relations right,left or down,up are not set. This call
 * flushes all changes. See @ref efl_ui_focus_manager_move
 *
 * @return An iterator over the border objects.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI Eina_Iterator *efl_ui_focus_manager_border_elements_get(const Eo *obj);

/**
 * @brief Root node for all logical subtrees.
 *
 * This property can only be set once.
 *
 * @param[in] root Will be registered into this manager object.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI Eina_Bool efl_ui_focus_manager_root_set(Eo *obj, Efl_Ui_Focus_Object *root) EINA_ARG_NONNULL(2);

/**
 * @brief Root node for all logical subtrees.
 *
 * This property can only be set once.
 *
 * @return Will be registered into this manager object.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI Efl_Ui_Focus_Object *efl_ui_focus_manager_root_get(const Eo *obj);

/**
 * @brief This will fetch the data from a registered node.
 *
 * Be aware this function will trigger all dirty nodes to be computed
 *
 * @param[in] child The child object to inspect.
 *
 * @return The list of relations starting from @c child.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI Efl_Ui_Focus_Relations *efl_ui_focus_manager_fetch(Eo *obj, Efl_Ui_Focus_Object *child);

/**
 * @brief Return the last logical object.
 *
 * The returned object is the last object that would be returned if you start
 * at the root and move the direction into next.
 *
 * @return Last object
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
EOAPI Efl_Ui_Focus_Object *efl_ui_focus_manager_logical_end(Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_REDIRECT_CHANGED;

/** Emitted when the redirect object has changed, the old manager is passed as
 * event info
 * @return Efl_Ui_Focus_Manager *
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
#define EFL_UI_FOCUS_MANAGER_EVENT_REDIRECT_CHANGED (&(_EFL_UI_FOCUS_MANAGER_EVENT_REDIRECT_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_FLUSH_PRE;

/** Emitted once the graph calculationg will be performed
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
#define EFL_UI_FOCUS_MANAGER_EVENT_FLUSH_PRE (&(_EFL_UI_FOCUS_MANAGER_EVENT_FLUSH_PRE))

EWAPI extern const Efl_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_COORDS_DIRTY;

/** Emitted once the graph is dirty, this means there are potential changes in
 * border_elements you want to know about
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
#define EFL_UI_FOCUS_MANAGER_EVENT_COORDS_DIRTY (&(_EFL_UI_FOCUS_MANAGER_EVENT_COORDS_DIRTY))

EWAPI extern const Efl_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_FOCUSED;

/** Emitted if the manager has focused an object
 * @return Efl_Ui_Focus_Object *
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager
 */
#define EFL_UI_FOCUS_MANAGER_EVENT_FOCUSED (&(_EFL_UI_FOCUS_MANAGER_EVENT_FOCUSED))

#endif
