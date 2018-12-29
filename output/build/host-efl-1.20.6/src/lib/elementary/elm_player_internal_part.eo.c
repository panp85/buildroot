
Eina_Bool _elm_player_internal_part_efl_container_content_set(Eo *obj, void *pd, Efl_Gfx *content);


static Eina_Bool
_elm_player_internal_part_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_PLAYER_INTERNAL_PART_EXTRA_OPS
#define ELM_PLAYER_INTERNAL_PART_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_content_set, _elm_player_internal_part_efl_container_content_set),
      ELM_PLAYER_INTERNAL_PART_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_PLAYER_INTERNAL_PART_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_PLAYER_INTERNAL_PART_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_player_internal_part_class_desc = {
   EO_VERSION,
   "Elm.Player.Internal.Part",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _elm_player_internal_part_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_player_internal_part_class_get, &_elm_player_internal_part_class_desc, ELM_LAYOUT_INTERNAL_PART_CLASS, NULL);
