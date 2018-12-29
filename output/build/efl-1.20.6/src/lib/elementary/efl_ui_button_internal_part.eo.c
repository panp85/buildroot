
Eina_Bool _efl_ui_button_internal_part_efl_container_content_set(Eo *obj, void *pd, Efl_Gfx *content);


static Eina_Bool
_efl_ui_button_internal_part_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_BUTTON_INTERNAL_PART_EXTRA_OPS
#define EFL_UI_BUTTON_INTERNAL_PART_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_content_set, _efl_ui_button_internal_part_efl_container_content_set),
      EFL_UI_BUTTON_INTERNAL_PART_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_BUTTON_INTERNAL_PART_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_BUTTON_INTERNAL_PART_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_button_internal_part_class_desc = {
   EO_VERSION,
   "Efl.Ui.Button.Internal.Part",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _efl_ui_button_internal_part_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_button_internal_part_class_get, &_efl_ui_button_internal_part_class_desc, ELM_LAYOUT_INTERNAL_PART_CLASS, NULL);
