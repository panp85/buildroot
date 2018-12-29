
void _ector_cairo_surface_context_set(Eo *obj, Ector_Cairo_Surface_Data *pd, cairo_t *ctx);

EOAPI EFL_VOID_FUNC_BODYV(ector_cairo_surface_context_set, EFL_FUNC_CALL(ctx), cairo_t *ctx);

cairo_t *_ector_cairo_surface_context_get(Eo *obj, Ector_Cairo_Surface_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(ector_cairo_surface_context_get, cairo_t *, NULL);

void *_ector_cairo_surface_symbol_get(Eo *obj, Ector_Cairo_Surface_Data *pd, const char *name);

EOAPI EFL_FUNC_BODYV(ector_cairo_surface_symbol_get, void *, NULL, EFL_FUNC_CALL(name), const char *name);

Efl_Object *_ector_cairo_surface_ector_surface_renderer_factory_new(Eo *obj, Ector_Cairo_Surface_Data *pd, const Efl_Class *type);


void _ector_cairo_surface_ector_surface_reference_point_set(Eo *obj, Ector_Cairo_Surface_Data *pd, int x, int y);


void _ector_cairo_surface_efl_object_destructor(Eo *obj, Ector_Cairo_Surface_Data *pd);


Efl_Object *_ector_cairo_surface_efl_object_constructor(Eo *obj, Ector_Cairo_Surface_Data *pd);


static Eina_Bool
_ector_cairo_surface_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_CAIRO_SURFACE_EXTRA_OPS
#define ECTOR_CAIRO_SURFACE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ector_cairo_surface_context_set, _ector_cairo_surface_context_set),
      EFL_OBJECT_OP_FUNC(ector_cairo_surface_context_get, _ector_cairo_surface_context_get),
      EFL_OBJECT_OP_FUNC(ector_cairo_surface_symbol_get, _ector_cairo_surface_symbol_get),
      EFL_OBJECT_OP_FUNC(ector_surface_renderer_factory_new, _ector_cairo_surface_ector_surface_renderer_factory_new),
      EFL_OBJECT_OP_FUNC(ector_surface_reference_point_set, _ector_cairo_surface_ector_surface_reference_point_set),
      EFL_OBJECT_OP_FUNC(efl_destructor, _ector_cairo_surface_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_constructor, _ector_cairo_surface_efl_object_constructor),
      ECTOR_CAIRO_SURFACE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_CAIRO_SURFACE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_CAIRO_SURFACE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_cairo_surface_class_desc = {
   EO_VERSION,
   "Ector.Cairo.Surface",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Ector_Cairo_Surface_Data),
   _ector_cairo_surface_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_cairo_surface_class_get, &_ector_cairo_surface_class_desc, EFL_OBJECT_CLASS, ECTOR_SURFACE_MIXIN, NULL);
