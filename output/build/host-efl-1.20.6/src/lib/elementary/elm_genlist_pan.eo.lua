-- EFL LuaJIT bindings: elm_genlist_pan.eo (class Elm.Genlist.Pan)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_genlist_pan_class_get()
    eo.class_register("Elm_Genlist_Pan", {"Elm_Pan"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_genlist_pan_class_get(void);
    extern const Eo_Event_Description _ELM_GENLIST_PAN_EVENT_ITEM_FOCUSED;
    extern const Eo_Event_Description _ELM_GENLIST_PAN_EVENT_ITEM_UNFOCUSED;
]]

local __M = util.get_namespace(M, { "genlist" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
    __events = {
        ["item,focused"] = __lib._ELM_GENLIST_PAN_EVENT_ITEM_FOCUSED,
        ["item,unfocused"] = __lib._ELM_GENLIST_PAN_EVENT_ITEM_UNFOCUSED
    }
}

__M.Pan = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Genlist_Pan").__eo_ctor,
                            1, ...)
end

return M
