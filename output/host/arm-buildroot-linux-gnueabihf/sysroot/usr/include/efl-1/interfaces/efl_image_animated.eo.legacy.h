#ifndef _EFL_IMAGE_ANIMATED_EO_LEGACY_H_
#define _EFL_IMAGE_ANIMATED_EO_LEGACY_H_

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








#endif
