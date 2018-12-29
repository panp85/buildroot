-- EFL LuaJIT bindings: efl_ui_drag.eo (class Efl.Ui.Drag)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_drag_interface_get()
    eo.class_register("Efl_Ui_Drag", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_drag_interface_get(void);
    Eina_Bool efl_ui_drag_value_set(double dx, double dy);
    Eina_Bool efl_ui_drag_value_get(double *dx, double *dy);
    Eina_Bool efl_ui_drag_size_set(double dw, double dh);
    Eina_Bool efl_ui_drag_size_get(double *dw, double *dh);
    Efl_Ui_Drag_Dir efl_ui_drag_dir_get(void);
    Eina_Bool efl_ui_drag_step_set(double dx, double dy);
    Eina_Bool efl_ui_drag_step_get(double *dx, double *dy);
    Eina_Bool efl_ui_drag_page_set(double dx, double dy);
    Eina_Bool efl_ui_drag_page_get(double *dx, double *dy);
    Eina_Bool efl_ui_drag_step_move(double dx, double dy);
    Eina_Bool efl_ui_drag_page_move(double dx, double dy);
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    drag_value_set = function(self, dx, dy)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_drag_value_set(dx, dy)
        eo.__do_end()
    end,

    drag_value_get = function(self)
        eo.__do_start(self, __class)
        local dx = ffi.new("double[1]")
        local dy = ffi.new("double[1]")
        local v = __lib.efl_ui_drag_value_get(dx, dy)
        eo.__do_end()
        return tonumber(dx[0]), tonumber(dy[0])
    end,

    drag_size_set = function(self, dw, dh)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_drag_size_set(dw, dh)
        eo.__do_end()
    end,

    drag_size_get = function(self)
        eo.__do_start(self, __class)
        local dw = ffi.new("double[1]")
        local dh = ffi.new("double[1]")
        local v = __lib.efl_ui_drag_size_get(dw, dh)
        eo.__do_end()
        return tonumber(dw[0]), tonumber(dh[0])
    end,

    drag_dir_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_drag_dir_get()
        eo.__do_end()
    end,

    drag_step_set = function(self, dx, dy)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_drag_step_set(dx, dy)
        eo.__do_end()
    end,

    drag_step_get = function(self)
        eo.__do_start(self, __class)
        local dx = ffi.new("double[1]")
        local dy = ffi.new("double[1]")
        local v = __lib.efl_ui_drag_step_get(dx, dy)
        eo.__do_end()
        return tonumber(dx[0]), tonumber(dy[0])
    end,

    drag_page_set = function(self, dx, dy)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_drag_page_set(dx, dy)
        eo.__do_end()
    end,

    drag_page_get = function(self)
        eo.__do_start(self, __class)
        local dx = ffi.new("double[1]")
        local dy = ffi.new("double[1]")
        local v = __lib.efl_ui_drag_page_get(dx, dy)
        eo.__do_end()
        return tonumber(dx[0]), tonumber(dy[0])
    end,

    drag_step_move = function(self, dx, dy)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_drag_step_move(dx, dy)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    drag_page_move = function(self, dx, dy)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_drag_page_move(dx, dy)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["drag_value"] = { 0, 0, 2, 2, true, true },
        ["drag_dir"] = { 0, 0, 1, 0, true, false },
        ["drag_size"] = { 0, 0, 2, 2, true, true },
        ["drag_step"] = { 0, 0, 2, 2, true, true },
        ["drag_page"] = { 0, 0, 2, 2, true, true }
    }
}
__body["__iface_Efl_Ui_Drag"] = true

return M
