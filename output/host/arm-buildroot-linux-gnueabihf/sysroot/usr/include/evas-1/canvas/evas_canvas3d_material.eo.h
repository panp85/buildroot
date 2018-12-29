#ifndef _EVAS_CANVAS3D_MATERIAL_EO_H_
#define _EVAS_CANVAS3D_MATERIAL_EO_H_

#ifndef _EVAS_CANVAS3D_MATERIAL_EO_CLASS_TYPE
#define _EVAS_CANVAS3D_MATERIAL_EO_CLASS_TYPE

typedef Eo Evas_Canvas3D_Material;

#endif

#ifndef _EVAS_CANVAS3D_MATERIAL_EO_TYPES
#define _EVAS_CANVAS3D_MATERIAL_EO_TYPES


#endif
/** Evas 3D canvas material class
 *
 * @ingroup Evas_Canvas3D_Material
 */
#define EVAS_CANVAS3D_MATERIAL_CLASS evas_canvas3d_material_class_get()

EWAPI const Efl_Class *evas_canvas3d_material_class_get(void);

/**
 * @brief Set the material attribute color of the given material.
 *
 * Material color is used also when texture map is enabled. The colors will be
 * modulated (multiplied). To control the color contribution of a material
 * attribute, use gray color. Setting color value for normal attribute has no
 * effect.
 *
 * Default color is as follows.
 *
 * Ambient  : (0.2, 0.2, 0.2, 1.0) Diffuse  : (0.8, 0.8, 0.8, 1.0) Specular :
 * (1.0, 1.0, 1.0, 1.0) Emission : (0.0, 0.0, 0.0, 1.0) Normal   : Not used
 *
 * @param[in] attrib Material attribute ID.
 * @param[in] r Red component of the color.
 * @param[in] g Green component of the color.
 * @param[in] b Blue component of the color.
 * @param[in] a Alpha component of the color.
 *
 * @ingroup Evas_Canvas3D_Material
 */
EOAPI void evas_canvas3d_material_color_set(Eo *obj, Evas_Canvas3D_Material_Attrib attrib, Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

/**
 * @brief Get the material attribute color of the given material.
 *
 * See also @ref evas_canvas3d_material_color_set.
 *
 * @param[in] attrib Material attribute ID.
 * @param[out] r Pointer to receive red component of the color.
 * @param[out] g Pointer to receive green component of the color.
 * @param[out] b Pointer to receive blue component of the color.
 * @param[out] a Pointer to receive alpha component of the color.
 *
 * @ingroup Evas_Canvas3D_Material
 */
EOAPI void evas_canvas3d_material_color_get(const Eo *obj, Evas_Canvas3D_Material_Attrib attrib, Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

/**
 * @brief Set the material attribute enable flag of the given material.
 *
 * You might want to disable some material reflection contribution. For
 * example, Emission attribute is rarely used. Disabling unused attributes
 * might help the shading less complex so that can get speed up.
 *
 * By default, diffuse and specular is enabled.
 *
 * @param[in] attrib Material attribute ID.
 * @param[in] enable Whether to enable the attribute or not.
 *
 * @ingroup Evas_Canvas3D_Material
 */
EOAPI void evas_canvas3d_material_enable_set(Eo *obj, Evas_Canvas3D_Material_Attrib attrib, Eina_Bool enable);

/**
 * @brief Get the material attribute enable flag of the given material.
 *
 * See also @ref evas_canvas3d_material_enable_set.
 *
 * @param[in] attrib Material attribute ID.
 *
 * @return Whether to enable the attribute or not.
 *
 * @ingroup Evas_Canvas3D_Material
 */
EOAPI Eina_Bool evas_canvas3d_material_enable_get(const Eo *obj, Evas_Canvas3D_Material_Attrib attrib);

/**
 * @brief Set the shininess of the given material.
 *
 * Shininess is only used when specular attribute is enabled. Higher shininess
 * value will make the object more shiny.
 *
 * Default shininess value is 150.0.
 *
 * See also @ref evas_canvas3d_material_enable_set.
 *
 * @param[in] shininess Shininess value.
 *
 * @ingroup Evas_Canvas3D_Material
 */
EOAPI void evas_canvas3d_material_shininess_set(Eo *obj, Evas_Real shininess);

/**
 * @brief Get the shininess of the given material.
 *
 * See also @ref evas_canvas3d_material_shininess_set.
 *
 * @return Shininess value.
 *
 * @ingroup Evas_Canvas3D_Material
 */
EOAPI Evas_Real evas_canvas3d_material_shininess_get(const Eo *obj);

/**
 * @brief Set the texture of the given material.
 *
 * You have to enable the desired attribute first.
 *
 * See also @ref evas_canvas3d_material_enable_set.
 *
 * @param[in] attrib Material attribute ID.
 * @param[in] texture The texture set to the attribute.
 *
 * @ingroup Evas_Canvas3D_Material
 */
EOAPI void evas_canvas3d_material_texture_set(Eo *obj, Evas_Canvas3D_Material_Attrib attrib, Evas_Canvas3D_Texture *texture);

/**
 * @brief Get the texture of the given material.
 *
 * See also @ref evas_canvas3d_material_texture_set.
 *
 * @param[in] attrib Material attribute ID.
 *
 * @return The texture set to the attribute.
 *
 * @ingroup Evas_Canvas3D_Material
 */
EOAPI Evas_Canvas3D_Texture *evas_canvas3d_material_texture_get(const Eo *obj, Evas_Canvas3D_Material_Attrib attrib);

#endif
