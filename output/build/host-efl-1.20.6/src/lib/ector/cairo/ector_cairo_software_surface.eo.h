#ifndef _ECTOR_CAIRO_SOFTWARE_SURFACE_EO_H_
#define _ECTOR_CAIRO_SOFTWARE_SURFACE_EO_H_

#ifndef _ECTOR_CAIRO_SOFTWARE_SURFACE_EO_CLASS_TYPE
#define _ECTOR_CAIRO_SOFTWARE_SURFACE_EO_CLASS_TYPE

typedef Eo Ector_Cairo_Software_Surface;

#endif

#ifndef _ECTOR_CAIRO_SOFTWARE_SURFACE_EO_TYPES
#define _ECTOR_CAIRO_SOFTWARE_SURFACE_EO_TYPES


#endif
/**
 * @brief Ector surface on a cairo software backend
 *
 * Used to render ector content into a cairo software backend.
 *
 * @ingroup Ector_Cairo_Software_Surface
 */
#define ECTOR_CAIRO_SOFTWARE_SURFACE_CLASS ector_cairo_software_surface_class_get()

EWAPI const Efl_Class *ector_cairo_software_surface_class_get(void);

#endif
