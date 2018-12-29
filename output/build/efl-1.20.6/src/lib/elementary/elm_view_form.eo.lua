-- EFL LuaJIT bindings: elm_view_form.eo (class Elm.View.Form)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_view_form_class_get()
    eo.class_register("Elm_View_Form", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_view_form_class_get(void);
    void elm_view_form_model_set(Efl_Model * model);
    void elm_view_form_widget_add(const char * propname, Efl_Canvas_Object * evas);
]]

local __M = util.get_namespace(M, { "view" })
__body = {
    __eo_ctor = function(self, model_set_model, __func)
        self:model_set(model_set_model)
        if __func then __func() end
    end,

    model_set = function(self, model)
        eo.__do_start(self, __class)
        __lib.elm_view_form_model_set(model)
        eo.__do_end()
    end,

    widget_add = function(self, propname, evas)
        eo.__do_start(self, __class)
        __lib.elm_view_form_widget_add(propname, evas)
        eo.__do_end()
    end
}

__M.Form = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_View_Form").__eo_ctor,
                            1, ...)
end

return M
