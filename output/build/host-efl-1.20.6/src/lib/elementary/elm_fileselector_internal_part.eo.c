
void _elm_fileselector_internal_part_efl_text_text_set(Eo *obj, void *pd, const char *text);


static Eina_Bool
_elm_fileselector_internal_part_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_FILESELECTOR_INTERNAL_PART_EXTRA_OPS
#define ELM_FILESELECTOR_INTERNAL_PART_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_text_set, _elm_fileselector_internal_part_efl_text_text_set),
      ELM_FILESELECTOR_INTERNAL_PART_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_FILESELECTOR_INTERNAL_PART_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_FILESELECTOR_INTERNAL_PART_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_fileselector_internal_part_class_desc = {
   EO_VERSION,
   "Elm.Fileselector.Internal.Part",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _elm_fileselector_internal_part_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_fileselector_internal_part_class_get, &_elm_fileselector_internal_part_class_desc, ELM_LAYOUT_INTERNAL_PART_CLASS, EFL_TEXT_INTERFACE, NULL);
