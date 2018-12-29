
void _efl_ui_frame_collapse_set(Eo *obj, Efl_Ui_Frame_Data *pd, Eina_Bool collapse);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_frame_collapse_set, EFL_FUNC_CALL(collapse), Eina_Bool collapse);

Eina_Bool _efl_ui_frame_collapse_get(Eo *obj, Efl_Ui_Frame_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_frame_collapse_get, Eina_Bool, 0);

void _efl_ui_frame_autocollapse_set(Eo *obj, Efl_Ui_Frame_Data *pd, Eina_Bool autocollapse);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_frame_autocollapse_set, EFL_FUNC_CALL(autocollapse), Eina_Bool autocollapse);

Eina_Bool _efl_ui_frame_autocollapse_get(Eo *obj, Efl_Ui_Frame_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_frame_autocollapse_get, Eina_Bool, 0);

void _efl_ui_frame_collapse_go(Eo *obj, Efl_Ui_Frame_Data *pd, Eina_Bool collapse);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_frame_collapse_go, EFL_FUNC_CALL(collapse), Eina_Bool collapse);

Efl_Object *_efl_ui_frame_efl_object_constructor(Eo *obj, Efl_Ui_Frame_Data *pd);


void _efl_ui_frame_efl_canvas_group_group_calculate(Eo *obj, Efl_Ui_Frame_Data *pd);


Eina_Bool _efl_ui_frame_elm_widget_focus_direction(Eo *obj, Efl_Ui_Frame_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _efl_ui_frame_elm_widget_focus_next_manager_is(Eo *obj, Efl_Ui_Frame_Data *pd);


Eina_Bool _efl_ui_frame_elm_widget_focus_next(Eo *obj, Efl_Ui_Frame_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _efl_ui_frame_elm_widget_focus_direction_manager_is(Eo *obj, Efl_Ui_Frame_Data *pd);


const Elm_Layout_Part_Alias_Description *_efl_ui_frame_elm_layout_text_aliases_get(Eo *obj, Efl_Ui_Frame_Data *pd);


const Elm_Layout_Part_Alias_Description *_efl_ui_frame_elm_layout_content_aliases_get(Eo *obj, Efl_Ui_Frame_Data *pd);


static Eina_Bool
_efl_ui_frame_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_FRAME_EXTRA_OPS
#define EFL_UI_FRAME_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_frame_collapse_set, _efl_ui_frame_collapse_set),
      EFL_OBJECT_OP_FUNC(efl_ui_frame_collapse_get, _efl_ui_frame_collapse_get),
      EFL_OBJECT_OP_FUNC(efl_ui_frame_autocollapse_set, _efl_ui_frame_autocollapse_set),
      EFL_OBJECT_OP_FUNC(efl_ui_frame_autocollapse_get, _efl_ui_frame_autocollapse_get),
      EFL_OBJECT_OP_FUNC(efl_ui_frame_collapse_go, _efl_ui_frame_collapse_go),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_frame_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _efl_ui_frame_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _efl_ui_frame_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _efl_ui_frame_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _efl_ui_frame_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _efl_ui_frame_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_text_aliases_get, _efl_ui_frame_elm_layout_text_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_content_aliases_get, _efl_ui_frame_elm_layout_content_aliases_get),
      EFL_UI_FRAME_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_FRAME_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_FRAME_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_frame_class_desc = {
   EO_VERSION,
   "Efl.Ui.Frame",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Frame_Data),
   _efl_ui_frame_class_initializer,
   _efl_ui_frame_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_frame_class_get, &_efl_ui_frame_class_desc, ELM_LAYOUT_CLASS, EFL_UI_CLICKABLE_INTERFACE, NULL);

EAPI void
elm_frame_collapse_set(Efl_Ui_Frame *obj, Eina_Bool collapse)
{
   efl_ui_frame_collapse_set(obj, collapse);
}

EAPI Eina_Bool
elm_frame_collapse_get(const Efl_Ui_Frame *obj)
{
   return efl_ui_frame_collapse_get(obj);
}

EAPI void
elm_frame_autocollapse_set(Efl_Ui_Frame *obj, Eina_Bool autocollapse)
{
   efl_ui_frame_autocollapse_set(obj, autocollapse);
}

EAPI Eina_Bool
elm_frame_autocollapse_get(const Efl_Ui_Frame *obj)
{
   return efl_ui_frame_autocollapse_get(obj);
}

EAPI void
elm_frame_collapse_go(Efl_Ui_Frame *obj, Eina_Bool collapse)
{
   efl_ui_frame_collapse_go(obj, collapse);
}
