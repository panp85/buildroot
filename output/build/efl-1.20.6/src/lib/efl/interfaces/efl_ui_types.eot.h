#ifndef _EFL_UI_TYPES_EOT_H_
#define _EFL_UI_TYPES_EOT_H_

#ifndef _EFL_UI_TYPES_EOT_TYPES
#define _EFL_UI_TYPES_EOT_TYPES

/** Permitted directions for dragging objects.
 *
 * @ingroup Efl_Ui_Drag
 */
typedef enum
{
  EFL_UI_DRAG_DIR_NONE = 0, /**< Not draggable in any direction. */
  EFL_UI_DRAG_DIR_X = 1, /**< Draggable horizontally. */
  EFL_UI_DRAG_DIR_Y = 2, /**< Draggable vertically. */
  EFL_UI_DRAG_DIR_XY = 3 /**< Draggable in both directions. */
} Efl_Ui_Drag_Dir;


#endif

#endif
