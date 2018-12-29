-- EFL LuaJIT bindings: elm_ctxpopup_item.eo (class Elm.Ctxpopup.Item)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_ctxpopup_item_class_get()
    eo.class_register("Elm_Ctxpopup_Item", {"Elm_Widget_Item"}, {"Efl_Ui_Item"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_ctxpopup_item_class_get(void);
    void elm_obj_ctxpopup_item_init(Evas_Smart_Cb func, const void * data);
]]

local __M = util.get_namespace(M, { "ctxpopup" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    init = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_ctxpopup_item_init(func, data)
        eo.__do_end()
    end
}

__M.Item = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Ctxpopup_Item").__eo_ctor,
                            1, ...)
end

return M
