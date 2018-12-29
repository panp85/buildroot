#ifndef _EFL_UI_FLIP_EO_H_
#define _EFL_UI_FLIP_EO_H_

#ifndef _EFL_UI_FLIP_EO_CLASS_TYPE
#define _EFL_UI_FLIP_EO_CLASS_TYPE

typedef Eo Efl_Ui_Flip;

#endif

#ifndef _EFL_UI_FLIP_EO_TYPES
#define _EFL_UI_FLIP_EO_TYPES

/** Efl UI flip mode
 *
 * @ingroup Efl_Ui_Flip
 */
typedef enum
{
  EFL_UI_FLIP_ROTATE_Y_CENTER_AXIS = 0, /**< Rotate Y center axis flip mode */
  EFL_UI_FLIP_ROTATE_X_CENTER_AXIS, /**< Rotate X center axis flip mode */
  EFL_UI_FLIP_ROTATE_XZ_CENTER_AXIS, /**< Rotate XZ center axis flip mode */
  EFL_UI_FLIP_ROTATE_YZ_CENTER_AXIS, /**< Rotate YZ center axis flip mode */
  EFL_UI_FLIP_CUBE_LEFT, /**< Cube left flip mode */
  EFL_UI_FLIP_CUBE_RIGHT, /**< Cube right flip mode */
  EFL_UI_FLIP_CUBE_UP, /**< Cube up flip mode */
  EFL_UI_FLIP_CUBE_DOWN, /**< Cube down flip mode */
  EFL_UI_FLIP_PAGE_LEFT, /**< Page left flip mode */
  EFL_UI_FLIP_PAGE_RIGHT, /**< Page right flip mode */
  EFL_UI_FLIP_PAGE_UP, /**< Page up flip mode */
  EFL_UI_FLIP_PAGE_DOWN, /**< Page down flip mode */
  EFL_UI_FLIP_CROSS_FADE /**< Cross fade flip mode */
} Efl_Ui_Flip_Mode;

/** Efl UI flip interaction
 *
 * @ingroup Efl_Ui_Flip
 */
typedef enum
{
  EFL_UI_FLIP_INTERACTION_NONE = 0, /**< No interaction */
  EFL_UI_FLIP_INTERACTION_ROTATE, /**< Rotate interaction */
  EFL_UI_FLIP_INTERACTION_CUBE, /**< Cube interaction */
  EFL_UI_FLIP_INTERACTION_PAGE /**< Page interaction */
} Efl_Ui_Flip_Interaction;


#endif
/** Efl UI flip class
 *
 * @ingroup Efl_Ui_Flip
 */
#define EFL_UI_FLIP_CLASS efl_ui_flip_class_get()

EWAPI const Efl_Class *efl_ui_flip_class_get(void);

/**
 * @brief Set the interactive flip mode.
 *
 * This sets if the flip should be interactive (allow user to click and drag a
 * side of the flip to reveal the back page and cause it to flip). By default a
 * flip is not interactive. You may also need to set which sides of the flip
 * are "active" for flipping and how much space they use (a minimum of a finger
 * size) with @ref @ref efl_ui_flip_interaction_direction_enabled_set and
 * @ref efl_ui_flip_interaction_direction_hitsize_set.
 *
 * The four available mode of interaction are #ELM_FLIP_INTERACTION_NONE,
 * #ELM_FLIP_INTERACTION_ROTATE, #ELM_FLIP_INTERACTION_CUBE and
 *  #ELM_FLIP_INTERACTION_PAGE.
 *
 * @note #ELM_FLIP_INTERACTION_ROTATE won't cause
 * #ELM_FLIP_ROTATE_XZ_CENTER_AXIS or #ELM_FLIP_ROTATE_YZ_CENTER_AXIS to
 * happen, those can only be achieved with @ref efl_ui_flip_go.
 *
 * @param[in] mode The interactive flip mode to use.
 *
 * @ingroup Efl_Ui_Flip
 */
EOAPI void efl_ui_flip_interaction_set(Eo *obj, Efl_Ui_Flip_Interaction mode);

/**
 * @brief Get the interactive flip mode.
 *
 * @return The interactive flip mode to use.
 *
 * @ingroup Efl_Ui_Flip
 */
EOAPI Efl_Ui_Flip_Interaction efl_ui_flip_interaction_get(const Eo *obj);

/**
 * @brief Get flip front visibility state.
 *
 * @return @c true if front front is showing, @c false if the back is showing.
 *
 * @ingroup Efl_Ui_Flip
 */
EOAPI Eina_Bool efl_ui_flip_front_visible_get(const Eo *obj);

/**
 * @brief Set the amount of the flip that is sensitive to interactive flip.
 *
 * Set the amount of the flip that is sensitive to interactive flip, with 0
 * representing no area in the flip and 1 representing the entire flip. There
 * is however a consideration to be made in that the area will never be smaller
 * than the finger size set (as set in your Elementary configuration), and
 * dragging must always start from the opposite half of the flip (eg. right
 * half of the flip when dragging to the left).
 *
 * @note The @c dir parameter is not actually related to the direction of the
 * drag, it only refers to the area in the flip where interaction can occur
 * (top, bottom, left, right).
 *
 * Negative values of @c hitsize will disable this hit area.
 *
 * See also @ref efl_ui_flip_interaction_set.
 *
 * @param[in] dir The hit area to set.
 * @param[in] hitsize The amount of that dimension (0.0 to 1.0) to use.
 *
 * @ingroup Efl_Ui_Flip
 */
EOAPI void efl_ui_flip_interaction_direction_hitsize_set(Eo *obj, Efl_Orient dir, double hitsize);

/**
 * @brief Get the amount of the flip that is sensitive to interactive flip.
 *
 * @param[in] dir The direction to check.
 *
 * @return The size set for that direction.
 *
 * @ingroup Efl_Ui_Flip
 */
EOAPI double efl_ui_flip_interaction_direction_hitsize_get(Eo *obj, Efl_Orient dir);

/**
 * @brief Set which directions of the flip respond to interactive flip
 *
 * By default all directions are disabled, so you may want to enable the
 * desired directions for flipping if you need interactive flipping. You must
 * call this function once for each direction that should be enabled.
 *
 * You can also set the appropriate hit area size by calling
 * @ref efl_ui_flip_interaction_direction_hitsize_set. By default, a minimum
 * hit area will be created on the opposite edge of the flip.
 *
 * @param[in] dir The direction to change.
 * @param[in] enabled If that direction is enabled or not.
 *
 * @ingroup Efl_Ui_Flip
 */
EOAPI void efl_ui_flip_interaction_direction_enabled_set(Eo *obj, Efl_Orient dir, Eina_Bool enabled);

/**
 * @brief Get the enabled state of that flip direction.
 *
 * @param[in] dir The direction to check.
 *
 * @return If that direction is enabled or not.
 *
 * @ingroup Efl_Ui_Flip
 */
EOAPI Eina_Bool efl_ui_flip_interaction_direction_enabled_get(Eo *obj, Efl_Orient dir);

/**
 * @brief Runs the flip animation.
 *
 * Flips the front and back contents using the @c mode animation. This
 * effectively hides the currently visible content and shows the hidden one.
 *
 * There a number of possible animations to use for the flipping, these being
 * #ELM_FLIP_ROTATE_X_CENTER_AXIS (rotate the currently visible content around
 * a horizontal axis in the middle of its height, the other content is shown as
 * the other side of the flip), #ELM_FLIP_ROTATE_Y_CENTER_AXIS (rotate the
 * currently visible content around a vertical axis in the middle of its width,
 * the other content is shown as the other side of the flip),
 * #ELM_FLIP_ROTATE_XZ_CENTER_AXIS (rotate the currently visible content around
 * a diagonal axis in the middle of its width, the other content is shown as
 * the other side of the flip), #ELM_FLIP_ROTATE_YZ_CENTER_AXIS (rotate the
 * currently visible content around a diagonal axis in the middle of its
 * height, the other content is hown as the other side of the flip).
 * #ELM_FLIP_CUBE_LEFT (rotate the currently visible content to the left as if
 * the flip was a cube, the other content is show as the right face of the
 * cube), #ELM_FLIP_CUBE_RIGHT (rotate the currently visible content to the
 * right as if the flip was a cube, the other content is show as the left face
 * of the cube), #ELM_FLIP_CUBE_UP (rotate the currently visible content up as
 * if the flip was a cube, the other content is show as the bottom face of the
 * cube), #ELM_FLIP_CUBE_DOWN (rotate the currently visible content down as if
 * the flip was a cube, the other content is show as the upper face of the
 * cube), #ELM_FLIP_PAGE_LEFT (move the currently visible content to the left
 * as if the flip was a book, the other content is shown as the page below
 * that), #ELM_FLIP_PAGE_RIGHT (move the currently visible content to the right
 * s if the flip was a book, the other content is shown as the page below
 * that), #ELM_FLIP_PAGE_UP (move the currently visible content up as if the
 * flip was a book, the other content is shown as the page below that),
 * #ELM_FLIP_PAGE_DOWN (move the currently visible content down as if the flip
 * was a book, the other content is shown as the page below that) and
 * #ELM_FLIP_CROSS_FADE (fade out the currently visible content, while fading
 * in the invisible content).
 *
 * @param[in] mode The mode type.
 *
 * @ingroup Efl_Ui_Flip
 */
EOAPI void efl_ui_flip_go(Eo *obj, Efl_Ui_Flip_Mode mode);

/**
 * @brief Runs the flip animation to front or back.
 *
 * Flips the front and back contents using the @c mode animation. This
 * effectively hides the currently visible content and shows  he hidden one.
 *
 * There a number of possible animations to use for the flipping, these being
 * #ELM_FLIP_ROTATE_X_CENTER_AXIS (rotate the currently visible content around
 * a horizontal axis in the middle of its height, the other content is shown as
 * the other side of the flip), #ELM_FLIP_ROTATE_Y_CENTER_AXIS (rotate the
 * currently visible content around a vertical axis in the middle of its width,
 * the other content is shown as the other side of the flip),
 * #ELM_FLIP_ROTATE_XZ_CENTER_AXIS (rotate the currently visible content around
 * a diagonal axis in the middle of its width, the other content is shown as
 * the other side of the flip), #ELM_FLIP_ROTATE_YZ_CENTER_AXIS (rotate the
 * currently visible content around a diagonal axis in the middle of its
 * height, the other content is hown as the other side of the flip).
 * #ELM_FLIP_CUBE_LEFT (rotate the currently visible content to the left as if
 * the flip was a cube, the other content is show as the right face of the
 * cube), #ELM_FLIP_CUBE_RIGHT (rotate the currently visible content to the
 * right as if the flip was a cube, the other content is show as the left face
 * of the cube), #ELM_FLIP_CUBE_UP (rotate the currently visible content up as
 * if the flip was a cube, the other content is show as the bottom face of the
 * cube), #ELM_FLIP_CUBE_DOWN (rotate the currently visible content down as if
 * the flip was a cube, the other content is show as the upper face of the
 * cube), #ELM_FLIP_PAGE_LEFT (move the currently visible content to the left
 * as if the flip was a book, the other content is shown as the page below
 * that), #ELM_FLIP_PAGE_RIGHT (move the currently visible content to the right
 * s if the flip was a book, the other content is shown as the page below
 * that), #ELM_FLIP_PAGE_UP (move the currently visible content up as if the
 * flip was a book, the other content is shown as the page below that) and
 * #ELM_FLIP_PAGE_DOWN (move the currently visible content down as if the flip
 * was a book, the other content is shown as the page below that).
 *
 * @param[in] front If @c true, makes front visible, otherwise makes back.
 * @param[in] mode The mode type.
 *
 * @ingroup Efl_Ui_Flip
 */
EOAPI void efl_ui_flip_go_to(Eo *obj, Eina_Bool front, Efl_Ui_Flip_Mode mode);

EWAPI extern const Efl_Event_Description _EFL_UI_FLIP_EVENT_ANIMATE_BEGIN;

/** Called when flip animation begins
 *
 * @ingroup Efl_Ui_Flip
 */
#define EFL_UI_FLIP_EVENT_ANIMATE_BEGIN (&(_EFL_UI_FLIP_EVENT_ANIMATE_BEGIN))

EWAPI extern const Efl_Event_Description _EFL_UI_FLIP_EVENT_ANIMATE_DONE;

/** Called when flip animation is done
 *
 * @ingroup Efl_Ui_Flip
 */
#define EFL_UI_FLIP_EVENT_ANIMATE_DONE (&(_EFL_UI_FLIP_EVENT_ANIMATE_DONE))

#endif
