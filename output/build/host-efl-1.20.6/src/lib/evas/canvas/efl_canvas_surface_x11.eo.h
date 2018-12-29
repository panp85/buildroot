#ifndef _EFL_CANVAS_SURFACE_X11_EO_H_
#define _EFL_CANVAS_SURFACE_X11_EO_H_

#ifndef _EFL_CANVAS_SURFACE_X11_EO_CLASS_TYPE
#define _EFL_CANVAS_SURFACE_X11_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Surface_X11;

#endif

#ifndef _EFL_CANVAS_SURFACE_X11_EO_TYPES
#define _EFL_CANVAS_SURFACE_X11_EO_TYPES

/** The type used by @ref efl_canvas_surface_native_buffer_get.
 *
 * @ingroup Efl_Canvas_Surface
 */
typedef struct _Efl_Canvas_Surface_X11_Pixmap
{
  void *visual; /**< X11 Visual for this Pixmap. */
  unsigned long pixmap; /**< X11 Pixmap ID. */
} Efl_Canvas_Surface_X11_Pixmap;


#endif
/** Native X11 surface for Efl canvas
 *
 * @ingroup Efl_Canvas_Surface_X11
 */
#define EFL_CANVAS_SURFACE_X11_CLASS efl_canvas_surface_x11_class_get()

EWAPI const Efl_Class *efl_canvas_surface_x11_class_get(void);

/**
 * @brief This is a helper for @ref efl_canvas_surface_native_buffer_get.
 *
 * @param[in] visual X11 Visual for this Pixmap.
 * @param[in] pixmap X11 Pixmap ID.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Canvas_Surface_X11
 */
EOAPI Eina_Bool efl_canvas_surface_x11_pixmap_set(Eo *obj, void *visual, unsigned long pixmap);

/**
 * @brief This is a helper for @ref efl_canvas_surface_native_buffer_get.
 *
 * @param[out] visual X11 Visual for this Pixmap.
 * @param[out] pixmap X11 Pixmap ID.
 *
 * @ingroup Efl_Canvas_Surface_X11
 */
EOAPI void efl_canvas_surface_x11_pixmap_get(const Eo *obj, void **visual, unsigned long *pixmap);

#endif
