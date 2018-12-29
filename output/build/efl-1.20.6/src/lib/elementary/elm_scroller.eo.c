EWAPI const Efl_Event_Description _ELM_SCROLLER_EVENT_SCROLL_PAGE_CHANGED =
   EFL_EVENT_DESCRIPTION("scroll,page,changed");
EWAPI const Efl_Event_Description _ELM_SCROLLER_EVENT_HBAR_UNPRESS =
   EFL_EVENT_DESCRIPTION("hbar,unpress");
EWAPI const Efl_Event_Description _ELM_SCROLLER_EVENT_HBAR_PRESS =
   EFL_EVENT_DESCRIPTION("hbar,press");
EWAPI const Efl_Event_Description _ELM_SCROLLER_EVENT_HBAR_DRAG =
   EFL_EVENT_DESCRIPTION("hbar,drag");
EWAPI const Efl_Event_Description _ELM_SCROLLER_EVENT_VBAR_UNPRESS =
   EFL_EVENT_DESCRIPTION("vbar,unpress");
EWAPI const Efl_Event_Description _ELM_SCROLLER_EVENT_VBAR_PRESS =
   EFL_EVENT_DESCRIPTION("vbar,press");
EWAPI const Efl_Event_Description _ELM_SCROLLER_EVENT_VBAR_DRAG =
   EFL_EVENT_DESCRIPTION("vbar,drag");
EWAPI const Efl_Event_Description _ELM_SCROLLER_EVENT_SCROLL_LEFT =
   EFL_EVENT_DESCRIPTION("scroll,left");
EWAPI const Efl_Event_Description _ELM_SCROLLER_EVENT_SCROLL_RIGHT =
   EFL_EVENT_DESCRIPTION("scroll,right");
EWAPI const Efl_Event_Description _ELM_SCROLLER_EVENT_SCROLL_UP =
   EFL_EVENT_DESCRIPTION("scroll,up");
EWAPI const Efl_Event_Description _ELM_SCROLLER_EVENT_SCROLL_DOWN =
   EFL_EVENT_DESCRIPTION("scroll,down");
EWAPI const Efl_Event_Description _ELM_SCROLLER_EVENT_EDGE_LEFT =
   EFL_EVENT_DESCRIPTION("edge,left");
EWAPI const Efl_Event_Description _ELM_SCROLLER_EVENT_EDGE_RIGHT =
   EFL_EVENT_DESCRIPTION("edge,right");
EWAPI const Efl_Event_Description _ELM_SCROLLER_EVENT_EDGE_TOP =
   EFL_EVENT_DESCRIPTION("edge,top");
EWAPI const Efl_Event_Description _ELM_SCROLLER_EVENT_EDGE_BOTTOM =
   EFL_EVENT_DESCRIPTION("edge,bottom");

void _elm_scroller_custom_widget_base_theme_set(Eo *obj, Elm_Scroller_Data *pd, const char *klass, const char *group);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_scroller_custom_widget_base_theme_set, EFL_FUNC_CALL(klass, group), const char *klass, const char *group);

void _elm_scroller_page_scroll_limit_set(const Eo *obj, Elm_Scroller_Data *pd, int page_limit_h, int page_limit_v);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_scroller_page_scroll_limit_set, EFL_FUNC_CALL(page_limit_h, page_limit_v), int page_limit_h, int page_limit_v);

void _elm_scroller_page_scroll_limit_get(const Eo *obj, Elm_Scroller_Data *pd, int *page_limit_h, int *page_limit_v);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_scroller_page_scroll_limit_get, EFL_FUNC_CALL(page_limit_h, page_limit_v), int *page_limit_h, int *page_limit_v);

Efl_Object *_elm_scroller_efl_object_constructor(Eo *obj, Elm_Scroller_Data *pd);


void _elm_scroller_efl_gfx_position_set(Eo *obj, Elm_Scroller_Data *pd, int x, int y);


void _elm_scroller_efl_gfx_size_set(Eo *obj, Elm_Scroller_Data *pd, int w, int h);


void _elm_scroller_efl_canvas_group_group_member_add(Eo *obj, Elm_Scroller_Data *pd, Efl_Canvas_Object *sub_obj);


Elm_Theme_Apply _elm_scroller_elm_widget_theme_apply(Eo *obj, Elm_Scroller_Data *pd);


Eina_Bool _elm_scroller_elm_widget_activate(Eo *obj, Elm_Scroller_Data *pd, Elm_Activate act);


Eina_Bool _elm_scroller_elm_widget_focus_next_manager_is(Eo *obj, Elm_Scroller_Data *pd);


Eina_Bool _elm_scroller_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Scroller_Data *pd);


Eina_Bool _elm_scroller_elm_widget_focus_next(Eo *obj, Elm_Scroller_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_scroller_elm_widget_focus_direction(Eo *obj, Elm_Scroller_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _elm_scroller_elm_widget_sub_object_del(Eo *obj, Elm_Scroller_Data *pd, Efl_Canvas_Object *sobj);


Eina_Bool _elm_scroller_elm_widget_widget_event(Eo *obj, Elm_Scroller_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _elm_scroller_elm_layout_sizing_eval(Eo *obj, Elm_Scroller_Data *pd);


void _elm_scroller_elm_interface_scrollable_page_size_set(Eo *obj, Elm_Scroller_Data *pd, int x, int y);


void _elm_scroller_elm_interface_scrollable_policy_set(Eo *obj, Elm_Scroller_Data *pd, Elm_Scroller_Policy hbar, Elm_Scroller_Policy vbar);


void _elm_scroller_elm_interface_scrollable_single_direction_set(Eo *obj, Elm_Scroller_Data *pd, Elm_Scroller_Single_Direction single_dir);


Elm_Scroller_Single_Direction _elm_scroller_elm_interface_scrollable_single_direction_get(Eo *obj, Elm_Scroller_Data *pd);


const Elm_Atspi_Action *_elm_scroller_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Scroller_Data *pd);


Efl_Object *_elm_scroller_efl_part_part(const Eo *obj, Elm_Scroller_Data *pd, const char *name);


Eina_Bool _elm_scroller_elm_widget_focus_register(Eo *obj, Elm_Scroller_Data *pd, Efl_Ui_Focus_Manager *manager, Efl_Ui_Focus_Object *logical, Eina_Bool *logical_flag);


static Eina_Bool
_elm_scroller_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_SCROLLER_EXTRA_OPS
#define ELM_SCROLLER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_scroller_custom_widget_base_theme_set, _elm_scroller_custom_widget_base_theme_set),
      EFL_OBJECT_OP_FUNC(elm_obj_scroller_page_scroll_limit_set, _elm_scroller_page_scroll_limit_set),
      EFL_OBJECT_OP_FUNC(elm_obj_scroller_page_scroll_limit_get, _elm_scroller_page_scroll_limit_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_scroller_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _elm_scroller_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _elm_scroller_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_add, _elm_scroller_efl_canvas_group_group_member_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_scroller_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_activate, _elm_scroller_elm_widget_activate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_scroller_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_scroller_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_scroller_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _elm_scroller_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _elm_scroller_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_scroller_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_scroller_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_page_size_set, _elm_scroller_elm_interface_scrollable_page_size_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_policy_set, _elm_scroller_elm_interface_scrollable_policy_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_single_direction_set, _elm_scroller_elm_interface_scrollable_single_direction_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_single_direction_get, _elm_scroller_elm_interface_scrollable_single_direction_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_scroller_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_scroller_efl_part_part),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_register, _elm_scroller_elm_widget_focus_register),
      ELM_SCROLLER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_SCROLLER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_SCROLLER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_scroller_class_desc = {
   EO_VERSION,
   "Elm.Scroller",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Scroller_Data),
   _elm_scroller_class_initializer,
   _elm_scroller_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_scroller_class_get, &_elm_scroller_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_SCROLLABLE_MIXIN, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, EFL_UI_SCROLLABLE_INTERFACE, NULL);

EAPI void
elm_scroller_custom_widget_base_theme_set(Elm_Scroller *obj, const char *klass, const char *group)
{
   elm_obj_scroller_custom_widget_base_theme_set(obj, klass, group);
}

EAPI void
elm_scroller_page_scroll_limit_set(const Elm_Scroller *obj, int page_limit_h, int page_limit_v)
{
   elm_obj_scroller_page_scroll_limit_set(obj, page_limit_h, page_limit_v);
}

EAPI void
elm_scroller_page_scroll_limit_get(const Elm_Scroller *obj, int *page_limit_h, int *page_limit_v)
{
   elm_obj_scroller_page_scroll_limit_get(obj, page_limit_h, page_limit_v);
}
