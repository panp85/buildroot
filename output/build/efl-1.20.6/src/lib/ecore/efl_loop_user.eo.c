
Efl_Loop *_efl_loop_user_loop_get(Eo *obj, Efl_Loop_User_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_loop_get, Efl_Loop *, NULL);

void _efl_loop_user_efl_object_parent_set(Eo *obj, Efl_Loop_User_Data *pd, Efl_Object *parent);


static Eina_Bool
_efl_loop_user_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_LOOP_USER_EXTRA_OPS
#define EFL_LOOP_USER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_loop_get, _efl_loop_user_loop_get),
      EFL_OBJECT_OP_FUNC(efl_parent_set, _efl_loop_user_efl_object_parent_set),
      EFL_LOOP_USER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_LOOP_USER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_LOOP_USER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_loop_user_class_desc = {
   EO_VERSION,
   "Efl.Loop_User",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Loop_User_Data),
   _efl_loop_user_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_loop_user_class_get, &_efl_loop_user_class_desc, EFL_OBJECT_CLASS, NULL);
