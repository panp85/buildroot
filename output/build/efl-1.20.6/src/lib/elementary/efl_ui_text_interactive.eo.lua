-- EFL LuaJIT bindings: efl_ui_text_interactive.eo (class Efl.Ui.Text.Interactive)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_text_interactive_interface_get()
    eo.class_register("Efl_Ui_Text_Interactive", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_text_interactive_interface_get(void);
    void efl_ui_text_interactive_selection_allowed_set(Eina_Bool allowed);
    Eina_Bool efl_ui_text_interactive_selection_allowed_get(void);
    void efl_ui_text_interactive_selection_cursors_get(Efl_Text_Cursor_Cursor * *start, Efl_Text_Cursor_Cursor * *end_);
    void efl_ui_text_interactive_editable_set(Eina_Bool editable);
    Eina_Bool efl_ui_text_interactive_editable_get(void);
    extern const Eo_Event_Description _EFL_UI_TEXT_INTERACTIVE_EVENT_CHANGED_USER;
    extern const Eo_Event_Description _EFL_UI_TEXT_INTERACTIVE_EVENT_SELECTION_CHANGED;
]]

local __M = util.get_namespace(M, { "ui", "text" })
__body = {
    selection_allowed_set = function(self, allowed)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_interactive_selection_allowed_set(allowed)
        eo.__do_end()
    end,

    selection_allowed_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_interactive_selection_allowed_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    selection_cursors_get = function(self)
        eo.__do_start(self, __class)
        local start = ffi.new("Efl_Text_Cursor_Cursor *[1]")
        local end_ = ffi.new("Efl_Text_Cursor_Cursor *[1]")
        __lib.efl_ui_text_interactive_selection_cursors_get(start, end_)
        eo.__do_end()
        return start[0], end_[0]
    end,

    editable_set = function(self, editable)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_interactive_editable_set(editable)
        eo.__do_end()
    end,

    editable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_interactive_editable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["changed,user"] = __lib._EFL_UI_TEXT_INTERACTIVE_EVENT_CHANGED_USER,
        ["selection,changed"] = __lib._EFL_UI_TEXT_INTERACTIVE_EVENT_SELECTION_CHANGED
    },

    __properties = {
        ["selection_cursors"] = { 0, 0, 2, 0, true, false },
        ["selection_allowed"] = { 0, 0, 1, 1, true, true },
        ["editable"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Ui_Text_Interactive"] = true

return M
