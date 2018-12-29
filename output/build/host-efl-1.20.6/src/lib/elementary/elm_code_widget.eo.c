EWAPI const Efl_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_LINE_CLICKED =
   EFL_EVENT_DESCRIPTION("line,clicked");
EWAPI const Efl_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_LINE_GUTTER_CLICKED =
   EFL_EVENT_DESCRIPTION("line,gutter,clicked");
EWAPI const Efl_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_CURSOR_CHANGED =
   EFL_EVENT_DESCRIPTION("cursor,changed");
EWAPI const Efl_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_CHANGED_USER =
   EFL_EVENT_DESCRIPTION("changed,user");
EWAPI const Efl_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_START =
   EFL_EVENT_DESCRIPTION("selection,start");
EWAPI const Efl_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_CHANGED =
   EFL_EVENT_DESCRIPTION("selection,changed");
EWAPI const Efl_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_CLEARED =
   EFL_EVENT_DESCRIPTION("selection,cleared");
EWAPI const Efl_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_CUT =
   EFL_EVENT_DESCRIPTION("selection,cut");
EWAPI const Efl_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_COPY =
   EFL_EVENT_DESCRIPTION("selection,copy");
EWAPI const Efl_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_PASTE =
   EFL_EVENT_DESCRIPTION("selection,paste");

void _elm_code_widget_code_set(Eo *obj, Elm_Code_Widget_Data *pd, Elm_Code *code);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_code_widget_code_set, EFL_FUNC_CALL(code), Elm_Code *code);

Elm_Code *_elm_code_widget_code_get(Eo *obj, Elm_Code_Widget_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_code_widget_code_get, Elm_Code *, NULL);

void _elm_code_widget_font_set(Eo *obj, Elm_Code_Widget_Data *pd, const char *name, int size);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_code_widget_font_set, EFL_FUNC_CALL(name, size), const char *name, int size);

void _elm_code_widget_font_get(Eo *obj, Elm_Code_Widget_Data *pd, const char **name, int *size);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_code_widget_font_get, EFL_FUNC_CALL(name, size), const char **name, int *size);

unsigned int _elm_code_widget_columns_get(Eo *obj, Elm_Code_Widget_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_code_widget_columns_get, unsigned int, 0);

void _elm_code_widget_gravity_set(Eo *obj, Elm_Code_Widget_Data *pd, double x, double y);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_code_widget_gravity_set, EFL_FUNC_CALL(x, y), double x, double y);

void _elm_code_widget_gravity_get(Eo *obj, Elm_Code_Widget_Data *pd, double *x, double *y);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_code_widget_gravity_get, EFL_FUNC_CALL(x, y), double *x, double *y);

void _elm_code_widget_policy_set(Eo *obj, Elm_Code_Widget_Data *pd, Elm_Scroller_Policy policy_h, Elm_Scroller_Policy policy_v);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_code_widget_policy_set, EFL_FUNC_CALL(policy_h, policy_v), Elm_Scroller_Policy policy_h, Elm_Scroller_Policy policy_v);

void _elm_code_widget_policy_get(Eo *obj, Elm_Code_Widget_Data *pd, Elm_Scroller_Policy *policy_h, Elm_Scroller_Policy *policy_v);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_code_widget_policy_get, EFL_FUNC_CALL(policy_h, policy_v), Elm_Scroller_Policy *policy_h, Elm_Scroller_Policy *policy_v);

void _elm_code_widget_tabstop_set(Eo *obj, Elm_Code_Widget_Data *pd, unsigned int tabstop);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_code_widget_tabstop_set, EFL_FUNC_CALL(tabstop), unsigned int tabstop);

unsigned int _elm_code_widget_tabstop_get(Eo *obj, Elm_Code_Widget_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_code_widget_tabstop_get, unsigned int, 0);

void _elm_code_widget_editable_set(Eo *obj, Elm_Code_Widget_Data *pd, Eina_Bool editable);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_code_widget_editable_set, EFL_FUNC_CALL(editable), Eina_Bool editable);

Eina_Bool _elm_code_widget_editable_get(Eo *obj, Elm_Code_Widget_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_code_widget_editable_get, Eina_Bool, 0);

void _elm_code_widget_line_numbers_set(Eo *obj, Elm_Code_Widget_Data *pd, Eina_Bool line_numbers);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_code_widget_line_numbers_set, EFL_FUNC_CALL(line_numbers), Eina_Bool line_numbers);

Eina_Bool _elm_code_widget_line_numbers_get(Eo *obj, Elm_Code_Widget_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_code_widget_line_numbers_get, Eina_Bool, 0);

void _elm_code_widget_line_width_marker_set(Eo *obj, Elm_Code_Widget_Data *pd, unsigned int line_width_marker);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_code_widget_line_width_marker_set, EFL_FUNC_CALL(line_width_marker), unsigned int line_width_marker);

unsigned int _elm_code_widget_line_width_marker_get(Eo *obj, Elm_Code_Widget_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_code_widget_line_width_marker_get, unsigned int, 0);

void _elm_code_widget_show_whitespace_set(Eo *obj, Elm_Code_Widget_Data *pd, Eina_Bool show_whitespace);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_code_widget_show_whitespace_set, EFL_FUNC_CALL(show_whitespace), Eina_Bool show_whitespace);

Eina_Bool _elm_code_widget_show_whitespace_get(Eo *obj, Elm_Code_Widget_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_code_widget_show_whitespace_get, Eina_Bool, 0);

void _elm_code_widget_syntax_enabled_set(Eo *obj, Elm_Code_Widget_Data *pd, Eina_Bool syntax_enabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_code_widget_syntax_enabled_set, EFL_FUNC_CALL(syntax_enabled), Eina_Bool syntax_enabled);

Eina_Bool _elm_code_widget_syntax_enabled_get(Eo *obj, Elm_Code_Widget_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_code_widget_syntax_enabled_get, Eina_Bool, 0);

void _elm_code_widget_tab_inserts_spaces_set(Eo *obj, Elm_Code_Widget_Data *pd, Eina_Bool tab_inserts_spaces);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_code_widget_tab_inserts_spaces_set, EFL_FUNC_CALL(tab_inserts_spaces), Eina_Bool tab_inserts_spaces);

Eina_Bool _elm_code_widget_tab_inserts_spaces_get(Eo *obj, Elm_Code_Widget_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_code_widget_tab_inserts_spaces_get, Eina_Bool, 0);

void _elm_code_widget_cursor_position_set(Eo *obj, Elm_Code_Widget_Data *pd, unsigned int row, unsigned int col);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_code_widget_cursor_position_set, EFL_FUNC_CALL(row, col), unsigned int row, unsigned int col);

void _elm_code_widget_cursor_position_get(Eo *obj, Elm_Code_Widget_Data *pd, unsigned int *row, unsigned int *col);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_code_widget_cursor_position_get, EFL_FUNC_CALL(row, col), unsigned int *row, unsigned int *col);

void _elm_code_widget_line_refresh(Eo *obj, Elm_Code_Widget_Data *pd, Elm_Code_Line *line);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_code_widget_line_refresh, EFL_FUNC_CALL(line), Elm_Code_Line *line);

Eina_Bool _elm_code_widget_line_visible_get(Eo *obj, Elm_Code_Widget_Data *pd, Elm_Code_Line *line);

EOAPI EFL_FUNC_BODYV(elm_obj_code_widget_line_visible_get, Eina_Bool, 0, EFL_FUNC_CALL(line), Elm_Code_Line *line);

unsigned int _elm_code_widget_lines_visible_get(Eo *obj, Elm_Code_Widget_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_code_widget_lines_visible_get, unsigned int, 0);

Eina_Bool _elm_code_widget_position_at_coordinates_get(Eo *obj, Elm_Code_Widget_Data *pd, int x, int y, unsigned int *row, int *col);

EOAPI EFL_FUNC_BODYV(elm_obj_code_widget_position_at_coordinates_get, Eina_Bool, 0, EFL_FUNC_CALL(x, y, row, col), int x, int y, unsigned int *row, int *col);

Eina_Bool _elm_code_widget_geometry_for_position_get(Eo *obj, Elm_Code_Widget_Data *pd, unsigned int row, int col, int *x, int *y, int *w, int *h);

EOAPI EFL_FUNC_BODYV(elm_obj_code_widget_geometry_for_position_get, Eina_Bool, 0, EFL_FUNC_CALL(row, col, x, y, w, h), unsigned int row, int col, int *x, int *y, int *w, int *h);

int _elm_code_widget_text_left_gutter_width_get(Eo *obj, Elm_Code_Widget_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_code_widget_text_left_gutter_width_get, int, 0);

char *_elm_code_widget_text_between_positions_get(Eo *obj, Elm_Code_Widget_Data *pd, unsigned int start_line, unsigned int start_col, unsigned int end_line, unsigned int end_col);

EOAPI EFL_FUNC_BODYV(elm_obj_code_widget_text_between_positions_get, char *, NULL, EFL_FUNC_CALL(start_line, start_col, end_line, end_col), unsigned int start_line, unsigned int start_col, unsigned int end_line, unsigned int end_col);

void _elm_code_widget_text_at_cursor_insert(Eo *obj, Elm_Code_Widget_Data *pd, const char *text);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_code_widget_text_at_cursor_insert, EFL_FUNC_CALL(text), const char *text);

unsigned int _elm_code_widget_line_text_column_width_to_position(Eo *obj, Elm_Code_Widget_Data *pd, Elm_Code_Line *line, unsigned int position);

EOAPI EFL_FUNC_BODYV(elm_obj_code_widget_line_text_column_width_to_position, unsigned int, 0, EFL_FUNC_CALL(line, position), Elm_Code_Line *line, unsigned int position);

unsigned int _elm_code_widget_line_text_column_width_get(Eo *obj, Elm_Code_Widget_Data *pd, Elm_Code_Line *line);

EOAPI EFL_FUNC_BODYV(elm_obj_code_widget_line_text_column_width_get, unsigned int, 0, EFL_FUNC_CALL(line), Elm_Code_Line *line);

unsigned int _elm_code_widget_line_text_position_for_column_get(Eo *obj, Elm_Code_Widget_Data *pd, Elm_Code_Line *line, unsigned int column);

EOAPI EFL_FUNC_BODYV(elm_obj_code_widget_line_text_position_for_column_get, unsigned int, 0, EFL_FUNC_CALL(line, column), Elm_Code_Line *line, unsigned int column);

unsigned int _elm_code_widget_text_tabwidth_at_column_get(Eo *obj, Elm_Code_Widget_Data *pd, unsigned int column);

EOAPI EFL_FUNC_BODYV(elm_obj_code_widget_text_tabwidth_at_column_get, unsigned int, 0, EFL_FUNC_CALL(column), unsigned int column);

void _elm_code_widget_line_status_toggle(Eo *obj, Elm_Code_Widget_Data *pd, Elm_Code_Line *line);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_code_widget_line_status_toggle, EFL_FUNC_CALL(line), Elm_Code_Line *line);

void _elm_code_widget_undo(Eo *obj, Elm_Code_Widget_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_code_widget_undo);

Eina_Bool _elm_code_widget_can_undo_get(Eo *obj, Elm_Code_Widget_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_code_widget_can_undo_get, Eina_Bool, 0);

void _elm_code_widget_redo(Eo *obj, Elm_Code_Widget_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_code_widget_redo);

Eina_Bool _elm_code_widget_can_redo_get(Eo *obj, Elm_Code_Widget_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_code_widget_can_redo_get, Eina_Bool, 0);

Efl_Object *_elm_code_widget_efl_object_constructor(Eo *obj, Elm_Code_Widget_Data *pd);


Efl_Object *_elm_code_widget_efl_object_finalize(Eo *obj, Elm_Code_Widget_Data *pd);


Eina_Bool _elm_code_widget_elm_widget_widget_event(Eo *obj, Elm_Code_Widget_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


Eina_Bool _elm_code_widget_elm_widget_focus_next_manager_is(Eo *obj, Elm_Code_Widget_Data *pd);


Eina_Bool _elm_code_widget_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Code_Widget_Data *pd);


static Eina_Bool
_elm_code_widget_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_CODE_WIDGET_EXTRA_OPS
#define ELM_CODE_WIDGET_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_code_set, _elm_code_widget_code_set),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_code_get, _elm_code_widget_code_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_font_set, _elm_code_widget_font_set),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_font_get, _elm_code_widget_font_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_columns_get, _elm_code_widget_columns_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_gravity_set, _elm_code_widget_gravity_set),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_gravity_get, _elm_code_widget_gravity_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_policy_set, _elm_code_widget_policy_set),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_policy_get, _elm_code_widget_policy_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_tabstop_set, _elm_code_widget_tabstop_set),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_tabstop_get, _elm_code_widget_tabstop_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_editable_set, _elm_code_widget_editable_set),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_editable_get, _elm_code_widget_editable_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_line_numbers_set, _elm_code_widget_line_numbers_set),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_line_numbers_get, _elm_code_widget_line_numbers_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_line_width_marker_set, _elm_code_widget_line_width_marker_set),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_line_width_marker_get, _elm_code_widget_line_width_marker_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_show_whitespace_set, _elm_code_widget_show_whitespace_set),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_show_whitespace_get, _elm_code_widget_show_whitespace_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_syntax_enabled_set, _elm_code_widget_syntax_enabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_syntax_enabled_get, _elm_code_widget_syntax_enabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_tab_inserts_spaces_set, _elm_code_widget_tab_inserts_spaces_set),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_tab_inserts_spaces_get, _elm_code_widget_tab_inserts_spaces_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_cursor_position_set, _elm_code_widget_cursor_position_set),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_cursor_position_get, _elm_code_widget_cursor_position_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_line_refresh, _elm_code_widget_line_refresh),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_line_visible_get, _elm_code_widget_line_visible_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_lines_visible_get, _elm_code_widget_lines_visible_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_position_at_coordinates_get, _elm_code_widget_position_at_coordinates_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_geometry_for_position_get, _elm_code_widget_geometry_for_position_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_text_left_gutter_width_get, _elm_code_widget_text_left_gutter_width_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_text_between_positions_get, _elm_code_widget_text_between_positions_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_text_at_cursor_insert, _elm_code_widget_text_at_cursor_insert),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_line_text_column_width_to_position, _elm_code_widget_line_text_column_width_to_position),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_line_text_column_width_get, _elm_code_widget_line_text_column_width_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_line_text_position_for_column_get, _elm_code_widget_line_text_position_for_column_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_text_tabwidth_at_column_get, _elm_code_widget_text_tabwidth_at_column_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_line_status_toggle, _elm_code_widget_line_status_toggle),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_undo, _elm_code_widget_undo),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_can_undo_get, _elm_code_widget_can_undo_get),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_redo, _elm_code_widget_redo),
      EFL_OBJECT_OP_FUNC(elm_obj_code_widget_can_redo_get, _elm_code_widget_can_redo_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_code_widget_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _elm_code_widget_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_code_widget_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_code_widget_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_code_widget_elm_widget_focus_direction_manager_is),
      ELM_CODE_WIDGET_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_CODE_WIDGET_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_CODE_WIDGET_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_code_widget_class_desc = {
   EO_VERSION,
   "Elm.Code_Widget",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Code_Widget_Data),
   _elm_code_widget_class_initializer,
   _elm_code_widget_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_code_widget_class_get, &_elm_code_widget_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_ATSPI_TEXT_INTERFACE, NULL);

EAPI void
elm_code_widget_code_set(Elm_Code_Widget *obj, Elm_Code *code)
{
   elm_obj_code_widget_code_set(obj, code);
}

EAPI Elm_Code *
elm_code_widget_code_get(const Elm_Code_Widget *obj)
{
   return elm_obj_code_widget_code_get(obj);
}

EAPI void
elm_code_widget_font_set(Elm_Code_Widget *obj, const char *name, int size)
{
   elm_obj_code_widget_font_set(obj, name, size);
}

EAPI void
elm_code_widget_font_get(const Elm_Code_Widget *obj, const char **name, int *size)
{
   elm_obj_code_widget_font_get(obj, name, size);
}

EAPI unsigned int
elm_code_widget_columns_get(const Elm_Code_Widget *obj)
{
   return elm_obj_code_widget_columns_get(obj);
}

EAPI void
elm_code_widget_gravity_set(Elm_Code_Widget *obj, double x, double y)
{
   elm_obj_code_widget_gravity_set(obj, x, y);
}

EAPI void
elm_code_widget_gravity_get(const Elm_Code_Widget *obj, double *x, double *y)
{
   elm_obj_code_widget_gravity_get(obj, x, y);
}

EAPI void
elm_code_widget_policy_set(Elm_Code_Widget *obj, Elm_Scroller_Policy policy_h, Elm_Scroller_Policy policy_v)
{
   elm_obj_code_widget_policy_set(obj, policy_h, policy_v);
}

EAPI void
elm_code_widget_policy_get(const Elm_Code_Widget *obj, Elm_Scroller_Policy *policy_h, Elm_Scroller_Policy *policy_v)
{
   elm_obj_code_widget_policy_get(obj, policy_h, policy_v);
}

EAPI void
elm_code_widget_tabstop_set(Elm_Code_Widget *obj, unsigned int tabstop)
{
   elm_obj_code_widget_tabstop_set(obj, tabstop);
}

EAPI unsigned int
elm_code_widget_tabstop_get(const Elm_Code_Widget *obj)
{
   return elm_obj_code_widget_tabstop_get(obj);
}

EAPI void
elm_code_widget_editable_set(Elm_Code_Widget *obj, Eina_Bool editable)
{
   elm_obj_code_widget_editable_set(obj, editable);
}

EAPI Eina_Bool
elm_code_widget_editable_get(const Elm_Code_Widget *obj)
{
   return elm_obj_code_widget_editable_get(obj);
}

EAPI void
elm_code_widget_line_numbers_set(Elm_Code_Widget *obj, Eina_Bool line_numbers)
{
   elm_obj_code_widget_line_numbers_set(obj, line_numbers);
}

EAPI Eina_Bool
elm_code_widget_line_numbers_get(const Elm_Code_Widget *obj)
{
   return elm_obj_code_widget_line_numbers_get(obj);
}

EAPI void
elm_code_widget_line_width_marker_set(Elm_Code_Widget *obj, unsigned int line_width_marker)
{
   elm_obj_code_widget_line_width_marker_set(obj, line_width_marker);
}

EAPI unsigned int
elm_code_widget_line_width_marker_get(const Elm_Code_Widget *obj)
{
   return elm_obj_code_widget_line_width_marker_get(obj);
}

EAPI void
elm_code_widget_show_whitespace_set(Elm_Code_Widget *obj, Eina_Bool show_whitespace)
{
   elm_obj_code_widget_show_whitespace_set(obj, show_whitespace);
}

EAPI Eina_Bool
elm_code_widget_show_whitespace_get(const Elm_Code_Widget *obj)
{
   return elm_obj_code_widget_show_whitespace_get(obj);
}

EAPI void
elm_code_widget_syntax_enabled_set(Elm_Code_Widget *obj, Eina_Bool syntax_enabled)
{
   elm_obj_code_widget_syntax_enabled_set(obj, syntax_enabled);
}

EAPI Eina_Bool
elm_code_widget_syntax_enabled_get(const Elm_Code_Widget *obj)
{
   return elm_obj_code_widget_syntax_enabled_get(obj);
}

EAPI void
elm_code_widget_tab_inserts_spaces_set(Elm_Code_Widget *obj, Eina_Bool tab_inserts_spaces)
{
   elm_obj_code_widget_tab_inserts_spaces_set(obj, tab_inserts_spaces);
}

EAPI Eina_Bool
elm_code_widget_tab_inserts_spaces_get(const Elm_Code_Widget *obj)
{
   return elm_obj_code_widget_tab_inserts_spaces_get(obj);
}

EAPI void
elm_code_widget_cursor_position_set(Elm_Code_Widget *obj, unsigned int row, unsigned int col)
{
   elm_obj_code_widget_cursor_position_set(obj, row, col);
}

EAPI void
elm_code_widget_cursor_position_get(const Elm_Code_Widget *obj, unsigned int *row, unsigned int *col)
{
   elm_obj_code_widget_cursor_position_get(obj, row, col);
}

EAPI void
elm_code_widget_line_refresh(Elm_Code_Widget *obj, Elm_Code_Line *line)
{
   elm_obj_code_widget_line_refresh(obj, line);
}

EAPI Eina_Bool
elm_code_widget_line_visible_get(Elm_Code_Widget *obj, Elm_Code_Line *line)
{
   return elm_obj_code_widget_line_visible_get(obj, line);
}

EAPI unsigned int
elm_code_widget_lines_visible_get(Elm_Code_Widget *obj)
{
   return elm_obj_code_widget_lines_visible_get(obj);
}

EAPI Eina_Bool
elm_code_widget_position_at_coordinates_get(Elm_Code_Widget *obj, int x, int y, unsigned int *row, int *col)
{
   return elm_obj_code_widget_position_at_coordinates_get(obj, x, y, row, col);
}

EAPI Eina_Bool
elm_code_widget_geometry_for_position_get(Elm_Code_Widget *obj, unsigned int row, int col, int *x, int *y, int *w, int *h)
{
   return elm_obj_code_widget_geometry_for_position_get(obj, row, col, x, y, w, h);
}

EAPI int
elm_code_widget_text_left_gutter_width_get(Elm_Code_Widget *obj)
{
   return elm_obj_code_widget_text_left_gutter_width_get(obj);
}

EAPI char *
elm_code_widget_text_between_positions_get(Elm_Code_Widget *obj, unsigned int start_line, unsigned int start_col, unsigned int end_line, unsigned int end_col)
{
   return elm_obj_code_widget_text_between_positions_get(obj, start_line, start_col, end_line, end_col);
}

EAPI void
elm_code_widget_text_at_cursor_insert(Elm_Code_Widget *obj, const char *text)
{
   elm_obj_code_widget_text_at_cursor_insert(obj, text);
}

EAPI unsigned int
elm_code_widget_line_text_column_width_to_position(Elm_Code_Widget *obj, Elm_Code_Line *line, unsigned int position)
{
   return elm_obj_code_widget_line_text_column_width_to_position(obj, line, position);
}

EAPI unsigned int
elm_code_widget_line_text_column_width_get(Elm_Code_Widget *obj, Elm_Code_Line *line)
{
   return elm_obj_code_widget_line_text_column_width_get(obj, line);
}

EAPI unsigned int
elm_code_widget_line_text_position_for_column_get(Elm_Code_Widget *obj, Elm_Code_Line *line, unsigned int column)
{
   return elm_obj_code_widget_line_text_position_for_column_get(obj, line, column);
}

EAPI unsigned int
elm_code_widget_text_tabwidth_at_column_get(Elm_Code_Widget *obj, unsigned int column)
{
   return elm_obj_code_widget_text_tabwidth_at_column_get(obj, column);
}

EAPI void
elm_code_widget_line_status_toggle(Elm_Code_Widget *obj, Elm_Code_Line *line)
{
   elm_obj_code_widget_line_status_toggle(obj, line);
}

EAPI void
elm_code_widget_undo(Elm_Code_Widget *obj)
{
   elm_obj_code_widget_undo(obj);
}

EAPI Eina_Bool
elm_code_widget_can_undo_get(Elm_Code_Widget *obj)
{
   return elm_obj_code_widget_can_undo_get(obj);
}

EAPI void
elm_code_widget_redo(Elm_Code_Widget *obj)
{
   elm_obj_code_widget_redo(obj);
}

EAPI Eina_Bool
elm_code_widget_can_redo_get(Elm_Code_Widget *obj)
{
   return elm_obj_code_widget_can_redo_get(obj);
}
