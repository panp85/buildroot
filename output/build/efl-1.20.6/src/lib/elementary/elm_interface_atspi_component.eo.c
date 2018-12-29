
Eina_Bool _elm_interface_atspi_component_size_set(Eo *obj, void *pd, int w, int h);

EOAPI EFL_FUNC_BODYV(elm_interface_atspi_component_size_set, Eina_Bool, 0, EFL_FUNC_CALL(w, h), int w, int h);

void _elm_interface_atspi_component_size_get(Eo *obj, void *pd, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_atspi_component_size_get, EFL_FUNC_CALL(w, h), int *w, int *h);

int _elm_interface_atspi_component_layer_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_component_layer_get, int, 0);

double _elm_interface_atspi_component_alpha_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_component_alpha_get, double, 0);

int _elm_interface_atspi_component_z_order_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_component_z_order_get, int, 0);

Eina_Bool _elm_interface_atspi_component_extents_set(Eo *obj, void *pd, Eina_Bool screen_coords, int x, int y, int w, int h);

EOAPI EFL_FUNC_BODYV(elm_interface_atspi_component_extents_set, Eina_Bool, 0, EFL_FUNC_CALL(screen_coords, x, y, w, h), Eina_Bool screen_coords, int x, int y, int w, int h);

void _elm_interface_atspi_component_extents_get(Eo *obj, void *pd, Eina_Bool screen_coords, int *x, int *y, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_atspi_component_extents_get, EFL_FUNC_CALL(screen_coords, x, y, w, h), Eina_Bool screen_coords, int *x, int *y, int *w, int *h);

Eina_Bool _elm_interface_atspi_component_position_set(Eo *obj, void *pd, Eina_Bool screen_coords, int x, int y);

EOAPI EFL_FUNC_BODYV(elm_interface_atspi_component_position_set, Eina_Bool, 0, EFL_FUNC_CALL(screen_coords, x, y), Eina_Bool screen_coords, int x, int y);

void _elm_interface_atspi_component_position_get(Eo *obj, void *pd, Eina_Bool screen_coords, int *x, int *y);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_atspi_component_position_get, EFL_FUNC_CALL(screen_coords, x, y), Eina_Bool screen_coords, int *x, int *y);

Eina_Bool _elm_interface_atspi_component_contains(Eo *obj, void *pd, Eina_Bool screen_coords, int x, int y);

EOAPI EFL_FUNC_BODYV(elm_interface_atspi_component_contains, Eina_Bool, 0, EFL_FUNC_CALL(screen_coords, x, y), Eina_Bool screen_coords, int x, int y);

Eina_Bool _elm_interface_atspi_component_focus_grab(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY(elm_interface_atspi_component_focus_grab, Eina_Bool, 0);

Efl_Object *_elm_interface_atspi_component_accessible_at_point_get(Eo *obj, void *pd, Eina_Bool screen_coords, int x, int y);

EOAPI EFL_FUNC_BODYV(elm_interface_atspi_component_accessible_at_point_get, Efl_Object *, NULL, EFL_FUNC_CALL(screen_coords, x, y), Eina_Bool screen_coords, int x, int y);

static Eina_Bool
_elm_interface_atspi_component_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_INTERFACE_ATSPI_COMPONENT_EXTRA_OPS
#define ELM_INTERFACE_ATSPI_COMPONENT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_size_set, _elm_interface_atspi_component_size_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_size_get, _elm_interface_atspi_component_size_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_layer_get, _elm_interface_atspi_component_layer_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_alpha_get, _elm_interface_atspi_component_alpha_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_z_order_get, _elm_interface_atspi_component_z_order_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_extents_set, _elm_interface_atspi_component_extents_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_extents_get, _elm_interface_atspi_component_extents_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_position_set, _elm_interface_atspi_component_position_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_position_get, _elm_interface_atspi_component_position_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_contains, _elm_interface_atspi_component_contains),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_focus_grab, _elm_interface_atspi_component_focus_grab),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_accessible_at_point_get, _elm_interface_atspi_component_accessible_at_point_get),
      ELM_INTERFACE_ATSPI_COMPONENT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_INTERFACE_ATSPI_COMPONENT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_INTERFACE_ATSPI_COMPONENT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_interface_atspi_component_class_desc = {
   EO_VERSION,
   "Elm.Interface.Atspi_Component",
   EFL_CLASS_TYPE_MIXIN,
   0,
   _elm_interface_atspi_component_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_interface_atspi_component_mixin_get, &_elm_interface_atspi_component_class_desc, NULL, NULL);
