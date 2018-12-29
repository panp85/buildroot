-- EFL LuaJIT bindings: efl_canvas_text.eo (class Efl.Canvas.Text)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_text_class_get()
    eo.class_register("Efl_Canvas_Text", {"Efl_Canvas_Object"}, {"Efl_Text", "Efl_Text_Properties", "Efl_Canvas_Filter_Internal", "Efl_Text_Font", "Efl_Text_Style", "Efl_Text_Format", "Efl_Text_Cursor", "Efl_Text_Annotate"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_text_class_get(void);
    Eina_Bool efl_canvas_text_is_empty_get(void);
    void efl_canvas_text_style_insets_get(int *l, int *r, int *t, int *b);
    void efl_canvas_text_bidi_delimiters_set(const char * delim);
    const char *efl_canvas_text_bidi_delimiters_get(void);
    void efl_canvas_text_legacy_newline_set(Eina_Bool mode);
    Eina_Bool efl_canvas_text_legacy_newline_get(void);
    void efl_canvas_text_style_set(const char * key, const char * style);
    const char *efl_canvas_text_style_get(const char * key);
    void efl_canvas_text_size_formatted_get(int *w, int *h);
    void efl_canvas_text_size_native_get(int *w, int *h);
    Eina_Bool efl_canvas_text_visible_range_get(Efl_Text_Cursor_Cursor * start, Efl_Text_Cursor_Cursor * end_);
    char *efl_canvas_text_range_text_get(const Efl_Text_Cursor_Cursor * cur1, const Efl_Text_Cursor_Cursor * cur2);
    Eina_Iterator *efl_canvas_text_range_geometry_get(const Efl_Text_Cursor_Cursor * cur1, const Efl_Text_Cursor_Cursor * cur2);
    Eina_Iterator *efl_canvas_text_range_simple_geometry_get(const Efl_Text_Cursor_Cursor * cur1, const Efl_Text_Cursor_Cursor * cur2);
    void efl_canvas_text_range_delete(Efl_Text_Cursor_Cursor * cur1, Efl_Text_Cursor_Cursor * cur2);
    Eina_Bool efl_canvas_text_obstacle_add(Efl_Canvas_Object * eo_obs);
    Eina_Bool efl_canvas_text_obstacle_del(Efl_Canvas_Object * eo_obs);
    void efl_canvas_text_obstacles_update(void);
    extern const Eo_Event_Description _EFL_CANVAS_TEXT_EVENT_CURSOR_CHANGED;
    extern const Eo_Event_Description _EFL_CANVAS_TEXT_EVENT_CHANGED;
    extern const Eo_Event_Description _EFL_CANVAS_TEXT_EVENT_STYLE_INSETS_CHANGED;
]]

local __M = util.get_namespace(M, { "canvas" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    is_empty_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_text_is_empty_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    style_insets_get = function(self)
        eo.__do_start(self, __class)
        local l = ffi.new("int[1]")
        local r = ffi.new("int[1]")
        local t = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        __lib.efl_canvas_text_style_insets_get(l, r, t, b)
        eo.__do_end()
        return tonumber(l[0]), tonumber(r[0]), tonumber(t[0]), tonumber(b[0])
    end,

    bidi_delimiters_set = function(self, delim)
        eo.__do_start(self, __class)
        __lib.efl_canvas_text_bidi_delimiters_set(delim)
        eo.__do_end()
    end,

    bidi_delimiters_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_text_bidi_delimiters_get()
        eo.__do_end()
        return v
    end,

    legacy_newline_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.efl_canvas_text_legacy_newline_set(mode)
        eo.__do_end()
    end,

    legacy_newline_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_text_legacy_newline_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    style_set = function(self, key, style)
        eo.__do_start(self, __class)
        __lib.efl_canvas_text_style_set(key, style)
        eo.__do_end()
    end,

    style_get = function(self, key)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_text_style_get(key)
        eo.__do_end()
        return v
    end,

    size_formatted_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_canvas_text_size_formatted_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    size_native_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_canvas_text_size_native_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    visible_range_get = function(self, start, end_)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_text_visible_range_get(start, end_)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    range_text_get = function(self, cur1, cur2)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_text_range_text_get(cur1, cur2)
        eo.__do_end()
        return string.char(v)
    end,

    range_geometry_get = function(self, cur1, cur2)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_text_range_geometry_get(cur1, cur2)
        eo.__do_end()
        return v
    end,

    range_simple_geometry_get = function(self, cur1, cur2)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_text_range_simple_geometry_get(cur1, cur2)
        eo.__do_end()
        return v
    end,

    range_delete = function(self, cur1, cur2)
        eo.__do_start(self, __class)
        __lib.efl_canvas_text_range_delete(cur1, cur2)
        eo.__do_end()
    end,

    obstacle_add = function(self, eo_obs)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_text_obstacle_add(eo_obs)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    obstacle_del = function(self, eo_obs)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_text_obstacle_del(eo_obs)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    obstacles_update = function(self)
        eo.__do_start(self, __class)
        __lib.efl_canvas_text_obstacles_update()
        eo.__do_end()
    end,

    __events = {
        ["cursor,changed"] = __lib._EFL_CANVAS_TEXT_EVENT_CURSOR_CHANGED,
        ["changed"] = __lib._EFL_CANVAS_TEXT_EVENT_CHANGED,
        ["style_insets,changed"] = __lib._EFL_CANVAS_TEXT_EVENT_STYLE_INSETS_CHANGED
    },

    __properties = {
        ["is_empty"] = { 0, 0, 1, 0, true, false },
        ["size_native"] = { 0, 0, 2, 0, true, false },
        ["legacy_newline"] = { 0, 0, 1, 1, true, true },
        ["size_formatted"] = { 0, 0, 2, 0, true, false },
        ["style_insets"] = { 0, 0, 4, 0, true, false },
        ["style"] = { 1, 1, 1, 1, true, true },
        ["bidi_delimiters"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Text = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Canvas_Text").__eo_ctor,
                            1, ...)
end

return M
