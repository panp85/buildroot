EWAPI const Efl_Event_Description _ELM_NOTIFY_EVENT_BLOCK_CLICKED =
   EFL_EVENT_DESCRIPTION("block,clicked");
EWAPI const Efl_Event_Description _ELM_NOTIFY_EVENT_TIMEOUT =
   EFL_EVENT_DESCRIPTION("timeout");
EWAPI const Efl_Event_Description _ELM_NOTIFY_EVENT_DISMISSED =
   EFL_EVENT_DESCRIPTION("dismissed");

void _elm_notify_align_set(Eo *obj, Elm_Notify_Data *pd, double horizontal, double vertical);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_notify_align_set, EFL_FUNC_CALL(horizontal, vertical), double horizontal, double vertical);

void _elm_notify_align_get(Eo *obj, Elm_Notify_Data *pd, double *horizontal, double *vertical);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_notify_align_get, EFL_FUNC_CALL(horizontal, vertical), double *horizontal, double *vertical);

void _elm_notify_allow_events_set(Eo *obj, Elm_Notify_Data *pd, Eina_Bool allow);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_notify_allow_events_set, EFL_FUNC_CALL(allow), Eina_Bool allow);

Eina_Bool _elm_notify_allow_events_get(Eo *obj, Elm_Notify_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_notify_allow_events_get, Eina_Bool, 0);

void _elm_notify_timeout_set(Eo *obj, Elm_Notify_Data *pd, double timeout);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_notify_timeout_set, EFL_FUNC_CALL(timeout), double timeout);

double _elm_notify_timeout_get(Eo *obj, Elm_Notify_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_notify_timeout_get, double, 0);

void _elm_notify_dismiss(Eo *obj, Elm_Notify_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_notify_dismiss);

Efl_Object *_elm_notify_efl_object_constructor(Eo *obj, Elm_Notify_Data *pd);


void _elm_notify_efl_gfx_visible_set(Eo *obj, Elm_Notify_Data *pd, Eina_Bool v);


void _elm_notify_efl_gfx_position_set(Eo *obj, Elm_Notify_Data *pd, int x, int y);


void _elm_notify_efl_gfx_size_set(Eo *obj, Elm_Notify_Data *pd, int w, int h);


Eina_Bool _elm_notify_elm_widget_focus_direction(Eo *obj, Elm_Notify_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


void _elm_notify_elm_widget_widget_parent_set(Eo *obj, Elm_Notify_Data *pd, Efl_Canvas_Object *parent);


Efl_Canvas_Object *_elm_notify_elm_widget_widget_parent_get(Eo *obj, Elm_Notify_Data *pd);


Elm_Theme_Apply _elm_notify_elm_widget_theme_apply(Eo *obj, Elm_Notify_Data *pd);


Eina_Bool _elm_notify_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Notify_Data *pd);


Eina_Bool _elm_notify_elm_widget_focus_next_manager_is(Eo *obj, Elm_Notify_Data *pd);


Eina_Bool _elm_notify_elm_widget_focus_next(Eo *obj, Elm_Notify_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_notify_elm_widget_sub_object_del(Eo *obj, Elm_Notify_Data *pd, Efl_Canvas_Object *sobj);


void _elm_notify_elm_widget_part_text_set(Eo *obj, Elm_Notify_Data *pd, const char *part, const char *label);


const char *_elm_notify_elm_widget_part_text_get(Eo *obj, Elm_Notify_Data *pd, const char *part);


Eina_Bool _elm_notify_efl_container_content_set(Eo *obj, Elm_Notify_Data *pd, Efl_Gfx *content);


Efl_Gfx *_elm_notify_efl_container_content_get(Eo *obj, Elm_Notify_Data *pd);


Efl_Gfx *_elm_notify_efl_container_content_unset(Eo *obj, Elm_Notify_Data *pd);


Efl_Object *_elm_notify_efl_part_part(const Eo *obj, Elm_Notify_Data *pd, const char *name);


static Eina_Bool
_elm_notify_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_NOTIFY_EXTRA_OPS
#define ELM_NOTIFY_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_notify_align_set, _elm_notify_align_set),
      EFL_OBJECT_OP_FUNC(elm_obj_notify_align_get, _elm_notify_align_get),
      EFL_OBJECT_OP_FUNC(elm_obj_notify_allow_events_set, _elm_notify_allow_events_set),
      EFL_OBJECT_OP_FUNC(elm_obj_notify_allow_events_get, _elm_notify_allow_events_get),
      EFL_OBJECT_OP_FUNC(elm_obj_notify_timeout_set, _elm_notify_timeout_set),
      EFL_OBJECT_OP_FUNC(elm_obj_notify_timeout_get, _elm_notify_timeout_get),
      EFL_OBJECT_OP_FUNC(elm_obj_notify_dismiss, _elm_notify_dismiss),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_notify_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _elm_notify_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _elm_notify_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _elm_notify_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _elm_notify_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent_set, _elm_notify_elm_widget_widget_parent_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent_get, _elm_notify_elm_widget_widget_parent_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_notify_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_notify_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_notify_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_notify_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _elm_notify_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_part_text_set, _elm_notify_elm_widget_part_text_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_part_text_get, _elm_notify_elm_widget_part_text_get),
      EFL_OBJECT_OP_FUNC(efl_content_set, _elm_notify_efl_container_content_set),
      EFL_OBJECT_OP_FUNC(efl_content_get, _elm_notify_efl_container_content_get),
      EFL_OBJECT_OP_FUNC(efl_content_unset, _elm_notify_efl_container_content_unset),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_notify_efl_part_part),
      ELM_NOTIFY_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_NOTIFY_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_NOTIFY_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_notify_class_desc = {
   EO_VERSION,
   "Elm.Notify",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Notify_Data),
   _elm_notify_class_initializer,
   _elm_notify_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_notify_class_get, &_elm_notify_class_desc, ELM_WIDGET_CLASS, EFL_CONTAINER_INTERFACE, EFL_PART_INTERFACE, NULL);

EAPI void
elm_notify_align_set(Elm_Notify *obj, double horizontal, double vertical)
{
   elm_obj_notify_align_set(obj, horizontal, vertical);
}

EAPI void
elm_notify_align_get(const Elm_Notify *obj, double *horizontal, double *vertical)
{
   elm_obj_notify_align_get(obj, horizontal, vertical);
}

EAPI void
elm_notify_allow_events_set(Elm_Notify *obj, Eina_Bool allow)
{
   elm_obj_notify_allow_events_set(obj, allow);
}

EAPI Eina_Bool
elm_notify_allow_events_get(const Elm_Notify *obj)
{
   return elm_obj_notify_allow_events_get(obj);
}

EAPI void
elm_notify_timeout_set(Elm_Notify *obj, double timeout)
{
   elm_obj_notify_timeout_set(obj, timeout);
}

EAPI double
elm_notify_timeout_get(const Elm_Notify *obj)
{
   return elm_obj_notify_timeout_get(obj);
}

EAPI void
elm_notify_dismiss(Elm_Notify *obj)
{
   elm_obj_notify_dismiss(obj);
}
