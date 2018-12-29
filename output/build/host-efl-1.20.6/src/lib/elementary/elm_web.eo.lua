-- EFL LuaJIT bindings: elm_web.eo (class Elm.Web)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_web_class_get()
    eo.class_register("Elm_Web", {"Elm_Widget"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_web_class_get(void);
    Eina_Bool elm_obj_web_text_matches_highlight_set(Eina_Bool highlight);
    Eina_Bool elm_obj_web_text_matches_highlight_get(void);
    void elm_obj_web_useragent_set(const char * user_agent);
    const char *elm_obj_web_useragent_get(void);
    Eina_Bool elm_obj_web_url_set(const char * url);
    const char *elm_obj_web_url_get(void);
    void elm_obj_web_bg_color_set(int r, int g, int b, int a);
    void elm_obj_web_bg_color_get(int *r, int *g, int *b, int *a);
    void elm_obj_web_inwin_mode_set(Eina_Bool value);
    Eina_Bool elm_obj_web_inwin_mode_get(void);
    void elm_obj_web_tab_propagate_set(Eina_Bool propagate);
    Eina_Bool elm_obj_web_tab_propagate_get(void);
    void elm_obj_web_history_enabled_set(Eina_Bool enable);
    Eina_Bool elm_obj_web_history_enabled_get(void);
    void elm_obj_web_zoom_mode_set(Elm_Web_Zoom_Mode mode);
    Elm_Web_Zoom_Mode elm_obj_web_zoom_mode_get(void);
    void elm_obj_web_zoom_set(double zoom);
    double elm_obj_web_zoom_get(void);
    void elm_obj_web_console_message_hook_set(Elm_Web_Console_Message func, void * data);
    void elm_obj_web_window_create_hook_set(Elm_Web_Window_Open func, void * data);
    void elm_obj_web_dialog_file_selector_hook_set(Elm_Web_Dialog_File_Selector func, void * data);
    void elm_obj_web_dialog_confirm_hook_set(Elm_Web_Dialog_Confirm func, void * data);
    void elm_obj_web_popup_selected_set(int idx);
    void elm_obj_web_dialog_prompt_hook_set(Elm_Web_Dialog_Prompt func, void * data);
    void elm_obj_web_dialog_alert_hook_set(Elm_Web_Dialog_Alert func, void * data);
    Eina_Bool elm_obj_web_forward_possible_get(void);
    Efl_Canvas_Object *elm_obj_web_webkit_view_get(void);
    Eina_Bool elm_obj_web_back_possible_get(void);
    double elm_obj_web_load_progress_get(void);
    const char *elm_obj_web_selection_get(void);
    const char *elm_obj_web_title_get(void);
    Eina_Bool elm_obj_web_navigate(int steps);
    Eina_Bool elm_obj_web_back(void);
    Eina_Bool elm_obj_web_html_string_load(const char * html, const char * base_url, const char * unreachable_url);
    Eina_Bool elm_obj_web_text_search(const char * string, Eina_Bool case_sensitive, Eina_Bool forward, Eina_Bool wrap);
    Eina_Bool elm_obj_web_popup_destroy(void);
    void elm_obj_web_region_show(int x, int y, int w, int h);
    Eina_Bool elm_obj_web_forward(void);
    unsigned int elm_obj_web_text_matches_mark(const char * string, Eina_Bool case_sensitive, Eina_Bool highlight, unsigned int limit);
    void elm_obj_web_region_bring_in(int x, int y, int w, int h);
    Eina_Bool elm_obj_web_stop(void);
    Eina_Bool elm_obj_web_navigate_possible_get(int steps);
    Eina_Bool elm_obj_web_reload_full(void);
    Eina_Bool elm_obj_web_text_matches_unmark_all(void);
    Eina_Bool elm_obj_web_reload(void);
    extern const Eo_Event_Description _ELM_WEB_EVENT_URI_CHANGED;
    extern const Eo_Event_Description _ELM_WEB_EVENT_URL_CHANGED;
    extern const Eo_Event_Description _ELM_WEB_EVENT_WINDOWS_CLOSE_REQUEST;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    text_matches_highlight_set = function(self, highlight)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_text_matches_highlight_set(highlight)
        eo.__do_end()
    end,

    text_matches_highlight_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_text_matches_highlight_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    useragent_set = function(self, user_agent)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_useragent_set(user_agent)
        eo.__do_end()
    end,

    useragent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_useragent_get()
        eo.__do_end()
        return v
    end,

    url_set = function(self, url)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_url_set(url)
        eo.__do_end()
    end,

    url_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_url_get()
        eo.__do_end()
        return v
    end,

    bg_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_bg_color_set(r, g, b, a)
        eo.__do_end()
    end,

    bg_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        __lib.elm_obj_web_bg_color_get(r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    inwin_mode_set = function(self, value)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_inwin_mode_set(value)
        eo.__do_end()
    end,

    inwin_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_inwin_mode_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    tab_propagate_set = function(self, propagate)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_tab_propagate_set(propagate)
        eo.__do_end()
    end,

    tab_propagate_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_tab_propagate_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    history_enabled_set = function(self, enable)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_history_enabled_set(enable)
        eo.__do_end()
    end,

    history_enabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_history_enabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    zoom_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_zoom_mode_set(mode)
        eo.__do_end()
    end,

    zoom_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_zoom_mode_get()
        eo.__do_end()
        return v
    end,

    zoom_set = function(self, zoom)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_zoom_set(zoom)
        eo.__do_end()
    end,

    zoom_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_zoom_get()
        eo.__do_end()
        return tonumber(v)
    end,

    console_message_hook_set = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_console_message_hook_set(func, data)
        eo.__do_end()
    end,

    window_create_hook_set = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_window_create_hook_set(func, data)
        eo.__do_end()
    end,

    dialog_file_selector_hook_set = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_dialog_file_selector_hook_set(func, data)
        eo.__do_end()
    end,

    dialog_confirm_hook_set = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_dialog_confirm_hook_set(func, data)
        eo.__do_end()
    end,

    popup_selected_set = function(self, idx)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_popup_selected_set(idx)
        eo.__do_end()
    end,

    dialog_prompt_hook_set = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_dialog_prompt_hook_set(func, data)
        eo.__do_end()
    end,

    dialog_alert_hook_set = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_dialog_alert_hook_set(func, data)
        eo.__do_end()
    end,

    forward_possible_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_forward_possible_get()
        eo.__do_end()
    end,

    webkit_view_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_webkit_view_get()
        eo.__do_end()
    end,

    back_possible_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_back_possible_get()
        eo.__do_end()
    end,

    load_progress_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_load_progress_get()
        eo.__do_end()
    end,

    selection_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_selection_get()
        eo.__do_end()
    end,

    title_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_title_get()
        eo.__do_end()
    end,

    navigate = function(self, steps)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_navigate(steps)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    back = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_back()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    html_string_load = function(self, html, base_url, unreachable_url)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_html_string_load(html, base_url, unreachable_url)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    text_search = function(self, string, case_sensitive, forward, wrap)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_text_search(string, case_sensitive, forward, wrap)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    popup_destroy = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_popup_destroy()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    region_show = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_region_show(x, y, w, h)
        eo.__do_end()
    end,

    forward = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_forward()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    text_matches_mark = function(self, string, case_sensitive, highlight, limit)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_text_matches_mark(string, case_sensitive, highlight, limit)
        eo.__do_end()
        return v
    end,

    region_bring_in = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.elm_obj_web_region_bring_in(x, y, w, h)
        eo.__do_end()
    end,

    stop = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_stop()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    navigate_possible_get = function(self, steps)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_navigate_possible_get(steps)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    reload_full = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_reload_full()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    text_matches_unmark_all = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_text_matches_unmark_all()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    reload = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_web_reload()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["uri,changed"] = __lib._ELM_WEB_EVENT_URI_CHANGED,
        ["url,changed"] = __lib._ELM_WEB_EVENT_URL_CHANGED,
        ["windows,close,request"] = __lib._ELM_WEB_EVENT_WINDOWS_CLOSE_REQUEST
    },

    __properties = {
        ["popup_selected"] = { 0, 0, 0, 1, false, true },
        ["forward_possible"] = { 0, 0, 1, 0, true, false },
        ["tab_propagate"] = { 0, 0, 1, 1, true, true },
        ["dialog_file_selector_hook"] = { 0, 0, 0, 2, false, true },
        ["bg_color"] = { 0, 0, 4, 4, true, true },
        ["console_message_hook"] = { 0, 0, 0, 2, false, true },
        ["zoom_mode"] = { 0, 0, 1, 1, true, true },
        ["zoom"] = { 0, 0, 1, 1, true, true },
        ["useragent"] = { 0, 0, 1, 1, true, true },
        ["webkit_view"] = { 0, 0, 1, 0, true, false },
        ["window_create_hook"] = { 0, 0, 0, 2, false, true },
        ["load_progress"] = { 0, 0, 1, 0, true, false },
        ["selection"] = { 0, 0, 1, 0, true, false },
        ["dialog_alert_hook"] = { 0, 0, 0, 2, false, true },
        ["back_possible"] = { 0, 0, 1, 0, true, false },
        ["history_enabled"] = { 0, 0, 1, 1, true, true },
        ["title"] = { 0, 0, 1, 0, true, false },
        ["dialog_prompt_hook"] = { 0, 0, 0, 2, false, true },
        ["inwin_mode"] = { 0, 0, 1, 1, true, true },
        ["dialog_confirm_hook"] = { 0, 0, 0, 2, false, true },
        ["text_matches_highlight"] = { 0, 0, 1, 1, true, true },
        ["url"] = { 0, 0, 1, 1, true, true }
    }
}

M.Web = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Web").__eo_ctor,
                            1, ...)
end

return M
