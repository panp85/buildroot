EWAPI const Efl_Event_Description _EFL_CONTAINER_EVENT_CONTENT_ADDED =
   EFL_EVENT_DESCRIPTION("content,added");
EWAPI const Efl_Event_Description _EFL_CONTAINER_EVENT_CONTENT_REMOVED =
   EFL_EVENT_DESCRIPTION("content,removed");
EOAPI EFL_FUNC_BODYV(efl_content_set, Eina_Bool, 0, EFL_FUNC_CALL(content), Efl_Gfx *content);
EOAPI EFL_FUNC_BODY_CONST(efl_content_get, Efl_Gfx *, NULL);
EOAPI EFL_FUNC_BODY(efl_content_unset, Efl_Gfx *, NULL);
EOAPI EFL_FUNC_BODYV(efl_content_remove, Eina_Bool, 0, EFL_FUNC_CALL(content), Efl_Gfx *content);
EOAPI EFL_FUNC_BODY(efl_content_iterate, Eina_Iterator *, NULL);
EOAPI EFL_FUNC_BODY(efl_content_count, int, 0);

static Eina_Bool
_efl_container_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CONTAINER_EXTRA_OPS
#define EFL_CONTAINER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_content_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_content_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_content_unset, NULL),
      EFL_OBJECT_OP_FUNC(efl_content_remove, NULL),
      EFL_OBJECT_OP_FUNC(efl_content_iterate, NULL),
      EFL_OBJECT_OP_FUNC(efl_content_count, NULL),
      EFL_CONTAINER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CONTAINER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CONTAINER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_container_class_desc = {
   EO_VERSION,
   "Efl.Container",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_container_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_container_interface_get, &_efl_container_class_desc, EFL_GFX_INTERFACE, NULL);
