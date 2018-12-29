#ifndef _EFL_IMAGE_EO_LEGACY_H_
#define _EFL_IMAGE_EO_LEGACY_H_

#ifndef _EFL_IMAGE_EO_CLASS_TYPE
#define _EFL_IMAGE_EO_CLASS_TYPE

typedef Eo Efl_Image;

#endif

#ifndef _EFL_IMAGE_EO_TYPES
#define _EFL_IMAGE_EO_TYPES

/** How an image's data is to be treated by EFL, for optimization.
 *
 * @ingroup Efl_Image
 */
typedef enum
{
  EFL_IMAGE_CONTENT_HINT_NONE = 0, /**< No hint on the content (default). */
  EFL_IMAGE_CONTENT_HINT_DYNAMIC = 1, /**< The content will change over time. */
  EFL_IMAGE_CONTENT_HINT_STATIC = 2 /**< The content won't change over time. */
} Efl_Image_Content_Hint;

/** How an image's data is to be treated by EFL, with regard to scaling cache.
 *
 * @ingroup Efl_Image
 */
typedef enum
{
  EFL_IMAGE_SCALE_HINT_NONE = 0, /**< No hint on the scaling (default). */
  EFL_IMAGE_SCALE_HINT_DYNAMIC = 1, /**< Image will be re-scaled over time, thus
                                     * turning scaling cache OFF for its data.
                                     */
  EFL_IMAGE_SCALE_HINT_STATIC = 2 /**< Image will not be re-scaled over time,
                                   * thus turning scaling cache ON for its
                                   * data. */
} Efl_Image_Scale_Hint;


#endif















#endif
