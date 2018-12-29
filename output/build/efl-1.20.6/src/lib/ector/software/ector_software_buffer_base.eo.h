#ifndef _ECTOR_SOFTWARE_BUFFER_BASE_EO_H_
#define _ECTOR_SOFTWARE_BUFFER_BASE_EO_H_

#ifndef _ECTOR_SOFTWARE_BUFFER_BASE_EO_CLASS_TYPE
#define _ECTOR_SOFTWARE_BUFFER_BASE_EO_CLASS_TYPE

typedef Eo Ector_Software_Buffer_Base;

#endif

#ifndef _ECTOR_SOFTWARE_BUFFER_BASE_EO_TYPES
#define _ECTOR_SOFTWARE_BUFFER_BASE_EO_TYPES


#endif
/** A buffer in Ector Software is a readable & optionally writable image
 *
 * @ingroup Ector_Software_Buffer_Base
 */
#define ECTOR_SOFTWARE_BUFFER_BASE_MIXIN ector_software_buffer_base_mixin_get()

EWAPI const Efl_Class *ector_software_buffer_base_mixin_get(void);

#ifdef ECTOR_SOFTWARE_BUFFER_BASE_PROTECTED
/** Clear internal pixel buffer
 *
 * @ingroup Ector_Software_Buffer_Base
 */
EOAPI void ector_software_buffer_pixels_clear(Eo *obj);
#endif

#endif
