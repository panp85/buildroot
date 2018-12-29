#ifndef _ELM_INTERFACE_ATSPI_IMAGE_EO_H_
#define _ELM_INTERFACE_ATSPI_IMAGE_EO_H_

#ifndef _ELM_INTERFACE_ATSPI_IMAGE_EO_CLASS_TYPE
#define _ELM_INTERFACE_ATSPI_IMAGE_EO_CLASS_TYPE

typedef Eo Elm_Interface_Atspi_Image;

#endif

#ifndef _ELM_INTERFACE_ATSPI_IMAGE_EO_TYPES
#define _ELM_INTERFACE_ATSPI_IMAGE_EO_TYPES


#endif
/** AT-SPI image mixin
 *
 * @ingroup Elm_Interface_Atspi_Image
 */
#define ELM_INTERFACE_ATSPI_IMAGE_MIXIN elm_interface_atspi_image_mixin_get()

EWAPI const Efl_Class *elm_interface_atspi_image_mixin_get(void);

#ifdef ELM_INTERFACE_ATSPI_IMAGE_PROTECTED
/**
 * @brief Gets an image extents.
 *
 * @param[in] screen_coords @c true if we got the screen coordinates, @c false
 * otherwise
 * @param[out] x X coordinate
 * @param[out] y Y coordinate
 * @param[out] width Image width
 * @param[out] height Image height
 *
 * @ingroup Elm_Interface_Atspi_Image
 */
EOAPI void elm_interface_atspi_image_extents_get(const Eo *obj, Eina_Bool screen_coords, int *x, int *y, int *width, int *height);
#endif

#ifdef ELM_INTERFACE_ATSPI_IMAGE_PROTECTED
/**
 * @brief Textual description of image
 *
 * @param[in] description Textual image description
 *
 * @ingroup Elm_Interface_Atspi_Image
 */
EOAPI void elm_interface_atspi_image_description_set(Eo *obj, const char *description);
#endif

#ifdef ELM_INTERFACE_ATSPI_IMAGE_PROTECTED
/**
 * @brief Textual description of image
 *
 * @return Textual image description
 *
 * @ingroup Elm_Interface_Atspi_Image
 */
EOAPI const char *elm_interface_atspi_image_description_get(const Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_IMAGE_PROTECTED
/**
 * @brief Gets locale of the image description.
 *
 * @return Locale of description
 *
 * @ingroup Elm_Interface_Atspi_Image
 */
EOAPI const char *elm_interface_atspi_image_locale_get(const Eo *obj);
#endif

#endif
