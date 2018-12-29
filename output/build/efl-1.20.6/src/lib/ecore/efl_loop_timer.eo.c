EWAPI const Efl_Event_Description _EFL_LOOP_TIMER_EVENT_TICK =
   EFL_EVENT_DESCRIPTION("tick");

void _efl_loop_timer_interval_set(Eo *obj, Efl_Loop_Timer_Data *pd, double in);

EOAPI EFL_VOID_FUNC_BODYV(efl_loop_timer_interval_set, EFL_FUNC_CALL(in), double in);

double _efl_loop_timer_interval_get(Eo *obj, Efl_Loop_Timer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_loop_timer_interval_get, double, -1.000000 /* +1.000000 */);

double _efl_loop_timer_pending_get(Eo *obj, Efl_Loop_Timer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_loop_timer_pending_get, double, 0);

void _efl_loop_timer_reset(Eo *obj, Efl_Loop_Timer_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_loop_timer_reset);

void _efl_loop_timer_loop_reset(Eo *obj, Efl_Loop_Timer_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_loop_timer_loop_reset);

void _efl_loop_timer_delay(Eo *obj, Efl_Loop_Timer_Data *pd, double add);

EOAPI EFL_VOID_FUNC_BODYV(efl_loop_timer_delay, EFL_FUNC_CALL(add), double add);

Efl_Object *_efl_loop_timer_efl_object_constructor(Eo *obj, Efl_Loop_Timer_Data *pd);


void _efl_loop_timer_efl_object_destructor(Eo *obj, Efl_Loop_Timer_Data *pd);


Efl_Object *_efl_loop_timer_efl_object_finalize(Eo *obj, Efl_Loop_Timer_Data *pd);


void _efl_loop_timer_efl_object_event_freeze(Eo *obj, Efl_Loop_Timer_Data *pd);


void _efl_loop_timer_efl_object_parent_set(Eo *obj, Efl_Loop_Timer_Data *pd, Efl_Object *parent);


int _efl_loop_timer_efl_object_event_freeze_count_get(Eo *obj, Efl_Loop_Timer_Data *pd);


void _efl_loop_timer_efl_object_event_thaw(Eo *obj, Efl_Loop_Timer_Data *pd);


static Eina_Bool
_efl_loop_timer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_LOOP_TIMER_EXTRA_OPS
#define EFL_LOOP_TIMER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_loop_timer_interval_set, _efl_loop_timer_interval_set),
      EFL_OBJECT_OP_FUNC(efl_loop_timer_interval_get, _efl_loop_timer_interval_get),
      EFL_OBJECT_OP_FUNC(efl_loop_timer_pending_get, _efl_loop_timer_pending_get),
      EFL_OBJECT_OP_FUNC(efl_loop_timer_reset, _efl_loop_timer_reset),
      EFL_OBJECT_OP_FUNC(efl_loop_timer_loop_reset, _efl_loop_timer_loop_reset),
      EFL_OBJECT_OP_FUNC(efl_loop_timer_delay, _efl_loop_timer_delay),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_loop_timer_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_loop_timer_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_loop_timer_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_event_freeze, _efl_loop_timer_efl_object_event_freeze),
      EFL_OBJECT_OP_FUNC(efl_parent_set, _efl_loop_timer_efl_object_parent_set),
      EFL_OBJECT_OP_FUNC(efl_event_freeze_count_get, _efl_loop_timer_efl_object_event_freeze_count_get),
      EFL_OBJECT_OP_FUNC(efl_event_thaw, _efl_loop_timer_efl_object_event_thaw),
      EFL_LOOP_TIMER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_LOOP_TIMER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_LOOP_TIMER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_loop_timer_class_desc = {
   EO_VERSION,
   "Efl.Loop.Timer",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Loop_Timer_Data),
   _efl_loop_timer_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_loop_timer_class_get, &_efl_loop_timer_class_desc, EFL_LOOP_USER_CLASS, NULL);

EAPI void
ecore_timer_interval_set(Efl_Loop_Timer *obj, double in)
{
   efl_loop_timer_interval_set(obj, in);
}

EAPI double
ecore_timer_interval_get(const Efl_Loop_Timer *obj)
{
   return efl_loop_timer_interval_get(obj);
}

EAPI double
ecore_timer_pending_get(const Efl_Loop_Timer *obj)
{
   return efl_loop_timer_pending_get(obj);
}

EAPI void
ecore_timer_reset(Efl_Loop_Timer *obj)
{
   efl_loop_timer_reset(obj);
}

EAPI void
ecore_timer_loop_reset(Efl_Loop_Timer *obj)
{
   efl_loop_timer_loop_reset(obj);
}

EAPI void
ecore_timer_delay(Efl_Loop_Timer *obj, double add)
{
   efl_loop_timer_delay(obj, add);
}
