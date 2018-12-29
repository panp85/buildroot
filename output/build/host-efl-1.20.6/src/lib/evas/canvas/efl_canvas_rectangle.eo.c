
Efl_Object *_efl_canvas_rectangle_efl_object_constructor(Eo *obj, Efl_Canvas_Rectangle_Data *pd);


static Eina_Bool
_efl_canvas_rectangle_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_RECTANGLE_EXTRA_OPS
#define EFL_CANVAS_RECTANGLE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_canvas_rectangle_efl_object_constructor),
      EFL_CANVAS_RECTANGLE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_RECTANGLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_RECTANGLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_rectangle_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Rectangle",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Canvas_Rectangle_Data),
   _efl_canvas_rectangle_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_rectangle_class_get, &_efl_canvas_rectangle_class_desc, EFL_CANVAS_OBJECT_CLASS, NULL);
