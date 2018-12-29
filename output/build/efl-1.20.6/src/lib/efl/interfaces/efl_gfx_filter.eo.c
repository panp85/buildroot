EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_filter_program_set, EFL_FUNC_CALL(code, name), const char *code, const char *name);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_filter_program_get, EFL_FUNC_CALL(code, name), const char **code, const char **name);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_filter_state_set, EFL_FUNC_CALL(cur_state, cur_val, next_state, next_val, pos), const char *cur_state, double cur_val, const char *next_state, double next_val, double pos);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_filter_state_get, EFL_FUNC_CALL(cur_state, cur_val, next_state, next_val, pos), const char **cur_state, double *cur_val, const char **next_state, double *next_val, double *pos);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_filter_padding_get, EFL_FUNC_CALL(l, r, t, b), int *l, int *r, int *t, int *b);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_filter_source_set, EFL_FUNC_CALL(name, source), const char *name, Efl_Gfx *source);
EOAPI EFL_FUNC_BODYV_CONST(efl_gfx_filter_source_get, Efl_Gfx *, NULL, EFL_FUNC_CALL(name), const char *name);
EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_filter_data_set, EFL_FUNC_CALL(name, value, execute), const char *name, const char *value, Eina_Bool execute);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_filter_data_get, EFL_FUNC_CALL(name, value, execute), const char *name, const char **value, Eina_Bool *execute);

static Eina_Bool
_efl_gfx_filter_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_GFX_FILTER_EXTRA_OPS
#define EFL_GFX_FILTER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_program_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_program_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_state_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_state_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_padding_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_source_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_source_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_data_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_data_get, NULL),
      EFL_GFX_FILTER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_GFX_FILTER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_GFX_FILTER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_gfx_filter_class_desc = {
   EO_VERSION,
   "Efl.Gfx.Filter",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_gfx_filter_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_gfx_filter_interface_get, &_efl_gfx_filter_class_desc, NULL, NULL);
