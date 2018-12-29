-- EFL LuaJIT bindings: efl_container.eo (class Efl.Container)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_container_interface_get()
    eo.class_register("Efl_Container", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_container_interface_get(void);
    Eina_Bool efl_content_set(Efl_Gfx * content);
    Efl_Gfx *efl_content_get(void);
    Efl_Gfx *efl_content_unset(void);
    Eina_Bool efl_content_remove(Efl_Gfx * content);
    Eina_Iterator *efl_content_iterate(void);
    int efl_content_count(void);
    extern const Eo_Event_Description _EFL_CONTAINER_EVENT_CONTENT_ADDED;
    extern const Eo_Event_Description _EFL_CONTAINER_EVENT_CONTENT_REMOVED;
]]

__body = {
    content_set = function(self, content)
        eo.__do_start(self, __class)
        local v = __lib.efl_content_set(content)
        eo.__do_end()
    end,

    content_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_content_get()
        eo.__do_end()
        return v
    end,

    content_unset = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_content_unset()
        eo.__do_end()
        return v
    end,

    content_remove = function(self, content)
        eo.__do_start(self, __class)
        local v = __lib.efl_content_remove(content)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    content_iterate = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_content_iterate()
        eo.__do_end()
        return v
    end,

    content_count = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_content_count()
        eo.__do_end()
        return tonumber(v)
    end,

    __events = {
        ["content,added"] = __lib._EFL_CONTAINER_EVENT_CONTENT_ADDED,
        ["content,removed"] = __lib._EFL_CONTAINER_EVENT_CONTENT_REMOVED
    },

    __properties = {
        ["content"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Container"] = true

return M
