-- EFL LuaJIT bindings: efl_ui_frame.eo (class Efl.Ui.Frame)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_frame_class_get()
    eo.class_register("Efl_Ui_Frame", {"Elm_Layout"}, {"Efl_Ui_Clickable"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_frame_class_get(void);
    void efl_ui_frame_collapse_set(Eina_Bool collapse);
    Eina_Bool efl_ui_frame_collapse_get(void);
    void efl_ui_frame_autocollapse_set(Eina_Bool autocollapse);
    Eina_Bool efl_ui_frame_autocollapse_get(void);
    void efl_ui_frame_collapse_go(Eina_Bool collapse);
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    collapse_set = function(self, collapse)
        eo.__do_start(self, __class)
        __lib.efl_ui_frame_collapse_set(collapse)
        eo.__do_end()
    end,

    collapse_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_frame_collapse_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    autocollapse_set = function(self, autocollapse)
        eo.__do_start(self, __class)
        __lib.efl_ui_frame_autocollapse_set(autocollapse)
        eo.__do_end()
    end,

    autocollapse_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_frame_autocollapse_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    collapse_go = function(self, collapse)
        eo.__do_start(self, __class)
        __lib.efl_ui_frame_collapse_go(collapse)
        eo.__do_end()
    end,

    __properties = {
        ["autocollapse"] = { 0, 0, 1, 1, true, true },
        ["collapse"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Frame = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Frame").__eo_ctor,
                            1, ...)
end

return M
