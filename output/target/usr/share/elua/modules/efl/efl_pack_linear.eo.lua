-- EFL LuaJIT bindings: efl_pack_linear.eo (class Efl.Pack.Linear)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_pack_linear_interface_get()
    eo.class_register("Efl_Pack_Linear", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_pack_linear_interface_get(void);
    Eina_Bool efl_pack_begin(Efl_Gfx * subobj);
    Eina_Bool efl_pack_end(Efl_Gfx * subobj);
    Eina_Bool efl_pack_before(Efl_Gfx * subobj, const Efl_Gfx * existing);
    Eina_Bool efl_pack_after(Efl_Gfx * subobj, const Efl_Gfx * existing);
    Eina_Bool efl_pack_at(Efl_Gfx * subobj, int index);
    Efl_Gfx *efl_pack_content_get(int index);
    int efl_pack_index_get(const Efl_Gfx * subobj);
    Efl_Gfx *efl_pack_unpack_at(int index);
]]

local __M = util.get_namespace(M, { "pack" })
__body = {
    pack_begin = function(self, subobj)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_begin(subobj)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pack_end = function(self, subobj)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_end(subobj)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pack_before = function(self, subobj, existing)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_before(subobj, existing)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pack_after = function(self, subobj, existing)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_after(subobj, existing)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pack_at = function(self, subobj, index)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_at(subobj, index)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pack_content_get = function(self, index)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_content_get(index)
        eo.__do_end()
        return v
    end,

    pack_index_get = function(self, subobj)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_index_get(subobj)
        eo.__do_end()
        return tonumber(v)
    end,

    pack_unpack_at = function(self, index)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_unpack_at(index)
        eo.__do_end()
        return v
    end
}
__body["__iface_Efl_Pack_Linear"] = true

return M
