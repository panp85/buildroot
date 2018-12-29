-- EFL LuaJIT bindings: efl_canvas_group.eo (class Efl.Canvas.Group)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_group_class_get()
    eo.class_register("Efl_Canvas_Group", {"Efl_Canvas_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_group_class_get(void);
    void efl_canvas_group_need_recalculate_set(Eina_Bool value);
    Eina_Bool efl_canvas_group_need_recalculate_get(void);
    void efl_canvas_group_change(void);
    void efl_canvas_group_calculate(void);
    Eina_Iterator *efl_canvas_group_children_iterate(void);
    void efl_canvas_group_member_add(Efl_Canvas_Object * sub_obj);
    void efl_canvas_group_member_del(Efl_Canvas_Object * sub_obj);
]]

local __M = util.get_namespace(M, { "canvas" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    group_need_recalculate_set = function(self, value)
        eo.__do_start(self, __class)
        __lib.efl_canvas_group_need_recalculate_set(value)
        eo.__do_end()
    end,

    group_need_recalculate_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_group_need_recalculate_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    group_change = function(self)
        eo.__do_start(self, __class)
        __lib.efl_canvas_group_change()
        eo.__do_end()
    end,

    group_calculate = function(self)
        eo.__do_start(self, __class)
        __lib.efl_canvas_group_calculate()
        eo.__do_end()
    end,

    group_children_iterate = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_group_children_iterate()
        eo.__do_end()
        return v
    end,

    group_member_add = function(self, sub_obj)
        eo.__do_start(self, __class)
        __lib.efl_canvas_group_member_add(sub_obj)
        eo.__do_end()
    end,

    group_member_del = function(self, sub_obj)
        eo.__do_start(self, __class)
        __lib.efl_canvas_group_member_del(sub_obj)
        eo.__do_end()
    end,

    __properties = {
        ["group_need_recalculate"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Group = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Canvas_Group").__eo_ctor,
                            1, ...)
end

return M
