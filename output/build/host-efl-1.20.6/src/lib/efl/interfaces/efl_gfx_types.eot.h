#ifndef _EFL_GFX_TYPES_EOT_H_
#define _EFL_GFX_TYPES_EOT_H_

#ifndef _EFL_GFX_TYPES_EOT_TYPES
#define _EFL_GFX_TYPES_EOT_TYPES

/** Graphics colorspace type
 *
 * @ingroup Efl_Gfx
 */
typedef enum
{
  EFL_GFX_COLORSPACE_ARGB8888 = 0, /**< ARGB 32 bits per pixel, high-byte is
                                    * Alpha, accessed one 32bit word at a time.
                                    */
  EFL_GFX_COLORSPACE_YCBCR422P601_PL, /**< YCbCr 4:2:2 Planar, ITU.BT-601
                                       * specifications. The data pointed to is
                                       * just an array of row pointer, pointing
                                       * to the Y rows, then the Cb, then Cr
                                       * rows. */
  EFL_GFX_COLORSPACE_YCBCR422P709_PL, /**< YCbCr 4:2:2 Planar, ITU.BT-709
                                       * specifications. The data pointed to is
                                       * just an array of row pointer, pointing
                                       * to the Y rows, then the Cb, then Cr
                                       * rows. */
  EFL_GFX_COLORSPACE_RGB565_A5P, /**< 16bit rgb565 + Alpha plane at end - 5 bits
                                  * of the 8 being used per alpha byte. */
  EFL_GFX_COLORSPACE_GRY8 = 4, /**< 8-bit gray image, or alpha only. */
  EFL_GFX_COLORSPACE_YCBCR422601_PL, /**< YCbCr 4:2:2, ITU.BT-601
                                      * specifications. The data pointed to is
                                      * just an array of row pointer, pointing
                                      * to line of Y,Cb,Y,Cr bytes. */
  EFL_GFX_COLORSPACE_YCBCR420NV12601_PL, /**< YCbCr 4:2:0, ITU.BT-601
                                          * specifications. The data pointed to
                                          * is just an array of row pointer,
                                          * pointing to the Y rows, then the
                                          * Cb,Cr rows.. */
  EFL_GFX_COLORSPACE_YCBCR420TM12601_PL, /**< YCbCr 4:2:0, ITU.BT-601
                                          * specifications. The data pointed to
                                          * is just an array of tiled row
                                          * pointer, pointing to the Y rows,
                                          * then the Cb,Cr rows.. */
  EFL_GFX_COLORSPACE_AGRY88 = 8, /**< AY 8bits Alpha and 8bits Grey, accessed 1
                                  * 16bits at a time. */
  EFL_GFX_COLORSPACE_ETC1 = 9, /**< OpenGL ETC1 encoding of RGB texture (4 bit
                                * per pixel)
                                *
                                * @since 1.10. */
  EFL_GFX_COLORSPACE_RGB8_ETC2 = 10, /**< OpenGL GL_COMPRESSED_RGB8_ETC2 texture
                                      * compression format (4 bit per pixel)
                                      *
                                      * @since 1.10. */
  EFL_GFX_COLORSPACE_RGBA8_ETC2_EAC = 11, /**< OpenGL
                                           * GL_COMPRESSED_RGBA8_ETC2_EAC
                                           * texture compression format,
                                           * supports alpha (8 bit per pixel)
                                           *
                                           * @since 1.10. */
  EFL_GFX_COLORSPACE_ETC1_ALPHA = 12, /**< ETC1 with alpha support using two
                                       * planes: ETC1 RGB and ETC1 grey for
                                       * alpha
                                       *
                                       * @since 1.11. */
  EFL_GFX_COLORSPACE_RGB_S3TC_DXT1 = 13, /**< OpenGL
                                          * COMPRESSED_RGB_S3TC_DXT1_EXT format
                                          * with RGB only.
                                          *
                                          * @since 1.11. */
  EFL_GFX_COLORSPACE_RGBA_S3TC_DXT1 = 14, /**< OpenGL
                                           * COMPRESSED_RGBA_S3TC_DXT1_EXT
                                           * format with RGBA punchthrough.
                                           *
                                           * @since 1.11. */
  EFL_GFX_COLORSPACE_RGBA_S3TC_DXT2 = 15, /**< DirectDraw DXT2 format with
                                           * premultiplied RGBA. Not supported
                                           * by OpenGL itself.
                                           *
                                           * @since 1.11. */
  EFL_GFX_COLORSPACE_RGBA_S3TC_DXT3 = 16, /**< OpenGL
                                           * COMPRESSED_RGBA_S3TC_DXT3_EXT
                                           * format with RGBA.
                                           *
                                           * @since 1.11. */
  EFL_GFX_COLORSPACE_RGBA_S3TC_DXT4 = 17, /**< DirectDraw DXT4 format with
                                           * premultiplied RGBA. Not supported
                                           * by OpenGL itself.
                                           *
                                           * @since 1.11. */
  EFL_GFX_COLORSPACE_RGBA_S3TC_DXT5 = 18 /**< OpenGL
                                          * COMPRESSED_RGBA_S3TC_DXT5_EXT
                                          * format with RGBA.
                                          *
                                          * @since 1.11. */
} Efl_Gfx_Colorspace;

/** Graphics render operation mode
 *
 * @ingroup Efl_Gfx
 */
typedef enum
{
  EFL_GFX_RENDER_OP_BLEND = 0, /**< Alpha blending onto destination (default); d
                                * = d*(1-sa) + s. */
  EFL_GFX_RENDER_OP_COPY = 1, /**< Copy source to destination; d = s. */
  EFL_GFX_RENDER_OP_LAST /**< Sentinel value to indicate last enum field during
                          * iteration */
} Efl_Gfx_Render_Op;

/** These values determine how the points are interpreted in a stream of
 * points.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Path
 */
typedef enum
{
  EFL_GFX_PATH_COMMAND_TYPE_END = 0, /**< The end of stream , no more points to
                                      * process. */
  EFL_GFX_PATH_COMMAND_TYPE_MOVE_TO, /**< The next point is the start point of a
                                      * sub path. */
  EFL_GFX_PATH_COMMAND_TYPE_LINE_TO, /**< The next point is used to draw a line
                                      * from current point. */
  EFL_GFX_PATH_COMMAND_TYPE_CUBIC_TO, /**< The next three point is used to draw
                                       * a cubic bezier curve from current
                                       * point. */
  EFL_GFX_PATH_COMMAND_TYPE_CLOSE, /**< Close the current subpath by drawing a
                                    * line between current point and the first
                                    * point of current subpath. */
  EFL_GFX_PATH_COMMAND_TYPE_LAST /**< Sentinel value to indicate last enum field
                                  * during iteration */
} Efl_Gfx_Path_Command_Type;

/** These values determine how the end of opened sub-paths are rendered in a
 * stroke. @c ref efl_gfx_shape_stroke_cap_set()
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx
 */
typedef enum
{
  EFL_GFX_CAP_BUTT = 0, /**< The end of lines is rendered as a full stop on the
                         * last point itself. */
  EFL_GFX_CAP_ROUND, /**< The end of lines is rendered as a half-circle around
                      * the last point. */
  EFL_GFX_CAP_SQUARE, /**< The end of lines is rendered as a square around the
                       * last point. */
  EFL_GFX_CAP_LAST /**< Sentinel value to indicate last enum field during
                    * iteration */
} Efl_Gfx_Cap;

/** These values determine how two joining lines are rendered in a stroker.
 * @c ref efl_gfx_shape_stroke_join_set()
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx
 */
typedef enum
{
  EFL_GFX_JOIN_MITER = 0, /**< Used to render rounded line joins. Circular arcs
                           * are used to join two lines smoothly. */
  EFL_GFX_JOIN_ROUND, /**< Used to render beveled line joins. The outer corner
                       * of the joined lines is filled by enclosing the
                       * triangular region of the corner with a straight line
                       * between the outer corners of each stroke. */
  EFL_GFX_JOIN_BEVEL, /**< Used to render mitered line joins. The intersection
                       * of the strokes is clipped at a line perpendicular to
                       * the bisector of the angle between the strokes, at the
                       * distance from the intersection of the segments equal
                       * to the product of the miter limit value and the border
                       * radius.  This prevents long spikes being created. */
  EFL_GFX_JOIN_LAST /**< Sentinel value to indicate last enum field during
                     * iteration */
} Efl_Gfx_Join;

/** Specifies how the area outside the gradient area should be filled. @c ref
 * efl_gfx_gradient_spread_set()
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Gradient
 */
typedef enum
{
  EFL_GFX_GRADIENT_SPREAD_PAD = 0, /**< The area is filled with the closest stop
                                    * color. This is the default. */
  EFL_GFX_GRADIENT_SPREAD_REFLECT, /**< The gradient is reflected outside the
                                    * gradient area. */
  EFL_GFX_GRADIENT_SPREAD_REPEAT, /**< The gradient is repeated outside the
                                   * gradient area. */
  EFL_GFX_GRADIENT_SPREAD_LAST /**< Sentinel value to indicate last enum field
                                * during iteration */
} Efl_Gfx_Gradient_Spread;

/** Type defining how an image content get filled.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Fill
 */
typedef enum
{
  EFL_GFX_FILL_RULE_WINDING = 0, /**< Draw a horizontal line from the point to a
                                  * location outside the shape. Determine
                                  * whether the direction of the line at each
                                  * intersection point is up or down. The
                                  * winding number is determined by summing the
                                  * direction of each intersection. If the
                                  * number is non zero, the point is inside the
                                  * shape. This mode is the default */
  EFL_GFX_FILL_RULE_ODD_EVEN = 1 /**< Draw a horizontal line from the point to a
                                  * location outside the shape, and count the
                                  * number of intersections. If the number of
                                  * intersections is an odd number, the point
                                  * is inside the shape. */
} Efl_Gfx_Fill_Rule;

/** Type describing dash. @c ref efl_gfx_shape_stroke_dash_set()
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx
 */
typedef struct _Efl_Gfx_Dash
{
  double length; /**< Dash drawing length. */
  double gap; /**< Distance between two dashes. */
} Efl_Gfx_Dash;

/** Type defining gradient stops. Describes the location and color of a
 * transition point in a gradient.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx_Gradient
 */
typedef struct _Efl_Gfx_Gradient_Stop
{
  double offset; /**< The location of the gradient stop within the gradient
                  * vector */
  int r; /**< The component R color of the gradient stop */
  int g; /**< The component G color of the gradient stop */
  int b; /**< The component B color of the gradient stop */
  int a; /**< The component A color of the gradient stop */
} Efl_Gfx_Gradient_Stop;

/** Internal structure for @ref Efl_Gfx_Stroke.
 *
 * @ingroup Efl_Gfx_Stroke
 */
typedef struct _Efl_Gfx_Stroke_Color
{
  int r; /**< The component R color of the stroke */
  int g; /**< The component G color of the stroke */
  int b; /**< The component B color of the stroke */
  int a; /**< The component A color of the stroke */
} Efl_Gfx_Stroke_Color;

/** Type defining stroke information. Describes the properties to define the
 * path stroke.
 *
 * @since 1.14
 *
 * @ingroup Efl_Gfx
 */
typedef struct _Efl_Gfx_Stroke
{
  double scale; /**< Stroke scale */
  double width; /**< Stroke width */
  double centered; /**< Stroke centered */
  Efl_Gfx_Stroke_Color color; /**< Stroke color */
  Efl_Gfx_Dash *dash; /**< Stroke dash */
  unsigned int dash_length; /**< Stroke dash length */
  Efl_Gfx_Cap cap; /**< Stroke cap */
  Efl_Gfx_Join join; /**< Stroke join */
} Efl_Gfx_Stroke;

/** Public shape
 *
 * @ingroup Efl_Gfx_Shape
 */
typedef struct _Efl_Gfx_Shape_Public
{
  Efl_Gfx_Stroke stroke; /**< Internal representation as stroke */
} Efl_Gfx_Shape_Public;

/** How an image's center region (the complement to the border region) should
 * be rendered by EFL
 *
 * @ingroup Efl_Gfx
 */
typedef enum
{
  EFL_GFX_BORDER_FILL_MODE_NONE = 0, /**< Image's center region is @c b not to
                                      * be rendered */
  EFL_GFX_BORDER_FILL_MODE_DEFAULT = 1, /**< Image's center region is to be @c b
                                         * blended with objects underneath it,
                                         * if it has transparency. This is the
                                         * default behavior for image objects
                                         */
  EFL_GFX_BORDER_FILL_MODE_SOLID = 2 /**< Image's center region is to be made
                                      * solid, even if it has transparency on
                                      * it */
} Efl_Gfx_Border_Fill_Mode;

/** What property got changed for this object
 *
 * @since 1.18
 *
 * @ingroup Efl_Gfx_Change
 */
typedef enum
{
  EFL_GFX_CHANGE_FLAG_NONE = 0, /**< No change */
  EFL_GFX_CHANGE_FLAG_MATRIX = 1, /**< matrix got changed */
  EFL_GFX_CHANGE_FLAG_PATH = 2, /**< path got changes */
  EFL_GFX_CHANGE_FLAG_ALL = -1 /* +1 */ /**< all property got changed */
} Efl_Gfx_Change_Flag;

/** Data sent along a "render,post" event, after a frame has been rendered.
 *
 * @ingroup Efl_Gfx_Event
 */
typedef struct _Efl_Gfx_Event_Render_Post
{
  Eina_List *updated_area; /**< A list of rectangles that were updated in the
                            * canvas. */
} Efl_Gfx_Event_Render_Post;

/**
 * @brief Aspect types/policies for scaling size hints.
 *
 * See also @c Efl.Gfx.Size.Hint.aspect.
 *
 * @ingroup Efl_Gfx_Size_Hint
 */
typedef enum
{
  EFL_GFX_SIZE_HINT_ASPECT_NONE = 0, /**< No preference on either direction of
                                      * the container for aspect ratio control.
                                      */
  EFL_GFX_SIZE_HINT_ASPECT_NEITHER = 1, /**< Same effect as disabling aspect
                                         * ratio preference */
  EFL_GFX_SIZE_HINT_ASPECT_HORIZONTAL = 2, /**< Use all horizontal container
                                            * space to place an object, using
                                            * the given aspect. */
  EFL_GFX_SIZE_HINT_ASPECT_VERTICAL = 3, /**< Use all vertical container space
                                          * to place an object, using the given
                                          * aspect. */
  EFL_GFX_SIZE_HINT_ASPECT_BOTH = 4 /**< Use all horizontal and vertical
                                     * container spaces to place an object
                                     * (never growing it out of those bounds),
                                     * using the given aspect. */
} Efl_Gfx_Size_Hint_Aspect;

/** Image or Edje load error type
 *
 * @ingroup Efl_Image_Load
 */
typedef enum
{
  EFL_IMAGE_LOAD_ERROR_NONE = 0, /**< No error on load */
  EFL_IMAGE_LOAD_ERROR_GENERIC = 1, /**< A non-specific error occurred */
  EFL_IMAGE_LOAD_ERROR_DOES_NOT_EXIST = 2, /**< File (or file path) does not
                                            * exist */
  EFL_IMAGE_LOAD_ERROR_PERMISSION_DENIED = 3, /**< Permission denied to an
                                               * existing file (or path) */
  EFL_IMAGE_LOAD_ERROR_RESOURCE_ALLOCATION_FAILED = 4, /**< Allocation of
                                                        * resources failure
                                                        * prevented load */
  EFL_IMAGE_LOAD_ERROR_CORRUPT_FILE = 5, /**< File corrupt (but was detected as
                                          * a known format) */
  EFL_IMAGE_LOAD_ERROR_UNKNOWN_FORMAT = 6, /**< File is not a known format */
  EFL_IMAGE_LOAD_ERROR_CANCELLED = 7, /**< Reading operation has been cancelled
                                       * during decoding */
  EFL_IMAGE_LOAD_ERROR_INCOMPATIBLE_FILE = 8, /**< (Edje only) The file pointed
                                               * to is incompatible, i.e., it
                                               * doesn't match the library's
                                               * current version's format. */
  EFL_IMAGE_LOAD_ERROR_UNKNOWN_COLLECTION = 9, /**< (Edje only) The
                                                * group/collection set to load
                                                * from was not found in the
                                                * file */
  EFL_IMAGE_LOAD_ERROR_RECURSIVE_REFERENCE = 10 /**< (Edje only) The
                                                 * group/collection set to load
                                                 * from had recursive
                                                 * references on its components
                                                 */
} Efl_Image_Load_Error;


#endif

#endif
