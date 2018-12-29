
Eina_Bool _efl_canvas_layout_internal_swallow_efl_container_content_set(Eo *obj, void *pd, Efl_Gfx *content);


Efl_Gfx *_efl_canvas_layout_internal_swallow_efl_container_content_get(Eo *obj, void *pd);


Efl_Gfx *_efl_canvas_layout_internal_swallow_efl_container_content_unset(Eo *obj, void *pd);


static Eina_Bool
_efl_canvas_layout_internal_swallow_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_LAYOUT_INTERNAL_SWALLOW_EXTRA_OPS
#define EFL_CANVAS_LAYOUT_INTERNAL_SWALLOW_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_content_set, _efl_canvas_layout_internal_swallow_efl_container_content_set),
      EFL_OBJECT_OP_FUNC(efl_content_get, _efl_canvas_layout_internal_swallow_efl_container_content_get),
      EFL_OBJECT_OP_FUNC(efl_content_unset, _efl_canvas_layout_internal_swallow_efl_container_content_unset),
      EFL_CANVAS_LAYOUT_INTERNAL_SWALLOW_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_LAYOUT_INTERNAL_SWALLOW_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_LAYOUT_INTERNAL_SWALLOW_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_layout_internal_swallow_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Layout_Internal.Swallow",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _efl_canvas_layout_internal_swallow_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_layout_internal_swallow_class_get, &_efl_canvas_layout_internal_swallow_class_desc, EFL_CANVAS_LAYOUT_INTERNAL_CLASS, EFL_CONTAINER_INTERFACE, NULL);
