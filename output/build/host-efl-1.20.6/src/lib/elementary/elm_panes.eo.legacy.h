#ifndef _ELM_PANES_EO_LEGACY_H_
#define _ELM_PANES_EO_LEGACY_H_

#ifndef _ELM_PANES_EO_CLASS_TYPE
#define _ELM_PANES_EO_CLASS_TYPE

typedef Eo Elm_Panes;

#endif

#ifndef _ELM_PANES_EO_TYPES
#define _ELM_PANES_EO_TYPES


#endif

/**
 * @brief Set the size proportion of panes widget's left side.
 *
 * By default it's homogeneous, i.e., both sides have the same size.
 *
 * If something different is required, it can be set with this function. For
 * example, if the left content should be displayed over 75% of the panes size,
 * @c size should be passed as 0.75. This way, right content will be resized to
 * 25% of panes size.
 *
 * If displayed vertically, left content is displayed at top, and right content
 * at bottom.
 *
 * @note This proportion will change when user drags the panes bar.
 *
 * @param[in] size Value between 0.0 and 1.0 representing size proportion of
 * left side.
 *
 * @ingroup Elm_Panes
 */
EAPI void elm_panes_content_left_size_set(Elm_Panes *obj, double size);

/**
 * @brief Set the size proportion of panes widget's left side.
 *
 * By default it's homogeneous, i.e., both sides have the same size.
 *
 * If something different is required, it can be set with this function. For
 * example, if the left content should be displayed over 75% of the panes size,
 * @c size should be passed as 0.75. This way, right content will be resized to
 * 25% of panes size.
 *
 * If displayed vertically, left content is displayed at top, and right content
 * at bottom.
 *
 * @note This proportion will change when user drags the panes bar.
 *
 * @return Value between 0.0 and 1.0 representing size proportion of left side.
 *
 * @ingroup Elm_Panes
 */
EAPI double elm_panes_content_left_size_get(const Elm_Panes *obj);

/**
 * @brief Set whether the left and right panes can be resized by user
 * interaction.
 *
 * By default panes' contents are resizable by user interaction.
 *
 * @param[in] fixed Use @c true to fix the left and right panes sizes and make
 * them not to be resized by user interaction. Use @c false to make them
 * resizable.
 *
 * @ingroup Elm_Panes
 */
EAPI void elm_panes_fixed_set(Elm_Panes *obj, Eina_Bool fixed);

/**
 * @brief Set whether the left and right panes can be resized by user
 * interaction.
 *
 * By default panes' contents are resizable by user interaction.
 *
 * @return Use @c true to fix the left and right panes sizes and make them not
 * to be resized by user interaction. Use @c false to make them resizable.
 *
 * @ingroup Elm_Panes
 */
EAPI Eina_Bool elm_panes_fixed_get(const Elm_Panes *obj);

/**
 * @brief Set the size proportion of panes widget's right side.
 *
 * By default it's homogeneous, i.e., both sides have the same size.
 *
 * If something different is required, it can be set with this function. For
 * example, if the right content should be displayed over 75% of the panes
 * size, @c size should be passed as 0.75. This way, left content will be
 * resized to 25% of panes size.
 *
 * If displayed vertically, left content is displayed at top, and right content
 * at bottom.
 *
 * @note This proportion will change when user drags the panes bar.
 *
 * @param[in] size Value between 0.0 and 1.0 representing size proportion of
 * right side.
 *
 * @ingroup Elm_Panes
 */
EAPI void elm_panes_content_right_size_set(Elm_Panes *obj, double size);

/**
 * @brief Set the size proportion of panes widget's right side.
 *
 * By default it's homogeneous, i.e., both sides have the same size.
 *
 * If something different is required, it can be set with this function. For
 * example, if the right content should be displayed over 75% of the panes
 * size, @c size should be passed as 0.75. This way, left content will be
 * resized to 25% of panes size.
 *
 * If displayed vertically, left content is displayed at top, and right content
 * at bottom.
 *
 * @note This proportion will change when user drags the panes bar.
 *
 * @return Value between 0.0 and 1.0 representing size proportion of right
 * side.
 *
 * @ingroup Elm_Panes
 */
EAPI double elm_panes_content_right_size_get(const Elm_Panes *obj);

/**
 * @brief Controls the relative minimum size of panes widget's left side.
 *
 * proportion of minimum size of left side.
 *
 * @note If displayed vertically, left content is displayed at top.
 *
 * @param[in] size Value between 0.0 and 1.0 representing size proportion of
 * minimum size of left side.
 *
 * @ingroup Elm_Panes
 */
EAPI void elm_panes_content_left_min_relative_size_set(Elm_Panes *obj, double size);

/**
 * @brief Controls the relative minimum size of panes widget's left side.
 *
 * proportion of minimum size of left side.
 *
 * @note If displayed vertically, left content is displayed at top.
 *
 * @return Value between 0.0 and 1.0 representing size proportion of minimum
 * size of left side.
 *
 * @ingroup Elm_Panes
 */
EAPI double elm_panes_content_left_min_relative_size_get(const Elm_Panes *obj);

/**
 * @brief Set the relative minimum size of panes widget's right side.
 *
 * @note If displayed vertically, right content is displayed at bottom.
 *
 * @param[in] size Value between 0.0 and 1.0 representing size proportion of
 * minimum size of right side.
 *
 * @ingroup Elm_Panes
 */
EAPI void elm_panes_content_right_min_relative_size_set(Elm_Panes *obj, double size);

/**
 * @brief Set the relative minimum size of panes widget's right side.
 *
 * @note If displayed vertically, right content is displayed at bottom.
 *
 * @return Value between 0.0 and 1.0 representing size proportion of minimum
 * size of right side.
 *
 * @ingroup Elm_Panes
 */
EAPI double elm_panes_content_right_min_relative_size_get(const Elm_Panes *obj);

/**
 * @brief Set the absolute minimum size of panes widget's left side.
 *
 * @note If displayed vertically, left content is displayed at top.
 *
 * @param[in] size Value representing minimum size of left side in pixels.
 *
 * @ingroup Elm_Panes
 */
EAPI void elm_panes_content_left_min_size_set(Elm_Panes *obj, int size);

/**
 * @brief Set the absolute minimum size of panes widget's left side.
 *
 * @note If displayed vertically, left content is displayed at top.
 *
 * @return Value representing minimum size of left side in pixels.
 *
 * @ingroup Elm_Panes
 */
EAPI int elm_panes_content_left_min_size_get(const Elm_Panes *obj);

/**
 * @brief Control the absolute minimum size of panes widget's right side.
 *
 * @note If displayed vertically, right content is displayed at bottom.
 *
 * @param[in] size Value representing minimum size of right side in pixels.
 *
 * @ingroup Elm_Panes
 */
EAPI void elm_panes_content_right_min_size_set(Elm_Panes *obj, int size);

/**
 * @brief Control the absolute minimum size of panes widget's right side.
 *
 * @note If displayed vertically, right content is displayed at bottom.
 *
 * @return Value representing minimum size of right side in pixels.
 *
 * @ingroup Elm_Panes
 */
EAPI int elm_panes_content_right_min_size_get(const Elm_Panes *obj);

#endif
