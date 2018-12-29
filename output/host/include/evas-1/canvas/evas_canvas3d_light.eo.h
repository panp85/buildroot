#ifndef _EVAS_CANVAS3D_LIGHT_EO_H_
#define _EVAS_CANVAS3D_LIGHT_EO_H_

#ifndef _EVAS_CANVAS3D_LIGHT_EO_CLASS_TYPE
#define _EVAS_CANVAS3D_LIGHT_EO_CLASS_TYPE

typedef Eo Evas_Canvas3D_Light;

#endif

#ifndef _EVAS_CANVAS3D_LIGHT_EO_TYPES
#define _EVAS_CANVAS3D_LIGHT_EO_TYPES


#endif
/** Evas 3D canvas light class
 *
 * @ingroup Evas_Canvas3D_Light
 */
#define EVAS_CANVAS3D_LIGHT_CLASS evas_canvas3d_light_class_get()

EWAPI const Efl_Class *evas_canvas3d_light_class_get(void);

/**
 * @brief Set the directional flag of the given light.
 *
 * Directional light is a type of light which is infinitely far away with no
 * attenuation. The light direction is determined by the containing node's
 * forward vector (negative Z-axis).
 *
 * By default, directional is not enabled.
 *
 * @ref evas_canvas3d_node_look_at_set
 *
 * @param[in] directional Whether the light is directional ($true), or not
 * ($false).
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_directional_set(Eo *obj, Eina_Bool directional);

/**
 * @brief Get the directional flag of the given light.
 *
 * See also @ref evas_canvas3d_light_directional_set
 *
 * @return Whether the light is directional ($true), or not ($false).
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI Eina_Bool evas_canvas3d_light_directional_get(const Eo *obj);

/**
 * @brief Set the spot exponent of the given light.
 *
 * Higher spot exponent means intensity at the center of the cone is relatively
 * stronger. Zero exponent means the light intensity is evenly distibuted. The
 * spot exponent has no effect when the light is not spot light (spot cutoff
 * angle is less than 180 degree).
 *
 * Default spot exponent is 0.
 *
 * See also @ref evas_canvas3d_light_spot_cutoff_set
 *
 * @param[in] exponent Spot exponent value.
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_spot_exponent_set(Eo *obj, Evas_Real exponent);

/**
 * @brief Get the spot exponent of the given light.
 *
 * See also @ref evas_canvas3d_light_spot_exponent_set
 *
 * @return Spot exponent value.
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI Evas_Real evas_canvas3d_light_spot_exponent_get(const Eo *obj);

/**
 * @brief Set the spot cutoff angle of the given light.
 *
 * Only angle less than 180 degree will make it spot light, so that other spot
 * light attribute will take effect.
 *
 * Default spot cutoff angle is 180.
 *
 * @param[in] cutoff Cutoff angle in degree..
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_spot_cutoff_set(Eo *obj, Evas_Real cutoff);

/**
 * @brief Get the spot cutoff angle of the given light.
 *
 * See also @ref evas_canvas3d_light_spot_cutoff_set
 *
 * @return Cutoff angle in degree..
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI Evas_Real evas_canvas3d_light_spot_cutoff_get(const Eo *obj);

/**
 * @brief Set the attenuation enable flag of the given light.
 *
 * By default, light attenuation is not enabled.
 *
 * See also @ref evas_canvas3d_light_attenuation_set
 *
 * @param[in] enable Whether to enable attenuation ($true), or not ($false)..
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_attenuation_enable_set(Eo *obj, Eina_Bool enable);

/**
 * @brief Get the attenuation enable flag of the given light.
 *
 * See also @ref evas_canvas3d_light_attenuation_enable_set
 *
 * @return Whether to enable attenuation ($true), or not ($false)..
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI Eina_Bool evas_canvas3d_light_attenuation_enable_get(const Eo *obj);

/**
 * @brief Set the ambient color of the given light.
 *
 * Default ambient color is (0.0, 0.0, 0.0, 1.0).
 *
 * @param[in] r Red component of the ambient color between [0.0, 1.0].
 * @param[in] g Green component of the ambient color between [0.0, 1.0].
 * @param[in] b Blue component of the ambient color between [0.0, 1.0].
 * @param[in] a Alpha component of the ambient color between [0.0, 1.0].
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_ambient_set(Eo *obj, Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

/**
 * @brief Get the ambient color of the given light.
 *
 * See also @ref evas_canvas3d_light_ambient_set
 *
 * @param[out] r Red component of the ambient color between [0.0, 1.0].
 * @param[out] g Green component of the ambient color between [0.0, 1.0].
 * @param[out] b Blue component of the ambient color between [0.0, 1.0].
 * @param[out] a Alpha component of the ambient color between [0.0, 1.0].
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_ambient_get(const Eo *obj, Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

/**
 * @brief Set the diffuse color of the given light.
 *
 * Default diffuse color is (1.0, 1.0, 1.0, 1.0).
 *
 * @param[in] r Red component of the diffuse color between [0.0, 1.0].
 * @param[in] g Green component of the diffuse color between [0.0, 1.0].
 * @param[in] b Blue component of the diffuse color between [0.0, 1.0].
 * @param[in] a Alpha component of the diffuse color between [0.0, 1.0].
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_diffuse_set(Eo *obj, Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

/**
 * @brief Get the diffuse color of the given light.
 *
 * See also @ref evas_canvas3d_light_diffuse_set
 *
 * @param[out] r Red component of the diffuse color between [0.0, 1.0].
 * @param[out] g Green component of the diffuse color between [0.0, 1.0].
 * @param[out] b Blue component of the diffuse color between [0.0, 1.0].
 * @param[out] a Alpha component of the diffuse color between [0.0, 1.0].
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_diffuse_get(const Eo *obj, Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

/**
 * @brief Set the specular color of the given light.
 *
 * Default specular color is (1.0, 1.0, 1.0, 1.0).
 *
 * @param[in] r Red component of the specular color between [0.0, 1.0].
 * @param[in] g Green component of the specular color between [0.0, 1.0].
 * @param[in] b Blue component of the specular color between [0.0, 1.0].
 * @param[in] a Alpha component of the specular color between [0.0, 1.0].
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_specular_set(Eo *obj, Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

/**
 * @brief Get the specular color of the given light.
 *
 * See also @ref evas_canvas3d_light_specular_set
 *
 * @param[out] r Red component of the specular color between [0.0, 1.0].
 * @param[out] g Green component of the specular color between [0.0, 1.0].
 * @param[out] b Blue component of the specular color between [0.0, 1.0].
 * @param[out] a Alpha component of the specular color between [0.0, 1.0].
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_specular_get(const Eo *obj, Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

/**
 * @brief Set the attenuation of the given light.
 *
 * Light attenuation has no effect with directional light. And the attenuation
 * should be enabled first to take effect. The attenuation factor is calculated
 * as follows.
 *
 * atten = 1.0 / constant + linear * distance + quadratic * distance * distance
 *
 * Default attenuation is constant = 1.0, linear = 0.0, quadratic = 0.0.
 *
 * See also @ref evas_canvas3d_light_attenuation_enable_set
 *
 * @param[in] constant Constant attenuation term..
 * @param[in] linear Linear attenuation term..
 * @param[in] quadratic Quadratic attenuation term..
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_attenuation_set(Eo *obj, Evas_Real constant, Evas_Real linear, Evas_Real quadratic);

/**
 * @brief Get the attenuation of the given light.
 *
 * See also @ref evas_canvas3d_light_attenuation_set
 *
 * @param[out] constant Constant attenuation term..
 * @param[out] linear Linear attenuation term..
 * @param[out] quadratic Quadratic attenuation term..
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_attenuation_get(const Eo *obj, Evas_Real *constant, Evas_Real *linear, Evas_Real *quadratic);

/**
 * @brief Set the projection matrix of the given light source.
 *
 * Default projection matrix is identity matrix.
 *
 * See also @ref evas_canvas3d_light_projection_perspective_set,
 * @ref evas_canvas3d_light_projection_ortho_set and
 * @ref evas_canvas3d_light_projection_frustum_set
 *
 * @param[in] matrix Projection Matrix. Pointer to the array of 16 Evas.Real
 * values in column major order.
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_projection_matrix_set(Eo *obj, const Evas_Real *matrix);

/**
 * @brief Get the projection matrix of the given light source.
 *
 * See also @ref evas_canvas3d_light_projection_matrix_set
 *
 * @param[out] matrix Projection Matrix
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_projection_matrix_get(const Eo *obj, Evas_Real *matrix);

/**
 * @brief Set the projection matrix of the given light source with perspective
 * projection.
 *
 * See also @ref evas_canvas3d_light_projection_matrix_set
 *
 * @param[in] fovy Field of view angle in Y direction.
 * @param[in] aspect Aspect ratio.
 * @param[in] dnear Distance to near clipping plane.
 * @param[in] dfar Distance to far clipping plane.
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_projection_perspective_set(Eo *obj, Evas_Real fovy, Evas_Real aspect, Evas_Real dnear, Evas_Real dfar);

/**
 * @brief Set the projection matrix of the given light source with frustum
 * projection.
 *
 * @ref evas_canvas3d_light_projection_matrix_set
 *
 * @param[in] left Left X coordinate of the near clipping plane.
 * @param[in] right Right X coordinate of the near clipping plane.
 * @param[in] bottom Bottom Y coordinate of the near clipping plane.
 * @param[in] top Top Y coordinate of the near clipping plane
 * @param[in] dnear Distance to near clipping plane.
 * @param[in] dfar Distance to far clipping plane.
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_projection_frustum_set(Eo *obj, Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);

/**
 * @brief Set the projection matrix of the given light source with orthogonal
 * projection.
 *
 * See also @ref evas_canvas3d_light_projection_matrix_set
 *
 * @param[in] left Left X coordinate of the near clipping plane.
 * @param[in] right Right X coordinate of the near clipping plane.
 * @param[in] bottom Bottom Y coordinate of the near clipping plane.
 * @param[in] top Top Y coordinate of the near clipping plane
 * @param[in] dnear Distance to near clipping plane.
 * @param[in] dfar Distance to far clipping plane.
 *
 * @ingroup Evas_Canvas3D_Light
 */
EOAPI void evas_canvas3d_light_projection_ortho_set(Eo *obj, Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);

#endif
