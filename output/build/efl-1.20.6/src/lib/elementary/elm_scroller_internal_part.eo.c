
Eina_Bool _elm_scroller_internal_part_efl_container_content_set(Eo *obj, void *pd, Efl_Gfx *content);


Efl_Gfx *_elm_scroller_internal_part_efl_container_content_get(Eo *obj, void *pd);


Efl_Gfx *_elm_scroller_internal_part_efl_container_content_unset(Eo *obj, void *pd);


static Eina_Bool
_elm_scroller_internal_part_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_SCROLLER_INTERNAL_PART_EXTRA_OPS
#define ELM_SCROLLER_INTERNAL_PART_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_content_set, _elm_scroller_internal_part_efl_container_content_set),
      EFL_OBJECT_OP_FUNC(efl_content_get, _elm_scroller_internal_part_efl_container_content_get),
      EFL_OBJECT_OP_FUNC(efl_content_unset, _elm_scroller_internal_part_efl_container_content_unset),
      ELM_SCROLLER_INTERNAL_PART_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_SCROLLER_INTERNAL_PART_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_SCROLLER_INTERNAL_PART_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_scroller_internal_part_class_desc = {
   EO_VERSION,
   "Elm.Scroller.Internal.Part",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _elm_scroller_internal_part_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_scroller_internal_part_class_get, &_elm_scroller_internal_part_class_desc, ELM_LAYOUT_INTERNAL_PART_CLASS, NULL);
