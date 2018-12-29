#ifndef _EVAS_CANVAS3D_TEXTURE_EO_H_
#define _EVAS_CANVAS3D_TEXTURE_EO_H_

#ifndef _EVAS_CANVAS3D_TEXTURE_EO_CLASS_TYPE
#define _EVAS_CANVAS3D_TEXTURE_EO_CLASS_TYPE

typedef Eo Evas_Canvas3D_Texture;

#endif

#ifndef _EVAS_CANVAS3D_TEXTURE_EO_TYPES
#define _EVAS_CANVAS3D_TEXTURE_EO_TYPES


#endif
/** Evas 3d canvas texture class
 *
 * @ingroup Evas_Canvas3D_Texture
 */
#define EVAS_CANVAS3D_TEXTURE_CLASS evas_canvas3d_texture_class_get()

EWAPI const Efl_Class *evas_canvas3d_texture_class_get(void);

/**
 * @brief Set the visibility flag of the source evas object of the given
 * texture.
 *
 * Recommend to call @ref evas_object_show on the source object and control the
 * visibility using this function.
 *
 * By default, source object is visible.
 *
 * See also @ref evas_canvas3d_texture_source_set.
 *
 * @param[in] visible @c true for visible, @c false for invisible.
 *
 * @ingroup Evas_Canvas3D_Texture
 */
EOAPI void evas_canvas3d_texture_source_visible_set(Eo *obj, Eina_Bool visible);

/**
 * @brief Get the visibility flag of the source evas object of the given
 * texture.
 *
 * @return @c true for visible, @c false for invisible.
 *
 * @ingroup Evas_Canvas3D_Texture
 */
EOAPI Eina_Bool evas_canvas3d_texture_source_visible_get(const Eo *obj);

/**
 * @brief Set enable flag to generation texture unit with support atlas.
 *
 * Use this flag only in case not normalize texture coordinates.
 *
 * By default, is enabled.
 *
 * @param[in] use_atlas @c true for enable, @c false for disable.
 *
 * @ingroup Evas_Canvas3D_Texture
 */
EOAPI void evas_canvas3d_texture_atlas_enable_set(Eo *obj, Eina_Bool use_atlas);

/**
 * @brief Get enable flag of generation texture unit with support atlas.
 *
 * @return @c true for enable, @c false for disable.
 *
 * @ingroup Evas_Canvas3D_Texture
 */
EOAPI Eina_Bool evas_canvas3d_texture_atlas_enable_get(const Eo *obj);

/**
 * @brief Set the data of the given texture.
 *
 * See also @ref evas_canvas3d_texture_file_set.
 *
 * @param[in] color_format Color format of the texture.
 * @param[in] w Width of the data.
 * @param[in] h Height of the data.
 * @param[in] data Pointer to the data.
 *
 * @ingroup Evas_Canvas3D_Texture
 */
EOAPI void evas_canvas3d_texture_data_set(Eo *obj, Evas_Colorspace color_format, int w, int h, const void *data);

/**
 * @brief Set the data of the given texture from file.
 *
 * @param[in] file Path to the image file.
 * @param[in] key Key in the image file.
 *
 * @ingroup Evas_Canvas3D_Texture
 */
EOAPI void evas_canvas3d_texture_file_set(Eo *obj, const char *file, const char *key);

/**
 * @brief Set the data of the given texture from an evas object.
 *
 * Evas 3D support using existing evas object as a texture source. This feature
 * make it possible using any exisiting evas object inside 3D scene.
 *
 * See also @ref evas_canvas3d_texture_source_visible_set.
 *
 * @param[in] source Source evas object to be used as the texture data.
 *
 * @ingroup Evas_Canvas3D_Texture
 */
EOAPI void evas_canvas3d_texture_source_set(Eo *obj, Efl_Canvas_Object *source);

/**
 * @brief Get the color format of the given texture.
 *
 * EVAS_CANVAS3D_COLOR_FORMAT_RGBA will be returned if the texture has source
 * object. Otherwise, the color format of the data will be returned.
 *
 * See also @ref evas_canvas3d_texture_data_set,
 * @ref evas_canvas3d_texture_file_set, @ref evas_canvas3d_texture_source_set.
 *
 * @return Color format of the given texture
 *
 * @ingroup Evas_Canvas3D_Texture
 */
EOAPI Evas_Colorspace evas_canvas3d_texture_color_format_get(const Eo *obj);

/**
 * @brief Get the size of the given texture.
 *
 * If the texture has source object, the size of the source object will be
 * returned. Otherwise, the size of the data (or image file) will be returned.
 *
 * See also @ref evas_canvas3d_texture_data_set,
 * @ref evas_canvas3d_texture_file_set, @ref evas_canvas3d_texture_source_set.
 *
 * @param[out] w Pointer to receive the width of the texture size.
 * @param[out] h Pointer to receive the height of the texture size.
 *
 * @ingroup Evas_Canvas3D_Texture
 */
EOAPI void evas_canvas3d_texture_size_get(const Eo *obj, int *w, int *h);

/**
 * @brief Set the wrap mode of the given texture.
 *
 * If the texture coordinate exceed range [0.0, 1.0] the values are modified
 * according to the wrap mode.
 *
 * Default wrap modes are both EVAS_CANVAS3D_WRAP_MODE_CLAMP for s and t.
 *
 * @param[in] s Wrap mode for S-axis.
 * @param[in] t Wrap mode for T-axis.
 *
 * @ingroup Evas_Canvas3D_Texture
 */
EOAPI void evas_canvas3d_texture_wrap_set(Eo *obj, Evas_Canvas3D_Wrap_Mode s, Evas_Canvas3D_Wrap_Mode t);

/**
 * @brief Get the wrap mode of the given texture.
 *
 * See also @ref evas_canvas3d_texture_wrap_set.
 *
 * @param[out] s Pointer to receive S-axis wrap mode.
 * @param[out] t Pointer to receive T-axis wrap mode.
 *
 * @ingroup Evas_Canvas3D_Texture
 */
EOAPI void evas_canvas3d_texture_wrap_get(Eo *obj, Evas_Canvas3D_Wrap_Mode *s, Evas_Canvas3D_Wrap_Mode *t);

/**
 * @brief Set the filter of the given texture.
 *
 * Default filters are both EVAS_CANVAS3D_TEXTURE_FILTER_NEAREST for s and t.
 *
 * @param[in] min Minification filter used when down-scaling.
 * @param[in] mag Magnification filter used when up-scaling.
 *
 * @ingroup Evas_Canvas3D_Texture
 */
EOAPI void evas_canvas3d_texture_filter_set(Eo *obj, Evas_Canvas3D_Texture_Filter min, Evas_Canvas3D_Texture_Filter mag);

/**
 * @brief Get the filter of the given texture.
 *
 * See also @ref evas_canvas3d_texture_filter_set.
 *
 * @param[out] min Pointer to receive the minification filter.
 * @param[out] mag Pointer to receive the magnification filter.
 *
 * @ingroup Evas_Canvas3D_Texture
 */
EOAPI void evas_canvas3d_texture_filter_get(const Eo *obj, Evas_Canvas3D_Texture_Filter *min, Evas_Canvas3D_Texture_Filter *mag);

#endif
