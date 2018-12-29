-- EFL LuaJIT bindings: evas_canvas3d_object.eo (class Evas.Canvas3D.Object)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_canvas3d_object_class_get()
    eo.class_register("Evas_Canvas3D_Object", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_canvas3d_object_class_get(void);
    void evas_canvas3d_object_change(Evas_Canvas3D_State state, Evas_Canvas3D_Object * ref);
    Evas_Canvas3D_Object_Type evas_canvas3d_object_type_get(void);
    void evas_canvas3d_object_type_set(Evas_Canvas3D_Object_Type type);
    Eina_Bool evas_canvas3d_object_dirty_get(Evas_Canvas3D_State state);
    void evas_canvas3d_object_update(void);
    void evas_canvas3d_object_update_notify(void);
    void evas_canvas3d_object_change_notify(Evas_Canvas3D_State state, Evas_Canvas3D_Object * ref);
    void evas_canvas3d_object_callback_register(const char * event, const void * data);
    void evas_canvas3d_object_callback_unregister(const char * event);
    extern const Eo_Event_Description _EVAS_CANVAS3D_OBJECT_EVENT_CLICKED;
    extern const Eo_Event_Description _EVAS_CANVAS3D_OBJECT_EVENT_COLLISION;
]]

local __M = util.get_namespace(M, { "canvas3d" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    change = function(self, state, ref)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_object_change(state, ref)
        eo.__do_end()
    end,

    type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_object_type_get()
        eo.__do_end()
        return v
    end,

    type_set = function(self, type)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_object_type_set(type)
        eo.__do_end()
    end,

    dirty_get = function(self, state)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_object_dirty_get(state)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    update = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_object_update()
        eo.__do_end()
    end,

    update_notify = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_object_update_notify()
        eo.__do_end()
    end,

    change_notify = function(self, state, ref)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_object_change_notify(state, ref)
        eo.__do_end()
    end,

    callback_register = function(self, event, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_object_callback_register(event, data)
        eo.__do_end()
    end,

    callback_unregister = function(self, event)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_object_callback_unregister(event)
        eo.__do_end()
    end,

    __events = {
        ["clicked"] = __lib._EVAS_CANVAS3D_OBJECT_EVENT_CLICKED,
        ["collision"] = __lib._EVAS_CANVAS3D_OBJECT_EVENT_COLLISION
    }
}

__M.Object = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Canvas3D_Object").__eo_ctor,
                            1, ...)
end

return M
