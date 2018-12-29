
Eina_Bool _efl_ui_progressbar_internal_part_efl_container_content_set(Eo *obj, Elm_Part_Data *pd, Efl_Gfx *content);


void _efl_ui_progressbar_internal_part_efl_ui_range_range_value_set(Eo *obj, Elm_Part_Data *pd, double val);


double _efl_ui_progressbar_internal_part_efl_ui_range_range_value_get(Eo *obj, Elm_Part_Data *pd);


static Eina_Bool
_efl_ui_progressbar_internal_part_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_PROGRESSBAR_INTERNAL_PART_EXTRA_OPS
#define EFL_UI_PROGRESSBAR_INTERNAL_PART_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_content_set, _efl_ui_progressbar_internal_part_efl_container_content_set),
      EFL_OBJECT_OP_FUNC(efl_ui_range_value_set, _efl_ui_progressbar_internal_part_efl_ui_range_range_value_set),
      EFL_OBJECT_OP_FUNC(efl_ui_range_value_get, _efl_ui_progressbar_internal_part_efl_ui_range_range_value_get),
      EFL_UI_PROGRESSBAR_INTERNAL_PART_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_PROGRESSBAR_INTERNAL_PART_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_PROGRESSBAR_INTERNAL_PART_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_progressbar_internal_part_class_desc = {
   EO_VERSION,
   "Efl.Ui.Progressbar.Internal.Part",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Part_Data),
   _efl_ui_progressbar_internal_part_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_progressbar_internal_part_class_get, &_efl_ui_progressbar_internal_part_class_desc, ELM_LAYOUT_INTERNAL_PART_CLASS, EFL_UI_RANGE_INTERFACE, NULL);
