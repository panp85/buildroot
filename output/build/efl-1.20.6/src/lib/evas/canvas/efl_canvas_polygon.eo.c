
void _efl_canvas_polygon_point_add(Eo *obj, Efl_Canvas_Polygon_Data *pd, int x, int y);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_polygon_point_add, EFL_FUNC_CALL(x, y), int x, int y);

void _efl_canvas_polygon_points_clear(Eo *obj, Efl_Canvas_Polygon_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_canvas_polygon_points_clear);

Efl_Object *_efl_canvas_polygon_efl_object_constructor(Eo *obj, Efl_Canvas_Polygon_Data *pd);


void _efl_canvas_polygon_efl_object_destructor(Eo *obj, Efl_Canvas_Polygon_Data *pd);


static Eina_Bool
_efl_canvas_polygon_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_POLYGON_EXTRA_OPS
#define EFL_CANVAS_POLYGON_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_canvas_polygon_point_add, _efl_canvas_polygon_point_add),
      EFL_OBJECT_OP_FUNC(efl_canvas_polygon_points_clear, _efl_canvas_polygon_points_clear),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_canvas_polygon_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_canvas_polygon_efl_object_destructor),
      EFL_CANVAS_POLYGON_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_POLYGON_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_POLYGON_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_polygon_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Polygon",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Canvas_Polygon_Data),
   _efl_canvas_polygon_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_polygon_class_get, &_efl_canvas_polygon_class_desc, EFL_CANVAS_OBJECT_CLASS, NULL);
