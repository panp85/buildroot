EWAPI const Efl_Event_Description _ELM_TOOLBAR_EVENT_ITEM_FOCUSED =
   EFL_EVENT_DESCRIPTION("item,focused");
EWAPI const Efl_Event_Description _ELM_TOOLBAR_EVENT_ITEM_UNFOCUSED =
   EFL_EVENT_DESCRIPTION("item,unfocused");

void _elm_toolbar_homogeneous_set(Eo *obj, Elm_Toolbar_Data *pd, Eina_Bool homogeneous);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_toolbar_homogeneous_set, EFL_FUNC_CALL(homogeneous), Eina_Bool homogeneous);

Eina_Bool _elm_toolbar_homogeneous_get(Eo *obj, Elm_Toolbar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_homogeneous_get, Eina_Bool, 0);

void _elm_toolbar_align_set(Eo *obj, Elm_Toolbar_Data *pd, double align);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_toolbar_align_set, EFL_FUNC_CALL(align), double align);

double _elm_toolbar_align_get(Eo *obj, Elm_Toolbar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_align_get, double, 0);

void _elm_toolbar_select_mode_set(Eo *obj, Elm_Toolbar_Data *pd, Elm_Object_Select_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_toolbar_select_mode_set, EFL_FUNC_CALL(mode), Elm_Object_Select_Mode mode);

Elm_Object_Select_Mode _elm_toolbar_select_mode_get(Eo *obj, Elm_Toolbar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_select_mode_get, Elm_Object_Select_Mode, 4 /* Elm.Object.Select_Mode.max */);

void _elm_toolbar_icon_size_set(Eo *obj, Elm_Toolbar_Data *pd, int icon_size);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_toolbar_icon_size_set, EFL_FUNC_CALL(icon_size), int icon_size);

int _elm_toolbar_icon_size_get(Eo *obj, Elm_Toolbar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_icon_size_get, int, 0);

void _elm_toolbar_shrink_mode_set(Eo *obj, Elm_Toolbar_Data *pd, Elm_Toolbar_Shrink_Mode shrink_mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_toolbar_shrink_mode_set, EFL_FUNC_CALL(shrink_mode), Elm_Toolbar_Shrink_Mode shrink_mode);

Elm_Toolbar_Shrink_Mode _elm_toolbar_shrink_mode_get(Eo *obj, Elm_Toolbar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_shrink_mode_get, Elm_Toolbar_Shrink_Mode, 0);

void _elm_toolbar_menu_parent_set(Eo *obj, Elm_Toolbar_Data *pd, Efl_Canvas_Object *parent);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_toolbar_menu_parent_set, EFL_FUNC_CALL(parent), Efl_Canvas_Object *parent);

Efl_Canvas_Object *_elm_toolbar_menu_parent_get(Eo *obj, Elm_Toolbar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_menu_parent_get, Efl_Canvas_Object *, NULL);

void _elm_toolbar_standard_priority_set(Eo *obj, Elm_Toolbar_Data *pd, int priority);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_toolbar_standard_priority_set, EFL_FUNC_CALL(priority), int priority);

int _elm_toolbar_standard_priority_get(Eo *obj, Elm_Toolbar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_standard_priority_get, int, 0);

Elm_Widget_Item *_elm_toolbar_more_item_get(Eo *obj, Elm_Toolbar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_more_item_get, Elm_Widget_Item *, NULL);

Elm_Widget_Item *_elm_toolbar_item_insert_before(Eo *obj, Elm_Toolbar_Data *pd, Elm_Widget_Item *before, const char *icon, const char *label, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_toolbar_item_insert_before, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(before, icon, label, func, data), Elm_Widget_Item *before, const char *icon, const char *label, Evas_Smart_Cb func, const void *data);

Elm_Widget_Item *_elm_toolbar_item_insert_after(Eo *obj, Elm_Toolbar_Data *pd, Elm_Widget_Item *after, const char *icon, const char *label, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_toolbar_item_insert_after, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(after, icon, label, func, data), Elm_Widget_Item *after, const char *icon, const char *label, Evas_Smart_Cb func, const void *data);

Elm_Widget_Item *_elm_toolbar_item_append(Eo *obj, Elm_Toolbar_Data *pd, const char *icon, const char *label, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_toolbar_item_append, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(icon, label, func, data), const char *icon, const char *label, Evas_Smart_Cb func, const void *data);

unsigned int _elm_toolbar_items_count(const Eo *obj, Elm_Toolbar_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_toolbar_items_count, unsigned int, 0);

Elm_Widget_Item *_elm_toolbar_item_prepend(Eo *obj, Elm_Toolbar_Data *pd, const char *icon, const char *label, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_toolbar_item_prepend, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(icon, label, func, data), const char *icon, const char *label, Evas_Smart_Cb func, const void *data);

Elm_Widget_Item *_elm_toolbar_item_find_by_label(const Eo *obj, Elm_Toolbar_Data *pd, const char *label);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_toolbar_item_find_by_label, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(label), const char *label);

Efl_Object *_elm_toolbar_efl_object_constructor(Eo *obj, Elm_Toolbar_Data *pd);


void _elm_toolbar_efl_gfx_position_set(Eo *obj, Elm_Toolbar_Data *pd, int x, int y);


void _elm_toolbar_efl_gfx_size_set(Eo *obj, Elm_Toolbar_Data *pd, int w, int h);


void _elm_toolbar_efl_canvas_group_group_calculate(Eo *obj, Elm_Toolbar_Data *pd);


void _elm_toolbar_efl_canvas_group_group_member_add(Eo *obj, Elm_Toolbar_Data *pd, Efl_Canvas_Object *sub_obj);


Eina_Bool _elm_toolbar_elm_widget_focus_next_manager_is(Eo *obj, Elm_Toolbar_Data *pd);


void _elm_toolbar_elm_widget_access(Eo *obj, Elm_Toolbar_Data *pd, Eina_Bool acs);


Eina_Bool _elm_toolbar_elm_widget_focus_next(Eo *obj, Elm_Toolbar_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Elm_Theme_Apply _elm_toolbar_elm_widget_theme_apply(Eo *obj, Elm_Toolbar_Data *pd);


Eina_Bool _elm_toolbar_elm_widget_on_focus(Eo *obj, Elm_Toolbar_Data *pd, Elm_Widget_Item *item);


Eina_Bool _elm_toolbar_elm_widget_translate(Eo *obj, Elm_Toolbar_Data *pd);


Eina_Bool _elm_toolbar_elm_widget_widget_event(Eo *obj, Elm_Toolbar_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _elm_toolbar_elm_widget_focus_highlight_geometry_get(const Eo *obj, Elm_Toolbar_Data *pd, int *x, int *y, int *w, int *h);


Elm_Widget_Item *_elm_toolbar_elm_widget_focused_item_get(Eo *obj, Elm_Toolbar_Data *pd);


void _elm_toolbar_efl_orientation_orientation_set(Eo *obj, Elm_Toolbar_Data *pd, Efl_Orient dir);


Efl_Orient _elm_toolbar_efl_orientation_orientation_get(Eo *obj, Elm_Toolbar_Data *pd);


Eina_Bool _elm_toolbar_elm_widget_focus_register(Eo *obj, Elm_Toolbar_Data *pd, Efl_Ui_Focus_Manager *manager, Efl_Ui_Focus_Object *logical, Eina_Bool *logical_flag);


const Elm_Atspi_Action *_elm_toolbar_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Toolbar_Data *pd);


Eina_List *_elm_toolbar_elm_interface_atspi_accessible_children_get(Eo *obj, Elm_Toolbar_Data *pd);


Elm_Atspi_State_Set _elm_toolbar_elm_interface_atspi_accessible_state_set_get(Eo *obj, Elm_Toolbar_Data *pd);


int _elm_toolbar_elm_interface_atspi_selection_selected_children_count_get(Eo *obj, Elm_Toolbar_Data *pd);


Efl_Object *_elm_toolbar_elm_interface_atspi_selection_selected_child_get(Eo *obj, Elm_Toolbar_Data *pd, int selected_child_index);


Eina_Bool _elm_toolbar_elm_interface_atspi_selection_selected_child_deselect(Eo *obj, Elm_Toolbar_Data *pd, int child_index);


Eina_Bool _elm_toolbar_elm_interface_atspi_selection_child_select(Eo *obj, Elm_Toolbar_Data *pd, int child_index);


Eina_Bool _elm_toolbar_elm_interface_atspi_selection_child_deselect(Eo *obj, Elm_Toolbar_Data *pd, int child_index);


Eina_Bool _elm_toolbar_elm_interface_atspi_selection_is_child_selected(Eo *obj, Elm_Toolbar_Data *pd, int child_index);


Eina_Bool _elm_toolbar_elm_interface_atspi_selection_all_children_select(Eo *obj, Elm_Toolbar_Data *pd);


Eina_Bool _elm_toolbar_elm_interface_atspi_selection_clear(Eo *obj, Elm_Toolbar_Data *pd);


Efl_Ui_Item *_elm_toolbar_efl_ui_menu_selected_item_get(Eo *obj, Elm_Toolbar_Data *pd);


Efl_Ui_Item *_elm_toolbar_efl_ui_menu_first_item_get(Eo *obj, Elm_Toolbar_Data *pd);


Efl_Ui_Item *_elm_toolbar_efl_ui_menu_last_item_get(Eo *obj, Elm_Toolbar_Data *pd);


Eina_Iterator *_elm_toolbar_efl_ui_menu_items_get(Eo *obj, Elm_Toolbar_Data *pd);


static Eina_Bool
_elm_toolbar_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_TOOLBAR_EXTRA_OPS
#define ELM_TOOLBAR_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_homogeneous_set, _elm_toolbar_homogeneous_set),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_homogeneous_get, _elm_toolbar_homogeneous_get),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_align_set, _elm_toolbar_align_set),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_align_get, _elm_toolbar_align_get),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_select_mode_set, _elm_toolbar_select_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_select_mode_get, _elm_toolbar_select_mode_get),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_icon_size_set, _elm_toolbar_icon_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_icon_size_get, _elm_toolbar_icon_size_get),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_shrink_mode_set, _elm_toolbar_shrink_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_shrink_mode_get, _elm_toolbar_shrink_mode_get),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_menu_parent_set, _elm_toolbar_menu_parent_set),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_menu_parent_get, _elm_toolbar_menu_parent_get),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_standard_priority_set, _elm_toolbar_standard_priority_set),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_standard_priority_get, _elm_toolbar_standard_priority_get),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_more_item_get, _elm_toolbar_more_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_insert_before, _elm_toolbar_item_insert_before),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_insert_after, _elm_toolbar_item_insert_after),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_append, _elm_toolbar_item_append),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_items_count, _elm_toolbar_items_count),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_prepend, _elm_toolbar_item_prepend),
      EFL_OBJECT_OP_FUNC(elm_obj_toolbar_item_find_by_label, _elm_toolbar_item_find_by_label),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_toolbar_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _elm_toolbar_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _elm_toolbar_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _elm_toolbar_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_add, _elm_toolbar_efl_canvas_group_group_member_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_toolbar_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_toolbar_elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_toolbar_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_toolbar_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _elm_toolbar_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_translate, _elm_toolbar_elm_widget_translate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_toolbar_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_highlight_geometry_get, _elm_toolbar_elm_widget_focus_highlight_geometry_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focused_item_get, _elm_toolbar_elm_widget_focused_item_get),
      EFL_OBJECT_OP_FUNC(efl_orientation_set, _elm_toolbar_efl_orientation_orientation_set),
      EFL_OBJECT_OP_FUNC(efl_orientation_get, _elm_toolbar_efl_orientation_orientation_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_register, _elm_toolbar_elm_widget_focus_register),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_toolbar_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_children_get, _elm_toolbar_elm_interface_atspi_accessible_children_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _elm_toolbar_elm_interface_atspi_accessible_state_set_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_children_count_get, _elm_toolbar_elm_interface_atspi_selection_selected_children_count_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_child_get, _elm_toolbar_elm_interface_atspi_selection_selected_child_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_child_deselect, _elm_toolbar_elm_interface_atspi_selection_selected_child_deselect),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_child_select, _elm_toolbar_elm_interface_atspi_selection_child_select),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_child_deselect, _elm_toolbar_elm_interface_atspi_selection_child_deselect),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_is_child_selected, _elm_toolbar_elm_interface_atspi_selection_is_child_selected),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_all_children_select, _elm_toolbar_elm_interface_atspi_selection_all_children_select),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_clear, _elm_toolbar_elm_interface_atspi_selection_clear),
      EFL_OBJECT_OP_FUNC(efl_ui_menu_selected_item_get, _elm_toolbar_efl_ui_menu_selected_item_get),
      EFL_OBJECT_OP_FUNC(efl_ui_menu_first_item_get, _elm_toolbar_efl_ui_menu_first_item_get),
      EFL_OBJECT_OP_FUNC(efl_ui_menu_last_item_get, _elm_toolbar_efl_ui_menu_last_item_get),
      EFL_OBJECT_OP_FUNC(efl_ui_menu_items_get, _elm_toolbar_efl_ui_menu_items_get),
      ELM_TOOLBAR_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_TOOLBAR_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_TOOLBAR_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_toolbar_class_desc = {
   EO_VERSION,
   "Elm.Toolbar",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Toolbar_Data),
   _elm_toolbar_class_initializer,
   _elm_toolbar_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_toolbar_class_get, &_elm_toolbar_class_desc, ELM_WIDGET_CLASS, ELM_INTERFACE_SCROLLABLE_MIXIN, EFL_ORIENTATION_INTERFACE, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, ELM_INTERFACE_ATSPI_SELECTION_INTERFACE, EFL_UI_CLICKABLE_INTERFACE, EFL_UI_SELECTABLE_INTERFACE, EFL_UI_MENU_INTERFACE, NULL);

EAPI void
elm_toolbar_homogeneous_set(Elm_Toolbar *obj, Eina_Bool homogeneous)
{
   elm_obj_toolbar_homogeneous_set(obj, homogeneous);
}

EAPI Eina_Bool
elm_toolbar_homogeneous_get(const Elm_Toolbar *obj)
{
   return elm_obj_toolbar_homogeneous_get(obj);
}

EAPI void
elm_toolbar_align_set(Elm_Toolbar *obj, double align)
{
   elm_obj_toolbar_align_set(obj, align);
}

EAPI double
elm_toolbar_align_get(const Elm_Toolbar *obj)
{
   return elm_obj_toolbar_align_get(obj);
}

EAPI void
elm_toolbar_select_mode_set(Elm_Toolbar *obj, Elm_Object_Select_Mode mode)
{
   elm_obj_toolbar_select_mode_set(obj, mode);
}

EAPI Elm_Object_Select_Mode
elm_toolbar_select_mode_get(const Elm_Toolbar *obj)
{
   return elm_obj_toolbar_select_mode_get(obj);
}

EAPI void
elm_toolbar_icon_size_set(Elm_Toolbar *obj, int icon_size)
{
   elm_obj_toolbar_icon_size_set(obj, icon_size);
}

EAPI int
elm_toolbar_icon_size_get(const Elm_Toolbar *obj)
{
   return elm_obj_toolbar_icon_size_get(obj);
}

EAPI void
elm_toolbar_shrink_mode_set(Elm_Toolbar *obj, Elm_Toolbar_Shrink_Mode shrink_mode)
{
   elm_obj_toolbar_shrink_mode_set(obj, shrink_mode);
}

EAPI Elm_Toolbar_Shrink_Mode
elm_toolbar_shrink_mode_get(const Elm_Toolbar *obj)
{
   return elm_obj_toolbar_shrink_mode_get(obj);
}

EAPI void
elm_toolbar_menu_parent_set(Elm_Toolbar *obj, Efl_Canvas_Object *parent)
{
   elm_obj_toolbar_menu_parent_set(obj, parent);
}

EAPI Efl_Canvas_Object *
elm_toolbar_menu_parent_get(const Elm_Toolbar *obj)
{
   return elm_obj_toolbar_menu_parent_get(obj);
}

EAPI void
elm_toolbar_standard_priority_set(Elm_Toolbar *obj, int priority)
{
   elm_obj_toolbar_standard_priority_set(obj, priority);
}

EAPI int
elm_toolbar_standard_priority_get(const Elm_Toolbar *obj)
{
   return elm_obj_toolbar_standard_priority_get(obj);
}

EAPI Elm_Widget_Item *
elm_toolbar_more_item_get(const Elm_Toolbar *obj)
{
   return elm_obj_toolbar_more_item_get(obj);
}

EAPI Elm_Widget_Item *
elm_toolbar_item_insert_before(Elm_Toolbar *obj, Elm_Widget_Item *before, const char *icon, const char *label, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_toolbar_item_insert_before(obj, before, icon, label, func, data);
}

EAPI Elm_Widget_Item *
elm_toolbar_item_insert_after(Elm_Toolbar *obj, Elm_Widget_Item *after, const char *icon, const char *label, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_toolbar_item_insert_after(obj, after, icon, label, func, data);
}

EAPI Elm_Widget_Item *
elm_toolbar_item_append(Elm_Toolbar *obj, const char *icon, const char *label, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_toolbar_item_append(obj, icon, label, func, data);
}

EAPI unsigned int
elm_toolbar_items_count(const Elm_Toolbar *obj)
{
   return elm_obj_toolbar_items_count(obj);
}

EAPI Elm_Widget_Item *
elm_toolbar_item_prepend(Elm_Toolbar *obj, const char *icon, const char *label, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_toolbar_item_prepend(obj, icon, label, func, data);
}

EAPI Elm_Widget_Item *
elm_toolbar_item_find_by_label(const Elm_Toolbar *obj, const char *label)
{
   return elm_obj_toolbar_item_find_by_label(obj, label);
}
