#ifndef _EFL_UI_BASE_EO_H_
#define _EFL_UI_BASE_EO_H_

#ifndef _EFL_UI_BASE_EO_CLASS_TYPE
#define _EFL_UI_BASE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Base;

#endif

#ifndef _EFL_UI_BASE_EO_TYPES
#define _EFL_UI_BASE_EO_TYPES


#endif
/** A common interface for UI objects.
 *
 * @ingroup Efl_Ui_Base
 */
#define EFL_UI_BASE_INTERFACE efl_ui_base_interface_get()

EWAPI const Efl_Class *efl_ui_base_interface_get(void);

/**
 * @brief Whether this object should be mirrored.
 *
 * If mirrored, an object is in RTL (right to left) mode instead of LTR (left
 * to right).
 *
 * @param[in] rtl @c true for RTL, @c false for LTR (default).
 *
 * @ingroup Efl_Ui_Base
 */
EOAPI void efl_ui_mirrored_set(Eo *obj, Eina_Bool rtl);

/**
 * @brief Whether this object should be mirrored.
 *
 * If mirrored, an object is in RTL (right to left) mode instead of LTR (left
 * to right).
 *
 * @return @c true for RTL, @c false for LTR (default).
 *
 * @ingroup Efl_Ui_Base
 */
EOAPI Eina_Bool efl_ui_mirrored_get(const Eo *obj);

/**
 * @brief Whether the property @ref efl_ui_mirrored_get should be set
 * automatically.
 *
 * If enabled, the system or application configuration will be used to set the
 * value of @ref efl_ui_mirrored_get.
 *
 * This property may be implemented by high-level widgets (in @c Efl.Ui) but
 * not by low-level widgets (in @c Efl.Canvas) as the configuration should
 * affect only high-level widgets.
 *
 * @param[in] automatic Whether the widget uses automatic mirroring
 *
 * @ingroup Efl_Ui_Base
 */
EOAPI void efl_ui_mirrored_automatic_set(Eo *obj, Eina_Bool automatic);

/**
 * @brief Whether the property @ref efl_ui_mirrored_get should be set
 * automatically.
 *
 * If enabled, the system or application configuration will be used to set the
 * value of @ref efl_ui_mirrored_get.
 *
 * This property may be implemented by high-level widgets (in @c Efl.Ui) but
 * not by low-level widgets (in @c Efl.Canvas) as the configuration should
 * affect only high-level widgets.
 *
 * @return Whether the widget uses automatic mirroring
 *
 * @ingroup Efl_Ui_Base
 */
EOAPI Eina_Bool efl_ui_mirrored_automatic_get(const Eo *obj);

/**
 * @brief The (human) language for this object.
 *
 * Sets the language for this object.
 *
 * @param[in] language The current language.
 *
 * @ingroup Efl_Ui_Base
 */
EOAPI void efl_ui_language_set(Eo *obj, const char *language);

/**
 * @brief The (human) language for this object.
 *
 * Gets the language for this object.
 *
 * @return The current language.
 *
 * @ingroup Efl_Ui_Base
 */
EOAPI const char *efl_ui_language_get(const Eo *obj);

/**
 * @brief The scaling factor of an object.
 *
 * This property is an individual scaling factor on the object (Edje or UI
 * widget). This property (or Edje's global scaling factor, when applicable),
 * will affect this object's part sizes. If scale is not zero, than the
 * individual scaling will override any global scaling set, for the object
 * obj's parts. Set it back to zero to get the effects of the global scaling
 * again.
 *
 * @warning In Edje, only parts which, at EDC level, had the "scale" property
 * set to 1, will be affected by this function. Check the complete "syntax
 * reference" for EDC files.
 *
 * Sets the scaling factor of an object.
 *
 * @param[in] scale The scaling factor (the default value is 0.0, meaning
 * individual scaling is not set)
 *
 * @ingroup Efl_Ui_Base
 */
EOAPI void efl_ui_scale_set(Eo *obj, double scale);

/**
 * @brief The scaling factor of an object.
 *
 * This property is an individual scaling factor on the object (Edje or UI
 * widget). This property (or Edje's global scaling factor, when applicable),
 * will affect this object's part sizes. If scale is not zero, than the
 * individual scaling will override any global scaling set, for the object
 * obj's parts. Set it back to zero to get the effects of the global scaling
 * again.
 *
 * @warning In Edje, only parts which, at EDC level, had the "scale" property
 * set to 1, will be affected by this function. Check the complete "syntax
 * reference" for EDC files.
 *
 * Gets an object's scaling factor.
 *
 * @return The scaling factor (the default value is 0.0, meaning individual
 * scaling is not set)
 *
 * @ingroup Efl_Ui_Base
 */
EOAPI double efl_ui_scale_get(const Eo *obj);

/**
 * @brief The base scale of a layout object (read-only).
 *
 * The base scale refers to the scale for which the backing EDC file was
 * designed. By default it is 1.0 which means the EDC file was designed for a
 * scale of 1.0.
 *
 * This base scale can be specified in an EDC file as the collections'
 * "base_scale" field.
 *
 * If the object is not a layout, this will return 1.0.
 *
 * Gets a given layout object's base_scale factor.
 *
 * @return The base_scale factor (the default value is 1.0, meaning that the
 * edc file was designed based on scale 1.0).
 *
 * @ingroup Efl_Ui_Base
 */
EOAPI double efl_ui_base_scale_get(const Eo *obj);

#endif
