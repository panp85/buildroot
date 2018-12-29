EWAPI const Efl_Event_Description _ELM_ACTIONSLIDER_EVENT_POS_CHANGED =
   EFL_EVENT_DESCRIPTION("pos_changed");

void _elm_actionslider_indicator_pos_set(Eo *obj, Elm_Actionslider_Data *pd, Elm_Actionslider_Pos pos);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_actionslider_indicator_pos_set, EFL_FUNC_CALL(pos), Elm_Actionslider_Pos pos);

Elm_Actionslider_Pos _elm_actionslider_indicator_pos_get(Eo *obj, Elm_Actionslider_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_actionslider_indicator_pos_get, Elm_Actionslider_Pos, 0);

void _elm_actionslider_magnet_pos_set(Eo *obj, Elm_Actionslider_Data *pd, Elm_Actionslider_Pos pos);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_actionslider_magnet_pos_set, EFL_FUNC_CALL(pos), Elm_Actionslider_Pos pos);

Elm_Actionslider_Pos _elm_actionslider_magnet_pos_get(Eo *obj, Elm_Actionslider_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_actionslider_magnet_pos_get, Elm_Actionslider_Pos, 0);

void _elm_actionslider_enabled_pos_set(Eo *obj, Elm_Actionslider_Data *pd, Elm_Actionslider_Pos pos);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_actionslider_enabled_pos_set, EFL_FUNC_CALL(pos), Elm_Actionslider_Pos pos);

Elm_Actionslider_Pos _elm_actionslider_enabled_pos_get(Eo *obj, Elm_Actionslider_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_actionslider_enabled_pos_get, Elm_Actionslider_Pos, 0);

const char *_elm_actionslider_selected_label_get(Eo *obj, Elm_Actionslider_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_actionslider_selected_label_get, const char *, NULL);

Efl_Object *_elm_actionslider_efl_object_constructor(Eo *obj, Elm_Actionslider_Data *pd);


Eina_Bool _elm_actionslider_elm_widget_focus_next_manager_is(Eo *obj, Elm_Actionslider_Data *pd);


Eina_Bool _elm_actionslider_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Actionslider_Data *pd);


Elm_Theme_Apply _elm_actionslider_elm_widget_theme_apply(Eo *obj, Elm_Actionslider_Data *pd);


const Elm_Layout_Part_Alias_Description *_elm_actionslider_elm_layout_text_aliases_get(Eo *obj, Elm_Actionslider_Data *pd);


void _elm_actionslider_elm_layout_sizing_eval(Eo *obj, Elm_Actionslider_Data *pd);


Efl_Object *_elm_actionslider_efl_part_part(const Eo *obj, Elm_Actionslider_Data *pd, const char *name);


static Eina_Bool
_elm_actionslider_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_ACTIONSLIDER_EXTRA_OPS
#define ELM_ACTIONSLIDER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_actionslider_indicator_pos_set, _elm_actionslider_indicator_pos_set),
      EFL_OBJECT_OP_FUNC(elm_obj_actionslider_indicator_pos_get, _elm_actionslider_indicator_pos_get),
      EFL_OBJECT_OP_FUNC(elm_obj_actionslider_magnet_pos_set, _elm_actionslider_magnet_pos_set),
      EFL_OBJECT_OP_FUNC(elm_obj_actionslider_magnet_pos_get, _elm_actionslider_magnet_pos_get),
      EFL_OBJECT_OP_FUNC(elm_obj_actionslider_enabled_pos_set, _elm_actionslider_enabled_pos_set),
      EFL_OBJECT_OP_FUNC(elm_obj_actionslider_enabled_pos_get, _elm_actionslider_enabled_pos_get),
      EFL_OBJECT_OP_FUNC(elm_obj_actionslider_selected_label_get, _elm_actionslider_selected_label_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_actionslider_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_actionslider_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_actionslider_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_actionslider_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_text_aliases_get, _elm_actionslider_elm_layout_text_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_actionslider_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_actionslider_efl_part_part),
      ELM_ACTIONSLIDER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_ACTIONSLIDER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_ACTIONSLIDER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_actionslider_class_desc = {
   EO_VERSION,
   "Elm.Actionslider",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Actionslider_Data),
   _elm_actionslider_class_initializer,
   _elm_actionslider_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_actionslider_class_get, &_elm_actionslider_class_desc, ELM_LAYOUT_CLASS, EFL_UI_SELECTABLE_INTERFACE, NULL);

EAPI void
elm_actionslider_indicator_pos_set(Elm_Actionslider *obj, Elm_Actionslider_Pos pos)
{
   elm_obj_actionslider_indicator_pos_set(obj, pos);
}

EAPI Elm_Actionslider_Pos
elm_actionslider_indicator_pos_get(const Elm_Actionslider *obj)
{
   return elm_obj_actionslider_indicator_pos_get(obj);
}

EAPI void
elm_actionslider_magnet_pos_set(Elm_Actionslider *obj, Elm_Actionslider_Pos pos)
{
   elm_obj_actionslider_magnet_pos_set(obj, pos);
}

EAPI Elm_Actionslider_Pos
elm_actionslider_magnet_pos_get(const Elm_Actionslider *obj)
{
   return elm_obj_actionslider_magnet_pos_get(obj);
}

EAPI void
elm_actionslider_enabled_pos_set(Elm_Actionslider *obj, Elm_Actionslider_Pos pos)
{
   elm_obj_actionslider_enabled_pos_set(obj, pos);
}

EAPI Elm_Actionslider_Pos
elm_actionslider_enabled_pos_get(const Elm_Actionslider *obj)
{
   return elm_obj_actionslider_enabled_pos_get(obj);
}

EAPI const char *
elm_actionslider_selected_label_get(const Elm_Actionslider *obj)
{
   return elm_obj_actionslider_selected_label_get(obj);
}
