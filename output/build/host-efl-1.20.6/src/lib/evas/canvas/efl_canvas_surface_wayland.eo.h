#ifndef _EFL_CANVAS_SURFACE_WAYLAND_EO_H_
#define _EFL_CANVAS_SURFACE_WAYLAND_EO_H_

#ifndef _EFL_CANVAS_SURFACE_WAYLAND_EO_CLASS_TYPE
#define _EFL_CANVAS_SURFACE_WAYLAND_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Surface_Wayland;

#endif

#ifndef _EFL_CANVAS_SURFACE_WAYLAND_EO_TYPES
#define _EFL_CANVAS_SURFACE_WAYLAND_EO_TYPES


#endif
/** Native Wayland surface for Efl canvas
 *
 * @ingroup Efl_Canvas_Surface_Wayland
 */
#define EFL_CANVAS_SURFACE_WAYLAND_CLASS efl_canvas_surface_wayland_class_get()

EWAPI const Efl_Class *efl_canvas_surface_wayland_class_get(void);

#endif
