-- EFL LuaJIT bindings: elm_plug.eo (class Elm.Plug)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_plug_class_get()
    eo.class_register("Elm_Plug", {"Elm_Widget"}, {"Efl_Ui_Clickable"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_plug_class_get(void);
    Efl_Canvas_Object *elm_obj_plug_image_object_get(void);
    Eina_Bool elm_obj_plug_connect(const char * svcname, int svcnum, Eina_Bool svcsys);
    extern const Eo_Event_Description _ELM_PLUG_EVENT_IMAGE_DELETED;
    extern const Eo_Event_Description _ELM_PLUG_EVENT_IMAGE_RESIZED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    image_object_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_plug_image_object_get()
        eo.__do_end()
    end,

    connect = function(self, svcname, svcnum, svcsys)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_plug_connect(svcname, svcnum, svcsys)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["image,deleted"] = __lib._ELM_PLUG_EVENT_IMAGE_DELETED,
        ["image,resized"] = __lib._ELM_PLUG_EVENT_IMAGE_RESIZED
    },

    __properties = {
        ["image_object"] = { 0, 0, 1, 0, true, false }
    }
}

M.Plug = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Plug").__eo_ctor,
                            1, ...)
end

return M
