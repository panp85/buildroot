#ifndef _EFL_UI_TEXT_EO_LEGACY_H_
#define _EFL_UI_TEXT_EO_LEGACY_H_

#ifndef _EFL_UI_TEXT_EO_CLASS_TYPE
#define _EFL_UI_TEXT_EO_CLASS_TYPE

typedef Eo Efl_Ui_Text;

#endif

#ifndef _EFL_UI_TEXT_EO_TYPES
#define _EFL_UI_TEXT_EO_TYPES

/** EFL UI text anchor information
 *
 * @ingroup Efl_Ui_Text
 */
typedef struct _Efl_Ui_Text_Anchor_Info
{
  const char *name; /**< The name of the anchor, as stated in its href. */
  int button; /**< The mouse button used to click on it. */
  int x; /**< Anchor geometry, relative to canvas. */
  int y; /**< Anchor geometry, relative to canvas. */
  int w; /**< Anchor geometry, relative to canvas. */
  int h; /**< Anchor geometry, relative to canvas. */
} Efl_Ui_Text_Anchor_Info;

/** EFL text hover parent
 *
 * @ingroup Efl_Ui_Text
 */
typedef struct _Efl_Ui_Text_Hover_Parent
{
  int x; /**< Hover parent X coordinate */
  int y; /**< Hover parent Y coordinate */
  int w; /**< Hover parent width */
  int h; /**< Hover parent height */
} Efl_Ui_Text_Hover_Parent;

/** EFL text anchor hover information
 *
 * @ingroup Efl_Ui_Text
 */
typedef struct _Efl_Ui_Text_Anchor_Hover_Info
{
  const Efl_Ui_Text_Anchor_Info *anchor_info; /**< The actual anchor info. */
  Elm_Hover *hover; /**< The hover object to use for the popup. */
  Efl_Ui_Text_Hover_Parent hover_parent; /**< Hover parent widget */
  Eina_Bool hover_left; /**< Hint indicating if there's space for content on the
                         * left side of the hover. Before calling the callback,
                         * the widget will make the necessary calculations to
                         * check which sides are fit to be set with content,
                         * based on the position the hover is activated and its
                         * distance to the edges of its parent object */
  Eina_Bool hover_right; /**< Hint indicating content fits on the right side of
                          * the hover. See @.hover_left. */
  Eina_Bool hover_top; /**< Hint indicating content fits on top of the hover.
                        * @.hover_left. */
  Eina_Bool hover_bottom; /**< Hint indicating content fits below the hover. See
                           * @.hover_left. */
} Efl_Ui_Text_Anchor_Hover_Info;


#endif














































#endif
