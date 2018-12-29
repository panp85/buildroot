
void _elm_bubble_pos_set(Eo *obj, Elm_Bubble_Data *pd, Elm_Bubble_Pos pos);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_bubble_pos_set, EFL_FUNC_CALL(pos), Elm_Bubble_Pos pos);

Elm_Bubble_Pos _elm_bubble_pos_get(Eo *obj, Elm_Bubble_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_bubble_pos_get, Elm_Bubble_Pos, 0);

Efl_Object *_elm_bubble_efl_object_constructor(Eo *obj, Elm_Bubble_Data *pd);


Eina_Bool _elm_bubble_elm_widget_focus_direction(Eo *obj, Elm_Bubble_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _elm_bubble_elm_widget_focus_next_manager_is(Eo *obj, Elm_Bubble_Data *pd);


Eina_Bool _elm_bubble_elm_widget_focus_next(Eo *obj, Elm_Bubble_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_bubble_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Bubble_Data *pd);


void _elm_bubble_elm_widget_access(Eo *obj, Elm_Bubble_Data *pd, Eina_Bool acs);


const Elm_Layout_Part_Alias_Description *_elm_bubble_elm_layout_text_aliases_get(Eo *obj, Elm_Bubble_Data *pd);


const Elm_Layout_Part_Alias_Description *_elm_bubble_elm_layout_content_aliases_get(Eo *obj, Elm_Bubble_Data *pd);


void _elm_bubble_elm_layout_sizing_eval(Eo *obj, Elm_Bubble_Data *pd);


Efl_Object *_elm_bubble_efl_part_part(const Eo *obj, Elm_Bubble_Data *pd, const char *name);


static Eina_Bool
_elm_bubble_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_BUBBLE_EXTRA_OPS
#define ELM_BUBBLE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_bubble_pos_set, _elm_bubble_pos_set),
      EFL_OBJECT_OP_FUNC(elm_obj_bubble_pos_get, _elm_bubble_pos_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_bubble_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _elm_bubble_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_bubble_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_bubble_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_bubble_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_bubble_elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_text_aliases_get, _elm_bubble_elm_layout_text_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_content_aliases_get, _elm_bubble_elm_layout_content_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_bubble_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_bubble_efl_part_part),
      ELM_BUBBLE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_BUBBLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_BUBBLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_bubble_class_desc = {
   EO_VERSION,
   "Elm.Bubble",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Bubble_Data),
   _elm_bubble_class_initializer,
   _elm_bubble_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_bubble_class_get, &_elm_bubble_class_desc, ELM_LAYOUT_CLASS, EFL_UI_CLICKABLE_INTERFACE, NULL);

EAPI void
elm_bubble_pos_set(Elm_Bubble *obj, Elm_Bubble_Pos pos)
{
   elm_obj_bubble_pos_set(obj, pos);
}

EAPI Elm_Bubble_Pos
elm_bubble_pos_get(const Elm_Bubble *obj)
{
   return elm_obj_bubble_pos_get(obj);
}
