EWAPI const Efl_Event_Description _EFL_LOOP_EVENT_IDLE_ENTER =
   EFL_EVENT_DESCRIPTION_RESTART("idle,enter");
EWAPI const Efl_Event_Description _EFL_LOOP_EVENT_IDLE_EXIT =
   EFL_EVENT_DESCRIPTION_RESTART("idle,exit");
EWAPI const Efl_Event_Description _EFL_LOOP_EVENT_IDLE =
   EFL_EVENT_DESCRIPTION_RESTART("idle");
EWAPI const Efl_Event_Description _EFL_LOOP_EVENT_ARGUMENTS =
   EFL_EVENT_DESCRIPTION("arguments");
EWAPI const Efl_Event_Description _EFL_LOOP_EVENT_POLL_HIGH =
   EFL_EVENT_DESCRIPTION("poll,high");
EWAPI const Efl_Event_Description _EFL_LOOP_EVENT_POLL_MEDIUM =
   EFL_EVENT_DESCRIPTION("poll,medium");
EWAPI const Efl_Event_Description _EFL_LOOP_EVENT_POLL_LOW =
   EFL_EVENT_DESCRIPTION("poll,low");

Efl_Loop *_efl_loop_main_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_loop_main_get, Efl_Loop *, NULL);

const Efl_Version *_efl_loop_app_efl_version_get(Eo *obj, Efl_Loop_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_loop_app_efl_version_get, const Efl_Version *, NULL);

const Efl_Version *_efl_loop_efl_version_get(Eo *obj, Efl_Loop_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_loop_efl_version_get, const Efl_Version *, NULL);

void _efl_loop_iterate(Eo *obj, Efl_Loop_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_loop_iterate);

int _efl_loop_iterate_may_block(Eo *obj, Efl_Loop_Data *pd, int may_block);

EOAPI EFL_FUNC_BODYV(efl_loop_iterate_may_block, int, 0, EFL_FUNC_CALL(may_block), int may_block);

unsigned char _efl_loop_begin(Eo *obj, Efl_Loop_Data *pd);

EOAPI EFL_FUNC_BODY(efl_loop_begin, unsigned char, 0);

void _efl_loop_quit(Eo *obj, Efl_Loop_Data *pd, unsigned char exit_code);

EOAPI EFL_VOID_FUNC_BODYV(efl_loop_quit, EFL_FUNC_CALL(exit_code), unsigned char exit_code);

Efl_Future *_efl_loop_job(Eo *obj, Efl_Loop_Data *pd, const void *data);

EOAPI EFL_FUNC_BODYV(efl_loop_job, Efl_Future *, NULL, EFL_FUNC_CALL(data), const void *data);

Efl_Future *_efl_loop_timeout(Eo *obj, Efl_Loop_Data *pd, double time, const void *data);

EOAPI EFL_FUNC_BODYV(efl_loop_timeout, Efl_Future *, NULL, EFL_FUNC_CALL(time, data), double time, const void *data);

Eina_Bool _efl_loop_register(Eo *obj, Efl_Loop_Data *pd, const Efl_Class *klass, const Efl_Object *provider);

EOAPI EFL_FUNC_BODYV(efl_loop_register, Eina_Bool, 0, EFL_FUNC_CALL(klass, provider), const Efl_Class *klass, const Efl_Object *provider);

Eina_Bool _efl_loop_unregister(Eo *obj, Efl_Loop_Data *pd, const Efl_Class *klass, const Efl_Object *provider);

EOAPI EFL_FUNC_BODYV(efl_loop_unregister, Eina_Bool, 0, EFL_FUNC_CALL(klass, provider), const Efl_Class *klass, const Efl_Object *provider);

Efl_Object *_efl_loop_efl_object_constructor(Eo *obj, Efl_Loop_Data *pd);


void _efl_loop_efl_object_destructor(Eo *obj, Efl_Loop_Data *pd);


Efl_Object *_efl_loop_efl_object_provider_find(Eo *obj, Efl_Loop_Data *pd, const Efl_Object *klass);


static Eina_Bool
_efl_loop_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_LOOP_EXTRA_OPS
#define EFL_LOOP_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_loop_app_efl_version_get, _efl_loop_app_efl_version_get),
      EFL_OBJECT_OP_FUNC(efl_loop_efl_version_get, _efl_loop_efl_version_get),
      EFL_OBJECT_OP_FUNC(efl_loop_iterate, _efl_loop_iterate),
      EFL_OBJECT_OP_FUNC(efl_loop_iterate_may_block, _efl_loop_iterate_may_block),
      EFL_OBJECT_OP_FUNC(efl_loop_begin, _efl_loop_begin),
      EFL_OBJECT_OP_FUNC(efl_loop_quit, _efl_loop_quit),
      EFL_OBJECT_OP_FUNC(efl_loop_job, _efl_loop_job),
      EFL_OBJECT_OP_FUNC(efl_loop_timeout, _efl_loop_timeout),
      EFL_OBJECT_OP_FUNC(efl_loop_register, _efl_loop_register),
      EFL_OBJECT_OP_FUNC(efl_loop_unregister, _efl_loop_unregister),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_loop_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_loop_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_provider_find, _efl_loop_efl_object_provider_find),
      EFL_LOOP_EXTRA_OPS
   );
   opsp = &ops;

#ifndef EFL_LOOP_EXTRA_CLASS_OPS
#define EFL_LOOP_EXTRA_CLASS_OPS
#endif

   EFL_OPS_DEFINE(cops,
      EFL_OBJECT_OP_FUNC(efl_loop_main_get, _efl_loop_main_get),
      EFL_LOOP_EXTRA_CLASS_OPS
   );
   copsp = &cops;

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_loop_class_desc = {
   EO_VERSION,
   "Efl.Loop",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Loop_Data),
   _efl_loop_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_loop_class_get, &_efl_loop_class_desc, EFL_OBJECT_CLASS, NULL);
