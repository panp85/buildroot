EWAPI const Efl_Event_Description _EFL_EVENT_CALLBACK_ADD =
   EFL_EVENT_DESCRIPTION_HOT("callback,add");
EWAPI const Efl_Event_Description _EFL_EVENT_CALLBACK_DEL =
   EFL_EVENT_DESCRIPTION_HOT("callback,del");
EWAPI const Efl_Event_Description _EFL_EVENT_DEL =
   EFL_EVENT_DESCRIPTION_HOT("del");

void _efl_object_parent_set(Eo *obj, Efl_Object_Data *pd, Efl_Object *parent);

EOAPI EFL_VOID_FUNC_BODYV(efl_parent_set, EFL_FUNC_CALL(parent), Efl_Object *parent);

Efl_Object *_efl_object_parent_get(Eo *obj, Efl_Object_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_parent_get, Efl_Object *, NULL);

void _efl_object_del(const Eo *obj, Efl_Object_Data *pd);

EOAPI EFL_VOID_FUNC_BODY_CONST(efl_del);

void _efl_object_name_set(Eo *obj, Efl_Object_Data *pd, const char *name);

EOAPI EFL_VOID_FUNC_BODYV(efl_name_set, EFL_FUNC_CALL(name), const char *name);

const char *_efl_object_name_get(Eo *obj, Efl_Object_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_name_get, const char *, NULL);

void _efl_object_comment_set(Eo *obj, Efl_Object_Data *pd, const char *comment);

EOAPI EFL_VOID_FUNC_BODYV(efl_comment_set, EFL_FUNC_CALL(comment), const char *comment);

const char *_efl_object_comment_get(Eo *obj, Efl_Object_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_comment_get, const char *, NULL);

int _efl_object_event_global_freeze_count_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_event_global_freeze_count_get, int, 0);

int _efl_object_event_freeze_count_get(Eo *obj, Efl_Object_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_event_freeze_count_get, int, 0);

Eina_Bool _efl_object_finalized_get(Eo *obj, Efl_Object_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_finalized_get, Eina_Bool, 0);

Efl_Object *_efl_object_provider_find(Eo *obj, Efl_Object_Data *pd, const Efl_Object *klass);

EOAPI EFL_FUNC_BODYV(efl_provider_find, Efl_Object *, NULL, EFL_FUNC_CALL(klass), const Efl_Object *klass);

Efl_Object *_efl_object_constructor(Eo *obj, Efl_Object_Data *pd);

EOAPI EFL_FUNC_BODY(efl_constructor, Efl_Object *, NULL);

void _efl_object_destructor(Eo *obj, Efl_Object_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_destructor);

Efl_Object *_efl_object_finalize(Eo *obj, Efl_Object_Data *pd);

EOAPI EFL_FUNC_BODY(efl_finalize, Efl_Object *, NULL);

Efl_Object *_efl_object_name_find(Eo *obj, Efl_Object_Data *pd, const char *search);

EOAPI EFL_FUNC_BODYV(efl_name_find, Efl_Object *, NULL, EFL_FUNC_CALL(search), const char *search);

void _efl_object_event_thaw(Eo *obj, Efl_Object_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_event_thaw);

void _efl_object_event_freeze(Eo *obj, Efl_Object_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_event_freeze);

void _efl_object_event_global_thaw(Eo *obj, void *pd);

EOAPI EFL_VOID_FUNC_BODY_CONST(efl_event_global_thaw);

void _efl_object_event_global_freeze(Eo *obj, void *pd);

EOAPI EFL_VOID_FUNC_BODY_CONST(efl_event_global_freeze);

void _efl_object_event_callback_stop(Eo *obj, Efl_Object_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_event_callback_stop);

void _efl_object_event_callback_forwarder_add(Eo *obj, Efl_Object_Data *pd, const Efl_Event_Description *desc, Efl_Object *new_obj);

EOAPI EFL_VOID_FUNC_BODYV(efl_event_callback_forwarder_add, EFL_FUNC_CALL(desc, new_obj), const Efl_Event_Description *desc, Efl_Object *new_obj);

void _efl_object_event_callback_forwarder_del(Eo *obj, Efl_Object_Data *pd, const Efl_Event_Description *desc, Efl_Object *new_obj);

EOAPI EFL_VOID_FUNC_BODYV(efl_event_callback_forwarder_del, EFL_FUNC_CALL(desc, new_obj), const Efl_Event_Description *desc, Efl_Object *new_obj);

Eina_Iterator *_efl_object_children_iterator_new(Eo *obj, Efl_Object_Data *pd);

EOAPI EFL_FUNC_BODY(efl_children_iterator_new, Eina_Iterator *, NULL);

Eina_Bool _efl_object_composite_attach(Eo *obj, Efl_Object_Data *pd, Efl_Object *comp_obj);

EOAPI EFL_FUNC_BODYV(efl_composite_attach, Eina_Bool, 0, EFL_FUNC_CALL(comp_obj), Efl_Object *comp_obj);

Eina_Bool _efl_object_composite_detach(Eo *obj, Efl_Object_Data *pd, Efl_Object *comp_obj);

EOAPI EFL_FUNC_BODYV(efl_composite_detach, Eina_Bool, 0, EFL_FUNC_CALL(comp_obj), Efl_Object *comp_obj);

Eina_Bool _efl_object_composite_part_is(Eo *obj, Efl_Object_Data *pd);

EOAPI EFL_FUNC_BODY(efl_composite_part_is, Eina_Bool, 0);

static Eina_Bool
_efl_object_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_OBJECT_EXTRA_OPS
#define EFL_OBJECT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_parent_set, _efl_object_parent_set),
      EFL_OBJECT_OP_FUNC(efl_parent_get, _efl_object_parent_get),
      EFL_OBJECT_OP_FUNC(efl_del, _efl_object_del),
      EFL_OBJECT_OP_FUNC(efl_name_set, _efl_object_name_set),
      EFL_OBJECT_OP_FUNC(efl_name_get, _efl_object_name_get),
      EFL_OBJECT_OP_FUNC(efl_comment_set, _efl_object_comment_set),
      EFL_OBJECT_OP_FUNC(efl_comment_get, _efl_object_comment_get),
      EFL_OBJECT_OP_FUNC(efl_event_freeze_count_get, _efl_object_event_freeze_count_get),
      EFL_OBJECT_OP_FUNC(efl_finalized_get, _efl_object_finalized_get),
      EFL_OBJECT_OP_FUNC(efl_provider_find, _efl_object_provider_find),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_name_find, _efl_object_name_find),
      EFL_OBJECT_OP_FUNC(efl_event_thaw, _efl_object_event_thaw),
      EFL_OBJECT_OP_FUNC(efl_event_freeze, _efl_object_event_freeze),
      EFL_OBJECT_OP_FUNC(efl_event_callback_stop, _efl_object_event_callback_stop),
      EFL_OBJECT_OP_FUNC(efl_event_callback_forwarder_add, _efl_object_event_callback_forwarder_add),
      EFL_OBJECT_OP_FUNC(efl_event_callback_forwarder_del, _efl_object_event_callback_forwarder_del),
      EFL_OBJECT_OP_FUNC(efl_children_iterator_new, _efl_object_children_iterator_new),
      EFL_OBJECT_OP_FUNC(efl_composite_attach, _efl_object_composite_attach),
      EFL_OBJECT_OP_FUNC(efl_composite_detach, _efl_object_composite_detach),
      EFL_OBJECT_OP_FUNC(efl_composite_part_is, _efl_object_composite_part_is),
      EFL_OBJECT_EXTRA_OPS
   );
   opsp = &ops;

#ifndef EFL_OBJECT_EXTRA_CLASS_OPS
#define EFL_OBJECT_EXTRA_CLASS_OPS
#endif

   EFL_OPS_DEFINE(cops,
      EFL_OBJECT_OP_FUNC(efl_event_global_freeze_count_get, _efl_object_event_global_freeze_count_get),
      EFL_OBJECT_OP_FUNC(efl_event_global_thaw, _efl_object_event_global_thaw),
      EFL_OBJECT_OP_FUNC(efl_event_global_freeze, _efl_object_event_global_freeze),
      EFL_OBJECT_EXTRA_CLASS_OPS
   );
   copsp = &cops;

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_object_class_desc = {
   EO_VERSION,
   "Efl.Object",
   EFL_CLASS_TYPE_REGULAR_NO_INSTANT,
   sizeof(Efl_Object_Data),
   _efl_object_class_initializer,
   _efl_object_class_constructor,
   _efl_object_class_destructor
};

EFL_DEFINE_CLASS(efl_object_class_get, &_efl_object_class_desc, NULL, NULL);
