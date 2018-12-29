EWAPI const Efl_Event_Description _EFL_GFX_EVENT_SHOW =
   EFL_EVENT_DESCRIPTION("show");
EWAPI const Efl_Event_Description _EFL_GFX_EVENT_HIDE =
   EFL_EVENT_DESCRIPTION("hide");
EWAPI const Efl_Event_Description _EFL_GFX_EVENT_MOVE =
   EFL_EVENT_DESCRIPTION("move");
EWAPI const Efl_Event_Description _EFL_GFX_EVENT_RESIZE =
   EFL_EVENT_DESCRIPTION("resize");
EWAPI const Efl_Event_Description _EFL_GFX_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_position_set, EFL_FUNC_CALL(x, y), int x, int y);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_position_get, EFL_FUNC_CALL(x, y), int *x, int *y);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_size_set, EFL_FUNC_CALL(w, h), int w, int h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_size_get, EFL_FUNC_CALL(w, h), int *w, int *h);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_geometry_set, EFL_FUNC_CALL(x, y, w, h), int x, int y, int w, int h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_geometry_get, EFL_FUNC_CALL(x, y, w, h), int *x, int *y, int *w, int *h);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_color_set, EFL_FUNC_CALL(r, g, b, a), int r, int g, int b, int a);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_color_get, EFL_FUNC_CALL(r, g, b, a), int *r, int *g, int *b, int *a);
EOAPI EFL_FUNC_BODYV(efl_gfx_color_part_set, Eina_Bool, 0, EFL_FUNC_CALL(part, r, g, b, a), const char *part, int r, int g, int b, int a);
EOAPI EFL_FUNC_BODYV_CONST(efl_gfx_color_part_get, Eina_Bool, 0, EFL_FUNC_CALL(part, r, g, b, a), const char *part, int *r, int *g, int *b, int *a);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_visible_set, EFL_FUNC_CALL(v), Eina_Bool v);
EOAPI EFL_FUNC_BODY_CONST(efl_gfx_visible_get, Eina_Bool, 0);

static Eina_Bool
_efl_gfx_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_GFX_EXTRA_OPS
#define EFL_GFX_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_geometry_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_geometry_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_part_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_part_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_get, NULL),
      EFL_GFX_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_GFX_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_GFX_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_gfx_class_desc = {
   EO_VERSION,
   "Efl.Gfx",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_gfx_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_gfx_interface_get, &_efl_gfx_class_desc, NULL, NULL);
