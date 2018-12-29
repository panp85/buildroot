#ifndef _EFL_FILE_EO_H_
#define _EFL_FILE_EO_H_

#ifndef _EFL_FILE_EO_CLASS_TYPE
#define _EFL_FILE_EO_CLASS_TYPE

typedef Eo Efl_File;

#endif

#ifndef _EFL_FILE_EO_TYPES
#define _EFL_FILE_EO_TYPES


#endif
/** Efl file interface
 *
 * @ingroup Efl_File
 */
#define EFL_FILE_INTERFACE efl_file_interface_get()

EWAPI const Efl_Class *efl_file_interface_get(void);

/**
 * @brief Set the source mmaped file from where an image object must fetch the
 * real image data (it must be an Eina_File).
 *
 * If the file supports multiple data stored in it (as Eet files do), you can
 * specify the key to be used as the index of the image in this file.
 *
 * @param[in] f The handler to an Eina_File that will be used as image source
 * @param[in] key The group that the image belongs to, in case  it's an
 * EET(including Edje case) file. This can be used as a key inside evas image
 * cache if this is a normal image file not eet file.
 *
 * @return @c true on success, @c false otherwise
 *
 * @since 1.8
 *
 * @ingroup Efl_File
 */
EOAPI Eina_Bool efl_file_mmap_set(Eo *obj, const Eina_File *f, const char *key);

/**
 * @brief Get the source mmaped file from where an image object must fetch the
 * real image data (it must be an Eina_File).
 *
 * If the file supports multiple data stored in it (as Eet files do), you can
 * get the key to be used as the index of the image in this file.
 *
 * @param[out] f The handler to an Eina_File that will be used as image source
 * @param[out] key The group that the image belongs to, in case  it's an
 * EET(including Edje case) file. This can be used as a key inside evas image
 * cache if this is a normal image file not eet file.
 *
 * @since 1.10
 *
 * @ingroup Efl_File
 */
EOAPI void efl_file_mmap_get(const Eo *obj, const Eina_File **f, const char **key);

/**
 * @brief Set the source file from where an image object must fetch the real
 * image data (it may be an Eet file, besides pure image ones).
 *
 * If the file supports multiple data stored in it (as Eet files do), you can
 * specify the key to be used as the index of the image in this file.
 *
 * @param[in] file The image file path.
 * @param[in] key The image key in @c file (if its an Eet one), or @c null,
 * otherwise.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_File
 */
EOAPI Eina_Bool efl_file_set(Eo *obj, const char *file, const char *key);

/**
 * @brief Retrieve the source file from where an image object is to fetch the
 * real image data (it may be an Eet file, besides pure image ones).
 *
 * You must not modify the strings on the returned pointers.
 *
 * @note Use @c null pointers on the file components you're not interested in:
 * they'll be ignored by the function.
 *
 * @param[out] file The image file path.
 * @param[out] key The image key in @c file (if its an Eet one), or @c null,
 * otherwise.
 *
 * @ingroup Efl_File
 */
EOAPI void efl_file_get(const Eo *obj, const char **file, const char **key);

/**
 * @brief Save the given image object's contents to an (image) file.
 *
 * The extension suffix on @c file will determine which saver module Evas is to
 * use when saving, thus the final file's format. If the file supports multiple
 * data stored in it (Eet ones), you can specify the key to be used as the
 * index of the image in it.
 *
 * You can specify some flags when saving the image.  Currently acceptable
 * flags are @c quality and @c compress. Eg.: "quality=100 compress=9"
 *
 * @param[in] file The filename to be used to save the image (extension
 * obligatory).
 * @param[in] key The image key in the file (if an Eet one), or @c null,
 * otherwise.
 * @param[in] flags String containing the flags to be used ($null for none).
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_File
 */
EOAPI Eina_Bool efl_file_save(const Eo *obj, const char *file, const char *key, const char *flags) EINA_ARG_NONNULL(2);

#endif
