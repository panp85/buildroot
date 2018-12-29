-- EFL LuaJIT bindings: efl_gfx_path.eo (class Efl.Gfx.Path)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_gfx_path_mixin_get()
    eo.class_register("Efl_Gfx_Path", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_gfx_path_mixin_get(void);
    void efl_gfx_path_set(const Efl_Gfx_Path_Command_Type * op, const double * points);
    void efl_gfx_path_get(const Efl_Gfx_Path_Command_Type * *op, const double * *points);
    void efl_gfx_path_length_get(unsigned int *commands, unsigned int *points);
    void efl_gfx_path_current_get(double *x, double *y);
    void efl_gfx_path_current_ctrl_get(double *x, double *y);
    void efl_gfx_path_dup(const Efl_Object * dup_from);
    void efl_gfx_path_bounds_get(Eina_Rectangle *r);
    void efl_gfx_path_reset(void);
    void efl_gfx_path_append_move_to(double x, double y);
    void efl_gfx_path_append_line_to(double x, double y);
    void efl_gfx_path_append_quadratic_to(double x, double y, double ctrl_x, double ctrl_y);
    void efl_gfx_path_append_squadratic_to(double x, double y);
    void efl_gfx_path_append_cubic_to(double ctrl_x0, double ctrl_y0, double ctrl_x1, double ctrl_y1, double x, double y);
    void efl_gfx_path_append_scubic_to(double x, double y, double ctrl_x, double ctrl_y);
    void efl_gfx_path_append_arc_to(double x, double y, double rx, double ry, double angle, Eina_Bool large_arc, Eina_Bool sweep);
    void efl_gfx_path_append_arc(double x, double y, double w, double h, double start_angle, double sweep_length);
    void efl_gfx_path_append_close(void);
    void efl_gfx_path_append_circle(double x, double y, double radius);
    void efl_gfx_path_append_rect(double x, double y, double w, double h, double rx, double ry);
    void efl_gfx_path_append_svg_path(const char * svg_path_data);
    Eina_Bool efl_gfx_path_interpolate(const Efl_Object * from, const Efl_Object * to, double pos_map);
    Eina_Bool efl_gfx_path_equal_commands(const Efl_Object * with);
    extern const Eo_Event_Description _EFL_GFX_PATH_EVENT_CHANGED;
]]

local __M = util.get_namespace(M, { "gfx" })
__body = {
    path_set = function(self, op, points)
        eo.__do_start(self, __class)
        __lib.efl_gfx_path_set(op, points)
        eo.__do_end()
    end,

    path_get = function(self)
        eo.__do_start(self, __class)
        local op = ffi.new("const Efl_Gfx_Path_Command_Type *[1]")
        local points = ffi.new("const double *[1]")
        __lib.efl_gfx_path_get(op, points)
        eo.__do_end()
        return op[0], tonumber(points[0])
    end,

    length_get = function(self)
        eo.__do_start(self, __class)
        local commands = ffi.new("unsigned int[1]")
        local points = ffi.new("unsigned int[1]")
        __lib.efl_gfx_path_length_get(commands, points)
        eo.__do_end()
        return commands[0], points[0]
    end,

    current_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.efl_gfx_path_current_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    current_ctrl_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.efl_gfx_path_current_ctrl_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    dup = function(self, dup_from)
        eo.__do_start(self, __class)
        __lib.efl_gfx_path_dup(dup_from)
        eo.__do_end()
    end,

    bounds_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("Eina_Rectangle[1]")
        __lib.efl_gfx_path_bounds_get(r)
        eo.__do_end()
        return r[0]
    end,

    reset = function(self)
        eo.__do_start(self, __class)
        __lib.efl_gfx_path_reset()
        eo.__do_end()
    end,

    append_move_to = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_path_append_move_to(x, y)
        eo.__do_end()
    end,

    append_line_to = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_path_append_line_to(x, y)
        eo.__do_end()
    end,

    append_quadratic_to = function(self, x, y, ctrl_x, ctrl_y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_path_append_quadratic_to(x, y, ctrl_x, ctrl_y)
        eo.__do_end()
    end,

    append_squadratic_to = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_path_append_squadratic_to(x, y)
        eo.__do_end()
    end,

    append_cubic_to = function(self, ctrl_x0, ctrl_y0, ctrl_x1, ctrl_y1, x, y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_path_append_cubic_to(ctrl_x0, ctrl_y0, ctrl_x1, ctrl_y1, x, y)
        eo.__do_end()
    end,

    append_scubic_to = function(self, x, y, ctrl_x, ctrl_y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_path_append_scubic_to(x, y, ctrl_x, ctrl_y)
        eo.__do_end()
    end,

    append_arc_to = function(self, x, y, rx, ry, angle, large_arc, sweep)
        eo.__do_start(self, __class)
        __lib.efl_gfx_path_append_arc_to(x, y, rx, ry, angle, large_arc, sweep)
        eo.__do_end()
    end,

    append_arc = function(self, x, y, w, h, start_angle, sweep_length)
        eo.__do_start(self, __class)
        __lib.efl_gfx_path_append_arc(x, y, w, h, start_angle, sweep_length)
        eo.__do_end()
    end,

    append_close = function(self)
        eo.__do_start(self, __class)
        __lib.efl_gfx_path_append_close()
        eo.__do_end()
    end,

    append_circle = function(self, x, y, radius)
        eo.__do_start(self, __class)
        __lib.efl_gfx_path_append_circle(x, y, radius)
        eo.__do_end()
    end,

    append_rect = function(self, x, y, w, h, rx, ry)
        eo.__do_start(self, __class)
        __lib.efl_gfx_path_append_rect(x, y, w, h, rx, ry)
        eo.__do_end()
    end,

    append_svg_path = function(self, svg_path_data)
        eo.__do_start(self, __class)
        __lib.efl_gfx_path_append_svg_path(svg_path_data)
        eo.__do_end()
    end,

    interpolate = function(self, from, to, pos_map)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_path_interpolate(from, to, pos_map)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    equal_commands = function(self, with)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_path_equal_commands(with)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["changed"] = __lib._EFL_GFX_PATH_EVENT_CHANGED
    },

    __properties = {
        ["path"] = { 0, 0, 2, 2, true, true },
        ["length"] = { 0, 0, 2, 0, true, false },
        ["current_ctrl"] = { 0, 0, 2, 0, true, false },
        ["current"] = { 0, 0, 2, 0, true, false }
    }
}
__body["__mixin_Efl_Gfx_Path"] = true

return M
