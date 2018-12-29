EWAPI const Efl_Event_Description _ELM_GENLIST_PAN_EVENT_ITEM_FOCUSED =
   EFL_EVENT_DESCRIPTION("item,focused");
EWAPI const Efl_Event_Description _ELM_GENLIST_PAN_EVENT_ITEM_UNFOCUSED =
   EFL_EVENT_DESCRIPTION("item,unfocused");

void _elm_genlist_pan_efl_object_destructor(Eo *obj, Elm_Genlist_Pan_Data *pd);


void _elm_genlist_pan_efl_gfx_position_set(Eo *obj, Elm_Genlist_Pan_Data *pd, int x, int y);


void _elm_genlist_pan_efl_gfx_size_set(Eo *obj, Elm_Genlist_Pan_Data *pd, int w, int h);


void _elm_genlist_pan_efl_canvas_group_group_calculate(Eo *obj, Elm_Genlist_Pan_Data *pd);


void _elm_genlist_pan_elm_pan_content_size_get(Eo *obj, Elm_Genlist_Pan_Data *pd, int *w, int *h);


void _elm_genlist_pan_elm_pan_pos_set(Eo *obj, Elm_Genlist_Pan_Data *pd, int x, int y);


void _elm_genlist_pan_elm_pan_pos_get(Eo *obj, Elm_Genlist_Pan_Data *pd, int *x, int *y);


void _elm_genlist_pan_elm_pan_pos_min_get(Eo *obj, Elm_Genlist_Pan_Data *pd, int *x, int *y);


void _elm_genlist_pan_elm_pan_pos_max_get(Eo *obj, Elm_Genlist_Pan_Data *pd, int *x, int *y);


static Eina_Bool
_elm_genlist_pan_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_GENLIST_PAN_EXTRA_OPS
#define ELM_GENLIST_PAN_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_genlist_pan_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _elm_genlist_pan_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _elm_genlist_pan_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _elm_genlist_pan_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(elm_obj_pan_content_size_get, _elm_genlist_pan_elm_pan_content_size_get),
      EFL_OBJECT_OP_FUNC(elm_obj_pan_pos_set, _elm_genlist_pan_elm_pan_pos_set),
      EFL_OBJECT_OP_FUNC(elm_obj_pan_pos_get, _elm_genlist_pan_elm_pan_pos_get),
      EFL_OBJECT_OP_FUNC(elm_obj_pan_pos_min_get, _elm_genlist_pan_elm_pan_pos_min_get),
      EFL_OBJECT_OP_FUNC(elm_obj_pan_pos_max_get, _elm_genlist_pan_elm_pan_pos_max_get),
      ELM_GENLIST_PAN_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_GENLIST_PAN_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_GENLIST_PAN_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_genlist_pan_class_desc = {
   EO_VERSION,
   "Elm.Genlist.Pan",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Genlist_Pan_Data),
   _elm_genlist_pan_class_initializer,
   _elm_genlist_pan_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_genlist_pan_class_get, &_elm_genlist_pan_class_desc, ELM_PAN_CLASS, NULL);
