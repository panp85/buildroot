#ifndef _EFL_IMAGE_ANIMATED_EO_H_
#define _EFL_IMAGE_ANIMATED_EO_H_

#ifndef _EFL_IMAGE_ANIMATED_EO_CLASS_TYPE
#define _EFL_IMAGE_ANIMATED_EO_CLASS_TYPE

typedef Eo Efl_Image_Animated;

#endif

#ifndef _EFL_IMAGE_ANIMATED_EO_TYPES
#define _EFL_IMAGE_ANIMATED_EO_TYPES

/** Image animation loop modes
 *
 * @ingroup Efl_Image_Animated
 */
typedef enum
{
  EFL_IMAGE_ANIMATED_LOOP_HINT_NONE = 0, /**< No looping order specified. */
  EFL_IMAGE_ANIMATED_LOOP_HINT_LOOP = 1, /**< Standard loop: 1->2->3->1->2->3->1
                                          */
  EFL_IMAGE_ANIMATED_LOOP_HINT_PINGPONG = 2 /**< Ping-pong bouncing loop:
                                             * 1->2->3->2->1->2->3->1 */
} Efl_Image_Animated_Loop_Hint;


#endif
/** Efl animated image interface
 *
 * @ingroup Efl_Image_Animated
 */
#define EFL_IMAGE_ANIMATED_INTERFACE efl_image_animated_interface_get()

EWAPI const Efl_Class *efl_image_animated_interface_get(void);

/**
 * @brief Check if an image can be animated (has multiple frames).
 *
 * This will be @c true for animated Gif files for instance but @c false for
 * still images.
 *
 * @return @c true if the image is animated
 *
 * @since 1.1
 *
 * @ingroup Efl_Image_Animated
 */
EOAPI Eina_Bool efl_image_animated_get(const Eo *obj);

/**
 * @brief Index of the current frame of an animated image.
 *
 * Ranges from 1 to @ref efl_image_animated_frame_count_get. Valid only if
 * @ref efl_image_animated_get.
 *
 * Set the frame to current frame of an image object.
 *
 * @param[in] frame_index The index of current frame.
 *
 * @return Returns @c true if the frame index is valid.
 *
 * @since 1.1
 *
 * @ingroup Efl_Image_Animated
 */
EOAPI Eina_Bool efl_image_animated_frame_set(Eo *obj, int frame_index);

/**
 * @brief Index of the current frame of an animated image.
 *
 * Ranges from 1 to @ref efl_image_animated_frame_count_get. Valid only if
 * @ref efl_image_animated_get.
 *
 * @return The index of current frame.
 *
 * @ingroup Efl_Image_Animated
 */
EOAPI int efl_image_animated_frame_get(const Eo *obj);

/**
 * @brief Get the total number of frames of the image, if animated.
 *
 * Returns -1 if not animated.
 *
 * @return The number of frames in the animated image.
 *
 * @since 1.1
 *
 * @ingroup Efl_Image_Animated
 */
EOAPI int efl_image_animated_frame_count_get(const Eo *obj);

/**
 * @brief Get the kind of looping the image object does.
 *
 * This returns the kind of looping the image object wants to do.
 *
 * If it returns @ref EFL_IMAGE_ANIMATED_LOOP_HINT_LOOP, you should display
 * frames in a sequence like: 1->2->3->1->2->3->1...
 *
 * If it returns @ref EFL_IMAGE_ANIMATED_LOOP_HINT_PINGPONG, it is better to
 * display frames in a sequence like: 1->2->3->2->1->2->3->1...
 *
 * The default type is @ref EFL_IMAGE_ANIMATED_LOOP_HINT_LOOP.
 *
 * @return Loop type of the image object.
 *
 * @since 1.1
 *
 * @ingroup Efl_Image_Animated
 */
EOAPI Efl_Image_Animated_Loop_Hint efl_image_animated_loop_type_get(const Eo *obj);

/**
 * @brief Get the number times the animation of the object loops.
 *
 * This returns loop count of image. The loop count is the number of times the
 * animation will play fully from first to last frame until the animation
 * should stop (at the final frame).
 *
 * If 0 is returned, then looping should happen indefinitely (no limit to the
 * number of times it loops).
 *
 * @return The number of loop of an animated image object.
 *
 * @since 1.1
 *
 * @ingroup Efl_Image_Animated
 */
EOAPI int efl_image_animated_loop_count_get(const Eo *obj);

/**
 * @brief Get the duration of a sequence of frames.
 *
 * This returns total duration in seconds that the specified sequence of frames
 * should take.
 *
 * If @c start_frame is 1 and @c frame_num is 0, this returns the duration of
 * frame 1. If @c start_frame is 1 and @c frame_num is 1, this returns the
 * total duration of frame 1 + frame 2.
 *
 * @param[in] start_frame The first frame, rangers from 1 to
 * @ref efl_image_animated_frame_count_get.
 * @param[in] frame_num Number of frames in the sequence, starts from 0.
 *
 * @return Duration in seconds
 *
 * @since 1.1
 *
 * @ingroup Efl_Image_Animated
 */
EOAPI double efl_image_animated_frame_duration_get(const Eo *obj, int start_frame, int frame_num);

#endif
