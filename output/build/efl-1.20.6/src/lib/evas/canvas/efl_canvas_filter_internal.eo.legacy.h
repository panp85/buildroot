#ifndef _EFL_CANVAS_FILTER_INTERNAL_EO_LEGACY_H_
#define _EFL_CANVAS_FILTER_INTERNAL_EO_LEGACY_H_

#ifndef _EFL_CANVAS_FILTER_INTERNAL_EO_CLASS_TYPE
#define _EFL_CANVAS_FILTER_INTERNAL_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Filter_Internal;

#endif

#ifndef _EFL_CANVAS_FILTER_INTERNAL_EO_TYPES
#define _EFL_CANVAS_FILTER_INTERNAL_EO_TYPES

/** 32 bit color data structure
 *
 * @ingroup Efl_Gfx
 */
typedef struct _Efl_Gfx_Color32
{
  uint8_t r; /**< Red component of the color */
  uint8_t g; /**< Green component of the color */
  uint8_t b; /**< Blue component of the color */
  uint8_t a; /**< Translucent component of the color */
} Efl_Gfx_Color32;

/** Filter state name structure
 *
 * @ingroup Efl_Canvas_Filter
 */
typedef struct _Efl_Canvas_Filter_State_Name
{
  const char *name; /**< Filter state name */
  double value; /**< Filter state value */
} Efl_Canvas_Filter_State_Name;

/** Filter state text structure
 *
 * @ingroup Efl_Canvas_Filter
 */
typedef struct _Efl_Canvas_Filter_State_Text
{
  Efl_Gfx_Color32 outline; /**< Text outline color */
  Efl_Gfx_Color32 shadow; /**< Text shadow color */
  Efl_Gfx_Color32 glow; /**< Text glow color */
  Efl_Gfx_Color32 glow2; /**< Text glow2 color */
} Efl_Canvas_Filter_State_Text;

/** Internal structure representing the state of a Gfx Filter
 *
 * @ingroup Efl_Canvas_Filter
 */
typedef struct _Efl_Canvas_Filter_State
{
  Efl_Canvas_Filter_State_Text text; /**< Text state */
  Efl_Gfx_Color32 color; /**< Color */
  Efl_Canvas_Filter_State_Name cur; /**< Current state */
  Efl_Canvas_Filter_State_Name next; /**< Next state */
  int w; /**< Width */
  int h; /**< Height */
  double scale; /**< Scale factor */
  double pos; /**< Position */
} Efl_Canvas_Filter_State;


#endif








#endif
