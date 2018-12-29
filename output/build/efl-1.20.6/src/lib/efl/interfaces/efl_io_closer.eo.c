EWAPI const Efl_Event_Description _EFL_IO_CLOSER_EVENT_CLOSED =
   EFL_EVENT_DESCRIPTION("closed");
EOAPI EFL_FUNC_BODY(efl_io_closer_close, Eina_Error, 0);

Eina_Bool _efl_io_closer_closed_set(Eo *obj, void *pd, Eina_Bool is_closed);

EOAPI EFL_FUNC_BODYV(efl_io_closer_closed_set, Eina_Bool, 0, EFL_FUNC_CALL(is_closed), Eina_Bool is_closed);
EOAPI EFL_FUNC_BODY_CONST(efl_io_closer_closed_get, Eina_Bool, 0);
EOAPI EFL_FUNC_BODYV(efl_io_closer_close_on_exec_set, Eina_Bool, 0, EFL_FUNC_CALL(close_on_exec), Eina_Bool close_on_exec);
EOAPI EFL_FUNC_BODY_CONST(efl_io_closer_close_on_exec_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_io_closer_close_on_destructor_set, EFL_FUNC_CALL(close_on_destructor), Eina_Bool close_on_destructor);
EOAPI EFL_FUNC_BODY_CONST(efl_io_closer_close_on_destructor_get, Eina_Bool, 0);

static Eina_Bool
_efl_io_closer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IO_CLOSER_EXTRA_OPS
#define EFL_IO_CLOSER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_io_closer_close, NULL),
      EFL_OBJECT_OP_FUNC(efl_io_closer_closed_set, _efl_io_closer_closed_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_closed_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_get, NULL),
      EFL_IO_CLOSER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IO_CLOSER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IO_CLOSER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_io_closer_class_desc = {
   EO_VERSION,
   "Efl.Io.Closer",
   EFL_CLASS_TYPE_MIXIN,
   0,
   _efl_io_closer_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_io_closer_mixin_get, &_efl_io_closer_class_desc, NULL, NULL);
