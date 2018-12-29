EWAPI const Efl_Event_Description _ELM_HOVER_EVENT_SMART_CHANGED =
   EFL_EVENT_DESCRIPTION("smart,changed");
EWAPI const Efl_Event_Description _ELM_HOVER_EVENT_DISMISSED =
   EFL_EVENT_DESCRIPTION("dismissed");

void _elm_hover_target_set(Eo *obj, Elm_Hover_Data *pd, Efl_Canvas_Object *target);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_hover_target_set, EFL_FUNC_CALL(target), Efl_Canvas_Object *target);

Efl_Canvas_Object *_elm_hover_target_get(Eo *obj, Elm_Hover_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_hover_target_get, Efl_Canvas_Object *, NULL);

const char *_elm_hover_best_content_location_get(const Eo *obj, Elm_Hover_Data *pd, Elm_Hover_Axis pref_axis);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_hover_best_content_location_get, const char *, NULL, EFL_FUNC_CALL(pref_axis), Elm_Hover_Axis pref_axis);

void _elm_hover_dismiss(Eo *obj, Elm_Hover_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_hover_dismiss);

Efl_Object *_elm_hover_efl_object_constructor(Eo *obj, Elm_Hover_Data *pd);


void _elm_hover_efl_gfx_visible_set(Eo *obj, Elm_Hover_Data *pd, Eina_Bool v);


void _elm_hover_efl_gfx_position_set(Eo *obj, Elm_Hover_Data *pd, int x, int y);


void _elm_hover_efl_gfx_size_set(Eo *obj, Elm_Hover_Data *pd, int w, int h);


Elm_Theme_Apply _elm_hover_elm_widget_theme_apply(Eo *obj, Elm_Hover_Data *pd);


Eina_Bool _elm_hover_elm_widget_sub_object_add(Eo *obj, Elm_Hover_Data *pd, Efl_Canvas_Object *sobj);


void _elm_hover_elm_widget_widget_parent_set(Eo *obj, Elm_Hover_Data *pd, Efl_Canvas_Object *parent);


Efl_Canvas_Object *_elm_hover_elm_widget_widget_parent_get(Eo *obj, Elm_Hover_Data *pd);


Eina_Bool _elm_hover_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Hover_Data *pd);


Eina_Bool _elm_hover_elm_widget_focus_next_manager_is(Eo *obj, Elm_Hover_Data *pd);


Eina_Bool _elm_hover_elm_widget_sub_object_del(Eo *obj, Elm_Hover_Data *pd, Efl_Canvas_Object *sobj);


Efl_Ui_Focus_Manager *_elm_hover_elm_widget_focus_manager_factory(Eo *obj, Elm_Hover_Data *pd, Efl_Ui_Focus_Object *root);


void _elm_hover_elm_layout_sizing_eval(Eo *obj, Elm_Hover_Data *pd);


const Elm_Layout_Part_Alias_Description *_elm_hover_elm_layout_content_aliases_get(Eo *obj, Elm_Hover_Data *pd);


const Elm_Atspi_Action *_elm_hover_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Hover_Data *pd);


Efl_Object *_elm_hover_efl_part_part(const Eo *obj, Elm_Hover_Data *pd, const char *name);


static Eina_Bool
_elm_hover_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_HOVER_EXTRA_OPS
#define ELM_HOVER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_hover_target_set, _elm_hover_target_set),
      EFL_OBJECT_OP_FUNC(elm_obj_hover_target_get, _elm_hover_target_get),
      EFL_OBJECT_OP_FUNC(elm_obj_hover_best_content_location_get, _elm_hover_best_content_location_get),
      EFL_OBJECT_OP_FUNC(elm_obj_hover_dismiss, _elm_hover_dismiss),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_hover_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _elm_hover_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _elm_hover_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _elm_hover_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_hover_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_add, _elm_hover_elm_widget_sub_object_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent_set, _elm_hover_elm_widget_widget_parent_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent_get, _elm_hover_elm_widget_widget_parent_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_hover_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_hover_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _elm_hover_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_manager_factory, _elm_hover_elm_widget_focus_manager_factory),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_hover_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_content_aliases_get, _elm_hover_elm_layout_content_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_hover_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_hover_efl_part_part),
      ELM_HOVER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_HOVER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_HOVER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_hover_class_desc = {
   EO_VERSION,
   "Elm.Hover",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Hover_Data),
   _elm_hover_class_initializer,
   _elm_hover_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_hover_class_get, &_elm_hover_class_desc, ELM_LAYOUT_CLASS, EFL_UI_CLICKABLE_INTERFACE, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, EFL_UI_FOCUS_MANAGER_CLASS, NULL);

EAPI void
elm_hover_target_set(Elm_Hover *obj, Efl_Canvas_Object *target)
{
   elm_obj_hover_target_set(obj, target);
}

EAPI Efl_Canvas_Object *
elm_hover_target_get(const Elm_Hover *obj)
{
   return elm_obj_hover_target_get(obj);
}

EAPI const char *
elm_hover_best_content_location_get(const Elm_Hover *obj, Elm_Hover_Axis pref_axis)
{
   return elm_obj_hover_best_content_location_get(obj, pref_axis);
}

EAPI void
elm_hover_dismiss(Elm_Hover *obj)
{
   elm_obj_hover_dismiss(obj);
}
