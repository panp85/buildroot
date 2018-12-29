#ifndef _ELM_BG_EO_LEGACY_H_
#define _ELM_BG_EO_LEGACY_H_

#ifndef _ELM_BG_EO_CLASS_TYPE
#define _ELM_BG_EO_CLASS_TYPE

typedef Eo Elm_Bg;

#endif

#ifndef _ELM_BG_EO_TYPES
#define _ELM_BG_EO_TYPES

/**
 * @brief Identifiers on how a background widget is to display its image
 *
 * -- if it was set to use an image file.
 *
 * See also @ref elm_bg_option_set, @ref elm_bg_option_get.
 *
 * @ingroup Elm_Bg
 */
typedef enum
{
  ELM_BG_OPTION_CENTER = 0, /**< Center the background image. */
  ELM_BG_OPTION_SCALE, /**< Scale the background image, retaining aspect ratio
                        * (default). */
  ELM_BG_OPTION_STRETCH, /**< Stretch the background image to fill the widget's
                          * area. */
  ELM_BG_OPTION_TILE, /**< Tile background image at its original size. */
  ELM_BG_OPTION_LAST /**< Sentinel value to indicate last enum field during
                      * iteration. Also used to indicate errors */
} Elm_Bg_Option;


#endif

/**
 * @brief The mode of display for a given background widget's image
 *
 * This sets how the background widget will display its image. This will only
 * work if the @ref Efl.File.file.set was previously called with an image file
 * on @c obj. The image can be display tiled, scaled, centered or stretched.
 * @ref ELM_BG_OPTION_SCALE by default.
 *
 * @param[in] option The desired background option(See @ref Elm_Bg_Option)
 *
 * @ingroup Elm_Bg
 */
EAPI void elm_bg_option_set(Elm_Bg *obj, Elm_Bg_Option option);

/**
 * @brief The mode of display for a given background widget's image
 *
 * @return The desired background option(See @ref Elm_Bg_Option)
 *
 * @ingroup Elm_Bg
 */
EAPI Elm_Bg_Option elm_bg_option_get(const Elm_Bg *obj);



/**
 * @brief Set the size of the pixmap representation of the image set on a given
 * background widget.
 *
 * @warning This function just makes sense if an image file was set on @c obj,
 * with @ref Efl.File.file.set
 *
 * This function sets a new size for pixmap representation of the given bg
 * image. It allows for the image to be loaded already in the specified size,
 * reducing the memory usage and load time (for example, when loading a big
 * image file with its load size set to a smaller size)
 *
 * @note This is just a hint for the underlying system. The real size of the
 * pixmap may differ depending on the type of image being loaded, being bigger
 * than requested.
 *
 * @param[in] w The new width of the image pixmap representation.
 * @param[in] h The new height of the image pixmap representation.
 *
 * @ingroup Elm_Bg
 */
EAPI void elm_bg_load_size_set(Elm_Bg *obj, int w, int h);

#endif
