-- EFL LuaJIT bindings: efl_ui_box_flow.eo (class Efl.Ui.Box.Flow)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_box_flow_class_get()
    eo.class_register("Efl_Ui_Box_Flow", {"Efl_Ui_Box"}, {"Efl_Pack_Layout"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_box_flow_class_get(void);
    void efl_ui_box_flow_homogenous_set(Eina_Bool val);
    Eina_Bool efl_ui_box_flow_homogenous_get(void);
    void efl_ui_box_flow_max_size_set(Eina_Bool val);
    Eina_Bool efl_ui_box_flow_max_size_get(void);
]]

local __M = util.get_namespace(M, { "ui", "box" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    box_flow_homogenous_set = function(self, val)
        eo.__do_start(self, __class)
        __lib.efl_ui_box_flow_homogenous_set(val)
        eo.__do_end()
    end,

    box_flow_homogenous_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_box_flow_homogenous_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    box_flow_max_size_set = function(self, val)
        eo.__do_start(self, __class)
        __lib.efl_ui_box_flow_max_size_set(val)
        eo.__do_end()
    end,

    box_flow_max_size_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_box_flow_max_size_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["box_flow_max_size"] = { 0, 0, 1, 1, true, true },
        ["box_flow_homogenous"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Flow = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Box_Flow").__eo_ctor,
                            1, ...)
end

return M
