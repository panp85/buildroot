EWAPI const Efl_Event_Description _ELM_PANEL_EVENT_TOGGLED =
   EFL_EVENT_DESCRIPTION("toggled");

void _elm_panel_orient_set(Eo *obj, Elm_Panel_Data *pd, Elm_Panel_Orient orient);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_panel_orient_set, EFL_FUNC_CALL(orient), Elm_Panel_Orient orient);

Elm_Panel_Orient _elm_panel_orient_get(Eo *obj, Elm_Panel_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_panel_orient_get, Elm_Panel_Orient, 2 /* Elm.Panel.Orient.left */);

void _elm_panel_hidden_set(Eo *obj, Elm_Panel_Data *pd, Eina_Bool hidden);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_panel_hidden_set, EFL_FUNC_CALL(hidden), Eina_Bool hidden);

Eina_Bool _elm_panel_hidden_get(Eo *obj, Elm_Panel_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_panel_hidden_get, Eina_Bool, 0);

void _elm_panel_scrollable_set(Eo *obj, Elm_Panel_Data *pd, Eina_Bool scrollable);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_panel_scrollable_set, EFL_FUNC_CALL(scrollable), Eina_Bool scrollable);

Eina_Bool _elm_panel_scrollable_get(Eo *obj, Elm_Panel_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_panel_scrollable_get, Eina_Bool, 0);

void _elm_panel_scrollable_content_size_set(Eo *obj, Elm_Panel_Data *pd, double ratio);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_panel_scrollable_content_size_set, EFL_FUNC_CALL(ratio), double ratio);

double _elm_panel_scrollable_content_size_get(Eo *obj, Elm_Panel_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_panel_scrollable_content_size_get, double, 0);

void _elm_panel_toggle(Eo *obj, Elm_Panel_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_panel_toggle);

Efl_Object *_elm_panel_efl_object_constructor(Eo *obj, Elm_Panel_Data *pd);


void _elm_panel_efl_gfx_position_set(Eo *obj, Elm_Panel_Data *pd, int x, int y);


void _elm_panel_efl_gfx_size_set(Eo *obj, Elm_Panel_Data *pd, int w, int h);


void _elm_panel_efl_canvas_group_group_member_add(Eo *obj, Elm_Panel_Data *pd, Efl_Canvas_Object *sub_obj);


Elm_Theme_Apply _elm_panel_elm_widget_theme_apply(Eo *obj, Elm_Panel_Data *pd);


Eina_Bool _elm_panel_elm_widget_focus_next_manager_is(Eo *obj, Elm_Panel_Data *pd);


Eina_Bool _elm_panel_elm_widget_focus_next(Eo *obj, Elm_Panel_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_panel_elm_widget_disable(Eo *obj, Elm_Panel_Data *pd);


void _elm_panel_elm_widget_access(Eo *obj, Elm_Panel_Data *pd, Eina_Bool acs);


Eina_Bool _elm_panel_elm_widget_widget_event(Eo *obj, Elm_Panel_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


Eina_Bool _elm_panel_elm_widget_on_focus_region(Eo *obj, Elm_Panel_Data *pd, int *x, int *y, int *w, int *h);


void _elm_panel_elm_layout_sizing_eval(Eo *obj, Elm_Panel_Data *pd);


const Elm_Atspi_Action *_elm_panel_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Panel_Data *pd);


Efl_Object *_elm_panel_efl_part_part(const Eo *obj, Elm_Panel_Data *pd, const char *name);


static Eina_Bool
_elm_panel_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_PANEL_EXTRA_OPS
#define ELM_PANEL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_panel_orient_set, _elm_panel_orient_set),
      EFL_OBJECT_OP_FUNC(elm_obj_panel_orient_get, _elm_panel_orient_get),
      EFL_OBJECT_OP_FUNC(elm_obj_panel_hidden_set, _elm_panel_hidden_set),
      EFL_OBJECT_OP_FUNC(elm_obj_panel_hidden_get, _elm_panel_hidden_get),
      EFL_OBJECT_OP_FUNC(elm_obj_panel_scrollable_set, _elm_panel_scrollable_set),
      EFL_OBJECT_OP_FUNC(elm_obj_panel_scrollable_get, _elm_panel_scrollable_get),
      EFL_OBJECT_OP_FUNC(elm_obj_panel_scrollable_content_size_set, _elm_panel_scrollable_content_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_panel_scrollable_content_size_get, _elm_panel_scrollable_content_size_get),
      EFL_OBJECT_OP_FUNC(elm_obj_panel_toggle, _elm_panel_toggle),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_panel_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _elm_panel_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _elm_panel_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_add, _elm_panel_efl_canvas_group_group_member_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_panel_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_panel_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_panel_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_disable, _elm_panel_elm_widget_disable),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_panel_elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_panel_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus_region, _elm_panel_elm_widget_on_focus_region),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_panel_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_panel_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_panel_efl_part_part),
      ELM_PANEL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_PANEL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_PANEL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_panel_class_desc = {
   EO_VERSION,
   "Elm.Panel",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Panel_Data),
   _elm_panel_class_initializer,
   _elm_panel_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_panel_class_get, &_elm_panel_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_SCROLLABLE_MIXIN, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);

EAPI void
elm_panel_orient_set(Elm_Panel *obj, Elm_Panel_Orient orient)
{
   elm_obj_panel_orient_set(obj, orient);
}

EAPI Elm_Panel_Orient
elm_panel_orient_get(const Elm_Panel *obj)
{
   return elm_obj_panel_orient_get(obj);
}

EAPI void
elm_panel_hidden_set(Elm_Panel *obj, Eina_Bool hidden)
{
   elm_obj_panel_hidden_set(obj, hidden);
}

EAPI Eina_Bool
elm_panel_hidden_get(const Elm_Panel *obj)
{
   return elm_obj_panel_hidden_get(obj);
}

EAPI void
elm_panel_scrollable_set(Elm_Panel *obj, Eina_Bool scrollable)
{
   elm_obj_panel_scrollable_set(obj, scrollable);
}

EAPI Eina_Bool
elm_panel_scrollable_get(const Elm_Panel *obj)
{
   return elm_obj_panel_scrollable_get(obj);
}

EAPI void
elm_panel_scrollable_content_size_set(Elm_Panel *obj, double ratio)
{
   elm_obj_panel_scrollable_content_size_set(obj, ratio);
}

EAPI double
elm_panel_scrollable_content_size_get(const Elm_Panel *obj)
{
   return elm_obj_panel_scrollable_content_size_get(obj);
}

EAPI void
elm_panel_toggle(Elm_Panel *obj)
{
   elm_obj_panel_toggle(obj);
}
