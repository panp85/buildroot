#ifndef _EIO_MODEL_EO_H_
#define _EIO_MODEL_EO_H_

#ifndef _EIO_MODEL_EO_CLASS_TYPE
#define _EIO_MODEL_EO_CLASS_TYPE

typedef Eo Eio_Model;

#endif

#ifndef _EIO_MODEL_EO_TYPES
#define _EIO_MODEL_EO_TYPES


#endif
/** Eio model class
 *
 * @ingroup Eio_Model
 */
#define EIO_MODEL_CLASS eio_model_class_get()

EWAPI const Efl_Class *eio_model_class_get(void);

/**
 * @brief Set children filter callback.
 *
 * This function sets, along with user's private data userdata, the Eio's
 * Eio_Filter_Direct_Cb which is a mid-step before receiving the real data.
 * Once in filter callback we can decide, by returning either EINA_FALSE, to
 * abort the notification or EINA_TRUE to keep it.
 *
 * See also @ref efl_model_children_slice_get.
 *
 * @param[in] filter_cb Filter callback
 * @param[in] userdata User's private data
 *
 * @since 1.11
 *
 * @ingroup Eio_Model
 */
EOAPI void eio_model_children_filter_set(Eo *obj, Eio_Filter_Direct_Cb filter_cb, void *userdata);

/**
 * @brief Custom Eio_Model constructor.
 *
 * @param[in] path Root path provided by caller
 *
 * @since 1.11
 *
 * @ingroup Eio_Model
 */
EOAPI void eio_model_path_set(Eo *obj, const char *path);

#endif
