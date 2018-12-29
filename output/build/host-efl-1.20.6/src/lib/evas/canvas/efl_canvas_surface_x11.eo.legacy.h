#ifndef _EFL_CANVAS_SURFACE_X11_EO_LEGACY_H_
#define _EFL_CANVAS_SURFACE_X11_EO_LEGACY_H_

#ifndef _EFL_CANVAS_SURFACE_X11_EO_CLASS_TYPE
#define _EFL_CANVAS_SURFACE_X11_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Surface_X11;

#endif

#ifndef _EFL_CANVAS_SURFACE_X11_EO_TYPES
#define _EFL_CANVAS_SURFACE_X11_EO_TYPES

/** The type used by @ref Efl.Canvas.Surface.native_buffer.
 *
 * @ingroup Efl_Canvas_Surface
 */
typedef struct _Efl_Canvas_Surface_X11_Pixmap
{
  void *visual; /**< X11 Visual for this Pixmap. */
  unsigned long pixmap; /**< X11 Pixmap ID. */
} Efl_Canvas_Surface_X11_Pixmap;


#endif



#endif
