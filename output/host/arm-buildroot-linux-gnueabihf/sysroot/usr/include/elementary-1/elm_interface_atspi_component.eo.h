#ifndef _ELM_INTERFACE_ATSPI_COMPONENT_EO_H_
#define _ELM_INTERFACE_ATSPI_COMPONENT_EO_H_

#ifndef _ELM_INTERFACE_ATSPI_COMPONENT_EO_CLASS_TYPE
#define _ELM_INTERFACE_ATSPI_COMPONENT_EO_CLASS_TYPE

typedef Eo Elm_Interface_Atspi_Component;

#endif

#ifndef _ELM_INTERFACE_ATSPI_COMPONENT_EO_TYPES
#define _ELM_INTERFACE_ATSPI_COMPONENT_EO_TYPES


#endif
/** AT-SPI component mixin
 *
 * @ingroup Elm_Interface_Atspi_Component
 */
#define ELM_INTERFACE_ATSPI_COMPONENT_MIXIN elm_interface_atspi_component_mixin_get()

EWAPI const Efl_Class *elm_interface_atspi_component_mixin_get(void);

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 * @brief Size of accessible widget.
 *
 * @param[in] w Width of the widget
 * @param[in] h Height of the widget
 *
 * @return @c true if size was set, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Component
 */
EOAPI Eina_Bool elm_interface_atspi_component_size_set(Eo *obj, int w, int h);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 * @brief Size of accessible widget.
 *
 * @param[out] w Width of the widget
 * @param[out] h Height of the widget
 *
 * @ingroup Elm_Interface_Atspi_Component
 */
EOAPI void elm_interface_atspi_component_size_get(const Eo *obj, int *w, int *h);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 * @brief Evas layer of accessible widget.
 *
 * @return Evas layer of the widget
 *
 * @ingroup Elm_Interface_Atspi_Component
 */
EOAPI int elm_interface_atspi_component_layer_get(const Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 * @brief Gets alpha of accessible widget.
 *
 * @return Alpha value in [0, 1] range.
 *
 * @ingroup Elm_Interface_Atspi_Component
 */
EOAPI double elm_interface_atspi_component_alpha_get(const Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 * @brief Gets the depth at which the component is shown in relation to other
 * components in the same container.
 *
 * @return Z order of component
 *
 * @ingroup Elm_Interface_Atspi_Component
 */
EOAPI int elm_interface_atspi_component_z_order_get(const Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 * @brief Geometry of accessible widget.
 *
 * @param[in] screen_coords If @c true x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[in] x X coordinate
 * @param[in] y Y coordinate
 * @param[in] w Width
 * @param[in] h Height
 *
 * @return @c true if geometry was set, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Component
 */
EOAPI Eina_Bool elm_interface_atspi_component_extents_set(Eo *obj, Eina_Bool screen_coords, int x, int y, int w, int h);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 * @brief Geometry of accessible widget.
 *
 * @param[in] screen_coords If @c true x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[out] x X coordinate
 * @param[out] y Y coordinate
 * @param[out] w Width
 * @param[out] h Height
 *
 * @ingroup Elm_Interface_Atspi_Component
 */
EOAPI void elm_interface_atspi_component_extents_get(const Eo *obj, Eina_Bool screen_coords, int *x, int *y, int *w, int *h);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 * @brief Position of accessible widget.
 *
 * @param[in] screen_coords If @c true x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[in] x X coordinate
 * @param[in] y Y coordinate
 *
 * @return @c true if position was set, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Component
 */
EOAPI Eina_Bool elm_interface_atspi_component_position_set(Eo *obj, Eina_Bool screen_coords, int x, int y);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 * @brief Position of accessible widget.
 *
 * @param[in] screen_coords If @c true x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[out] x X coordinate
 * @param[out] y Y coordinate
 *
 * @ingroup Elm_Interface_Atspi_Component
 */
EOAPI void elm_interface_atspi_component_position_get(const Eo *obj, Eina_Bool screen_coords, int *x, int *y);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 * @brief Contains accessible widget
 *
 * @param[in] screen_coords If @c true x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[in] x X coordinate
 * @param[in] y Y coordinate
 *
 * @return @c true if params have been set, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Component
 */
EOAPI Eina_Bool elm_interface_atspi_component_contains(Eo *obj, Eina_Bool screen_coords, int x, int y);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 * @brief Focuses accessible widget.
 *
 * @return @c true if focus grab focus succeed, @c false otherwise.
 *
 * @ingroup Elm_Interface_Atspi_Component
 */
EOAPI Eina_Bool elm_interface_atspi_component_focus_grab(Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_PROTECTED
/**
 * @brief Gets top component object occupying space at given coordinates.
 *
 * @param[in] screen_coords If @c true x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[in] x X coordinate
 * @param[in] y Y coordinate
 *
 * @return Top component object at given coordinate
 *
 * @ingroup Elm_Interface_Atspi_Component
 */
EOAPI Efl_Object *elm_interface_atspi_component_accessible_at_point_get(Eo *obj, Eina_Bool screen_coords, int x, int y);
#endif

#endif
