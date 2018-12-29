#ifndef _EVAS_ECTOR_SOFTWARE_BUFFER_EO_H_
#define _EVAS_ECTOR_SOFTWARE_BUFFER_EO_H_

#ifndef _EVAS_ECTOR_SOFTWARE_BUFFER_EO_CLASS_TYPE
#define _EVAS_ECTOR_SOFTWARE_BUFFER_EO_CLASS_TYPE

typedef Eo Evas_Ector_Software_Buffer;

#endif

#ifndef _EVAS_ECTOR_SOFTWARE_BUFFER_EO_TYPES
#define _EVAS_ECTOR_SOFTWARE_BUFFER_EO_TYPES


#endif
/** A buffer object wrapping an existing Evas Image_Entry.
 *
 * @ingroup Evas_Ector_Software_Buffer
 */
#define EVAS_ECTOR_SOFTWARE_BUFFER_CLASS evas_ector_software_buffer_class_get()

EWAPI const Efl_Class *evas_ector_software_buffer_class_get(void);

#endif
