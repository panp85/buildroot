-- EFL LuaJIT bindings: efl_ui_nstate.eo (class Efl.Ui.Nstate)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_nstate_class_get()
    eo.class_register("Efl_Ui_Nstate", {"Efl_Ui_Button"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_nstate_class_get(void);
    void efl_ui_nstate_count_set(int nstate);
    int efl_ui_nstate_count_get(void);
    void efl_ui_nstate_value_set(int state);
    int efl_ui_nstate_value_get(void);
    extern const Eo_Event_Description _EFL_UI_NSTATE_EVENT_STATE_CHANGED;
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    count_set = function(self, nstate)
        eo.__do_start(self, __class)
        __lib.efl_ui_nstate_count_set(nstate)
        eo.__do_end()
    end,

    count_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_nstate_count_get()
        eo.__do_end()
        return tonumber(v)
    end,

    value_set = function(self, state)
        eo.__do_start(self, __class)
        __lib.efl_ui_nstate_value_set(state)
        eo.__do_end()
    end,

    value_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_nstate_value_get()
        eo.__do_end()
        return tonumber(v)
    end,

    __events = {
        ["state,changed"] = __lib._EFL_UI_NSTATE_EVENT_STATE_CHANGED
    },

    __properties = {
        ["value"] = { 0, 0, 1, 1, true, true },
        ["count"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Nstate = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Nstate").__eo_ctor,
                            1, ...)
end

return M
