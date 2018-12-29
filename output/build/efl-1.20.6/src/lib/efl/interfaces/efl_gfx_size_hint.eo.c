EWAPI const Efl_Event_Description _EFL_GFX_EVENT_CHANGE_SIZE_HINTS =
   EFL_EVENT_DESCRIPTION("change,size,hints");
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_size_hint_base_set, EFL_FUNC_CALL(w, h), int w, int h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_size_hint_base_get, EFL_FUNC_CALL(w, h), int *w, int *h);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_size_hint_step_set, EFL_FUNC_CALL(w, h), int w, int h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_size_hint_step_get, EFL_FUNC_CALL(w, h), int *w, int *h);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_size_hint_aspect_set, EFL_FUNC_CALL(mode, w, h), Efl_Gfx_Size_Hint_Aspect mode, int w, int h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_size_hint_aspect_get, EFL_FUNC_CALL(mode, w, h), Efl_Gfx_Size_Hint_Aspect *mode, int *w, int *h);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_size_hint_max_set, EFL_FUNC_CALL(w, h), int w, int h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_size_hint_max_get, EFL_FUNC_CALL(w, h), int *w, int *h);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_size_hint_min_set, EFL_FUNC_CALL(w, h), int w, int h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_size_hint_min_get, EFL_FUNC_CALL(w, h), int *w, int *h);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_size_hint_request_set, EFL_FUNC_CALL(w, h), int w, int h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_size_hint_request_get, EFL_FUNC_CALL(w, h), int *w, int *h);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_size_hint_restricted_min_set, EFL_FUNC_CALL(w, h), int w, int h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_size_hint_restricted_min_get, EFL_FUNC_CALL(w, h), int *w, int *h);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_size_hint_combined_min_get, EFL_FUNC_CALL(w, h), int *w, int *h);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_size_hint_margin_set, EFL_FUNC_CALL(l, r, t, b), int l, int r, int t, int b);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_size_hint_margin_get, EFL_FUNC_CALL(l, r, t, b), int *l, int *r, int *t, int *b);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_size_hint_weight_set, EFL_FUNC_CALL(x, y), double x, double y);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_size_hint_weight_get, EFL_FUNC_CALL(x, y), double *x, double *y);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_size_hint_align_set, EFL_FUNC_CALL(x, y), double x, double y);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_size_hint_align_get, EFL_FUNC_CALL(x, y), double *x, double *y);

static Eina_Bool
_efl_gfx_size_hint_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_GFX_SIZE_HINT_EXTRA_OPS
#define EFL_GFX_SIZE_HINT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_base_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_base_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_step_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_step_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_aspect_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_aspect_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_max_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_max_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_min_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_min_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_request_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_request_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_restricted_min_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_restricted_min_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_combined_min_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_margin_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_margin_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_weight_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_weight_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_align_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_align_get, NULL),
      EFL_GFX_SIZE_HINT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_GFX_SIZE_HINT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_GFX_SIZE_HINT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_gfx_size_hint_class_desc = {
   EO_VERSION,
   "Efl.Gfx.Size.Hint",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_gfx_size_hint_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_gfx_size_hint_interface_get, &_efl_gfx_size_hint_class_desc, NULL, NULL);
