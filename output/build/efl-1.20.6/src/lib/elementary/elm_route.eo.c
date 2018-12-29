
void _elm_route_emap_set(Eo *obj, Elm_Route_Data *pd, void *emap);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_route_emap_set, EFL_FUNC_CALL(emap), void *emap);

void _elm_route_longitude_min_max_get(Eo *obj, Elm_Route_Data *pd, double *min, double *max);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_route_longitude_min_max_get, EFL_FUNC_CALL(min, max), double *min, double *max);

void _elm_route_latitude_min_max_get(Eo *obj, Elm_Route_Data *pd, double *min, double *max);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_route_latitude_min_max_get, EFL_FUNC_CALL(min, max), double *min, double *max);

Efl_Object *_elm_route_efl_object_constructor(Eo *obj, Elm_Route_Data *pd);


Elm_Theme_Apply _elm_route_elm_widget_theme_apply(Eo *obj, Elm_Route_Data *pd);


static Eina_Bool
_elm_route_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_ROUTE_EXTRA_OPS
#define ELM_ROUTE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_route_emap_set, _elm_route_emap_set),
      EFL_OBJECT_OP_FUNC(elm_obj_route_longitude_min_max_get, _elm_route_longitude_min_max_get),
      EFL_OBJECT_OP_FUNC(elm_obj_route_latitude_min_max_get, _elm_route_latitude_min_max_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_route_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_route_elm_widget_theme_apply),
      ELM_ROUTE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_ROUTE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_ROUTE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_route_class_desc = {
   EO_VERSION,
   "Elm.Route",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Route_Data),
   _elm_route_class_initializer,
   _elm_route_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_route_class_get, &_elm_route_class_desc, ELM_WIDGET_CLASS, NULL);

EAPI void
elm_route_emap_set(Elm_Route *obj, void *emap)
{
   elm_obj_route_emap_set(obj, emap);
}

EAPI void
elm_route_longitude_min_max_get(const Elm_Route *obj, double *min, double *max)
{
   elm_obj_route_longitude_min_max_get(obj, min, max);
}

EAPI void
elm_route_latitude_min_max_get(const Elm_Route *obj, double *min, double *max)
{
   elm_obj_route_latitude_min_max_get(obj, min, max);
}
