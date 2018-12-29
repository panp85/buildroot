#ifndef _EFL_ANIMATOR_EO_H_
#define _EFL_ANIMATOR_EO_H_

#ifndef _EFL_ANIMATOR_EO_CLASS_TYPE
#define _EFL_ANIMATOR_EO_CLASS_TYPE

typedef Eo Efl_Animator;

#endif

#ifndef _EFL_ANIMATOR_EO_TYPES
#define _EFL_ANIMATOR_EO_TYPES

/** EFL event animator tick data structure
 *
 * @ingroup Efl_Event
 */
typedef struct _Efl_Event_Animator_Tick
{
  Eina_Rectangle update_area; /**< Area of the canvas that will be pushed to
                               * screen. */
} Efl_Event_Animator_Tick;


#endif
/** Efl animator interface
 *
 * @ingroup Efl_Animator
 */
#define EFL_ANIMATOR_INTERFACE efl_animator_interface_get()

EWAPI const Efl_Class *efl_animator_interface_get(void);

EWAPI extern const Efl_Event_Description _EFL_EVENT_ANIMATOR_TICK;

/** Animator tick synchronized with screen vsync if possible.
 * @return Efl_Event_Animator_Tick
 *
 * @ingroup Efl_Animator
 */
#define EFL_EVENT_ANIMATOR_TICK (&(_EFL_EVENT_ANIMATOR_TICK))

#endif
