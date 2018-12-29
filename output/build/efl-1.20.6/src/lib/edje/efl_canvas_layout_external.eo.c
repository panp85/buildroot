
Efl_Gfx *_efl_canvas_layout_external_efl_container_content_get(Eo *obj, void *pd);


static Eina_Bool
_efl_canvas_layout_external_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_LAYOUT_EXTERNAL_EXTRA_OPS
#define EFL_CANVAS_LAYOUT_EXTERNAL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_content_get, _efl_canvas_layout_external_efl_container_content_get),
      EFL_CANVAS_LAYOUT_EXTERNAL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_LAYOUT_EXTERNAL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_LAYOUT_EXTERNAL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_layout_external_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Layout.External",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _efl_canvas_layout_external_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_layout_external_class_get, &_efl_canvas_layout_external_class_desc, EFL_CANVAS_LAYOUT_INTERNAL_CLASS, EFL_CONTAINER_INTERFACE, EFL_CANVAS_OBJECT_CLASS, NULL);
