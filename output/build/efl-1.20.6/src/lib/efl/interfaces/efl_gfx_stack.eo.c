EWAPI const Efl_Event_Description _EFL_GFX_EVENT_RESTACK =
   EFL_EVENT_DESCRIPTION("restack");
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_stack_layer_set, EFL_FUNC_CALL(l), short l);
EOAPI EFL_FUNC_BODY_CONST(efl_gfx_stack_layer_get, short, 0);
EOAPI EFL_FUNC_BODY_CONST(efl_gfx_stack_below_get, Efl_Gfx_Stack *, NULL);
EOAPI EFL_FUNC_BODY_CONST(efl_gfx_stack_above_get, Efl_Gfx_Stack *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_stack_below, EFL_FUNC_CALL(below), Efl_Gfx_Stack *below);
EOAPI EFL_VOID_FUNC_BODY(efl_gfx_stack_raise);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_stack_above, EFL_FUNC_CALL(above), Efl_Gfx_Stack *above);
EOAPI EFL_VOID_FUNC_BODY(efl_gfx_stack_lower);

static Eina_Bool
_efl_gfx_stack_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_GFX_STACK_EXTRA_OPS
#define EFL_GFX_STACK_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_layer_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_layer_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_below_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_above_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_below, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_raise, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_above, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_lower, NULL),
      EFL_GFX_STACK_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_GFX_STACK_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_GFX_STACK_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_gfx_stack_class_desc = {
   EO_VERSION,
   "Efl.Gfx.Stack",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_gfx_stack_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_gfx_stack_interface_get, &_efl_gfx_stack_class_desc, NULL, NULL);
