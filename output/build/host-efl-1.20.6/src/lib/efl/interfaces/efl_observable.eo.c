
void _efl_observable_observer_add(Eo *obj, Efl_Observable_Data *pd, const char *key, Efl_Observer *obs);

EOAPI EFL_VOID_FUNC_BODYV(efl_observable_observer_add, EFL_FUNC_CALL(key, obs), const char *key, Efl_Observer *obs);

void _efl_observable_observer_del(Eo *obj, Efl_Observable_Data *pd, const char *key, Efl_Observer *obs);

EOAPI EFL_VOID_FUNC_BODYV(efl_observable_observer_del, EFL_FUNC_CALL(key, obs), const char *key, Efl_Observer *obs);

void _efl_observable_observer_clean(Eo *obj, Efl_Observable_Data *pd, Efl_Observer *obs);

EOAPI EFL_VOID_FUNC_BODYV(efl_observable_observer_clean, EFL_FUNC_CALL(obs), Efl_Observer *obs);

Eina_Iterator *_efl_observable_observers_iterator_new(Eo *obj, Efl_Observable_Data *pd, const char *key);

EOAPI EFL_FUNC_BODYV(efl_observable_observers_iterator_new, Eina_Iterator *, NULL, EFL_FUNC_CALL(key), const char *key);

void _efl_observable_observers_update(Eo *obj, Efl_Observable_Data *pd, const char *key, void *data);

EOAPI EFL_VOID_FUNC_BODYV(efl_observable_observers_update, EFL_FUNC_CALL(key, data), const char *key, void *data);

Eina_Iterator *_efl_observable_iterator_tuple_new(Eo *obj, Efl_Observable_Data *pd);

EOAPI EFL_FUNC_BODY(efl_observable_iterator_tuple_new, Eina_Iterator *, NULL);

Efl_Object *_efl_observable_efl_object_constructor(Eo *obj, Efl_Observable_Data *pd);


void _efl_observable_efl_object_destructor(Eo *obj, Efl_Observable_Data *pd);


static Eina_Bool
_efl_observable_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_OBSERVABLE_EXTRA_OPS
#define EFL_OBSERVABLE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_observable_observer_add, _efl_observable_observer_add),
      EFL_OBJECT_OP_FUNC(efl_observable_observer_del, _efl_observable_observer_del),
      EFL_OBJECT_OP_FUNC(efl_observable_observer_clean, _efl_observable_observer_clean),
      EFL_OBJECT_OP_FUNC(efl_observable_observers_iterator_new, _efl_observable_observers_iterator_new),
      EFL_OBJECT_OP_FUNC(efl_observable_observers_update, _efl_observable_observers_update),
      EFL_OBJECT_OP_FUNC(efl_observable_iterator_tuple_new, _efl_observable_iterator_tuple_new),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_observable_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_observable_efl_object_destructor),
      EFL_OBSERVABLE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_OBSERVABLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_OBSERVABLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_observable_class_desc = {
   EO_VERSION,
   "Efl.Observable",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Observable_Data),
   _efl_observable_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_observable_class_get, &_efl_observable_class_desc, EFL_OBJECT_CLASS, NULL);
