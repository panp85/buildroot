EWAPI const Efl_Event_Description _ELM_LABEL_EVENT_SLIDE_END =
   EFL_EVENT_DESCRIPTION("slide,end");

void _elm_label_wrap_width_set(Eo *obj, Elm_Label_Data *pd, int w);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_label_wrap_width_set, EFL_FUNC_CALL(w), int w);

int _elm_label_wrap_width_get(Eo *obj, Elm_Label_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_label_wrap_width_get, int, 0);

void _elm_label_slide_speed_set(Eo *obj, Elm_Label_Data *pd, double speed);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_label_slide_speed_set, EFL_FUNC_CALL(speed), double speed);

double _elm_label_slide_speed_get(Eo *obj, Elm_Label_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_label_slide_speed_get, double, 0);

void _elm_label_slide_mode_set(Eo *obj, Elm_Label_Data *pd, Elm_Label_Slide_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_label_slide_mode_set, EFL_FUNC_CALL(mode), Elm_Label_Slide_Mode mode);

Elm_Label_Slide_Mode _elm_label_slide_mode_get(Eo *obj, Elm_Label_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_label_slide_mode_get, Elm_Label_Slide_Mode, 0);

void _elm_label_slide_duration_set(Eo *obj, Elm_Label_Data *pd, double duration);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_label_slide_duration_set, EFL_FUNC_CALL(duration), double duration);

double _elm_label_slide_duration_get(Eo *obj, Elm_Label_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_label_slide_duration_get, double, 0);

void _elm_label_line_wrap_set(Eo *obj, Elm_Label_Data *pd, Elm_Wrap_Type wrap);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_label_line_wrap_set, EFL_FUNC_CALL(wrap), Elm_Wrap_Type wrap);

Elm_Wrap_Type _elm_label_line_wrap_get(Eo *obj, Elm_Label_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_label_line_wrap_get, Elm_Wrap_Type, 0);

void _elm_label_ellipsis_set(Eo *obj, Elm_Label_Data *pd, Eina_Bool ellipsis);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_label_ellipsis_set, EFL_FUNC_CALL(ellipsis), Eina_Bool ellipsis);

Eina_Bool _elm_label_ellipsis_get(Eo *obj, Elm_Label_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_label_ellipsis_get, Eina_Bool, 0);

void _elm_label_slide_go(Eo *obj, Elm_Label_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_label_slide_go);

Efl_Object *_elm_label_efl_object_constructor(Eo *obj, Elm_Label_Data *pd);


Eina_Bool _elm_label_elm_widget_focus_next_manager_is(Eo *obj, Elm_Label_Data *pd);


Eina_Bool _elm_label_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Label_Data *pd);


Elm_Theme_Apply _elm_label_elm_widget_theme_apply(Eo *obj, Elm_Label_Data *pd);


void _elm_label_elm_layout_sizing_eval(Eo *obj, Elm_Label_Data *pd);


Efl_Object *_elm_label_efl_part_part(const Eo *obj, Elm_Label_Data *pd, const char *name);


static Eina_Bool
_elm_label_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_LABEL_EXTRA_OPS
#define ELM_LABEL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_label_wrap_width_set, _elm_label_wrap_width_set),
      EFL_OBJECT_OP_FUNC(elm_obj_label_wrap_width_get, _elm_label_wrap_width_get),
      EFL_OBJECT_OP_FUNC(elm_obj_label_slide_speed_set, _elm_label_slide_speed_set),
      EFL_OBJECT_OP_FUNC(elm_obj_label_slide_speed_get, _elm_label_slide_speed_get),
      EFL_OBJECT_OP_FUNC(elm_obj_label_slide_mode_set, _elm_label_slide_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_label_slide_mode_get, _elm_label_slide_mode_get),
      EFL_OBJECT_OP_FUNC(elm_obj_label_slide_duration_set, _elm_label_slide_duration_set),
      EFL_OBJECT_OP_FUNC(elm_obj_label_slide_duration_get, _elm_label_slide_duration_get),
      EFL_OBJECT_OP_FUNC(elm_obj_label_line_wrap_set, _elm_label_line_wrap_set),
      EFL_OBJECT_OP_FUNC(elm_obj_label_line_wrap_get, _elm_label_line_wrap_get),
      EFL_OBJECT_OP_FUNC(elm_obj_label_ellipsis_set, _elm_label_ellipsis_set),
      EFL_OBJECT_OP_FUNC(elm_obj_label_ellipsis_get, _elm_label_ellipsis_get),
      EFL_OBJECT_OP_FUNC(elm_obj_label_slide_go, _elm_label_slide_go),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_label_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_label_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_label_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_label_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_label_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_label_efl_part_part),
      ELM_LABEL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_LABEL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_LABEL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_label_class_desc = {
   EO_VERSION,
   "Elm.Label",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Label_Data),
   _elm_label_class_initializer,
   _elm_label_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_label_class_get, &_elm_label_class_desc, ELM_LAYOUT_CLASS, NULL);

EAPI void
elm_label_wrap_width_set(Elm_Label *obj, int w)
{
   elm_obj_label_wrap_width_set(obj, w);
}

EAPI int
elm_label_wrap_width_get(const Elm_Label *obj)
{
   return elm_obj_label_wrap_width_get(obj);
}

EAPI void
elm_label_slide_speed_set(Elm_Label *obj, double speed)
{
   elm_obj_label_slide_speed_set(obj, speed);
}

EAPI double
elm_label_slide_speed_get(const Elm_Label *obj)
{
   return elm_obj_label_slide_speed_get(obj);
}

EAPI void
elm_label_slide_mode_set(Elm_Label *obj, Elm_Label_Slide_Mode mode)
{
   elm_obj_label_slide_mode_set(obj, mode);
}

EAPI Elm_Label_Slide_Mode
elm_label_slide_mode_get(const Elm_Label *obj)
{
   return elm_obj_label_slide_mode_get(obj);
}

EAPI void
elm_label_slide_duration_set(Elm_Label *obj, double duration)
{
   elm_obj_label_slide_duration_set(obj, duration);
}

EAPI double
elm_label_slide_duration_get(const Elm_Label *obj)
{
   return elm_obj_label_slide_duration_get(obj);
}

EAPI void
elm_label_line_wrap_set(Elm_Label *obj, Elm_Wrap_Type wrap)
{
   elm_obj_label_line_wrap_set(obj, wrap);
}

EAPI Elm_Wrap_Type
elm_label_line_wrap_get(const Elm_Label *obj)
{
   return elm_obj_label_line_wrap_get(obj);
}

EAPI void
elm_label_ellipsis_set(Elm_Label *obj, Eina_Bool ellipsis)
{
   elm_obj_label_ellipsis_set(obj, ellipsis);
}

EAPI Eina_Bool
elm_label_ellipsis_get(const Elm_Label *obj)
{
   return elm_obj_label_ellipsis_get(obj);
}

EAPI void
elm_label_slide_go(Elm_Label *obj)
{
   elm_obj_label_slide_go(obj);
}
