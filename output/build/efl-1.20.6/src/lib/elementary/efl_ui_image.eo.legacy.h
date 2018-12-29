#ifndef _EFL_UI_IMAGE_EO_LEGACY_H_
#define _EFL_UI_IMAGE_EO_LEGACY_H_

#ifndef _EFL_UI_IMAGE_EO_CLASS_TYPE
#define _EFL_UI_IMAGE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Image;

#endif

#ifndef _EFL_UI_IMAGE_EO_TYPES
#define _EFL_UI_IMAGE_EO_TYPES

/** Enumeration that defines scale types for the object's internal image.
 *
 * @since 1.18
 *
 * @ingroup Efl_Ui_Image
 */
typedef enum
{
  EFL_UI_IMAGE_SCALE_TYPE_FILL = 0, /**< Scale the internal image so that it
                                     * matches  the object's area exactly. The
                                     * image's aspect ratio might be changed.
                                     */
  EFL_UI_IMAGE_SCALE_TYPE_FIT_INSIDE, /**< Scale the internal image so that it
                                       * fits inside the object's area while
                                       * maintaining the aspect ratio. At least
                                       * one of the dimensions of the image
                                       * should be equal to the corresponding
                                       * dimension  of the object. */
  EFL_UI_IMAGE_SCALE_TYPE_FIT_OUTSIDE, /**< Scale the internal image so that it
                                        * covers the entire object area while
                                        * maintaining the aspect ratio. At
                                        * least one of the dimensions of the
                                        * image should be equal to the
                                        * corresponding  dimension of the
                                        * object. */
  EFL_UI_IMAGE_SCALE_TYPE_NONE /**< Not scale the internal image */
} Efl_Ui_Image_Scale_Type;

/** Structure associated with smart callback 'download,progress'.
 *
 * @since 1.8
 *
 * @ingroup Efl_Ui_Image
 */
typedef struct _Efl_Ui_Image_Progress
{
  double now; /**< Current percentage */
  double total; /**< Total percentage */
} Efl_Ui_Image_Progress;

/** Structure associated with smart callback 'download,progress'.
 *
 * @since 1.8
 *
 * @ingroup Efl_Ui_Image
 */
typedef struct _Efl_Ui_Image_Error
{
  int status; /**< Error status of the download */
  Eina_Bool open_error; /**< @c true if the error happened when opening the
                         * file, @c false otherwise */
} Efl_Ui_Image_Error;


#endif









#endif
