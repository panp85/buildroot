EWAPI const Efl_Event_Description _ELM_BOX_EVENT_CHILD_ADDED =
   EFL_EVENT_DESCRIPTION("child,added");
EWAPI const Efl_Event_Description _ELM_BOX_EVENT_CHILD_REMOVED =
   EFL_EVENT_DESCRIPTION("child,removed");

void _elm_box_homogeneous_set(Eo *obj, Elm_Box_Data *pd, Eina_Bool homogeneous);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_box_homogeneous_set, EFL_FUNC_CALL(homogeneous), Eina_Bool homogeneous);

Eina_Bool _elm_box_homogeneous_get(Eo *obj, Elm_Box_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_box_homogeneous_get, Eina_Bool, 0);

void _elm_box_align_set(Eo *obj, Elm_Box_Data *pd, double horizontal, double vertical);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_box_align_set, EFL_FUNC_CALL(horizontal, vertical), double horizontal, double vertical);

void _elm_box_align_get(Eo *obj, Elm_Box_Data *pd, double *horizontal, double *vertical);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_box_align_get, EFL_FUNC_CALL(horizontal, vertical), double *horizontal, double *vertical);

void _elm_box_horizontal_set(Eo *obj, Elm_Box_Data *pd, Eina_Bool horizontal);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_box_horizontal_set, EFL_FUNC_CALL(horizontal), Eina_Bool horizontal);

Eina_Bool _elm_box_horizontal_get(Eo *obj, Elm_Box_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_box_horizontal_get, Eina_Bool, 0);

void _elm_box_padding_set(Eo *obj, Elm_Box_Data *pd, int horizontal, int vertical);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_box_padding_set, EFL_FUNC_CALL(horizontal, vertical), int horizontal, int vertical);

void _elm_box_padding_get(Eo *obj, Elm_Box_Data *pd, int *horizontal, int *vertical);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_box_padding_get, EFL_FUNC_CALL(horizontal, vertical), int *horizontal, int *vertical);

Eina_List *_elm_box_children_get(Eo *obj, Elm_Box_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_box_children_get, Eina_List *, NULL);

void _elm_box_pack_end(Eo *obj, Elm_Box_Data *pd, Efl_Canvas_Object *subobj);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_box_pack_end, EFL_FUNC_CALL(subobj), Efl_Canvas_Object *subobj);

void _elm_box_unpack_all(Eo *obj, Elm_Box_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_box_unpack_all);

void _elm_box_unpack(Eo *obj, Elm_Box_Data *pd, Efl_Canvas_Object *subobj);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_box_unpack, EFL_FUNC_CALL(subobj), Efl_Canvas_Object *subobj);

void _elm_box_pack_after(Eo *obj, Elm_Box_Data *pd, Efl_Canvas_Object *subobj, Efl_Canvas_Object *after);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_box_pack_after, EFL_FUNC_CALL(subobj, after), Efl_Canvas_Object *subobj, Efl_Canvas_Object *after);

void _elm_box_pack_start(Eo *obj, Elm_Box_Data *pd, Efl_Canvas_Object *subobj);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_box_pack_start, EFL_FUNC_CALL(subobj), Efl_Canvas_Object *subobj);

void _elm_box_recalculate(Eo *obj, Elm_Box_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_box_recalculate);

void _elm_box_pack_before(Eo *obj, Elm_Box_Data *pd, Efl_Canvas_Object *subobj, Efl_Canvas_Object *before);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_box_pack_before, EFL_FUNC_CALL(subobj, before), Efl_Canvas_Object *subobj, Efl_Canvas_Object *before);

void _elm_box_clear(Eo *obj, Elm_Box_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_box_clear);

Efl_Object *_elm_box_efl_object_constructor(Eo *obj, Elm_Box_Data *pd);


void _elm_box_efl_canvas_group_group_calculate(Eo *obj, Elm_Box_Data *pd);


Eina_Bool _elm_box_elm_widget_focus_direction(Eo *obj, Elm_Box_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _elm_box_elm_widget_focus_next_manager_is(Eo *obj, Elm_Box_Data *pd);


Eina_Bool _elm_box_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Box_Data *pd);


Eina_Bool _elm_box_elm_widget_focus_next(Eo *obj, Elm_Box_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Elm_Theme_Apply _elm_box_elm_widget_theme_apply(Eo *obj, Elm_Box_Data *pd);


Eina_Bool _elm_box_elm_widget_sub_object_del(Eo *obj, Elm_Box_Data *pd, Efl_Canvas_Object *sobj);


Eina_Bool _elm_box_elm_widget_focus_register(Eo *obj, Elm_Box_Data *pd, Efl_Ui_Focus_Manager *manager, Efl_Ui_Focus_Object *logical, Eina_Bool *logical_flag);


static Eina_Bool
_elm_box_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_BOX_EXTRA_OPS
#define ELM_BOX_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_box_homogeneous_set, _elm_box_homogeneous_set),
      EFL_OBJECT_OP_FUNC(elm_obj_box_homogeneous_get, _elm_box_homogeneous_get),
      EFL_OBJECT_OP_FUNC(elm_obj_box_align_set, _elm_box_align_set),
      EFL_OBJECT_OP_FUNC(elm_obj_box_align_get, _elm_box_align_get),
      EFL_OBJECT_OP_FUNC(elm_obj_box_horizontal_set, _elm_box_horizontal_set),
      EFL_OBJECT_OP_FUNC(elm_obj_box_horizontal_get, _elm_box_horizontal_get),
      EFL_OBJECT_OP_FUNC(elm_obj_box_padding_set, _elm_box_padding_set),
      EFL_OBJECT_OP_FUNC(elm_obj_box_padding_get, _elm_box_padding_get),
      EFL_OBJECT_OP_FUNC(elm_obj_box_children_get, _elm_box_children_get),
      EFL_OBJECT_OP_FUNC(elm_obj_box_pack_end, _elm_box_pack_end),
      EFL_OBJECT_OP_FUNC(elm_obj_box_unpack_all, _elm_box_unpack_all),
      EFL_OBJECT_OP_FUNC(elm_obj_box_unpack, _elm_box_unpack),
      EFL_OBJECT_OP_FUNC(elm_obj_box_pack_after, _elm_box_pack_after),
      EFL_OBJECT_OP_FUNC(elm_obj_box_pack_start, _elm_box_pack_start),
      EFL_OBJECT_OP_FUNC(elm_obj_box_recalculate, _elm_box_recalculate),
      EFL_OBJECT_OP_FUNC(elm_obj_box_pack_before, _elm_box_pack_before),
      EFL_OBJECT_OP_FUNC(elm_obj_box_clear, _elm_box_clear),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_box_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _elm_box_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _elm_box_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_box_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_box_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_box_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_box_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _elm_box_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_register, _elm_box_elm_widget_focus_register),
      ELM_BOX_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_BOX_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_BOX_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_box_class_desc = {
   EO_VERSION,
   "Elm.Box",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Box_Data),
   _elm_box_class_initializer,
   _elm_box_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_box_class_get, &_elm_box_class_desc, ELM_WIDGET_CLASS, NULL);

EAPI void
elm_box_homogeneous_set(Elm_Box *obj, Eina_Bool homogeneous)
{
   elm_obj_box_homogeneous_set(obj, homogeneous);
}

EAPI Eina_Bool
elm_box_homogeneous_get(const Elm_Box *obj)
{
   return elm_obj_box_homogeneous_get(obj);
}

EAPI void
elm_box_align_set(Elm_Box *obj, double horizontal, double vertical)
{
   elm_obj_box_align_set(obj, horizontal, vertical);
}

EAPI void
elm_box_align_get(const Elm_Box *obj, double *horizontal, double *vertical)
{
   elm_obj_box_align_get(obj, horizontal, vertical);
}

EAPI void
elm_box_horizontal_set(Elm_Box *obj, Eina_Bool horizontal)
{
   elm_obj_box_horizontal_set(obj, horizontal);
}

EAPI Eina_Bool
elm_box_horizontal_get(const Elm_Box *obj)
{
   return elm_obj_box_horizontal_get(obj);
}

EAPI void
elm_box_padding_set(Elm_Box *obj, int horizontal, int vertical)
{
   elm_obj_box_padding_set(obj, horizontal, vertical);
}

EAPI void
elm_box_padding_get(const Elm_Box *obj, int *horizontal, int *vertical)
{
   elm_obj_box_padding_get(obj, horizontal, vertical);
}

EAPI Eina_List *
elm_box_children_get(const Elm_Box *obj)
{
   return elm_obj_box_children_get(obj);
}

EAPI void
elm_box_pack_end(Elm_Box *obj, Efl_Canvas_Object *subobj)
{
   elm_obj_box_pack_end(obj, subobj);
}

EAPI void
elm_box_unpack_all(Elm_Box *obj)
{
   elm_obj_box_unpack_all(obj);
}

EAPI void
elm_box_unpack(Elm_Box *obj, Efl_Canvas_Object *subobj)
{
   elm_obj_box_unpack(obj, subobj);
}

EAPI void
elm_box_pack_after(Elm_Box *obj, Efl_Canvas_Object *subobj, Efl_Canvas_Object *after)
{
   elm_obj_box_pack_after(obj, subobj, after);
}

EAPI void
elm_box_pack_start(Elm_Box *obj, Efl_Canvas_Object *subobj)
{
   elm_obj_box_pack_start(obj, subobj);
}

EAPI void
elm_box_recalculate(Elm_Box *obj)
{
   elm_obj_box_recalculate(obj);
}

EAPI void
elm_box_pack_before(Elm_Box *obj, Efl_Canvas_Object *subobj, Efl_Canvas_Object *before)
{
   elm_obj_box_pack_before(obj, subobj, before);
}

EAPI void
elm_box_clear(Elm_Box *obj)
{
   elm_obj_box_clear(obj);
}
