EWAPI const Efl_Event_Description _EFL_PROMISE_EVENT_FUTURE_SET =
   EFL_EVENT_DESCRIPTION("future,set");
EWAPI const Efl_Event_Description _EFL_PROMISE_EVENT_FUTURE_PROGRESS_SET =
   EFL_EVENT_DESCRIPTION("future,progress,set");
EWAPI const Efl_Event_Description _EFL_PROMISE_EVENT_FUTURE_NONE =
   EFL_EVENT_DESCRIPTION("future,none");

void _efl_promise_progress_set(Eo *obj, Efl_Promise_Data *pd, const void *p);

EOAPI EFL_VOID_FUNC_BODYV(efl_promise_progress_set, EFL_FUNC_CALL(p), const void *p);

Efl_Future *_efl_promise_future_get(Eo *obj, Efl_Promise_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_promise_future_get, Efl_Future *, NULL);

void _efl_promise_value_set(Eo *obj, Efl_Promise_Data *pd, void *v, Eina_Free_Cb free_cb);

EOAPI EFL_VOID_FUNC_BODYV(efl_promise_value_set, EFL_FUNC_CALL(v, free_cb), void *v, Eina_Free_Cb free_cb);

void _efl_promise_failed_set(Eo *obj, Efl_Promise_Data *pd, Eina_Error err);

EOAPI EFL_VOID_FUNC_BODYV(efl_promise_failed_set, EFL_FUNC_CALL(err), Eina_Error err);

Eina_Bool _efl_promise_connect(Eo *obj, Efl_Promise_Data *pd, Efl_Future *f);

EOAPI EFL_FUNC_BODYV(efl_promise_connect, Eina_Bool, 0, EFL_FUNC_CALL(f), Efl_Future *f);

void _efl_promise_efl_object_destructor(Eo *obj, Efl_Promise_Data *pd);


Efl_Object *_efl_promise_efl_object_constructor(Eo *obj, Efl_Promise_Data *pd);


static Eina_Bool
_efl_promise_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_PROMISE_EXTRA_OPS
#define EFL_PROMISE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_promise_progress_set, _efl_promise_progress_set),
      EFL_OBJECT_OP_FUNC(efl_promise_future_get, _efl_promise_future_get),
      EFL_OBJECT_OP_FUNC(efl_promise_value_set, _efl_promise_value_set),
      EFL_OBJECT_OP_FUNC(efl_promise_failed_set, _efl_promise_failed_set),
      EFL_OBJECT_OP_FUNC(efl_promise_connect, _efl_promise_connect),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_promise_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_promise_efl_object_constructor),
      EFL_PROMISE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_PROMISE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_PROMISE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_promise_class_desc = {
   EO_VERSION,
   "Efl.Promise",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Promise_Data),
   _efl_promise_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_promise_class_get, &_efl_promise_class_desc, EFL_LOOP_USER_CLASS, NULL);
