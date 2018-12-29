
void _efl_canvas_filter_internal_filter_changed_set(Eo *obj, Evas_Filter_Data *pd, Eina_Bool val);

EOAPI EFL_VOID_FUNC_BODYV(evas_filter_changed_set, EFL_FUNC_CALL(val), Eina_Bool val);

void _efl_canvas_filter_internal_filter_invalid_set(Eo *obj, Evas_Filter_Data *pd, Eina_Bool val);

EOAPI EFL_VOID_FUNC_BODYV(evas_filter_invalid_set, EFL_FUNC_CALL(val), Eina_Bool val);
EOAPI EFL_FUNC_BODY(evas_filter_input_alpha, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(evas_filter_state_prepare, EFL_FUNC_CALL(state, data), Efl_Canvas_Filter_State *state, void *data);
EOAPI EFL_FUNC_BODYV(evas_filter_input_render, Eina_Bool, 0, EFL_FUNC_CALL(filter, engine, output, drawctx, data, l, r, t, b, x, y, do_async), void *filter, void *engine, void *output, void *drawctx, void *data, int l, int r, int t, int b, int x, int y, Eina_Bool do_async);
EOAPI EFL_VOID_FUNC_BODY(evas_filter_dirty);

void *_efl_canvas_filter_internal_filter_output_buffer_get(Eo *obj, Evas_Filter_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_filter_output_buffer_get, void *, NULL);

Efl_Object *_efl_canvas_filter_internal_efl_object_constructor(Eo *obj, Evas_Filter_Data *pd);


void _efl_canvas_filter_internal_efl_object_destructor(Eo *obj, Evas_Filter_Data *pd);


void _efl_canvas_filter_internal_efl_gfx_filter_filter_program_set(Eo *obj, Evas_Filter_Data *pd, const char *code, const char *name);


void _efl_canvas_filter_internal_efl_gfx_filter_filter_program_get(Eo *obj, Evas_Filter_Data *pd, const char **code, const char **name);


void _efl_canvas_filter_internal_efl_gfx_filter_filter_state_set(Eo *obj, Evas_Filter_Data *pd, const char *cur_state, double cur_val, const char *next_state, double next_val, double pos);


void _efl_canvas_filter_internal_efl_gfx_filter_filter_state_get(Eo *obj, Evas_Filter_Data *pd, const char **cur_state, double *cur_val, const char **next_state, double *next_val, double *pos);


void _efl_canvas_filter_internal_efl_gfx_filter_filter_padding_get(Eo *obj, Evas_Filter_Data *pd, int *l, int *r, int *t, int *b);


void _efl_canvas_filter_internal_efl_gfx_filter_filter_source_set(Eo *obj, Evas_Filter_Data *pd, const char *name, Efl_Gfx *source);


Efl_Gfx *_efl_canvas_filter_internal_efl_gfx_filter_filter_source_get(Eo *obj, Evas_Filter_Data *pd, const char *name);


void _efl_canvas_filter_internal_efl_gfx_filter_filter_data_set(Eo *obj, Evas_Filter_Data *pd, const char *name, const char *value, Eina_Bool execute);


void _efl_canvas_filter_internal_efl_gfx_filter_filter_data_get(Eo *obj, Evas_Filter_Data *pd, const char *name, const char **value, Eina_Bool *execute);

static void __eolian_efl_canvas_filter_internal_efl_gfx_filter_filter_data_get(Eo *obj, Evas_Filter_Data *pd, const char *name, const char **value, Eina_Bool *execute)
{
   if (execute) *execute = EINA_FALSE;
   _efl_canvas_filter_internal_efl_gfx_filter_filter_data_get(obj, pd, name, value, execute);
}


static Eina_Bool
_efl_canvas_filter_internal_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_FILTER_INTERNAL_EXTRA_OPS
#define EFL_CANVAS_FILTER_INTERNAL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_filter_changed_set, _efl_canvas_filter_internal_filter_changed_set),
      EFL_OBJECT_OP_FUNC(evas_filter_invalid_set, _efl_canvas_filter_internal_filter_invalid_set),
      EFL_OBJECT_OP_FUNC(evas_filter_input_alpha, NULL),
      EFL_OBJECT_OP_FUNC(evas_filter_state_prepare, NULL),
      EFL_OBJECT_OP_FUNC(evas_filter_input_render, NULL),
      EFL_OBJECT_OP_FUNC(evas_filter_dirty, NULL),
      EFL_OBJECT_OP_FUNC(evas_filter_output_buffer_get, _efl_canvas_filter_internal_filter_output_buffer_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_canvas_filter_internal_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_canvas_filter_internal_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_program_set, _efl_canvas_filter_internal_efl_gfx_filter_filter_program_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_program_get, _efl_canvas_filter_internal_efl_gfx_filter_filter_program_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_state_set, _efl_canvas_filter_internal_efl_gfx_filter_filter_state_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_state_get, _efl_canvas_filter_internal_efl_gfx_filter_filter_state_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_padding_get, _efl_canvas_filter_internal_efl_gfx_filter_filter_padding_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_source_set, _efl_canvas_filter_internal_efl_gfx_filter_filter_source_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_source_get, _efl_canvas_filter_internal_efl_gfx_filter_filter_source_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_data_set, _efl_canvas_filter_internal_efl_gfx_filter_filter_data_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_data_get, __eolian_efl_canvas_filter_internal_efl_gfx_filter_filter_data_get),
      EFL_CANVAS_FILTER_INTERNAL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_FILTER_INTERNAL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_FILTER_INTERNAL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_filter_internal_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Filter.Internal",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Evas_Filter_Data),
   _efl_canvas_filter_internal_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_filter_internal_mixin_get, &_efl_canvas_filter_internal_class_desc, EFL_GFX_FILTER_INTERFACE, EFL_OBJECT_CLASS, NULL);
