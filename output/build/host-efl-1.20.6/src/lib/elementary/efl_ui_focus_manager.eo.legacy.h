#ifndef _EFL_UI_FOCUS_MANAGER_EO_LEGACY_H_
#define _EFL_UI_FOCUS_MANAGER_EO_LEGACY_H_

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



















#endif
