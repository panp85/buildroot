EWAPI const Efl_Event_Description _ELM_PANES_EVENT_PRESS =
   EFL_EVENT_DESCRIPTION("press");
EWAPI const Efl_Event_Description _ELM_PANES_EVENT_UNPRESS =
   EFL_EVENT_DESCRIPTION("unpress");

void _elm_panes_content_left_size_set(Eo *obj, Elm_Panes_Data *pd, double size);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_panes_content_left_size_set, EFL_FUNC_CALL(size), double size);

double _elm_panes_content_left_size_get(Eo *obj, Elm_Panes_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_panes_content_left_size_get, double, 0);

void _elm_panes_fixed_set(Eo *obj, Elm_Panes_Data *pd, Eina_Bool fixed);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_panes_fixed_set, EFL_FUNC_CALL(fixed), Eina_Bool fixed);

Eina_Bool _elm_panes_fixed_get(Eo *obj, Elm_Panes_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_panes_fixed_get, Eina_Bool, 0);

void _elm_panes_content_right_size_set(Eo *obj, Elm_Panes_Data *pd, double size);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_panes_content_right_size_set, EFL_FUNC_CALL(size), double size);

double _elm_panes_content_right_size_get(Eo *obj, Elm_Panes_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_panes_content_right_size_get, double, 0);

void _elm_panes_content_left_min_relative_size_set(Eo *obj, Elm_Panes_Data *pd, double size);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_panes_content_left_min_relative_size_set, EFL_FUNC_CALL(size), double size);

double _elm_panes_content_left_min_relative_size_get(Eo *obj, Elm_Panes_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_panes_content_left_min_relative_size_get, double, 0);

void _elm_panes_content_right_min_relative_size_set(Eo *obj, Elm_Panes_Data *pd, double size);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_panes_content_right_min_relative_size_set, EFL_FUNC_CALL(size), double size);

double _elm_panes_content_right_min_relative_size_get(Eo *obj, Elm_Panes_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_panes_content_right_min_relative_size_get, double, 0);

void _elm_panes_content_left_min_size_set(Eo *obj, Elm_Panes_Data *pd, int size);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_panes_content_left_min_size_set, EFL_FUNC_CALL(size), int size);

int _elm_panes_content_left_min_size_get(Eo *obj, Elm_Panes_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_panes_content_left_min_size_get, int, 0);

void _elm_panes_content_right_min_size_set(Eo *obj, Elm_Panes_Data *pd, int size);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_panes_content_right_min_size_set, EFL_FUNC_CALL(size), int size);

int _elm_panes_content_right_min_size_get(Eo *obj, Elm_Panes_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_panes_content_right_min_size_get, int, 0);

Efl_Object *_elm_panes_efl_object_constructor(Eo *obj, Elm_Panes_Data *pd);


Eina_Bool _elm_panes_elm_widget_focus_next_manager_is(Eo *obj, Elm_Panes_Data *pd);


Eina_Bool _elm_panes_elm_widget_focus_next(Eo *obj, Elm_Panes_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Elm_Theme_Apply _elm_panes_elm_widget_theme_apply(Eo *obj, Elm_Panes_Data *pd);


const Elm_Layout_Part_Alias_Description *_elm_panes_elm_layout_content_aliases_get(Eo *obj, Elm_Panes_Data *pd);


void _elm_panes_efl_orientation_orientation_set(Eo *obj, Elm_Panes_Data *pd, Efl_Orient dir);


Efl_Orient _elm_panes_efl_orientation_orientation_get(Eo *obj, Elm_Panes_Data *pd);


static Eina_Bool
_elm_panes_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_PANES_EXTRA_OPS
#define ELM_PANES_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_panes_content_left_size_set, _elm_panes_content_left_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_panes_content_left_size_get, _elm_panes_content_left_size_get),
      EFL_OBJECT_OP_FUNC(elm_obj_panes_fixed_set, _elm_panes_fixed_set),
      EFL_OBJECT_OP_FUNC(elm_obj_panes_fixed_get, _elm_panes_fixed_get),
      EFL_OBJECT_OP_FUNC(elm_obj_panes_content_right_size_set, _elm_panes_content_right_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_panes_content_right_size_get, _elm_panes_content_right_size_get),
      EFL_OBJECT_OP_FUNC(elm_obj_panes_content_left_min_relative_size_set, _elm_panes_content_left_min_relative_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_panes_content_left_min_relative_size_get, _elm_panes_content_left_min_relative_size_get),
      EFL_OBJECT_OP_FUNC(elm_obj_panes_content_right_min_relative_size_set, _elm_panes_content_right_min_relative_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_panes_content_right_min_relative_size_get, _elm_panes_content_right_min_relative_size_get),
      EFL_OBJECT_OP_FUNC(elm_obj_panes_content_left_min_size_set, _elm_panes_content_left_min_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_panes_content_left_min_size_get, _elm_panes_content_left_min_size_get),
      EFL_OBJECT_OP_FUNC(elm_obj_panes_content_right_min_size_set, _elm_panes_content_right_min_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_panes_content_right_min_size_get, _elm_panes_content_right_min_size_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_panes_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_panes_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_panes_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_panes_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_content_aliases_get, _elm_panes_elm_layout_content_aliases_get),
      EFL_OBJECT_OP_FUNC(efl_orientation_set, _elm_panes_efl_orientation_orientation_set),
      EFL_OBJECT_OP_FUNC(efl_orientation_get, _elm_panes_efl_orientation_orientation_get),
      ELM_PANES_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_PANES_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_PANES_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_panes_class_desc = {
   EO_VERSION,
   "Elm.Panes",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Panes_Data),
   _elm_panes_class_initializer,
   _elm_panes_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_panes_class_get, &_elm_panes_class_desc, ELM_LAYOUT_CLASS, EFL_ORIENTATION_INTERFACE, EFL_UI_CLICKABLE_INTERFACE, NULL);

EAPI void
elm_panes_content_left_size_set(Elm_Panes *obj, double size)
{
   elm_obj_panes_content_left_size_set(obj, size);
}

EAPI double
elm_panes_content_left_size_get(const Elm_Panes *obj)
{
   return elm_obj_panes_content_left_size_get(obj);
}

EAPI void
elm_panes_fixed_set(Elm_Panes *obj, Eina_Bool fixed)
{
   elm_obj_panes_fixed_set(obj, fixed);
}

EAPI Eina_Bool
elm_panes_fixed_get(const Elm_Panes *obj)
{
   return elm_obj_panes_fixed_get(obj);
}

EAPI void
elm_panes_content_right_size_set(Elm_Panes *obj, double size)
{
   elm_obj_panes_content_right_size_set(obj, size);
}

EAPI double
elm_panes_content_right_size_get(const Elm_Panes *obj)
{
   return elm_obj_panes_content_right_size_get(obj);
}

EAPI void
elm_panes_content_left_min_relative_size_set(Elm_Panes *obj, double size)
{
   elm_obj_panes_content_left_min_relative_size_set(obj, size);
}

EAPI double
elm_panes_content_left_min_relative_size_get(const Elm_Panes *obj)
{
   return elm_obj_panes_content_left_min_relative_size_get(obj);
}

EAPI void
elm_panes_content_right_min_relative_size_set(Elm_Panes *obj, double size)
{
   elm_obj_panes_content_right_min_relative_size_set(obj, size);
}

EAPI double
elm_panes_content_right_min_relative_size_get(const Elm_Panes *obj)
{
   return elm_obj_panes_content_right_min_relative_size_get(obj);
}

EAPI void
elm_panes_content_left_min_size_set(Elm_Panes *obj, int size)
{
   elm_obj_panes_content_left_min_size_set(obj, size);
}

EAPI int
elm_panes_content_left_min_size_get(const Elm_Panes *obj)
{
   return elm_obj_panes_content_left_min_size_get(obj);
}

EAPI void
elm_panes_content_right_min_size_set(Elm_Panes *obj, int size)
{
   elm_obj_panes_content_right_min_size_set(obj, size);
}

EAPI int
elm_panes_content_right_min_size_get(const Elm_Panes *obj)
{
   return elm_obj_panes_content_right_min_size_get(obj);
}
