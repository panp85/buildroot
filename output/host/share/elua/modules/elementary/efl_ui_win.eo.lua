-- EFL LuaJIT bindings: efl_ui_win.eo (class Efl.Ui.Win)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_win_class_get()
    eo.class_register("Efl_Ui_Win", {"Elm_Widget", "Efl_Config_Global", "Efl_Ui_Focus_Manager"}, {"Efl_Canvas", "Elm_Interface_Atspi_Window", "Elm_Interface_Atspi_Component", "Elm_Interface_Atspi_Widget_Action", "Efl_Container", "Efl_Input_State", "Efl_Input_Interface", "Efl_Screen", "Efl_Gfx_Size_Hint", "Efl_Text", "Efl_Part"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_win_class_get(void);
    void efl_ui_win_indicator_enabled_set(Eina_Bool enabled);
    Eina_Bool efl_ui_win_indicator_enabled_get(void);
    void efl_ui_win_indicator_type_set(Efl_Ui_Win_Indicator_Type type);
    Efl_Ui_Win_Indicator_Type efl_ui_win_indicator_type_get(void);
    void efl_ui_win_keyboard_mode_set(Efl_Ui_Win_Keyboard_Mode mode);
    Efl_Ui_Win_Keyboard_Mode efl_ui_win_keyboard_mode_get(void);
    void efl_ui_win_wm_available_rotations_set(const int * rotations, unsigned int count);
    Eina_Bool efl_ui_win_wm_available_rotations_get(int * *rotations, unsigned int *count);
    void efl_ui_win_screen_constrain_set(Eina_Bool constrain);
    Eina_Bool efl_ui_win_screen_constrain_get(void);
    void efl_ui_win_focus_highlight_style_set(const char * style);
    const char *efl_ui_win_focus_highlight_style_get(void);
    void efl_ui_win_focus_highlight_enabled_set(Eina_Bool enabled);
    Eina_Bool efl_ui_win_focus_highlight_enabled_get(void);
    void efl_ui_win_focus_highlight_animate_set(Eina_Bool animate);
    Eina_Bool efl_ui_win_focus_highlight_animate_get(void);
    void efl_ui_win_prop_focus_skip_set(Eina_Bool skip);
    Eina_Bool efl_ui_win_focus_get(void);
    void efl_ui_win_autodel_set(Eina_Bool autodel);
    Eina_Bool efl_ui_win_autodel_get(void);
    void efl_ui_win_autohide_set(Eina_Bool autohide);
    Eina_Bool efl_ui_win_autohide_get(void);
    void efl_ui_win_icon_object_set(Efl_Canvas_Object * icon);
    const Efl_Canvas_Object *efl_ui_win_icon_object_get(void);
    void efl_ui_win_iconified_set(Eina_Bool iconified);
    Eina_Bool efl_ui_win_iconified_get(void);
    void efl_ui_win_maximized_set(Eina_Bool maximized);
    Eina_Bool efl_ui_win_maximized_get(void);
    void efl_ui_win_fullscreen_set(Eina_Bool fullscreen);
    Eina_Bool efl_ui_win_fullscreen_get(void);
    void efl_ui_win_sticky_set(Eina_Bool sticky);
    Eina_Bool efl_ui_win_sticky_get(void);
    void efl_ui_win_urgent_set(Efl_Ui_Win_Urgent_Mode urgent);
    Efl_Ui_Win_Urgent_Mode efl_ui_win_urgent_get(void);
    void efl_ui_win_modal_set(Efl_Ui_Win_Modal_Mode modal);
    Efl_Ui_Win_Modal_Mode efl_ui_win_modal_get(void);
    void efl_ui_win_noblank_set(Eina_Bool noblank);
    Eina_Bool efl_ui_win_noblank_get(void);
    void efl_ui_win_borderless_set(Eina_Bool borderless);
    Eina_Bool efl_ui_win_borderless_get(void);
    void efl_ui_win_role_set(const char * role);
    const char *efl_ui_win_role_get(void);
    void efl_ui_win_name_set(const char * name);
    const char *efl_ui_win_name_get(void);
    void efl_ui_win_type_set(Efl_Ui_Win_Type type);
    Efl_Ui_Win_Type efl_ui_win_type_get(void);
    void efl_ui_win_accel_preference_set(const char * accel);
    const char *efl_ui_win_accel_preference_get(void);
    void efl_ui_win_available_profiles_set(const char ** profiles, unsigned int count);
    Eina_Bool efl_ui_win_available_profiles_get(char ** *profiles, unsigned int *count);
    void efl_ui_win_alpha_set(Eina_Bool alpha);
    Eina_Bool efl_ui_win_alpha_get(void);
    const char *efl_ui_win_stack_id_get(void);
    void efl_ui_win_stack_master_id_set(const char * id);
    const char *efl_ui_win_stack_master_id_get(void);
    void efl_ui_win_stack_base_set(Eina_Bool base);
    Eina_Bool efl_ui_win_stack_base_get(void);
    void efl_ui_win_stack_pop_to(void);
    Eina_Bool efl_ui_win_socket_listen(const char * svcname, int svcnum, Eina_Bool svcsys);
    void efl_ui_win_activate(void);
    void efl_ui_win_raise(void);
    void efl_ui_win_center(Eina_Bool h, Eina_Bool v);
    Eina_Bool efl_ui_win_keygrab_set(const char * key, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers, int priority, Efl_Ui_Win_Keygrab_Mode grab_mode);
    Eina_Bool efl_ui_win_keygrab_unset(const char * key, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers);
    Eina_Bool efl_ui_win_move_resize_start(Efl_Ui_Win_Move_Resize_Mode mode);
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_DELETE_REQUEST;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_WITHDRAWN;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_ICONIFIED;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_NORMAL;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_STICK;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_UNSTICK;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_FULLSCREEN;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_UNFULLSCREEN;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_MAXIMIZED;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_UNMAXIMIZED;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_IOERR;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_INDICATOR_PROP_CHANGED;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_ROTATION_CHANGED;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_PROFILE_CHANGED;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_WM_ROTATION_CHANGED;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_THEME_CHANGED;
    extern const Eo_Event_Description _EFL_UI_WIN_EVENT_ELM_ACTION_BLOCK_MENU;
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    __eo_ctor = function(self, name, type, accel_preference_accel, __func)
        self:name_set(name)
        self:type_set(type)
        self:accel_preference_set(accel_preference_accel)
        if __func then __func() end
    end,

    indicator_enabled_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_indicator_enabled_set(enabled)
        eo.__do_end()
    end,

    indicator_enabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_indicator_enabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    indicator_type_set = function(self, type)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_indicator_type_set(type)
        eo.__do_end()
    end,

    indicator_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_indicator_type_get()
        eo.__do_end()
        return v
    end,

    keyboard_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_keyboard_mode_set(mode)
        eo.__do_end()
    end,

    keyboard_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_keyboard_mode_get()
        eo.__do_end()
        return v
    end,

    wm_available_rotations_set = function(self, rotations, count)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_wm_available_rotations_set(rotations, count)
        eo.__do_end()
    end,

    wm_available_rotations_get = function(self)
        eo.__do_start(self, __class)
        local rotations = ffi.new("int *[1]")
        local count = ffi.new("unsigned int[1]")
        local v = __lib.efl_ui_win_wm_available_rotations_get(rotations, count)
        eo.__do_end()
        return tonumber(rotations[0]), count[0]
    end,

    screen_constrain_set = function(self, constrain)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_screen_constrain_set(constrain)
        eo.__do_end()
    end,

    screen_constrain_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_screen_constrain_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    focus_highlight_style_set = function(self, style)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_focus_highlight_style_set(style)
        eo.__do_end()
    end,

    focus_highlight_style_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_focus_highlight_style_get()
        eo.__do_end()
        return v
    end,

    focus_highlight_enabled_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_focus_highlight_enabled_set(enabled)
        eo.__do_end()
    end,

    focus_highlight_enabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_focus_highlight_enabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    focus_highlight_animate_set = function(self, animate)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_focus_highlight_animate_set(animate)
        eo.__do_end()
    end,

    focus_highlight_animate_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_focus_highlight_animate_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    prop_focus_skip_set = function(self, skip)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_prop_focus_skip_set(skip)
        eo.__do_end()
    end,

    focus_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_focus_get()
        eo.__do_end()
    end,

    autodel_set = function(self, autodel)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_autodel_set(autodel)
        eo.__do_end()
    end,

    autodel_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_autodel_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    autohide_set = function(self, autohide)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_autohide_set(autohide)
        eo.__do_end()
    end,

    autohide_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_autohide_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    icon_object_set = function(self, icon)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_icon_object_set(icon)
        eo.__do_end()
    end,

    icon_object_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_icon_object_get()
        eo.__do_end()
        return v
    end,

    iconified_set = function(self, iconified)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_iconified_set(iconified)
        eo.__do_end()
    end,

    iconified_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_iconified_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    maximized_set = function(self, maximized)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_maximized_set(maximized)
        eo.__do_end()
    end,

    maximized_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_maximized_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    fullscreen_set = function(self, fullscreen)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_fullscreen_set(fullscreen)
        eo.__do_end()
    end,

    fullscreen_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_fullscreen_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    sticky_set = function(self, sticky)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_sticky_set(sticky)
        eo.__do_end()
    end,

    sticky_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_sticky_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    urgent_set = function(self, urgent)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_urgent_set(urgent)
        eo.__do_end()
    end,

    urgent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_urgent_get()
        eo.__do_end()
        return v
    end,

    modal_set = function(self, modal)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_modal_set(modal)
        eo.__do_end()
    end,

    modal_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_modal_get()
        eo.__do_end()
        return v
    end,

    noblank_set = function(self, noblank)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_noblank_set(noblank)
        eo.__do_end()
    end,

    noblank_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_noblank_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    borderless_set = function(self, borderless)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_borderless_set(borderless)
        eo.__do_end()
    end,

    borderless_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_borderless_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    role_set = function(self, role)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_role_set(role)
        eo.__do_end()
    end,

    role_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_role_get()
        eo.__do_end()
        return v
    end,

    name_set = function(self, name)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_name_set(name)
        eo.__do_end()
    end,

    name_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_name_get()
        eo.__do_end()
        return v
    end,

    type_set = function(self, type)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_type_set(type)
        eo.__do_end()
    end,

    type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_type_get()
        eo.__do_end()
        return v
    end,

    accel_preference_set = function(self, accel)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_accel_preference_set(accel)
        eo.__do_end()
    end,

    accel_preference_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_accel_preference_get()
        eo.__do_end()
        return v
    end,

    available_profiles_set = function(self, profiles, count)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_available_profiles_set(profiles, count)
        eo.__do_end()
    end,

    available_profiles_get = function(self)
        eo.__do_start(self, __class)
        local profiles = ffi.new("char **[1]")
        local count = ffi.new("unsigned int[1]")
        local v = __lib.efl_ui_win_available_profiles_get(profiles, count)
        eo.__do_end()
        return profiles[0], count[0]
    end,

    alpha_set = function(self, alpha)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_alpha_set(alpha)
        eo.__do_end()
    end,

    alpha_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_alpha_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    stack_id_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_stack_id_get()
        eo.__do_end()
        return v
    end,

    stack_master_id_set = function(self, id)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_stack_master_id_set(id)
        eo.__do_end()
    end,

    stack_master_id_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_stack_master_id_get()
        eo.__do_end()
        return v
    end,

    stack_base_set = function(self, base)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_stack_base_set(base)
        eo.__do_end()
    end,

    stack_base_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_stack_base_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    stack_pop_to = function(self)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_stack_pop_to()
        eo.__do_end()
    end,

    socket_listen = function(self, svcname, svcnum, svcsys)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_socket_listen(svcname, svcnum, svcsys)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    activate = function(self)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_activate()
        eo.__do_end()
    end,

    raise = function(self)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_raise()
        eo.__do_end()
    end,

    center = function(self, h, v)
        eo.__do_start(self, __class)
        __lib.efl_ui_win_center(h, v)
        eo.__do_end()
    end,

    keygrab_set = function(self, key, modifiers, not_modifiers, priority, grab_mode)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_keygrab_set(key, modifiers, not_modifiers, priority, grab_mode)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    keygrab_unset = function(self, key, modifiers, not_modifiers)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_keygrab_unset(key, modifiers, not_modifiers)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    move_resize_start = function(self, mode)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_win_move_resize_start(mode)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["delete,request"] = __lib._EFL_UI_WIN_EVENT_DELETE_REQUEST,
        ["withdrawn"] = __lib._EFL_UI_WIN_EVENT_WITHDRAWN,
        ["iconified"] = __lib._EFL_UI_WIN_EVENT_ICONIFIED,
        ["normal"] = __lib._EFL_UI_WIN_EVENT_NORMAL,
        ["stick"] = __lib._EFL_UI_WIN_EVENT_STICK,
        ["unstick"] = __lib._EFL_UI_WIN_EVENT_UNSTICK,
        ["fullscreen"] = __lib._EFL_UI_WIN_EVENT_FULLSCREEN,
        ["unfullscreen"] = __lib._EFL_UI_WIN_EVENT_UNFULLSCREEN,
        ["maximized"] = __lib._EFL_UI_WIN_EVENT_MAXIMIZED,
        ["unmaximized"] = __lib._EFL_UI_WIN_EVENT_UNMAXIMIZED,
        ["ioerr"] = __lib._EFL_UI_WIN_EVENT_IOERR,
        ["indicator,prop,changed"] = __lib._EFL_UI_WIN_EVENT_INDICATOR_PROP_CHANGED,
        ["rotation,changed"] = __lib._EFL_UI_WIN_EVENT_ROTATION_CHANGED,
        ["profile,changed"] = __lib._EFL_UI_WIN_EVENT_PROFILE_CHANGED,
        ["wm,rotation,changed"] = __lib._EFL_UI_WIN_EVENT_WM_ROTATION_CHANGED,
        ["theme,changed"] = __lib._EFL_UI_WIN_EVENT_THEME_CHANGED,
        ["elm,action,block_menu"] = __lib._EFL_UI_WIN_EVENT_ELM_ACTION_BLOCK_MENU
    },

    __properties = {
        ["focus"] = { 0, 0, 1, 0, true, false },
        ["urgent"] = { 0, 0, 1, 1, true, true },
        ["autohide"] = { 0, 0, 1, 1, true, true },
        ["iconified"] = { 0, 0, 1, 1, true, true },
        ["focus_highlight_style"] = { 0, 0, 1, 1, true, true },
        ["sticky"] = { 0, 0, 1, 1, true, true },
        ["stack_id"] = { 0, 0, 1, 0, true, false },
        ["accel_preference"] = { 0, 0, 1, 1, true, true },
        ["stack_base"] = { 0, 0, 1, 1, true, true },
        ["role"] = { 0, 0, 1, 1, true, true },
        ["stack_master_id"] = { 0, 0, 1, 1, true, true },
        ["alpha"] = { 0, 0, 1, 1, true, true },
        ["available_profiles"] = { 0, 0, 2, 2, true, true },
        ["modal"] = { 0, 0, 1, 1, true, true },
        ["indicator_enabled"] = { 0, 0, 1, 1, true, true },
        ["maximized"] = { 0, 0, 1, 1, true, true },
        ["fullscreen"] = { 0, 0, 1, 1, true, true },
        ["autodel"] = { 0, 0, 1, 1, true, true },
        ["keyboard_mode"] = { 0, 0, 1, 1, true, true },
        ["prop_focus_skip"] = { 0, 0, 0, 1, false, true },
        ["icon_object"] = { 0, 0, 1, 1, true, true },
        ["focus_highlight_animate"] = { 0, 0, 1, 1, true, true },
        ["noblank"] = { 0, 0, 1, 1, true, true },
        ["screen_constrain"] = { 0, 0, 1, 1, true, true },
        ["wm_available_rotations"] = { 0, 0, 2, 2, true, true },
        ["focus_highlight_enabled"] = { 0, 0, 1, 1, true, true },
        ["type"] = { 0, 0, 1, 1, true, true },
        ["borderless"] = { 0, 0, 1, 1, true, true },
        ["name"] = { 0, 0, 1, 1, true, true },
        ["indicator_type"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Win = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Win").__eo_ctor,
                            1, ...)
end

return M
