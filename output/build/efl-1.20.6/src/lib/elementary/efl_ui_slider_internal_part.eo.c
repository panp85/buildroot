
Eina_Bool _efl_ui_slider_internal_part_efl_container_content_set(Eo *obj, Elm_Part_Data *pd, Efl_Gfx *content);


void _efl_ui_slider_internal_part_efl_gfx_size_hint_hint_min_set(Eo *obj, Elm_Part_Data *pd, int w, int h);


void _efl_ui_slider_internal_part_efl_gfx_size_hint_hint_min_get(Eo *obj, Elm_Part_Data *pd, int *w, int *h);


static Eina_Bool
_efl_ui_slider_internal_part_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_SLIDER_INTERNAL_PART_EXTRA_OPS
#define EFL_UI_SLIDER_INTERNAL_PART_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_content_set, _efl_ui_slider_internal_part_efl_container_content_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_min_set, _efl_ui_slider_internal_part_efl_gfx_size_hint_hint_min_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_min_get, _efl_ui_slider_internal_part_efl_gfx_size_hint_hint_min_get),
      EFL_UI_SLIDER_INTERNAL_PART_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_SLIDER_INTERNAL_PART_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_SLIDER_INTERNAL_PART_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_slider_internal_part_class_desc = {
   EO_VERSION,
   "Efl.Ui.Slider.Internal.Part",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Part_Data),
   _efl_ui_slider_internal_part_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_slider_internal_part_class_get, &_efl_ui_slider_internal_part_class_desc, ELM_LAYOUT_INTERNAL_PART_CLASS, EFL_GFX_SIZE_HINT_INTERFACE, NULL);
