#ifndef _EVAS_CANVAS3D_PRIMITIVE_EO_H_
#define _EVAS_CANVAS3D_PRIMITIVE_EO_H_

#ifndef _EVAS_CANVAS3D_PRIMITIVE_EO_CLASS_TYPE
#define _EVAS_CANVAS3D_PRIMITIVE_EO_CLASS_TYPE

typedef Eo Evas_Canvas3D_Primitive;

#endif

#ifndef _EVAS_CANVAS3D_PRIMITIVE_EO_TYPES
#define _EVAS_CANVAS3D_PRIMITIVE_EO_TYPES


#endif
/** Evas 3D canvas primitive class
 *
 * @ingroup Evas_Canvas3D_Primitive
 */
#define EVAS_CANVAS3D_PRIMITIVE_CLASS evas_canvas3d_primitive_class_get()

EWAPI const Efl_Class *evas_canvas3d_primitive_class_get(void);

/**
 * @brief Set the form of the given primitive.
 *
 * Form defines which function will be chosen to set data to mesh on call of
 * evas_canvas3d_mesh_primitive_set.
 *
 * Now available next forms of primitives are tabulated primitives (SQUARE and
 * CUBE), solids of revolution (CYLINDER, CONE, SPHERE and TORUS) and surfaces
 * (SURFACE and TERRAIN).
 *
 * Default form is EVAS_CANVAS3D_MESH_PRIMITIVE_NONE.
 *
 * @param[in] form Form of primitive.
 *
 * @ingroup Evas_Canvas3D_Primitive
 */
EOAPI void evas_canvas3d_primitive_form_set(Eo *obj, Evas_Canvas3D_Mesh_Primitive form);

/**
 * @brief Get the form of the given primitive.
 *
 * See also @ref evas_canvas3d_primitive_form_set.
 *
 * @return Form of primitive.
 *
 * @ingroup Evas_Canvas3D_Primitive
 */
EOAPI Evas_Canvas3D_Mesh_Primitive evas_canvas3d_primitive_form_get(const Eo *obj);

/**
 * @brief Set the mode of the given primitive.
 *
 * Mode defines which function will be chosen to set data to mesh on call of
 * evas_canvas3d_mesh_primitive_set. It helps to choose alternative algorithm
 * for primitive with given form (like cone without base or sphere textured in
 * alternative way).
 *
 * Now available next mods of primitives are witout base (bases) (supported for
 * cylinder and cone) and with alternative UV (supported by sphere).
 *
 * Default form is EVAS_CANVAS3D_PRIMITIVE_MODE_DEFAULT.
 *
 * @param[in] mode Mode of primitive.
 *
 * @ingroup Evas_Canvas3D_Primitive
 */
EOAPI void evas_canvas3d_primitive_mode_set(Eo *obj, Evas_Canvas3D_Primitive_Mode mode);

/**
 * @brief Get the mode of the given primitive.
 *
 * See also @ref evas_canvas3d_primitive_mode_set.
 *
 * @return Mode of primitive.
 *
 * @ingroup Evas_Canvas3D_Primitive
 */
EOAPI Evas_Canvas3D_Primitive_Mode evas_canvas3d_primitive_mode_get(const Eo *obj);

/**
 * @brief Set the ratio of the given primitive.
 *
 * Now ratio uses only in torus as the ratio of the major radius and minor
 * radius. For this usage Available values is from 1.0 to infinity. If ratio
 * for torus has a bad value, will be used 3.0 as ratio. Like ratio of usual
 * doughnut.
 *
 * Default ratio is 3.0.
 *
 * @param[in] ratio Ratio of primitive.
 *
 * @ingroup Evas_Canvas3D_Primitive
 */
EOAPI void evas_canvas3d_primitive_ratio_set(Eo *obj, Evas_Real ratio);

/**
 * @brief Get the ratio of the given primitive.
 *
 * See also @ref evas_canvas3d_primitive_ratio_set.
 *
 * @return Ratio of primitive.
 *
 * @ingroup Evas_Canvas3D_Primitive
 */
EOAPI Evas_Real evas_canvas3d_primitive_ratio_get(const Eo *obj);

/**
 * @brief Set the precision of the given primitive.
 *
 * Precision uses in all non tabulated primitives and defines precision of
 * created primitives. Available values is from 3 to infinity. But if value
 * will be more than 100, should be a warning about possibility of incorrect or
 * slow work.
 *
 * Default ratio is 10.
 *
 * @param[in] precision Precision of primitive.
 *
 * @ingroup Evas_Canvas3D_Primitive
 */
EOAPI void evas_canvas3d_primitive_precision_set(Eo *obj, int precision);

/**
 * @brief Get the precision of the given primitive.
 *
 * See also @ref evas_canvas3d_primitive_precision_set.
 *
 * @return Precision of primitive.
 *
 * @ingroup Evas_Canvas3D_Primitive
 */
EOAPI int evas_canvas3d_primitive_precision_get(const Eo *obj);

/**
 * @brief Set the surface of the given primitive.
 *
 * Surface uses only in surface primitive and defines equation of filling mesh
 * data on call of evas_canvas3d_mesh_primitive_set.
 *
 * It gives possibility to create customers primitives like shell, heart,
 * hyperbolic paraboloid etc. See _shell_func in
 * examples/evas/evas-3d-visual-test.c or _perlin_terrain in
 * modules/evas/primitives/surfaces/terrain.c as an example of usage.
 *
 * Default surface is @c null
 *
 * @param[in] surface Pointer to customers surface function.
 *
 * @ingroup Evas_Canvas3D_Primitive
 */
EOAPI void evas_canvas3d_primitive_surface_set(Eo *obj, Evas_Canvas3D_Surface_Func *surface);

/**
 * @brief Set the texture scale of the given primitive.
 *
 * Texture scale uses in all non tabulated primitives and defines scale of
 * texture coordinates or primitives.
 *
 * It uses to create periodical textured meshes.
 *
 * Default tex_scale is {1.0, 1.0}
 *
 * @param[in] tex_scale_x Texture scale X coordinate
 * @param[in] tex_scale_y Texture scale Y coordinate
 *
 * @ingroup Evas_Canvas3D_Primitive
 */
EOAPI void evas_canvas3d_primitive_tex_scale_set(Eo *obj, Evas_Real tex_scale_x, Evas_Real tex_scale_y);

/**
 * @brief Get the texture scale of the given primitive.
 *
 * See also @ref evas_canvas3d_primitive_tex_scale_set.
 *
 * @param[out] tex_scale_x Texture scale X coordinate
 * @param[out] tex_scale_y Texture scale Y coordinate
 *
 * @ingroup Evas_Canvas3D_Primitive
 */
EOAPI void evas_canvas3d_primitive_tex_scale_get(const Eo *obj, Evas_Real *tex_scale_x, Evas_Real *tex_scale_y);

#endif
