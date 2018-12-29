#ifndef _EFL_GFX_SHAPE_EO_H_
#define _EFL_GFX_SHAPE_EO_H_

#ifndef _EFL_GFX_SHAPE_EO_CLASS_TYPE
#define _EFL_GFX_SHAPE_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Shape;

#endif

#ifndef _EFL_GFX_SHAPE_EO_TYPES
#define _EFL_GFX_SHAPE_EO_TYPES


#endif
/** EFL graphics shape object interface
 *
 * @ingroup Efl_Gfx_Shape
 */
#define EFL_GFX_SHAPE_MIXIN efl_gfx_shape_mixin_get()

EWAPI const Efl_Class *efl_gfx_shape_mixin_get(void);

/**
 * @brief The stroke scale to be used for stroking the path. Will be used along
 * with stroke width property.
 *
 * @param[in] s Stroke scale value
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void efl_gfx_shape_stroke_scale_set(Eo *obj, double s);

/**
 * @brief The stroke scale to be used for stroking the path. Will be used along
 * with stroke width property.
 *
 * @return Stroke scale value
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI double efl_gfx_shape_stroke_scale_get(const Eo *obj);

/**
 * @brief The color to be used for stroking the path.
 *
 * @param[in] r The red component of the given color.
 * @param[in] g The green component of the given color.
 * @param[in] b The blue component of the given color.
 * @param[in] a The alpha component of the given color.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void efl_gfx_shape_stroke_color_set(Eo *obj, int r, int g, int b, int a);

/**
 * @brief The color to be used for stroking the path.
 *
 * @param[out] r The red component of the given color.
 * @param[out] g The green component of the given color.
 * @param[out] b The blue component of the given color.
 * @param[out] a The alpha component of the given color.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void efl_gfx_shape_stroke_color_get(const Eo *obj, int *r, int *g, int *b, int *a);

/**
 * @brief The stroke width to be used for stroking the path.
 *
 * @param[in] w Stroke width to be used
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void efl_gfx_shape_stroke_width_set(Eo *obj, double w);

/**
 * @brief The stroke width to be used for stroking the path.
 *
 * @return Stroke width to be used
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI double efl_gfx_shape_stroke_width_get(const Eo *obj);

/**
 * @brief Not implemented
 *
 * @param[in] centered Centered stroke location
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void efl_gfx_shape_stroke_location_set(Eo *obj, double centered);

/**
 * @brief Not implemented
 *
 * @return Centered stroke location
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI double efl_gfx_shape_stroke_location_get(const Eo *obj);

/**
 * @brief Not implemented
 *
 * @param[in] dash Stroke dash
 * @param[in] length Stroke dash length
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void efl_gfx_shape_stroke_dash_set(Eo *obj, const Efl_Gfx_Dash *dash, unsigned int length);

/**
 * @brief Not implemented
 *
 * @param[out] dash Stroke dash
 * @param[out] length Stroke dash length
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void efl_gfx_shape_stroke_dash_get(const Eo *obj, const Efl_Gfx_Dash **dash, unsigned int *length);

/**
 * @brief The cap style to be used for stroking the path. The cap will be used
 * for capping the end point of a open subpath.
 *
 * See also @ref Efl_Gfx_Cap.
 *
 * @param[in] c Cap style to use, default is EFL_GFX_CAP_BUTT
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void efl_gfx_shape_stroke_cap_set(Eo *obj, Efl_Gfx_Cap c);

/**
 * @brief The cap style to be used for stroking the path. The cap will be used
 * for capping the end point of a open subpath.
 *
 * See also @ref Efl_Gfx_Cap.
 *
 * @return Cap style to use, default is EFL_GFX_CAP_BUTT
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI Efl_Gfx_Cap efl_gfx_shape_stroke_cap_get(const Eo *obj);

/**
 * @brief The join style to be used for stroking the path. The join style will
 * be used for joining the two line segment while stroking the path.
 *
 * See also @ref Efl_Gfx_Join.
 *
 * @param[in] j Join style to use, default is EFL_GFX_JOIN_MITER
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void efl_gfx_shape_stroke_join_set(Eo *obj, Efl_Gfx_Join j);

/**
 * @brief The join style to be used for stroking the path. The join style will
 * be used for joining the two line segment while stroking the path.
 *
 * See also @ref Efl_Gfx_Join.
 *
 * @return Join style to use, default is EFL_GFX_JOIN_MITER
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI Efl_Gfx_Join efl_gfx_shape_stroke_join_get(const Eo *obj);

/**
 * @brief The fill rule of the given shape object.
 * @c EFL_GFX_FILL_RULE_WINDING, or @c EFL_GFX_FILL_RULE_ODD_EVEN.
 *
 * @param[in] fill_rule The current fill rule of the shape object. One of
 * @c EFL_GFX_FILL_RULE_WINDING, @c EFL_GFX_FILL_RULE_ODD_EVEN
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void efl_gfx_shape_fill_rule_set(Eo *obj, Efl_Gfx_Fill_Rule fill_rule);

/**
 * @brief The fill rule of the given shape object.
 * @c EFL_GFX_FILL_RULE_WINDING, or @c EFL_GFX_FILL_RULE_ODD_EVEN.
 *
 * @return The current fill rule of the shape object. One of
 * @c EFL_GFX_FILL_RULE_WINDING, @c EFL_GFX_FILL_RULE_ODD_EVEN
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI Efl_Gfx_Fill_Rule efl_gfx_shape_fill_rule_get(const Eo *obj);

/**
 * @brief Interpolate object
 *
 * @param[in] from Source object
 * @param[in] to Destination object
 * @param[in] pos_map Position map
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI Eina_Bool efl_gfx_shape_interpolate(Eo *obj, const Efl_Object *from, const Efl_Object *to, double pos_map);

/**
 * @brief Copy the shape data from the object specified.
 *
 * @param[in] dup_from Shape object from where data will be copied.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Shape
 */
EOAPI void efl_gfx_shape_dup(Eo *obj, const Efl_Object *dup_from);

#endif
