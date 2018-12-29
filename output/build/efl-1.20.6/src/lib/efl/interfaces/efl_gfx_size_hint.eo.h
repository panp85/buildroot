#ifndef _EFL_GFX_SIZE_HINT_EO_H_
#define _EFL_GFX_SIZE_HINT_EO_H_

#ifndef _EFL_GFX_SIZE_HINT_EO_CLASS_TYPE
#define _EFL_GFX_SIZE_HINT_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Size_Hint;

#endif

#ifndef _EFL_GFX_SIZE_HINT_EO_TYPES
#define _EFL_GFX_SIZE_HINT_EO_TYPES

#ifndef EFL_GFX_SIZE_HINT_EXPAND
/** Use with efl_gfx_size_hint_weight_set(), efl_gfx_size_hint_weight_get()
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
#define EFL_GFX_SIZE_HINT_EXPAND 1
#endif

#ifndef EFL_GFX_SIZE_HINT_FILL
/** Use with efl_gfx_size_hint_align_set(), efl_gfx_size_hint_align_get()
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
#define EFL_GFX_SIZE_HINT_FILL -1 /* +1 */
#endif


#endif
/** Efl graphics size hint interface
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
#define EFL_GFX_SIZE_HINT_INTERFACE efl_gfx_size_hint_interface_get()

EWAPI const Efl_Class *efl_gfx_size_hint_interface_get(void);

/**
 * @brief Base size for objects with sizing restrictions.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @ref efl_gfx_size_hint_base_get + N x @ref efl_gfx_size_hint_step_get is
 * what is calculated for object sizing restrictions.
 *
 * See also @ref efl_gfx_size_hint_step_get.
 *
 * @param[in] w The base width.
 * @param[in] h The base height.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_base_set(Eo *obj, int w, int h);

/**
 * @brief Base size for objects with sizing restrictions.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @ref efl_gfx_size_hint_base_get + N x @ref efl_gfx_size_hint_step_get is
 * what is calculated for object sizing restrictions.
 *
 * See also @ref efl_gfx_size_hint_step_get.
 *
 * @param[out] w The base width.
 * @param[out] h The base height.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_base_get(const Eo *obj, int *w, int *h);

/**
 * @brief Step size for objects with sizing restrictions.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * Set this to for an object to scale up by steps and not continuously.
 *
 * @ref efl_gfx_size_hint_base_get + N x @ref efl_gfx_size_hint_step_get is
 * what is calculated for object sizing restrictions.
 *
 * @param[in] w The stepping width (0 disables).
 * @param[in] h The stepping height (0 disables).
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_step_set(Eo *obj, int w, int h);

/**
 * @brief Step size for objects with sizing restrictions.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * Set this to for an object to scale up by steps and not continuously.
 *
 * @ref efl_gfx_size_hint_base_get + N x @ref efl_gfx_size_hint_step_get is
 * what is calculated for object sizing restrictions.
 *
 * @param[out] w The stepping width (0 disables).
 * @param[out] h The stepping height (0 disables).
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_step_get(const Eo *obj, int *w, int *h);

/**
 * @brief Defines the aspect ratio to respect when scaling this object.
 *
 * The aspect ratio is defined as the width / height ratio of the object.
 * Depending on the object and its container, this hint may or may not be fully
 * respected.
 *
 * If any of the given aspect ratio terms are 0, the object's container will
 * ignore the aspect and scale this object to occupy the whole available area,
 * for any given policy.
 *
 * @param[in] mode Mode of interpretation.
 * @param[in] w Width
 * @param[in] h Height
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_aspect_set(Eo *obj, Efl_Gfx_Size_Hint_Aspect mode, int w, int h);

/**
 * @brief Defines the aspect ratio to respect when scaling this object.
 *
 * The aspect ratio is defined as the width / height ratio of the object.
 * Depending on the object and its container, this hint may or may not be fully
 * respected.
 *
 * If any of the given aspect ratio terms are 0, the object's container will
 * ignore the aspect and scale this object to occupy the whole available area,
 * for any given policy.
 *
 * @param[out] mode Mode of interpretation.
 * @param[out] w Width
 * @param[out] h Height
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_aspect_get(const Eo *obj, Efl_Gfx_Size_Hint_Aspect *mode, int *w, int *h);

/**
 * @brief Hints on the object's maximum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * The object container is in charge of fetching this property and placing the
 * object accordingly.
 *
 * Values -1 will be treated as unset hint components, when queried by
 * managers.
 *
 * @note Smart objects (such as elementary) can have their own size hint
 * policy. So calling this API may or may not affect the size of smart objects.
 *
 * @param[in] w Integer to use as the maximum width hint.
 * @param[in] h Integer to use as the maximum height hint.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_max_set(Eo *obj, int w, int h);

/**
 * @brief Hints on the object's maximum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * The object container is in charge of fetching this property and placing the
 * object accordingly.
 *
 * Values -1 will be treated as unset hint components, when queried by
 * managers.
 *
 * @note Smart objects (such as elementary) can have their own size hint
 * policy. So calling this API may or may not affect the size of smart objects.
 *
 * @param[out] w Integer to use as the maximum width hint.
 * @param[out] h Integer to use as the maximum height hint.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_max_get(const Eo *obj, int *w, int *h);

/**
 * @brief Hints on the object's minimum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate. The object container is in charge of fetching
 * this property and placing the object accordingly.
 *
 * Value 0 will be treated as unset hint components, when queried by managers.
 *
 * @note This property is meant to be set by applications and not by EFL
 * itself. Use this to request a specific size (treated as minimum size).
 *
 * @param[in] w Integer to use as the maximum width hint.
 * @param[in] h Integer to use as the maximum height hint.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_min_set(Eo *obj, int w, int h);

/**
 * @brief Hints on the object's minimum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate. The object container is in charge of fetching
 * this property and placing the object accordingly.
 *
 * Value 0 will be treated as unset hint components, when queried by managers.
 *
 * @note This property is meant to be set by applications and not by EFL
 * itself. Use this to request a specific size (treated as minimum size).
 *
 * @param[out] w Integer to use as the maximum width hint.
 * @param[out] h Integer to use as the maximum height hint.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_min_get(const Eo *obj, int *w, int *h);

/**
 * @brief Hints for the object's optimum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * Values 0 will be treated as unset hint components, when queried by managers.
 *
 * @note This property is meant to be set by applications and not by EFL
 * itself. Very few containers actually implement support for this requested
 * size, see @ref efl_gfx_size_hint_min_get instead.
 *
 * @param[in] w Integer to use as the preferred width hint.
 * @param[in] h Integer to use as the preferred height hint.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_request_set(Eo *obj, int w, int h);

/**
 * @brief Hints for the object's optimum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * Values 0 will be treated as unset hint components, when queried by managers.
 *
 * @note This property is meant to be set by applications and not by EFL
 * itself. Very few containers actually implement support for this requested
 * size, see @ref efl_gfx_size_hint_min_get instead.
 *
 * @param[out] w Integer to use as the preferred width hint.
 * @param[out] h Integer to use as the preferred height hint.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_request_get(const Eo *obj, int *w, int *h);

#ifdef EFL_GFX_SIZE_HINT_PROTECTED
/**
 * @brief Internal hints for an object's minimum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * Values 0 will be treated as unset hint components, when queried by managers.
 *
 * @note This property is internal and meant for widget developers to define
 * the absolute minimum size of the object. EFL itself sets this size
 * internally, so any change to it from an application might be ignored. Use
 * @ref efl_gfx_size_hint_min_get instead.
 *
 * @param[in] w Integer to use as the minimum width hint.
 * @param[in] h Integer to use as the minimum height hint.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_restricted_min_set(Eo *obj, int w, int h);
#endif

/**
 * @brief Internal hints for an object's minimum size.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * Values 0 will be treated as unset hint components, when queried by managers.
 *
 * @note This property is internal and meant for widget developers to define
 * the absolute minimum size of the object. EFL itself sets this size
 * internally, so any change to it from an application might be ignored. Use
 * @ref efl_gfx_size_hint_min_get instead.
 *
 * @param[out] w Integer to use as the minimum width hint.
 * @param[out] h Integer to use as the minimum height hint.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_restricted_min_get(const Eo *obj, int *w, int *h);

/**
 * @brief Read-only minimum size combining both
 * @ref efl_gfx_size_hint_restricted_min_get and @ref efl_gfx_size_hint_min_get
 * size hints.
 *
 * @ref efl_gfx_size_hint_restricted_min_get is intended for mostly internal
 * usage and widget developers, and @ref efl_gfx_size_hint_min_get is intended
 * to be set from application side. @ref efl_gfx_size_hint_combined_min_get
 * combines both values by taking their repective maximum (in both width and
 * height), and is used internally to get an object's minimum size.
 *
 * @param[out] w Integer to use as the minimum width hint.
 * @param[out] h Integer to use as the minimum height hint.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_combined_min_get(const Eo *obj, int *w, int *h);

/**
 * @brief Hints for an object's margin or padding space.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * The object container is in charge of fetching this property and placing the
 * object accordingly.
 *
 * @note Smart objects (such as elementary) can have their own size hint
 * policy. So calling this API may or may not affect the size of smart objects.
 *
 * @param[in] l Integer to specify left padding.
 * @param[in] r Integer to specify right padding.
 * @param[in] t Integer to specify top padding.
 * @param[in] b Integer to specify bottom padding.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_margin_set(Eo *obj, int l, int r, int t, int b);

/**
 * @brief Hints for an object's margin or padding space.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * The object container is in charge of fetching this property and placing the
 * object accordingly.
 *
 * @note Smart objects (such as elementary) can have their own size hint
 * policy. So calling this API may or may not affect the size of smart objects.
 *
 * @param[out] l Integer to specify left padding.
 * @param[out] r Integer to specify right padding.
 * @param[out] t Integer to specify top padding.
 * @param[out] b Integer to specify bottom padding.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_margin_get(const Eo *obj, int *l, int *r, int *t, int *b);

/**
 * @brief Hints for an object's weight.
 *
 * This is a hint on how a container object should resize a given child within
 * its area. Containers may adhere to the simpler logic of just expanding the
 * child object's dimensions to fit its own (see the #EFL_GFX_SIZE_HINT_EXPAND
 * helper weight macro) or the complete one of taking each child's weight hint
 * as real weights to how much of its size to allocate for them in each axis. A
 * container is supposed to, after normalizing the weights of its children
 * (with weight  hints), distribut the space it has to layout them by those
 * factors -- most weighted children get larger in this process than the least
 * ones.
 *
 * Accepted values are zero or positive values. Some containers might use this
 * hint as a boolean, but some others might consider it as a proportion, see
 * documentation of each container.
 *
 * @note Default weight hint values are 0.0, for both axis.
 *
 * @param[in] x Non-negative double value to use as horizontal weight hint.
 * @param[in] y Non-negative double value to use as vertical weight hint.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_weight_set(Eo *obj, double x, double y);

/**
 * @brief Hints for an object's weight.
 *
 * This is a hint on how a container object should resize a given child within
 * its area. Containers may adhere to the simpler logic of just expanding the
 * child object's dimensions to fit its own (see the #EFL_GFX_SIZE_HINT_EXPAND
 * helper weight macro) or the complete one of taking each child's weight hint
 * as real weights to how much of its size to allocate for them in each axis. A
 * container is supposed to, after normalizing the weights of its children
 * (with weight  hints), distribut the space it has to layout them by those
 * factors -- most weighted children get larger in this process than the least
 * ones.
 *
 * Accepted values are zero or positive values. Some containers might use this
 * hint as a boolean, but some others might consider it as a proportion, see
 * documentation of each container.
 *
 * @note Default weight hint values are 0.0, for both axis.
 *
 * @param[out] x Non-negative double value to use as horizontal weight hint.
 * @param[out] y Non-negative double value to use as vertical weight hint.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_weight_get(const Eo *obj, double *x, double *y);

/**
 * @brief Hints for an object's alignment.
 *
 * These are hints on how to align an object inside the boundaries of a
 * container/manager. Accepted values are in the 0.0 to 1.0 range, with the
 * special value #EFL_GFX_SIZE_HINT_FILL used to specify "justify" or "fill" by
 * some users. In this case, maximum size hints should be enforced with higher
 * priority, if they are set. Also, any padding hint set on objects should add
 * up to the alignment space on the final scene composition.
 *
 * See documentation of possible users: in Evas, they are the @ref
 * Evas_Object_Box "box" and @ref Evas_Object_Table "table" smart objects.
 *
 * For the horizontal component, 0.0 means to the left, 1.0 means to the right.
 * Analogously, for the vertical component, 0.0 to the top, 1.0 means to the
 * bottom.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @note Default alignment hint values are 0.5, for both axes.
 *
 * @param[in] x Double, ranging from 0.0 to 1.0 or with the special value
 * #EFL_GFX_SIZE_HINT_FILL, to use as horizontal alignment hint.
 * @param[in] y Double, ranging from 0.0 to 1.0 or with the special value
 * #EFL_GFX_SIZE_HINT_FILL, to use as vertical alignment hint.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_align_set(Eo *obj, double x, double y);

/**
 * @brief Hints for an object's alignment.
 *
 * These are hints on how to align an object inside the boundaries of a
 * container/manager. Accepted values are in the 0.0 to 1.0 range, with the
 * special value #EFL_GFX_SIZE_HINT_FILL used to specify "justify" or "fill" by
 * some users. In this case, maximum size hints should be enforced with higher
 * priority, if they are set. Also, any padding hint set on objects should add
 * up to the alignment space on the final scene composition.
 *
 * See documentation of possible users: in Evas, they are the @ref
 * Evas_Object_Box "box" and @ref Evas_Object_Table "table" smart objects.
 *
 * For the horizontal component, 0.0 means to the left, 1.0 means to the right.
 * Analogously, for the vertical component, 0.0 to the top, 1.0 means to the
 * bottom.
 *
 * This is not a size enforcement in any way, it's just a hint that should be
 * used whenever appropriate.
 *
 * @note Default alignment hint values are 0.5, for both axes.
 *
 * @param[out] x Double, ranging from 0.0 to 1.0 or with the special value
 * #EFL_GFX_SIZE_HINT_FILL, to use as horizontal alignment hint.
 * @param[out] y Double, ranging from 0.0 to 1.0 or with the special value
 * #EFL_GFX_SIZE_HINT_FILL, to use as vertical alignment hint.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
EOAPI void efl_gfx_size_hint_align_get(const Eo *obj, double *x, double *y);

EWAPI extern const Efl_Event_Description _EFL_GFX_EVENT_CHANGE_SIZE_HINTS;

/** Object size hints changed.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
#define EFL_GFX_EVENT_CHANGE_SIZE_HINTS (&(_EFL_GFX_EVENT_CHANGE_SIZE_HINTS))

#endif
