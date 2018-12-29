-- EFL LuaJIT bindings: efl_ui_flip.eo (class Efl.Ui.Flip)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_flip_class_get()
    eo.class_register("Efl_Ui_Flip", {"Elm_Widget"}, {"Efl_Pack_Linear", "Efl_Part"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_flip_class_get(void);
    void efl_ui_flip_interaction_set(Efl_Ui_Flip_Interaction mode);
    Efl_Ui_Flip_Interaction efl_ui_flip_interaction_get(void);
    Eina_Bool efl_ui_flip_front_visible_get(void);
    void efl_ui_flip_interaction_direction_hitsize_set(Efl_Orient dir, double hitsize);
    double efl_ui_flip_interaction_direction_hitsize_get(Efl_Orient dir);
    void efl_ui_flip_interaction_direction_enabled_set(Efl_Orient dir, Eina_Bool enabled);
    Eina_Bool efl_ui_flip_interaction_direction_enabled_get(Efl_Orient dir);
    void efl_ui_flip_go(Efl_Ui_Flip_Mode mode);
    void efl_ui_flip_go_to(Eina_Bool front, Efl_Ui_Flip_Mode mode);
    extern const Eo_Event_Description _EFL_UI_FLIP_EVENT_ANIMATE_BEGIN;
    extern const Eo_Event_Description _EFL_UI_FLIP_EVENT_ANIMATE_DONE;
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    interaction_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.efl_ui_flip_interaction_set(mode)
        eo.__do_end()
    end,

    interaction_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_flip_interaction_get()
        eo.__do_end()
        return v
    end,

    front_visible_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_flip_front_visible_get()
        eo.__do_end()
    end,

    interaction_direction_hitsize_set = function(self, dir, hitsize)
        eo.__do_start(self, __class)
        __lib.efl_ui_flip_interaction_direction_hitsize_set(dir, hitsize)
        eo.__do_end()
    end,

    interaction_direction_hitsize_get = function(self, dir)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_flip_interaction_direction_hitsize_get(dir)
        eo.__do_end()
        return tonumber(v)
    end,

    interaction_direction_enabled_set = function(self, dir, enabled)
        eo.__do_start(self, __class)
        __lib.efl_ui_flip_interaction_direction_enabled_set(dir, enabled)
        eo.__do_end()
    end,

    interaction_direction_enabled_get = function(self, dir)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_flip_interaction_direction_enabled_get(dir)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    go = function(self, mode)
        eo.__do_start(self, __class)
        __lib.efl_ui_flip_go(mode)
        eo.__do_end()
    end,

    go_to = function(self, front, mode)
        eo.__do_start(self, __class)
        __lib.efl_ui_flip_go_to(front, mode)
        eo.__do_end()
    end,

    __events = {
        ["animate,begin"] = __lib._EFL_UI_FLIP_EVENT_ANIMATE_BEGIN,
        ["animate,done"] = __lib._EFL_UI_FLIP_EVENT_ANIMATE_DONE
    },

    __properties = {
        ["interaction"] = { 0, 0, 1, 1, true, true },
        ["front_visible"] = { 0, 0, 1, 0, true, false }
    }
}

__M.Flip = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Flip").__eo_ctor,
                            1, ...)
end

return M
