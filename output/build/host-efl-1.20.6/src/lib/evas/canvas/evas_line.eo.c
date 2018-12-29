
void _evas_line_xy_set(Eo *obj, Evas_Line_Data *pd, int x1, int y1, int x2, int y2);

EOAPI EFL_VOID_FUNC_BODYV(evas_obj_line_xy_set, EFL_FUNC_CALL(x1, y1, x2, y2), int x1, int y1, int x2, int y2);

void _evas_line_xy_get(Eo *obj, Evas_Line_Data *pd, int *x1, int *y1, int *x2, int *y2);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_obj_line_xy_get, EFL_FUNC_CALL(x1, y1, x2, y2), int *x1, int *y1, int *x2, int *y2);

Efl_Object *_evas_line_efl_object_constructor(Eo *obj, Evas_Line_Data *pd);


static Eina_Bool
_evas_line_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_LINE_EXTRA_OPS
#define EVAS_LINE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_obj_line_xy_set, _evas_line_xy_set),
      EFL_OBJECT_OP_FUNC(evas_obj_line_xy_get, _evas_line_xy_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _evas_line_efl_object_constructor),
      EVAS_LINE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_LINE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_LINE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_line_class_desc = {
   EO_VERSION,
   "Evas.Line",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Line_Data),
   _evas_line_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_line_class_get, &_evas_line_class_desc, EFL_CANVAS_OBJECT_CLASS, NULL);

EAPI void
evas_object_line_xy_set(Evas_Line *obj, int x1, int y1, int x2, int y2)
{
   evas_obj_line_xy_set(obj, x1, y1, x2, y2);
}

EAPI void
evas_object_line_xy_get(const Evas_Line *obj, int *x1, int *y1, int *x2, int *y2)
{
   evas_obj_line_xy_get(obj, x1, y1, x2, y2);
}
