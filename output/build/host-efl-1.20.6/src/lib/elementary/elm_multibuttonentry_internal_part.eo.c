
void _elm_multibuttonentry_internal_part_efl_text_text_set(Eo *obj, void *pd, const char *text);


const char *_elm_multibuttonentry_internal_part_efl_text_text_get(Eo *obj, void *pd);


static Eina_Bool
_elm_multibuttonentry_internal_part_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_MULTIBUTTONENTRY_INTERNAL_PART_EXTRA_OPS
#define ELM_MULTIBUTTONENTRY_INTERNAL_PART_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_text_set, _elm_multibuttonentry_internal_part_efl_text_text_set),
      EFL_OBJECT_OP_FUNC(efl_text_get, _elm_multibuttonentry_internal_part_efl_text_text_get),
      ELM_MULTIBUTTONENTRY_INTERNAL_PART_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_MULTIBUTTONENTRY_INTERNAL_PART_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_MULTIBUTTONENTRY_INTERNAL_PART_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_multibuttonentry_internal_part_class_desc = {
   EO_VERSION,
   "Elm.Multibuttonentry.Internal.Part",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _elm_multibuttonentry_internal_part_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_multibuttonentry_internal_part_class_get, &_elm_multibuttonentry_internal_part_class_desc, ELM_LAYOUT_INTERNAL_PART_CLASS, EFL_TEXT_INTERFACE, NULL);
