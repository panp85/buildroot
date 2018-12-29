
void _elm_inwin_activate(Eo *obj, Elm_Inwin_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_win_inwin_activate);

Efl_Object *_elm_inwin_efl_object_constructor(Eo *obj, Elm_Inwin_Data *pd);


void _elm_inwin_elm_widget_widget_parent_set(Eo *obj, Elm_Inwin_Data *pd, Efl_Canvas_Object *parent);


Eina_Bool _elm_inwin_elm_widget_focus_next_manager_is(Eo *obj, Elm_Inwin_Data *pd);


Eina_Bool _elm_inwin_elm_widget_focus_next(Eo *obj, Elm_Inwin_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Efl_Ui_Focus_Manager *_elm_inwin_elm_widget_focus_manager_factory(Eo *obj, Elm_Inwin_Data *pd, Efl_Ui_Focus_Object *root);


const Elm_Layout_Part_Alias_Description *_elm_inwin_elm_layout_content_aliases_get(Eo *obj, Elm_Inwin_Data *pd);


void _elm_inwin_elm_layout_sizing_eval(Eo *obj, Elm_Inwin_Data *pd);


void _elm_inwin_efl_gfx_visible_set(Eo *obj, Elm_Inwin_Data *pd, Eina_Bool v);


Efl_Ui_Focus_Object *_elm_inwin_efl_ui_focus_manager_move(Eo *obj, Elm_Inwin_Data *pd, Efl_Ui_Focus_Direction direction);


static Eina_Bool
_elm_inwin_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_INWIN_EXTRA_OPS
#define ELM_INWIN_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_win_inwin_activate, _elm_inwin_activate),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_inwin_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent_set, _elm_inwin_elm_widget_widget_parent_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_inwin_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_inwin_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_manager_factory, _elm_inwin_elm_widget_focus_manager_factory),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_content_aliases_get, _elm_inwin_elm_layout_content_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_inwin_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _elm_inwin_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_move, _elm_inwin_efl_ui_focus_manager_move),
      ELM_INWIN_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_INWIN_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_INWIN_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_inwin_class_desc = {
   EO_VERSION,
   "Elm.Inwin",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Inwin_Data),
   _elm_inwin_class_initializer,
   _elm_inwin_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_inwin_class_get, &_elm_inwin_class_desc, ELM_LAYOUT_CLASS, EFL_UI_FOCUS_MANAGER_CLASS, NULL);

EAPI void
elm_win_inwin_activate(Elm_Inwin *obj)
{
   elm_obj_win_inwin_activate(obj);
}
