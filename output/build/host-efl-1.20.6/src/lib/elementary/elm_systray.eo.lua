-- EFL LuaJIT bindings: elm_systray.eo (class Elm.Systray)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_systray_class_get()
    eo.class_register("Elm_Systray", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_systray_class_get(void);
    void elm_obj_systray_id_set(const char * id);
    const char *elm_obj_systray_id_get(void);
    void elm_obj_systray_category_set(Elm_Systray_Category cat);
    Elm_Systray_Category elm_obj_systray_category_get(void);
    void elm_obj_systray_icon_theme_path_set(const char * icon_theme_path);
    const char *elm_obj_systray_icon_theme_path_get(void);
    void elm_obj_systray_menu_set(const Efl_Object * menu);
    const Efl_Object *elm_obj_systray_menu_get(void);
    void elm_obj_systray_att_icon_name_set(const char * att_icon_name);
    const char *elm_obj_systray_att_icon_name_get(void);
    void elm_obj_systray_status_set(Elm_Systray_Status st);
    Elm_Systray_Status elm_obj_systray_status_get(void);
    void elm_obj_systray_icon_name_set(const char * icon_name);
    const char *elm_obj_systray_icon_name_get(void);
    void elm_obj_systray_title_set(const char * title);
    const char *elm_obj_systray_title_get(void);
    Eina_Bool elm_obj_systray_register(void);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    id_set = function(self, id)
        eo.__do_start(self, __class)
        __lib.elm_obj_systray_id_set(id)
        eo.__do_end()
    end,

    id_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_systray_id_get()
        eo.__do_end()
        return v
    end,

    category_set = function(self, cat)
        eo.__do_start(self, __class)
        __lib.elm_obj_systray_category_set(cat)
        eo.__do_end()
    end,

    category_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_systray_category_get()
        eo.__do_end()
        return v
    end,

    icon_theme_path_set = function(self, icon_theme_path)
        eo.__do_start(self, __class)
        __lib.elm_obj_systray_icon_theme_path_set(icon_theme_path)
        eo.__do_end()
    end,

    icon_theme_path_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_systray_icon_theme_path_get()
        eo.__do_end()
        return v
    end,

    menu_set = function(self, menu)
        eo.__do_start(self, __class)
        __lib.elm_obj_systray_menu_set(menu)
        eo.__do_end()
    end,

    menu_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_systray_menu_get()
        eo.__do_end()
        return v
    end,

    att_icon_name_set = function(self, att_icon_name)
        eo.__do_start(self, __class)
        __lib.elm_obj_systray_att_icon_name_set(att_icon_name)
        eo.__do_end()
    end,

    att_icon_name_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_systray_att_icon_name_get()
        eo.__do_end()
        return v
    end,

    status_set = function(self, st)
        eo.__do_start(self, __class)
        __lib.elm_obj_systray_status_set(st)
        eo.__do_end()
    end,

    status_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_systray_status_get()
        eo.__do_end()
        return v
    end,

    icon_name_set = function(self, icon_name)
        eo.__do_start(self, __class)
        __lib.elm_obj_systray_icon_name_set(icon_name)
        eo.__do_end()
    end,

    icon_name_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_systray_icon_name_get()
        eo.__do_end()
        return v
    end,

    title_set = function(self, title)
        eo.__do_start(self, __class)
        __lib.elm_obj_systray_title_set(title)
        eo.__do_end()
    end,

    title_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_systray_title_get()
        eo.__do_end()
        return v
    end,

    register = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_systray_register()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["icon_name"] = { 0, 0, 1, 1, true, true },
        ["menu"] = { 0, 0, 1, 1, true, true },
        ["title"] = { 0, 0, 1, 1, true, true },
        ["id"] = { 0, 0, 1, 1, true, true },
        ["category"] = { 0, 0, 1, 1, true, true },
        ["status"] = { 0, 0, 1, 1, true, true },
        ["att_icon_name"] = { 0, 0, 1, 1, true, true },
        ["icon_theme_path"] = { 0, 0, 1, 1, true, true }
    }
}

M.Systray = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Systray").__eo_ctor,
                            1, ...)
end

return M
