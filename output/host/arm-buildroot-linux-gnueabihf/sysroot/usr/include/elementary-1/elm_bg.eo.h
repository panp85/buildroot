#ifndef _ELM_BG_EO_H_
#define _ELM_BG_EO_H_

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
 * See also @ref elm_obj_bg_option_set, @ref elm_obj_bg_option_get.
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
 * @brief The bg (background) widget is used for setting (solid) background
 * decorations
 *
 * to a window (unless it has transparency enabled) or to any container object.
 * It works just like an image, but has some properties useful to a background,
 * like setting it to tiled, centered, scaled or stretched.
 *
 * @ingroup Elm_Bg
 */
#define ELM_BG_CLASS elm_bg_class_get()

EWAPI const Efl_Class *elm_bg_class_get(void);

/**
 * @brief The mode of display for a given background widget's image
 *
 * This sets how the background widget will display its image. This will only
 * work if the @ref efl_file_set was previously called with an image file on
 * @c obj. The image can be display tiled, scaled, centered or stretched.
 * @ref ELM_BG_OPTION_SCALE by default.
 *
 * @param[in] option The desired background option(See @ref Elm_Bg_Option)
 *
 * @ingroup Elm_Bg
 */
EOAPI void elm_obj_bg_option_set(Eo *obj, Elm_Bg_Option option);

/**
 * @brief The mode of display for a given background widget's image
 *
 * @return The desired background option(See @ref Elm_Bg_Option)
 *
 * @ingroup Elm_Bg
 */
EOAPI Elm_Bg_Option elm_obj_bg_option_get(const Eo *obj);

/**
 * @brief The color on a given background widget
 *
 * This sets the color used for the background rectangle, in RGB format. Each
 * color component's range is from 0 to 255.
 *
 * @note You probably only want to use this function if you haven't previously
 * called @ref efl_file_set, so that you just want a solid color background.
 *
 * @note You can reset the color by setting @c r, @c g, @c b as -1, -1, -1.
 *
 * @param[in] r The red color component's value
 * @param[in] g The green color component's value
 * @param[in] b The blue color component's value
 * @param[in] a The alpha color component's value
 *
 * @ingroup Elm_Bg
 */
EOAPI void elm_obj_bg_color_set(Eo *obj, int r, int g, int b, int a);

/**
 * @brief The color on a given background widget
 *
 * @note Use @c null pointers on the file components you're not interested in:
 * they'll be ignored by the function.
 *
 * @param[out] r The red color component's value
 * @param[out] g The green color component's value
 * @param[out] b The blue color component's value
 * @param[out] a The alpha color component's value
 *
 * @ingroup Elm_Bg
 */
EOAPI void elm_obj_bg_color_get(const Eo *obj, int *r, int *g, int *b, int *a);

/**
 * @brief Set the size of the pixmap representation of the image set on a given
 * background widget.
 *
 * @warning This function just makes sense if an image file was set on @c obj,
 * with @ref efl_file_set
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
EOAPI void elm_obj_bg_load_size_set(Eo *obj, int w, int h);

#endif
