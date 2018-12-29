EWAPI const Efl_Event_Description _ELM_WEB_EVENT_URI_CHANGED =
   EFL_EVENT_DESCRIPTION("uri,changed");
EWAPI const Efl_Event_Description _ELM_WEB_EVENT_URL_CHANGED =
   EFL_EVENT_DESCRIPTION("url,changed");
EWAPI const Efl_Event_Description _ELM_WEB_EVENT_WINDOWS_CLOSE_REQUEST =
   EFL_EVENT_DESCRIPTION("windows,close,request");
EOAPI EFL_FUNC_BODYV(elm_obj_web_text_matches_highlight_set, Eina_Bool, 0, EFL_FUNC_CALL(highlight), Eina_Bool highlight);
EOAPI EFL_FUNC_BODY_CONST(elm_obj_web_text_matches_highlight_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_useragent_set, EFL_FUNC_CALL(user_agent), const char *user_agent);
EOAPI EFL_FUNC_BODY_CONST(elm_obj_web_useragent_get, const char *, NULL);
EOAPI EFL_FUNC_BODYV(elm_obj_web_url_set, Eina_Bool, 0, EFL_FUNC_CALL(url), const char *url);
EOAPI EFL_FUNC_BODY_CONST(elm_obj_web_url_get, const char *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_bg_color_set, EFL_FUNC_CALL(r, g, b, a), int r, int g, int b, int a);
EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_web_bg_color_get, EFL_FUNC_CALL(r, g, b, a), int *r, int *g, int *b, int *a);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_inwin_mode_set, EFL_FUNC_CALL(value), Eina_Bool value);
EOAPI EFL_FUNC_BODY_CONST(elm_obj_web_inwin_mode_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_tab_propagate_set, EFL_FUNC_CALL(propagate), Eina_Bool propagate);
EOAPI EFL_FUNC_BODY_CONST(elm_obj_web_tab_propagate_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_history_enabled_set, EFL_FUNC_CALL(enable), Eina_Bool enable);
EOAPI EFL_FUNC_BODY_CONST(elm_obj_web_history_enabled_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_zoom_mode_set, EFL_FUNC_CALL(mode), Elm_Web_Zoom_Mode mode);
EOAPI EFL_FUNC_BODY_CONST(elm_obj_web_zoom_mode_get, Elm_Web_Zoom_Mode, 0);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_zoom_set, EFL_FUNC_CALL(zoom), double zoom);
EOAPI EFL_FUNC_BODY_CONST(elm_obj_web_zoom_get, double, 0);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_console_message_hook_set, EFL_FUNC_CALL(func, data), Elm_Web_Console_Message func, void *data);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_window_create_hook_set, EFL_FUNC_CALL(func, data), Elm_Web_Window_Open func, void *data);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_dialog_file_selector_hook_set, EFL_FUNC_CALL(func, data), Elm_Web_Dialog_File_Selector func, void *data);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_dialog_confirm_hook_set, EFL_FUNC_CALL(func, data), Elm_Web_Dialog_Confirm func, void *data);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_popup_selected_set, EFL_FUNC_CALL(idx), int idx);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_dialog_prompt_hook_set, EFL_FUNC_CALL(func, data), Elm_Web_Dialog_Prompt func, void *data);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_dialog_alert_hook_set, EFL_FUNC_CALL(func, data), Elm_Web_Dialog_Alert func, void *data);
EOAPI EFL_FUNC_BODY_CONST(elm_obj_web_forward_possible_get, Eina_Bool, 0);
EOAPI EFL_FUNC_BODY_CONST(elm_obj_web_webkit_view_get, Efl_Canvas_Object *, NULL);
EOAPI EFL_FUNC_BODY_CONST(elm_obj_web_back_possible_get, Eina_Bool, 0);
EOAPI EFL_FUNC_BODY_CONST(elm_obj_web_load_progress_get, double, 0);
EOAPI EFL_FUNC_BODY_CONST(elm_obj_web_selection_get, const char *, NULL);
EOAPI EFL_FUNC_BODY_CONST(elm_obj_web_title_get, const char *, NULL);
EOAPI EFL_FUNC_BODYV(elm_obj_web_navigate, Eina_Bool, 0, EFL_FUNC_CALL(steps), int steps);
EOAPI EFL_FUNC_BODY(elm_obj_web_back, Eina_Bool, 0);
EOAPI EFL_FUNC_BODYV(elm_obj_web_html_string_load, Eina_Bool, 0, EFL_FUNC_CALL(html, base_url, unreachable_url), const char *html, const char *base_url, const char *unreachable_url);
EOAPI EFL_FUNC_BODYV_CONST(elm_obj_web_text_search, Eina_Bool, 0, EFL_FUNC_CALL(string, case_sensitive, forward, wrap), const char *string, Eina_Bool case_sensitive, Eina_Bool forward, Eina_Bool wrap);
EOAPI EFL_FUNC_BODY(elm_obj_web_popup_destroy, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_region_show, EFL_FUNC_CALL(x, y, w, h), int x, int y, int w, int h);
EOAPI EFL_FUNC_BODY(elm_obj_web_forward, Eina_Bool, 0);
EOAPI EFL_FUNC_BODYV(elm_obj_web_text_matches_mark, unsigned int, 0, EFL_FUNC_CALL(string, case_sensitive, highlight, limit), const char *string, Eina_Bool case_sensitive, Eina_Bool highlight, unsigned int limit);
EOAPI EFL_VOID_FUNC_BODYV(elm_obj_web_region_bring_in, EFL_FUNC_CALL(x, y, w, h), int x, int y, int w, int h);
EOAPI EFL_FUNC_BODY(elm_obj_web_stop, Eina_Bool, 0);
EOAPI EFL_FUNC_BODYV(elm_obj_web_navigate_possible_get, Eina_Bool, 0, EFL_FUNC_CALL(steps), int steps);
EOAPI EFL_FUNC_BODY(elm_obj_web_reload_full, Eina_Bool, 0);
EOAPI EFL_FUNC_BODY(elm_obj_web_text_matches_unmark_all, Eina_Bool, 0);
EOAPI EFL_FUNC_BODY(elm_obj_web_reload, Eina_Bool, 0);

Efl_Object *_elm_web_efl_object_constructor(Eo *obj, Elm_Web_Data *pd);


static Eina_Bool
_elm_web_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_WEB_EXTRA_OPS
#define ELM_WEB_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_web_text_matches_highlight_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_text_matches_highlight_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_useragent_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_useragent_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_url_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_url_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_bg_color_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_bg_color_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_inwin_mode_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_inwin_mode_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_tab_propagate_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_tab_propagate_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_history_enabled_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_history_enabled_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_zoom_mode_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_zoom_mode_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_zoom_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_zoom_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_console_message_hook_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_window_create_hook_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_dialog_file_selector_hook_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_dialog_confirm_hook_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_popup_selected_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_dialog_prompt_hook_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_dialog_alert_hook_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_forward_possible_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_webkit_view_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_back_possible_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_load_progress_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_selection_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_title_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_navigate, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_back, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_html_string_load, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_text_search, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_popup_destroy, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_region_show, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_forward, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_text_matches_mark, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_region_bring_in, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_stop, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_navigate_possible_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_reload_full, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_text_matches_unmark_all, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_web_reload, NULL),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_web_efl_object_constructor),
      ELM_WEB_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_WEB_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_WEB_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_web_class_desc = {
   EO_VERSION,
   "Elm.Web",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Web_Data),
   _elm_web_class_initializer,
   _elm_web_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_web_class_get, &_elm_web_class_desc, ELM_WIDGET_CLASS, NULL);

EAPI Eina_Bool
elm_web_text_matches_highlight_set(Elm_Web *obj, Eina_Bool highlight)
{
   return elm_obj_web_text_matches_highlight_set(obj, highlight);
}

EAPI Eina_Bool
elm_web_text_matches_highlight_get(const Elm_Web *obj)
{
   return elm_obj_web_text_matches_highlight_get(obj);
}

EAPI void
elm_web_useragent_set(Elm_Web *obj, const char *user_agent)
{
   elm_obj_web_useragent_set(obj, user_agent);
}

EAPI const char *
elm_web_useragent_get(const Elm_Web *obj)
{
   return elm_obj_web_useragent_get(obj);
}

EAPI Eina_Bool
elm_web_url_set(Elm_Web *obj, const char *url)
{
   return elm_obj_web_url_set(obj, url);
}

EAPI const char *
elm_web_url_get(const Elm_Web *obj)
{
   return elm_obj_web_url_get(obj);
}

EAPI void
elm_web_bg_color_set(Elm_Web *obj, int r, int g, int b, int a)
{
   elm_obj_web_bg_color_set(obj, r, g, b, a);
}

EAPI void
elm_web_bg_color_get(const Elm_Web *obj, int *r, int *g, int *b, int *a)
{
   elm_obj_web_bg_color_get(obj, r, g, b, a);
}

EAPI void
elm_web_inwin_mode_set(Elm_Web *obj, Eina_Bool value)
{
   elm_obj_web_inwin_mode_set(obj, value);
}

EAPI Eina_Bool
elm_web_inwin_mode_get(const Elm_Web *obj)
{
   return elm_obj_web_inwin_mode_get(obj);
}

EAPI void
elm_web_tab_propagate_set(Elm_Web *obj, Eina_Bool propagate)
{
   elm_obj_web_tab_propagate_set(obj, propagate);
}

EAPI Eina_Bool
elm_web_tab_propagate_get(const Elm_Web *obj)
{
   return elm_obj_web_tab_propagate_get(obj);
}

EAPI void
elm_web_history_enabled_set(Elm_Web *obj, Eina_Bool enable)
{
   elm_obj_web_history_enabled_set(obj, enable);
}

EAPI Eina_Bool
elm_web_history_enabled_get(const Elm_Web *obj)
{
   return elm_obj_web_history_enabled_get(obj);
}

EAPI void
elm_web_zoom_mode_set(Elm_Web *obj, Elm_Web_Zoom_Mode mode)
{
   elm_obj_web_zoom_mode_set(obj, mode);
}

EAPI Elm_Web_Zoom_Mode
elm_web_zoom_mode_get(const Elm_Web *obj)
{
   return elm_obj_web_zoom_mode_get(obj);
}

EAPI void
elm_web_zoom_set(Elm_Web *obj, double zoom)
{
   elm_obj_web_zoom_set(obj, zoom);
}

EAPI double
elm_web_zoom_get(const Elm_Web *obj)
{
   return elm_obj_web_zoom_get(obj);
}

EAPI void
elm_web_console_message_hook_set(Elm_Web *obj, Elm_Web_Console_Message func, void *data)
{
   elm_obj_web_console_message_hook_set(obj, func, data);
}

EAPI void
elm_web_window_create_hook_set(Elm_Web *obj, Elm_Web_Window_Open func, void *data)
{
   elm_obj_web_window_create_hook_set(obj, func, data);
}

EAPI void
elm_web_dialog_file_selector_hook_set(Elm_Web *obj, Elm_Web_Dialog_File_Selector func, void *data)
{
   elm_obj_web_dialog_file_selector_hook_set(obj, func, data);
}

EAPI void
elm_web_dialog_confirm_hook_set(Elm_Web *obj, Elm_Web_Dialog_Confirm func, void *data)
{
   elm_obj_web_dialog_confirm_hook_set(obj, func, data);
}

EAPI void
elm_web_popup_selected_set(Elm_Web *obj, int idx)
{
   elm_obj_web_popup_selected_set(obj, idx);
}

EAPI void
elm_web_dialog_prompt_hook_set(Elm_Web *obj, Elm_Web_Dialog_Prompt func, void *data)
{
   elm_obj_web_dialog_prompt_hook_set(obj, func, data);
}

EAPI void
elm_web_dialog_alert_hook_set(Elm_Web *obj, Elm_Web_Dialog_Alert func, void *data)
{
   elm_obj_web_dialog_alert_hook_set(obj, func, data);
}

EAPI Eina_Bool
elm_web_forward_possible_get(const Elm_Web *obj)
{
   return elm_obj_web_forward_possible_get(obj);
}

EAPI Efl_Canvas_Object *
elm_web_webkit_view_get(const Elm_Web *obj)
{
   return elm_obj_web_webkit_view_get(obj);
}

EAPI Eina_Bool
elm_web_back_possible_get(const Elm_Web *obj)
{
   return elm_obj_web_back_possible_get(obj);
}

EAPI double
elm_web_load_progress_get(const Elm_Web *obj)
{
   return elm_obj_web_load_progress_get(obj);
}

EAPI const char *
elm_web_selection_get(const Elm_Web *obj)
{
   return elm_obj_web_selection_get(obj);
}

EAPI const char *
elm_web_title_get(const Elm_Web *obj)
{
   return elm_obj_web_title_get(obj);
}

EAPI Eina_Bool
elm_web_navigate(Elm_Web *obj, int steps)
{
   return elm_obj_web_navigate(obj, steps);
}

EAPI Eina_Bool
elm_web_back(Elm_Web *obj)
{
   return elm_obj_web_back(obj);
}

EAPI Eina_Bool
elm_web_html_string_load(Elm_Web *obj, const char *html, const char *base_url, const char *unreachable_url)
{
   return elm_obj_web_html_string_load(obj, html, base_url, unreachable_url);
}

EAPI Eina_Bool
elm_web_text_search(const Elm_Web *obj, const char *string, Eina_Bool case_sensitive, Eina_Bool forward, Eina_Bool wrap)
{
   return elm_obj_web_text_search(obj, string, case_sensitive, forward, wrap);
}

EAPI Eina_Bool
elm_web_popup_destroy(Elm_Web *obj)
{
   return elm_obj_web_popup_destroy(obj);
}

EAPI void
elm_web_region_show(Elm_Web *obj, int x, int y, int w, int h)
{
   elm_obj_web_region_show(obj, x, y, w, h);
}

EAPI Eina_Bool
elm_web_forward(Elm_Web *obj)
{
   return elm_obj_web_forward(obj);
}

EAPI unsigned int
elm_web_text_matches_mark(Elm_Web *obj, const char *string, Eina_Bool case_sensitive, Eina_Bool highlight, unsigned int limit)
{
   return elm_obj_web_text_matches_mark(obj, string, case_sensitive, highlight, limit);
}

EAPI void
elm_web_region_bring_in(Elm_Web *obj, int x, int y, int w, int h)
{
   elm_obj_web_region_bring_in(obj, x, y, w, h);
}

EAPI Eina_Bool
elm_web_stop(Elm_Web *obj)
{
   return elm_obj_web_stop(obj);
}

EAPI Eina_Bool
elm_web_navigate_possible_get(Elm_Web *obj, int steps)
{
   return elm_obj_web_navigate_possible_get(obj, steps);
}

EAPI Eina_Bool
elm_web_reload_full(Elm_Web *obj)
{
   return elm_obj_web_reload_full(obj);
}

EAPI Eina_Bool
elm_web_text_matches_unmark_all(Elm_Web *obj)
{
   return elm_obj_web_text_matches_unmark_all(obj);
}

EAPI Eina_Bool
elm_web_reload(Elm_Web *obj)
{
   return elm_obj_web_reload(obj);
}
