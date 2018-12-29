
void _efl_canvas_group_clipped_efl_gfx_color_set(Eo *obj, Evas_Object_Smart_Clipped_Data *pd, int r, int g, int b, int a);


void _efl_canvas_group_clipped_efl_gfx_visible_set(Eo *obj, Evas_Object_Smart_Clipped_Data *pd, Eina_Bool v);


void _efl_canvas_group_clipped_efl_gfx_position_set(Eo *obj, Evas_Object_Smart_Clipped_Data *pd, int x, int y);


void _efl_canvas_group_clipped_efl_canvas_object_clip_set(Eo *obj, Evas_Object_Smart_Clipped_Data *pd, Efl_Canvas_Object *clip);


void _efl_canvas_group_clipped_efl_canvas_object_no_render_set(Eo *obj, Evas_Object_Smart_Clipped_Data *pd, Eina_Bool enable);


void _efl_canvas_group_clipped_efl_canvas_group_group_member_del(Eo *obj, Evas_Object_Smart_Clipped_Data *pd, Efl_Canvas_Object *sub_obj);


void _efl_canvas_group_clipped_efl_canvas_group_group_member_add(Eo *obj, Evas_Object_Smart_Clipped_Data *pd, Efl_Canvas_Object *sub_obj);


static Eina_Bool
_efl_canvas_group_clipped_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_GROUP_CLIPPED_EXTRA_OPS
#define EFL_CANVAS_GROUP_CLIPPED_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_color_set, _efl_canvas_group_clipped_efl_gfx_color_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _efl_canvas_group_clipped_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _efl_canvas_group_clipped_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_clip_set, _efl_canvas_group_clipped_efl_canvas_object_clip_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_no_render_set, _efl_canvas_group_clipped_efl_canvas_object_no_render_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_del, _efl_canvas_group_clipped_efl_canvas_group_group_member_del),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_add, _efl_canvas_group_clipped_efl_canvas_group_group_member_add),
      EFL_CANVAS_GROUP_CLIPPED_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_GROUP_CLIPPED_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_GROUP_CLIPPED_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_group_clipped_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Group.Clipped",
   EFL_CLASS_TYPE_REGULAR_NO_INSTANT,
   sizeof(Evas_Object_Smart_Clipped_Data),
   _efl_canvas_group_clipped_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_group_clipped_class_get, &_efl_canvas_group_clipped_class_desc, EFL_CANVAS_GROUP_CLASS, NULL);
