
void _efl_canvas_group_group_need_recalculate_set(Eo *obj, Evas_Smart_Data *pd, Eina_Bool value);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_group_need_recalculate_set, EFL_FUNC_CALL(value), Eina_Bool value);

Eina_Bool _efl_canvas_group_group_need_recalculate_get(Eo *obj, Evas_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_group_need_recalculate_get, Eina_Bool, 0);

void _efl_canvas_group_group_change(Eo *obj, Evas_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_canvas_group_change);

void _efl_canvas_group_group_calculate(Eo *obj, Evas_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_canvas_group_calculate);

Eina_Iterator *_efl_canvas_group_group_children_iterate(const Eo *obj, Evas_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_group_children_iterate, Eina_Iterator *, NULL);

void _efl_canvas_group_group_member_add(Eo *obj, Evas_Smart_Data *pd, Efl_Canvas_Object *sub_obj);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_group_member_add, EFL_FUNC_CALL(sub_obj), Efl_Canvas_Object *sub_obj);

void _efl_canvas_group_group_member_del(Eo *obj, Evas_Smart_Data *pd, Efl_Canvas_Object *sub_obj);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_group_member_del, EFL_FUNC_CALL(sub_obj), Efl_Canvas_Object *sub_obj);

Efl_Object *_efl_canvas_group_efl_object_constructor(Eo *obj, Evas_Smart_Data *pd);


void _efl_canvas_group_efl_object_destructor(Eo *obj, Evas_Smart_Data *pd);


void _efl_canvas_group_efl_canvas_object_no_render_set(Eo *obj, Evas_Smart_Data *pd, Eina_Bool enable);


void _efl_canvas_group_efl_canvas_object_paragraph_direction_set(Eo *obj, Evas_Smart_Data *pd, Efl_Text_Bidirectional_Type dir);


Efl_Text_Bidirectional_Type _efl_canvas_group_efl_canvas_object_paragraph_direction_get(Eo *obj, Evas_Smart_Data *pd);


static Eina_Bool
_efl_canvas_group_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_GROUP_EXTRA_OPS
#define EFL_CANVAS_GROUP_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_canvas_group_need_recalculate_set, _efl_canvas_group_group_need_recalculate_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_need_recalculate_get, _efl_canvas_group_group_need_recalculate_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_change, _efl_canvas_group_group_change),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_children_iterate, _efl_canvas_group_group_children_iterate),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_add, _efl_canvas_group_group_member_add),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_del, _efl_canvas_group_group_member_del),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_canvas_group_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_canvas_group_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_no_render_set, _efl_canvas_group_efl_canvas_object_no_render_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_paragraph_direction_set, _efl_canvas_group_efl_canvas_object_paragraph_direction_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_paragraph_direction_get, _efl_canvas_group_efl_canvas_object_paragraph_direction_get),
      EFL_CANVAS_GROUP_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_GROUP_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_GROUP_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_group_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Group",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Smart_Data),
   _efl_canvas_group_class_initializer,
   _efl_canvas_group_class_constructor,
   _efl_canvas_group_class_destructor
};

EFL_DEFINE_CLASS(efl_canvas_group_class_get, &_efl_canvas_group_class_desc, EFL_CANVAS_OBJECT_CLASS, NULL);

EAPI void
evas_object_smart_need_recalculate_set(Efl_Canvas_Group *obj, Eina_Bool value)
{
   efl_canvas_group_need_recalculate_set(obj, value);
}

EAPI Eina_Bool
evas_object_smart_need_recalculate_get(const Efl_Canvas_Group *obj)
{
   return efl_canvas_group_need_recalculate_get(obj);
}

EAPI void
evas_object_smart_changed(Efl_Canvas_Group *obj)
{
   efl_canvas_group_change(obj);
}

EAPI void
evas_object_smart_calculate(Efl_Canvas_Group *obj)
{
   efl_canvas_group_calculate(obj);
}

EAPI Eina_Iterator *
evas_object_smart_iterator_new(const Efl_Canvas_Group *obj)
{
   return efl_canvas_group_children_iterate(obj);
}
