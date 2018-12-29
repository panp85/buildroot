-- EFL LuaJIT bindings: efl_text_cursor.eo (class Efl.Text.Cursor)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_text_cursor_interface_get()
    eo.class_register("Efl_Text_Cursor", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_text_cursor_interface_get(void);
    Efl_Text_Cursor_Cursor *efl_text_cursor_get(Efl_Text_Cursor_Cursor_Get_Type get_type);
    void efl_text_cursor_position_set(Efl_Text_Cursor_Cursor * cur, int position);
    int efl_text_cursor_position_get(Efl_Text_Cursor_Cursor * cur);
    Eina_Unicode efl_text_cursor_content_get(const Efl_Text_Cursor_Cursor * cur);
    Eina_Bool efl_text_cursor_geometry_get(const Efl_Text_Cursor_Cursor * cur, Efl_Text_Cursor_Cursor_Type ctype, int *cx, int *cy, int *cw, int *ch, int *cx2, int *cy2, int *cw2, int *ch2);
    Efl_Text_Cursor_Cursor *efl_text_cursor_new(void);
    void efl_text_cursor_free(Efl_Text_Cursor_Cursor * cur);
    Eina_Bool efl_text_cursor_equal(const Efl_Text_Cursor_Cursor * cur1, const Efl_Text_Cursor_Cursor * cur2);
    int efl_text_cursor_compare(const Efl_Text_Cursor_Cursor * cur1, const Efl_Text_Cursor_Cursor * cur2);
    void efl_text_cursor_copy(Efl_Text_Cursor_Cursor * dst, const Efl_Text_Cursor_Cursor * src);
    void efl_text_cursor_char_next(Efl_Text_Cursor_Cursor * cur);
    void efl_text_cursor_char_prev(Efl_Text_Cursor_Cursor * cur);
    void efl_text_cursor_paragraph_char_first(Efl_Text_Cursor_Cursor * cur);
    void efl_text_cursor_paragraph_char_last(Efl_Text_Cursor_Cursor * cur);
    void efl_text_cursor_word_start(Efl_Text_Cursor_Cursor * cur);
    void efl_text_cursor_word_end(Efl_Text_Cursor_Cursor * cur);
    void efl_text_cursor_line_char_first(Efl_Text_Cursor_Cursor * cur);
    void efl_text_cursor_line_char_last(Efl_Text_Cursor_Cursor * cur);
    void efl_text_cursor_paragraph_first(Efl_Text_Cursor_Cursor * cur);
    void efl_text_cursor_paragraph_last(Efl_Text_Cursor_Cursor * cur);
    void efl_text_cursor_paragraph_next(Efl_Text_Cursor_Cursor * cur);
    void efl_text_cursor_paragraph_prev(Efl_Text_Cursor_Cursor * cur);
    void efl_text_cursor_line_jump_by(Efl_Text_Cursor_Cursor * cur, int by);
    void efl_text_cursor_coord_set(Efl_Text_Cursor_Cursor * cur, int x, int y);
    int efl_text_cursor_text_insert(Efl_Text_Cursor_Cursor * cur, const char * text);
    void efl_text_cursor_char_delete(Efl_Text_Cursor_Cursor * cur);
]]

local __M = util.get_namespace(M, { "text" })
__body = {
    cursor_get = function(self, get_type)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_cursor_get(get_type)
        eo.__do_end()
    end,

    cursor_position_set = function(self, cur, position)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_position_set(cur, position)
        eo.__do_end()
    end,

    cursor_position_get = function(self, cur)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_cursor_position_get(cur)
        eo.__do_end()
        return tonumber(v)
    end,

    cursor_content_get = function(self, cur)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_cursor_content_get(cur)
        eo.__do_end()
        return v
    end,

    cursor_geometry_get = function(self, cur, ctype)
        eo.__do_start(self, __class)
        local cx = ffi.new("int[1]")
        local cy = ffi.new("int[1]")
        local cw = ffi.new("int[1]")
        local ch = ffi.new("int[1]")
        local cx2 = ffi.new("int[1]")
        local cy2 = ffi.new("int[1]")
        local cw2 = ffi.new("int[1]")
        local ch2 = ffi.new("int[1]")
        local v = __lib.efl_text_cursor_geometry_get(cur, ctype, cx, cy, cw, ch, cx2, cy2, cw2, ch2)
        eo.__do_end()
        return tonumber(cx[0]), tonumber(cy[0]), tonumber(cw[0]), tonumber(ch[0]), tonumber(cx2[0]), tonumber(cy2[0]), tonumber(cw2[0]), tonumber(ch2[0])
    end,

    cursor_new = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_cursor_new()
        eo.__do_end()
        return v
    end,

    cursor_free = function(self, cur)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_free(cur)
        eo.__do_end()
    end,

    cursor_equal = function(self, cur1, cur2)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_cursor_equal(cur1, cur2)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    cursor_compare = function(self, cur1, cur2)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_cursor_compare(cur1, cur2)
        eo.__do_end()
        return tonumber(v)
    end,

    cursor_copy = function(self, dst, src)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_copy(dst, src)
        eo.__do_end()
    end,

    cursor_char_next = function(self, cur)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_char_next(cur)
        eo.__do_end()
    end,

    cursor_char_prev = function(self, cur)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_char_prev(cur)
        eo.__do_end()
    end,

    cursor_paragraph_char_first = function(self, cur)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_paragraph_char_first(cur)
        eo.__do_end()
    end,

    cursor_paragraph_char_last = function(self, cur)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_paragraph_char_last(cur)
        eo.__do_end()
    end,

    cursor_word_start = function(self, cur)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_word_start(cur)
        eo.__do_end()
    end,

    cursor_word_end = function(self, cur)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_word_end(cur)
        eo.__do_end()
    end,

    cursor_line_char_first = function(self, cur)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_line_char_first(cur)
        eo.__do_end()
    end,

    cursor_line_char_last = function(self, cur)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_line_char_last(cur)
        eo.__do_end()
    end,

    cursor_paragraph_first = function(self, cur)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_paragraph_first(cur)
        eo.__do_end()
    end,

    cursor_paragraph_last = function(self, cur)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_paragraph_last(cur)
        eo.__do_end()
    end,

    cursor_paragraph_next = function(self, cur)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_paragraph_next(cur)
        eo.__do_end()
    end,

    cursor_paragraph_prev = function(self, cur)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_paragraph_prev(cur)
        eo.__do_end()
    end,

    cursor_line_jump_by = function(self, cur, by)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_line_jump_by(cur, by)
        eo.__do_end()
    end,

    cursor_coord_set = function(self, cur, x, y)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_coord_set(cur, x, y)
        eo.__do_end()
    end,

    cursor_text_insert = function(self, cur, text)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_cursor_text_insert(cur, text)
        eo.__do_end()
        return tonumber(v)
    end,

    cursor_char_delete = function(self, cur)
        eo.__do_start(self, __class)
        __lib.efl_text_cursor_char_delete(cur)
        eo.__do_end()
    end,

    __properties = {
        ["cursor"] = { 1, 0, 1, 0, true, false },
        ["cursor_geometry"] = { 2, 0, 8, 0, true, false },
        ["cursor_position"] = { 1, 1, 1, 1, true, true },
        ["cursor_content"] = { 1, 0, 1, 0, true, false }
    }
}
__body["__iface_Efl_Text_Cursor"] = true

return M
