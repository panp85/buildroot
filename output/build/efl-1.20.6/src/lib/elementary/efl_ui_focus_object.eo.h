#ifndef _EFL_UI_FOCUS_OBJECT_EO_H_
#define _EFL_UI_FOCUS_OBJECT_EO_H_

#ifndef _EFL_UI_FOCUS_OBJECT_EO_CLASS_TYPE
#define _EFL_UI_FOCUS_OBJECT_EO_CLASS_TYPE

typedef Eo Efl_Ui_Focus_Object;

#endif

#ifndef _EFL_UI_FOCUS_OBJECT_EO_TYPES
#define _EFL_UI_FOCUS_OBJECT_EO_TYPES


#endif
/** Functions of focusable objects.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Object
 */
#define EFL_UI_FOCUS_OBJECT_MIXIN efl_ui_focus_object_mixin_get()

EWAPI const Efl_Class *efl_ui_focus_object_mixin_get(void);

/**
 * @brief The geometry to use to calculate the relations to other objects.
 *
 * @return The geometry to use.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Object
 */
EOAPI Eina_Rectangle efl_ui_focus_object_focus_geometry_get(const Eo *obj);

/**
 * @brief This gets called by the manager and should never be called by someone
 * else.
 *
 * It can be used by an implementation of a focus object to adapt to changes
 * that are needed.
 *
 * The function is emitting the focus state events, if focus is different to
 * the previous state.
 *
 * @param[in] focus The state in which the object should be put
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Object
 */
EOAPI void efl_ui_focus_object_focus_set(Eo *obj, Eina_Bool focus);

/**
 * @brief This gets called by the manager and should never be called by someone
 * else.
 *
 * It can be used by an implementation of a focus object to adapt to changes
 * that are needed.
 *
 * The function is emitting the focus state events, if focus is different to
 * the previous state.
 *
 * @return The state in which the object should be put
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Object
 */
EOAPI Eina_Bool efl_ui_focus_object_focus_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_CHANGED;

/** Emitted if the focus state has changed
 * @return Eina_Bool
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Object
 */
#define EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_CHANGED (&(_EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_CHANGED))

#endif
