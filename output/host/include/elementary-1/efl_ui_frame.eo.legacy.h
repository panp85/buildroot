#ifndef _EFL_UI_FRAME_EO_LEGACY_H_
#define _EFL_UI_FRAME_EO_LEGACY_H_

#ifndef _EFL_UI_FRAME_EO_CLASS_TYPE
#define _EFL_UI_FRAME_EO_CLASS_TYPE

typedef Eo Efl_Ui_Frame;

#endif

#ifndef _EFL_UI_FRAME_EO_TYPES
#define _EFL_UI_FRAME_EO_TYPES


#endif

/**
 * @brief Manually collapse a frame without animations Use this to toggle the
 * collapsed state of a frame, bypassing animations.
 *
 * @param[in] collapse @c true to collapse, @c false to expand.
 *
 * @ingroup Efl_Ui_Frame
 */
EAPI void elm_frame_collapse_set(Efl_Ui_Frame *obj, Eina_Bool collapse);

/**
 * @brief Determine the collapse state of a frame Use this to determine the
 * collapse state of a frame.
 *
 * @return @c true to collapse, @c false to expand.
 *
 * @ingroup Efl_Ui_Frame
 */
EAPI Eina_Bool elm_frame_collapse_get(const Efl_Ui_Frame *obj);

/**
 * @brief Toggle autocollapsing of a frame When @c enable is @c true, clicking
 * a frame's label will collapse the frame vertically, shrinking it to the
 * height of the label. By default, this is DISABLED.
 *
 * @param[in] autocollapse Whether to enable autocollapse.
 *
 * @ingroup Efl_Ui_Frame
 */
EAPI void elm_frame_autocollapse_set(Efl_Ui_Frame *obj, Eina_Bool autocollapse);

/**
 * @brief Determine autocollapsing of a frame
 *
 * When this returns @c true, clicking a frame's label will collapse the frame
 * vertically, shrinking it to the height of the label. By default, this is
 * DISABLED.
 *
 * @return Whether to enable autocollapse.
 *
 * @ingroup Efl_Ui_Frame
 */
EAPI Eina_Bool elm_frame_autocollapse_get(const Efl_Ui_Frame *obj);

/**
 * @brief Manually collapse a frame with animations Use this to toggle the
 * collapsed state of a frame, triggering animations.
 *
 * @param[in] collapse @c true to collapse, @c false to expand.
 *
 * @ingroup Efl_Ui_Frame
 */
EAPI void elm_frame_collapse_go(Efl_Ui_Frame *obj, Eina_Bool collapse);

#endif
