-- EFL LuaJIT bindings: efl_pack.eo (class Efl.Pack)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_pack_interface_get()
    eo.class_register("Efl_Pack", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_pack_interface_get(void);
    void efl_pack_align_set(double align_horiz, double align_vert);
    void efl_pack_align_get(double *align_horiz, double *align_vert);
    void efl_pack_padding_set(double pad_horiz, double pad_vert, Eina_Bool scalable);
    void efl_pack_padding_get(double *pad_horiz, double *pad_vert, Eina_Bool *scalable);
    Eina_Bool efl_pack_clear(void);
    Eina_Bool efl_pack_unpack_all(void);
    Eina_Bool efl_pack_unpack(Efl_Gfx * subobj);
    Eina_Bool efl_pack(Efl_Gfx * subobj);
    extern const Eo_Event_Description _EFL_PACK_EVENT_LAYOUT_UPDATED;
]]

__body = {
    pack_align_set = function(self, align_horiz, align_vert)
        eo.__do_start(self, __class)
        __lib.efl_pack_align_set(align_horiz, align_vert)
        eo.__do_end()
    end,

    pack_align_get = function(self)
        eo.__do_start(self, __class)
        local align_horiz = ffi.new("double[1]")
        local align_vert = ffi.new("double[1]")
        __lib.efl_pack_align_get(align_horiz, align_vert)
        eo.__do_end()
        return tonumber(align_horiz[0]), tonumber(align_vert[0])
    end,

    pack_padding_set = function(self, pad_horiz, pad_vert, scalable)
        eo.__do_start(self, __class)
        __lib.efl_pack_padding_set(pad_horiz, pad_vert, scalable)
        eo.__do_end()
    end,

    pack_padding_get = function(self)
        eo.__do_start(self, __class)
        local pad_horiz = ffi.new("double[1]")
        local pad_vert = ffi.new("double[1]")
        local scalable = ffi.new("Eina_Bool[1]")
        __lib.efl_pack_padding_get(pad_horiz, pad_vert, scalable)
        eo.__do_end()
        return tonumber(pad_horiz[0]), tonumber(pad_vert[0]), ((scalable[0]) ~= 0)
    end,

    pack_clear = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_clear()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    unpack_all = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_unpack_all()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    unpack = function(self, subobj)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_unpack(subobj)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pack = function(self, subobj)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack(subobj)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["layout,updated"] = __lib._EFL_PACK_EVENT_LAYOUT_UPDATED
    },

    __properties = {
        ["pack_align"] = { 0, 0, 2, 2, true, true },
        ["pack_padding"] = { 0, 0, 3, 3, true, true }
    }
}
__body["__iface_Efl_Pack"] = true

return M
