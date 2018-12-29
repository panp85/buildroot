#ifndef _EFL_VPATH_EO_H_
#define _EFL_VPATH_EO_H_

#ifndef _EFL_VPATH_EO_CLASS_TYPE
#define _EFL_VPATH_EO_CLASS_TYPE

typedef Eo Efl_Vpath;

#endif

#ifndef _EFL_VPATH_EO_TYPES
#define _EFL_VPATH_EO_TYPES


#endif
/**
 * @brief VPath is the EFL "Virtual Path" system that maps paths and downloads
 *
 * You can provide virtual paths common in unix shells like: "~/file.jpg"
 * "~username/file.png" And also other extended paths like:
 * "(:cache:)/file.png" "(:videos:)/file.mp4" ... And in future:
 * "file:///blah.jpg" "http://blah.com/file.jpg"
 * "https://blahblah.com/file.jpg" "ssh://blahblah.com:~/file.jpg" ...
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath
 */
#define EFL_VPATH_INTERFACE efl_vpath_interface_get()

EWAPI const Efl_Class *efl_vpath_interface_get(void);

/**
 * @brief Fetch a new Vpath File object from the Vpath system
 *
 * @param[in] path The input virtual file path to fetch
 *
 * @return An object representing the file
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath
 */
EOAPI Efl_Vpath_File *efl_vpath_fetch(Eo *obj, const char *path);

#endif
