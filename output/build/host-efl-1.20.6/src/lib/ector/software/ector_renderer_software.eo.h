#ifndef _ECTOR_RENDERER_SOFTWARE_EO_H_
#define _ECTOR_RENDERER_SOFTWARE_EO_H_

#ifndef _ECTOR_RENDERER_SOFTWARE_EO_CLASS_TYPE
#define _ECTOR_RENDERER_SOFTWARE_EO_CLASS_TYPE

typedef Eo Ector_Renderer_Software;

#endif

#ifndef _ECTOR_RENDERER_SOFTWARE_EO_TYPES
#define _ECTOR_RENDERER_SOFTWARE_EO_TYPES


#endif
/** Ector software renderer class
 *
 * @ingroup Ector_Renderer_Software
 */
#define ECTOR_RENDERER_SOFTWARE_CLASS ector_renderer_software_class_get()

EWAPI const Efl_Class *ector_renderer_software_class_get(void);

/**
 * @brief Renderer fill operation
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Ector_Renderer_Software
 */
EOAPI Eina_Bool ector_renderer_software_fill(Eo *obj);

#endif
