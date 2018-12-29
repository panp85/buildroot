-- EFL LuaJIT bindings: efl_ui_focus_manager.eo (class Efl.Ui.Focus.Manager)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_focus_manager_class_get()
    eo.class_register("Efl_Ui_Focus_Manager", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_focus_manager_class_get(void);
    void efl_ui_focus_manager_redirect_set(Efl_Ui_Focus_Manager * redirect);
    Efl_Ui_Focus_Manager *efl_ui_focus_manager_redirect_get(void);
    Eina_Iterator *efl_ui_focus_manager_border_elements_get(void);
    Eina_Bool efl_ui_focus_manager_root_set(Efl_Ui_Focus_Object * root);
    Efl_Ui_Focus_Object *efl_ui_focus_manager_root_get(void);
    Efl_Ui_Focus_Object *efl_ui_focus_manager_move(Efl_Ui_Focus_Direction direction);
    Efl_Ui_Focus_Object *efl_ui_focus_manager_request_move(Efl_Ui_Focus_Direction direction);
    Eina_Bool efl_ui_focus_manager_register(Efl_Ui_Focus_Object * child, Efl_Ui_Focus_Object * parent, Efl_Ui_Focus_Manager * redirect);
    Eina_Bool efl_ui_focus_manager_register_logical(Efl_Ui_Focus_Object * child, Efl_Ui_Focus_Object * parent, Efl_Ui_Focus_Manager * redirect);
    Eina_Bool efl_ui_focus_manager_update_redirect(Efl_Ui_Focus_Object * child, Efl_Ui_Focus_Manager * redirect);
    Eina_Bool efl_ui_focus_manager_update_parent(Efl_Ui_Focus_Object * child, Efl_Ui_Focus_Object * parent);
    Eina_Bool efl_ui_focus_manager_update_children(Efl_Ui_Focus_Object * parent, Eina_List * children);
    void efl_ui_focus_manager_update_order(Efl_Ui_Focus_Object * parent, Eina_List * children);
    void efl_ui_focus_manager_unregister(Efl_Ui_Focus_Object * child);
    void efl_ui_focus_manager_focus(Efl_Ui_Focus_Object * focus);
    Efl_Ui_Focus_Object *efl_ui_focus_manager_focused(void);
    Efl_Ui_Focus_Relations *efl_ui_focus_manager_fetch(Efl_Ui_Focus_Object * child);
    Efl_Ui_Focus_Object *efl_ui_focus_manager_logical_end(void);
    extern const Eo_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_REDIRECT_CHANGED;
    extern const Eo_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_FLUSH_PRE;
    extern const Eo_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_COORDS_DIRTY;
    extern const Eo_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_FOCUSED;
]]

local __M = util.get_namespace(M, { "ui", "focus" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    redirect_set = function(self, redirect)
        eo.__do_start(self, __class)
        __lib.efl_ui_focus_manager_redirect_set(redirect)
        eo.__do_end()
    end,

    redirect_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_manager_redirect_get()
        eo.__do_end()
        return v
    end,

    border_elements_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_manager_border_elements_get()
        eo.__do_end()
        return v
    end,

    root_set = function(self, root)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_manager_root_set(root)
        eo.__do_end()
    end,

    root_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_manager_root_get()
        eo.__do_end()
        return v
    end,

    move = function(self, direction)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_manager_move(direction)
        eo.__do_end()
        return v
    end,

    request_move = function(self, direction)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_manager_request_move(direction)
        eo.__do_end()
        return v
    end,

    register = function(self, child, parent, redirect)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_manager_register(child, parent, redirect)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    register_logical = function(self, child, parent, redirect)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_manager_register_logical(child, parent, redirect)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    update_redirect = function(self, child, redirect)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_manager_update_redirect(child, redirect)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    update_parent = function(self, child, parent)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_manager_update_parent(child, parent)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    update_children = function(self, parent, children)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_manager_update_children(parent, children)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    update_order = function(self, parent, children)
        eo.__do_start(self, __class)
        __lib.efl_ui_focus_manager_update_order(parent, children)
        eo.__do_end()
    end,

    unregister = function(self, child)
        eo.__do_start(self, __class)
        __lib.efl_ui_focus_manager_unregister(child)
        eo.__do_end()
    end,

    focus = function(self, focus)
        eo.__do_start(self, __class)
        __lib.efl_ui_focus_manager_focus(focus)
        eo.__do_end()
    end,

    focused = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_manager_focused()
        eo.__do_end()
        return v
    end,

    fetch = function(self, child)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_manager_fetch(child)
        eo.__do_end()
        return v
    end,

    logical_end = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_manager_logical_end()
        eo.__do_end()
        return v
    end,

    __events = {
        ["redirect,changed"] = __lib._EFL_UI_FOCUS_MANAGER_EVENT_REDIRECT_CHANGED,
        ["flush,pre"] = __lib._EFL_UI_FOCUS_MANAGER_EVENT_FLUSH_PRE,
        ["coords,dirty"] = __lib._EFL_UI_FOCUS_MANAGER_EVENT_COORDS_DIRTY,
        ["focused"] = __lib._EFL_UI_FOCUS_MANAGER_EVENT_FOCUSED
    },

    __properties = {
        ["redirect"] = { 0, 0, 1, 1, true, true },
        ["root"] = { 0, 0, 1, 1, true, true },
        ["border_elements"] = { 0, 0, 1, 0, true, false }
    }
}

__M.Manager = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Focus_Manager").__eo_ctor,
                            1, ...)
end

return M
