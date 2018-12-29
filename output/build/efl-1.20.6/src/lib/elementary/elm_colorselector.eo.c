EWAPI const Efl_Event_Description _ELM_COLORSELECTOR_EVENT_COLOR_ITEM_SELECTED =
   EFL_EVENT_DESCRIPTION("color,item,selected");
EWAPI const Efl_Event_Description _ELM_COLORSELECTOR_EVENT_COLOR_ITEM_LONGPRESSED =
   EFL_EVENT_DESCRIPTION("color,item,longpressed");
EWAPI const Efl_Event_Description _ELM_COLORSELECTOR_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");
EWAPI const Efl_Event_Description _ELM_COLORSELECTOR_EVENT_CHANGED_USER =
   EFL_EVENT_DESCRIPTION("changed,user");

void _elm_colorselector_color_set(Eo *obj, Elm_Colorselector_Data *pd, int r, int g, int b, int a);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_colorselector_color_set, EFL_FUNC_CALL(r, g, b, a), int r, int g, int b, int a);

void _elm_colorselector_color_get(Eo *obj, Elm_Colorselector_Data *pd, int *r, int *g, int *b, int *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_colorselector_color_get, EFL_FUNC_CALL(r, g, b, a), int *r, int *g, int *b, int *a);

void _elm_colorselector_palette_name_set(Eo *obj, Elm_Colorselector_Data *pd, const char *palette_name);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_colorselector_palette_name_set, EFL_FUNC_CALL(palette_name), const char *palette_name);

const char *_elm_colorselector_palette_name_get(Eo *obj, Elm_Colorselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_colorselector_palette_name_get, const char *, NULL);

void _elm_colorselector_mode_set(Eo *obj, Elm_Colorselector_Data *pd, Elm_Colorselector_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_colorselector_mode_set, EFL_FUNC_CALL(mode), Elm_Colorselector_Mode mode);

Elm_Colorselector_Mode _elm_colorselector_mode_get(Eo *obj, Elm_Colorselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_colorselector_mode_get, Elm_Colorselector_Mode, 0);

const Eina_List *_elm_colorselector_palette_items_get(Eo *obj, Elm_Colorselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_colorselector_palette_items_get, const Eina_List *, NULL);

Elm_Widget_Item *_elm_colorselector_palette_selected_item_get(Eo *obj, Elm_Colorselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_colorselector_palette_selected_item_get, Elm_Widget_Item *, NULL);

Elm_Widget_Item *_elm_colorselector_palette_color_add(Eo *obj, Elm_Colorselector_Data *pd, int r, int g, int b, int a);

EOAPI EFL_FUNC_BODYV(elm_obj_colorselector_palette_color_add, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(r, g, b, a), int r, int g, int b, int a);

void _elm_colorselector_palette_clear(Eo *obj, Elm_Colorselector_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_colorselector_palette_clear);

Efl_Object *_elm_colorselector_efl_object_constructor(Eo *obj, Elm_Colorselector_Data *pd);


Elm_Theme_Apply _elm_colorselector_elm_widget_theme_apply(Eo *obj, Elm_Colorselector_Data *pd);


Eina_Bool _elm_colorselector_elm_widget_focus_next_manager_is(Eo *obj, Elm_Colorselector_Data *pd);


Eina_Bool _elm_colorselector_elm_widget_focus_next(Eo *obj, Elm_Colorselector_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_colorselector_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Colorselector_Data *pd);


void _elm_colorselector_elm_widget_focus_highlight_geometry_get(const Eo *obj, Elm_Colorselector_Data *pd, int *x, int *y, int *w, int *h);


void _elm_colorselector_elm_widget_access(Eo *obj, Elm_Colorselector_Data *pd, Eina_Bool acs);


Eina_Bool _elm_colorselector_elm_widget_widget_event(Eo *obj, Elm_Colorselector_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _elm_colorselector_elm_layout_sizing_eval(Eo *obj, Elm_Colorselector_Data *pd);


const Elm_Atspi_Action *_elm_colorselector_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Colorselector_Data *pd);


Eina_List *_elm_colorselector_elm_interface_atspi_accessible_children_get(Eo *obj, Elm_Colorselector_Data *pd);


static Eina_Bool
_elm_colorselector_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_COLORSELECTOR_EXTRA_OPS
#define ELM_COLORSELECTOR_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_colorselector_color_set, _elm_colorselector_color_set),
      EFL_OBJECT_OP_FUNC(elm_obj_colorselector_color_get, _elm_colorselector_color_get),
      EFL_OBJECT_OP_FUNC(elm_obj_colorselector_palette_name_set, _elm_colorselector_palette_name_set),
      EFL_OBJECT_OP_FUNC(elm_obj_colorselector_palette_name_get, _elm_colorselector_palette_name_get),
      EFL_OBJECT_OP_FUNC(elm_obj_colorselector_mode_set, _elm_colorselector_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_colorselector_mode_get, _elm_colorselector_mode_get),
      EFL_OBJECT_OP_FUNC(elm_obj_colorselector_palette_items_get, _elm_colorselector_palette_items_get),
      EFL_OBJECT_OP_FUNC(elm_obj_colorselector_palette_selected_item_get, _elm_colorselector_palette_selected_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_colorselector_palette_color_add, _elm_colorselector_palette_color_add),
      EFL_OBJECT_OP_FUNC(elm_obj_colorselector_palette_clear, _elm_colorselector_palette_clear),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_colorselector_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_colorselector_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_colorselector_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_colorselector_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_colorselector_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_highlight_geometry_get, _elm_colorselector_elm_widget_focus_highlight_geometry_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_colorselector_elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_colorselector_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_colorselector_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_colorselector_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_children_get, _elm_colorselector_elm_interface_atspi_accessible_children_get),
      ELM_COLORSELECTOR_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_COLORSELECTOR_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_COLORSELECTOR_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_colorselector_class_desc = {
   EO_VERSION,
   "Elm.Colorselector",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Colorselector_Data),
   _elm_colorselector_class_initializer,
   _elm_colorselector_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_colorselector_class_get, &_elm_colorselector_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, EFL_UI_CLICKABLE_INTERFACE, NULL);

EAPI void
elm_colorselector_color_set(Elm_Colorselector *obj, int r, int g, int b, int a)
{
   elm_obj_colorselector_color_set(obj, r, g, b, a);
}

EAPI void
elm_colorselector_color_get(const Elm_Colorselector *obj, int *r, int *g, int *b, int *a)
{
   elm_obj_colorselector_color_get(obj, r, g, b, a);
}

EAPI void
elm_colorselector_palette_name_set(Elm_Colorselector *obj, const char *palette_name)
{
   elm_obj_colorselector_palette_name_set(obj, palette_name);
}

EAPI const char *
elm_colorselector_palette_name_get(const Elm_Colorselector *obj)
{
   return elm_obj_colorselector_palette_name_get(obj);
}

EAPI void
elm_colorselector_mode_set(Elm_Colorselector *obj, Elm_Colorselector_Mode mode)
{
   elm_obj_colorselector_mode_set(obj, mode);
}

EAPI Elm_Colorselector_Mode
elm_colorselector_mode_get(const Elm_Colorselector *obj)
{
   return elm_obj_colorselector_mode_get(obj);
}

EAPI const Eina_List *
elm_colorselector_palette_items_get(const Elm_Colorselector *obj)
{
   return elm_obj_colorselector_palette_items_get(obj);
}

EAPI Elm_Widget_Item *
elm_colorselector_palette_selected_item_get(const Elm_Colorselector *obj)
{
   return elm_obj_colorselector_palette_selected_item_get(obj);
}

EAPI Elm_Widget_Item *
elm_colorselector_palette_color_add(Elm_Colorselector *obj, int r, int g, int b, int a)
{
   return elm_obj_colorselector_palette_color_add(obj, r, g, b, a);
}

EAPI void
elm_colorselector_palette_clear(Elm_Colorselector *obj)
{
   elm_obj_colorselector_palette_clear(obj);
}
