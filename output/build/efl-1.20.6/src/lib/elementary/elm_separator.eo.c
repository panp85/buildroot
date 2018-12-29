
Efl_Object *_elm_separator_efl_object_constructor(Eo *obj, Elm_Separator_Data *pd);


Eina_Bool _elm_separator_elm_widget_focus_next_manager_is(Eo *obj, Elm_Separator_Data *pd);


Eina_Bool _elm_separator_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Separator_Data *pd);


Elm_Theme_Apply _elm_separator_elm_widget_theme_apply(Eo *obj, Elm_Separator_Data *pd);


void _elm_separator_efl_orientation_orientation_set(Eo *obj, Elm_Separator_Data *pd, Efl_Orient dir);


Efl_Orient _elm_separator_efl_orientation_orientation_get(Eo *obj, Elm_Separator_Data *pd);


void _elm_separator_elm_layout_sizing_eval(Eo *obj, Elm_Separator_Data *pd);


static Eina_Bool
_elm_separator_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_SEPARATOR_EXTRA_OPS
#define ELM_SEPARATOR_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_separator_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_separator_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_separator_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_separator_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(efl_orientation_set, _elm_separator_efl_orientation_orientation_set),
      EFL_OBJECT_OP_FUNC(efl_orientation_get, _elm_separator_efl_orientation_orientation_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_separator_elm_layout_sizing_eval),
      ELM_SEPARATOR_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_SEPARATOR_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_SEPARATOR_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_separator_class_desc = {
   EO_VERSION,
   "Elm.Separator",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Separator_Data),
   _elm_separator_class_initializer,
   _elm_separator_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_separator_class_get, &_elm_separator_class_desc, ELM_LAYOUT_CLASS, EFL_ORIENTATION_INTERFACE, NULL);
