-- EFL LuaJIT bindings: elm_code_widget.eo (class Elm.Code_Widget)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_code_widget_class_get()
    eo.class_register("Elm_Code_Widget", {"Elm_Layout"}, {"Elm_Interface_Atspi_Text"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_code_widget_class_get(void);
    void elm_obj_code_widget_code_set(Elm_Code * code);
    Elm_Code *elm_obj_code_widget_code_get(void);
    void elm_obj_code_widget_font_set(const char * name, int size);
    void elm_obj_code_widget_font_get(const char * *name, int *size);
    unsigned int elm_obj_code_widget_columns_get(void);
    void elm_obj_code_widget_gravity_set(double x, double y);
    void elm_obj_code_widget_gravity_get(double *x, double *y);
    void elm_obj_code_widget_policy_set(Elm_Scroller_Policy policy_h, Elm_Scroller_Policy policy_v);
    void elm_obj_code_widget_policy_get(Elm_Scroller_Policy *policy_h, Elm_Scroller_Policy *policy_v);
    void elm_obj_code_widget_tabstop_set(unsigned int tabstop);
    unsigned int elm_obj_code_widget_tabstop_get(void);
    void elm_obj_code_widget_editable_set(Eina_Bool editable);
    Eina_Bool elm_obj_code_widget_editable_get(void);
    void elm_obj_code_widget_line_numbers_set(Eina_Bool line_numbers);
    Eina_Bool elm_obj_code_widget_line_numbers_get(void);
    void elm_obj_code_widget_line_width_marker_set(unsigned int line_width_marker);
    unsigned int elm_obj_code_widget_line_width_marker_get(void);
    void elm_obj_code_widget_show_whitespace_set(Eina_Bool show_whitespace);
    Eina_Bool elm_obj_code_widget_show_whitespace_get(void);
    void elm_obj_code_widget_syntax_enabled_set(Eina_Bool syntax_enabled);
    Eina_Bool elm_obj_code_widget_syntax_enabled_get(void);
    void elm_obj_code_widget_tab_inserts_spaces_set(Eina_Bool tab_inserts_spaces);
    Eina_Bool elm_obj_code_widget_tab_inserts_spaces_get(void);
    void elm_obj_code_widget_cursor_position_set(unsigned int row, unsigned int col);
    void elm_obj_code_widget_cursor_position_get(unsigned int *row, unsigned int *col);
    void elm_obj_code_widget_line_refresh(Elm_Code_Line * line);
    Eina_Bool elm_obj_code_widget_line_visible_get(Elm_Code_Line * line);
    unsigned int elm_obj_code_widget_lines_visible_get(void);
    Eina_Bool elm_obj_code_widget_position_at_coordinates_get(int x, int y, unsigned int * row, int * col);
    Eina_Bool elm_obj_code_widget_geometry_for_position_get(unsigned int row, int col, int * x, int * y, int * w, int * h);
    int elm_obj_code_widget_text_left_gutter_width_get(void);
    char *elm_obj_code_widget_text_between_positions_get(unsigned int start_line, unsigned int start_col, unsigned int end_line, unsigned int end_col);
    void elm_obj_code_widget_text_at_cursor_insert(const char * text);
    unsigned int elm_obj_code_widget_line_text_column_width_to_position(Elm_Code_Line * line, unsigned int position);
    unsigned int elm_obj_code_widget_line_text_column_width_get(Elm_Code_Line * line);
    unsigned int elm_obj_code_widget_line_text_position_for_column_get(Elm_Code_Line * line, unsigned int column);
    unsigned int elm_obj_code_widget_text_tabwidth_at_column_get(unsigned int column);
    void elm_obj_code_widget_line_status_toggle(Elm_Code_Line * line);
    void elm_obj_code_widget_undo(void);
    Eina_Bool elm_obj_code_widget_can_undo_get(void);
    void elm_obj_code_widget_redo(void);
    Eina_Bool elm_obj_code_widget_can_redo_get(void);
    extern const Eo_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_LINE_CLICKED;
    extern const Eo_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_LINE_GUTTER_CLICKED;
    extern const Eo_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_CURSOR_CHANGED;
    extern const Eo_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_CHANGED_USER;
    extern const Eo_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_START;
    extern const Eo_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_CHANGED;
    extern const Eo_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_CLEARED;
    extern const Eo_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_CUT;
    extern const Eo_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_COPY;
    extern const Eo_Event_Description _ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_PASTE;
]]

__body = {
    __eo_ctor = function(self, code, __func)
        self:code_set(code)
        if __func then __func() end
    end,

    code_set = function(self, code)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_code_set(code)
        eo.__do_end()
    end,

    code_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_code_get()
        eo.__do_end()
        return v
    end,

    font_set = function(self, name, size)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_font_set(name, size)
        eo.__do_end()
    end,

    font_get = function(self)
        eo.__do_start(self, __class)
        local name = ffi.new("const char *[1]")
        local size = ffi.new("int[1]")
        __lib.elm_obj_code_widget_font_get(name, size)
        eo.__do_end()
        return name[0], tonumber(size[0])
    end,

    columns_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_columns_get()
        eo.__do_end()
        return v
    end,

    gravity_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_gravity_set(x, y)
        eo.__do_end()
    end,

    gravity_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.elm_obj_code_widget_gravity_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    policy_set = function(self, policy_h, policy_v)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_policy_set(policy_h, policy_v)
        eo.__do_end()
    end,

    policy_get = function(self)
        eo.__do_start(self, __class)
        local policy_h = ffi.new("Elm_Scroller_Policy[1]")
        local policy_v = ffi.new("Elm_Scroller_Policy[1]")
        __lib.elm_obj_code_widget_policy_get(policy_h, policy_v)
        eo.__do_end()
        return policy_h[0], policy_v[0]
    end,

    tabstop_set = function(self, tabstop)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_tabstop_set(tabstop)
        eo.__do_end()
    end,

    tabstop_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_tabstop_get()
        eo.__do_end()
        return v
    end,

    editable_set = function(self, editable)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_editable_set(editable)
        eo.__do_end()
    end,

    editable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_editable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    line_numbers_set = function(self, line_numbers)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_line_numbers_set(line_numbers)
        eo.__do_end()
    end,

    line_numbers_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_line_numbers_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    line_width_marker_set = function(self, line_width_marker)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_line_width_marker_set(line_width_marker)
        eo.__do_end()
    end,

    line_width_marker_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_line_width_marker_get()
        eo.__do_end()
        return v
    end,

    show_whitespace_set = function(self, show_whitespace)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_show_whitespace_set(show_whitespace)
        eo.__do_end()
    end,

    show_whitespace_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_show_whitespace_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    syntax_enabled_set = function(self, syntax_enabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_syntax_enabled_set(syntax_enabled)
        eo.__do_end()
    end,

    syntax_enabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_syntax_enabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    tab_inserts_spaces_set = function(self, tab_inserts_spaces)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_tab_inserts_spaces_set(tab_inserts_spaces)
        eo.__do_end()
    end,

    tab_inserts_spaces_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_tab_inserts_spaces_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    cursor_position_set = function(self, row, col)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_cursor_position_set(row, col)
        eo.__do_end()
    end,

    cursor_position_get = function(self)
        eo.__do_start(self, __class)
        local row = ffi.new("unsigned int[1]")
        local col = ffi.new("unsigned int[1]")
        __lib.elm_obj_code_widget_cursor_position_get(row, col)
        eo.__do_end()
        return row[0], col[0]
    end,

    line_refresh = function(self, line)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_line_refresh(line)
        eo.__do_end()
    end,

    line_visible_get = function(self, line)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_line_visible_get(line)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    lines_visible_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_lines_visible_get()
        eo.__do_end()
        return v
    end,

    position_at_coordinates_get = function(self, x, y, row, col)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_position_at_coordinates_get(x, y, row, col)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    geometry_for_position_get = function(self, row, col, x, y, w, h)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_geometry_for_position_get(row, col, x, y, w, h)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    text_left_gutter_width_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_text_left_gutter_width_get()
        eo.__do_end()
        return tonumber(v)
    end,

    text_between_positions_get = function(self, start_line, start_col, end_line, end_col)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_text_between_positions_get(start_line, start_col, end_line, end_col)
        eo.__do_end()
        return string.char(v)
    end,

    text_at_cursor_insert = function(self, text)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_text_at_cursor_insert(text)
        eo.__do_end()
    end,

    line_text_column_width_to_position = function(self, line, position)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_line_text_column_width_to_position(line, position)
        eo.__do_end()
        return v
    end,

    line_text_column_width_get = function(self, line)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_line_text_column_width_get(line)
        eo.__do_end()
        return v
    end,

    line_text_position_for_column_get = function(self, line, column)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_line_text_position_for_column_get(line, column)
        eo.__do_end()
        return v
    end,

    text_tabwidth_at_column_get = function(self, column)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_text_tabwidth_at_column_get(column)
        eo.__do_end()
        return v
    end,

    line_status_toggle = function(self, line)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_line_status_toggle(line)
        eo.__do_end()
    end,

    undo = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_undo()
        eo.__do_end()
    end,

    can_undo_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_can_undo_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    redo = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_code_widget_redo()
        eo.__do_end()
    end,

    can_redo_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_code_widget_can_redo_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["line,clicked"] = __lib._ELM_OBJ_CODE_WIDGET_EVENT_LINE_CLICKED,
        ["line,gutter,clicked"] = __lib._ELM_OBJ_CODE_WIDGET_EVENT_LINE_GUTTER_CLICKED,
        ["cursor,changed"] = __lib._ELM_OBJ_CODE_WIDGET_EVENT_CURSOR_CHANGED,
        ["changed,user"] = __lib._ELM_OBJ_CODE_WIDGET_EVENT_CHANGED_USER,
        ["selection,start"] = __lib._ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_START,
        ["selection,changed"] = __lib._ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_CHANGED,
        ["selection,cleared"] = __lib._ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_CLEARED,
        ["selection,cut"] = __lib._ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_CUT,
        ["selection,copy"] = __lib._ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_COPY,
        ["selection,paste"] = __lib._ELM_OBJ_CODE_WIDGET_EVENT_SELECTION_PASTE
    },

    __properties = {
        ["show_whitespace"] = { 0, 0, 1, 1, true, true },
        ["code"] = { 0, 0, 1, 1, true, true },
        ["tabstop"] = { 0, 0, 1, 1, true, true },
        ["font"] = { 0, 0, 2, 2, true, true },
        ["cursor_position"] = { 0, 0, 2, 2, true, true },
        ["line_numbers"] = { 0, 0, 1, 1, true, true },
        ["syntax_enabled"] = { 0, 0, 1, 1, true, true },
        ["tab_inserts_spaces"] = { 0, 0, 1, 1, true, true },
        ["policy"] = { 0, 0, 2, 2, true, true },
        ["gravity"] = { 0, 0, 2, 2, true, true },
        ["line_width_marker"] = { 0, 0, 1, 1, true, true },
        ["columns"] = { 0, 0, 1, 0, true, false },
        ["editable"] = { 0, 0, 1, 1, true, true }
    }
}

M.Code_Widget = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Code_Widget").__eo_ctor,
                            1, ...)
end

return M
