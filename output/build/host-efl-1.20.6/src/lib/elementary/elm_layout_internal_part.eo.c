
void _elm_layout_internal_part_efl_object_destructor(Eo *obj, Elm_Part_Data *pd);


Eina_Bool _elm_layout_internal_part_efl_container_content_set(Eo *obj, Elm_Part_Data *pd, Efl_Gfx *content);


Efl_Gfx *_elm_layout_internal_part_efl_container_content_get(Eo *obj, Elm_Part_Data *pd);


Efl_Gfx *_elm_layout_internal_part_efl_container_content_unset(Eo *obj, Elm_Part_Data *pd);


void _elm_layout_internal_part_efl_text_text_set(Eo *obj, Elm_Part_Data *pd, const char *text);


const char *_elm_layout_internal_part_efl_text_text_get(Eo *obj, Elm_Part_Data *pd);


static Eina_Bool
_elm_layout_internal_part_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_LAYOUT_INTERNAL_PART_EXTRA_OPS
#define ELM_LAYOUT_INTERNAL_PART_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_layout_internal_part_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_content_set, _elm_layout_internal_part_efl_container_content_set),
      EFL_OBJECT_OP_FUNC(efl_content_get, _elm_layout_internal_part_efl_container_content_get),
      EFL_OBJECT_OP_FUNC(efl_content_unset, _elm_layout_internal_part_efl_container_content_unset),
      EFL_OBJECT_OP_FUNC(efl_text_set, _elm_layout_internal_part_efl_text_text_set),
      EFL_OBJECT_OP_FUNC(efl_text_get, _elm_layout_internal_part_efl_text_text_get),
      ELM_LAYOUT_INTERNAL_PART_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_LAYOUT_INTERNAL_PART_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_LAYOUT_INTERNAL_PART_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_layout_internal_part_class_desc = {
   EO_VERSION,
   "Elm.Layout.Internal.Part",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Part_Data),
   _elm_layout_internal_part_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_layout_internal_part_class_get, &_elm_layout_internal_part_class_desc, EFL_OBJECT_CLASS, EFL_CONTAINER_INTERFACE, EFL_TEXT_INTERFACE, NULL);
