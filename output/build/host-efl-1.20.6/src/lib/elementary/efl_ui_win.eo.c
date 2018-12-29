EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_DELETE_REQUEST =
   EFL_EVENT_DESCRIPTION("delete,request");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_WITHDRAWN =
   EFL_EVENT_DESCRIPTION("withdrawn");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_ICONIFIED =
   EFL_EVENT_DESCRIPTION("iconified");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_NORMAL =
   EFL_EVENT_DESCRIPTION("normal");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_STICK =
   EFL_EVENT_DESCRIPTION("stick");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_UNSTICK =
   EFL_EVENT_DESCRIPTION("unstick");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_FULLSCREEN =
   EFL_EVENT_DESCRIPTION("fullscreen");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_UNFULLSCREEN =
   EFL_EVENT_DESCRIPTION("unfullscreen");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_MAXIMIZED =
   EFL_EVENT_DESCRIPTION("maximized");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_UNMAXIMIZED =
   EFL_EVENT_DESCRIPTION("unmaximized");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_IOERR =
   EFL_EVENT_DESCRIPTION("ioerr");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_INDICATOR_PROP_CHANGED =
   EFL_EVENT_DESCRIPTION("indicator,prop,changed");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_ROTATION_CHANGED =
   EFL_EVENT_DESCRIPTION("rotation,changed");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_PROFILE_CHANGED =
   EFL_EVENT_DESCRIPTION("profile,changed");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_WM_ROTATION_CHANGED =
   EFL_EVENT_DESCRIPTION("wm,rotation,changed");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_THEME_CHANGED =
   EFL_EVENT_DESCRIPTION("theme,changed");
EWAPI const Efl_Event_Description _EFL_UI_WIN_EVENT_ELM_ACTION_BLOCK_MENU =
   EFL_EVENT_DESCRIPTION("elm,action,block_menu");

void _efl_ui_win_indicator_enabled_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_indicator_enabled_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);

Eina_Bool _efl_ui_win_indicator_enabled_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_indicator_enabled_get, Eina_Bool, 0);

void _efl_ui_win_indicator_type_set(Eo *obj, Efl_Ui_Win_Data *pd, Efl_Ui_Win_Indicator_Type type);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_indicator_type_set, EFL_FUNC_CALL(type), Efl_Ui_Win_Indicator_Type type);

Efl_Ui_Win_Indicator_Type _efl_ui_win_indicator_type_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_indicator_type_get, Efl_Ui_Win_Indicator_Type, 0);

void _efl_ui_win_keyboard_mode_set(Eo *obj, Efl_Ui_Win_Data *pd, Efl_Ui_Win_Keyboard_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_keyboard_mode_set, EFL_FUNC_CALL(mode), Efl_Ui_Win_Keyboard_Mode mode);

Efl_Ui_Win_Keyboard_Mode _efl_ui_win_keyboard_mode_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_keyboard_mode_get, Efl_Ui_Win_Keyboard_Mode, 0);

void _efl_ui_win_wm_available_rotations_set(Eo *obj, Efl_Ui_Win_Data *pd, const int *rotations, unsigned int count);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_wm_available_rotations_set, EFL_FUNC_CALL(rotations, count), const int *rotations, unsigned int count);

Eina_Bool _efl_ui_win_wm_available_rotations_get(Eo *obj, Efl_Ui_Win_Data *pd, int **rotations, unsigned int *count);

EOAPI EFL_FUNC_BODYV_CONST(efl_ui_win_wm_available_rotations_get, Eina_Bool, 0, EFL_FUNC_CALL(rotations, count), int **rotations, unsigned int *count);

void _efl_ui_win_screen_constrain_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool constrain);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_screen_constrain_set, EFL_FUNC_CALL(constrain), Eina_Bool constrain);

Eina_Bool _efl_ui_win_screen_constrain_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_screen_constrain_get, Eina_Bool, 0);

void _efl_ui_win_focus_highlight_style_set(Eo *obj, Efl_Ui_Win_Data *pd, const char *style);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_focus_highlight_style_set, EFL_FUNC_CALL(style), const char *style);

const char *_efl_ui_win_focus_highlight_style_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_focus_highlight_style_get, const char *, NULL);

void _efl_ui_win_focus_highlight_enabled_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_focus_highlight_enabled_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);

Eina_Bool _efl_ui_win_focus_highlight_enabled_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_focus_highlight_enabled_get, Eina_Bool, 0);

void _efl_ui_win_focus_highlight_animate_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool animate);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_focus_highlight_animate_set, EFL_FUNC_CALL(animate), Eina_Bool animate);

Eina_Bool _efl_ui_win_focus_highlight_animate_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_focus_highlight_animate_get, Eina_Bool, 0);

void _efl_ui_win_prop_focus_skip_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool skip);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_prop_focus_skip_set, EFL_FUNC_CALL(skip), Eina_Bool skip);

Eina_Bool _efl_ui_win_focus_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_focus_get, Eina_Bool, 0);

void _efl_ui_win_autodel_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool autodel);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_autodel_set, EFL_FUNC_CALL(autodel), Eina_Bool autodel);

Eina_Bool _efl_ui_win_autodel_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_autodel_get, Eina_Bool, 0);

void _efl_ui_win_autohide_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool autohide);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_autohide_set, EFL_FUNC_CALL(autohide), Eina_Bool autohide);

Eina_Bool _efl_ui_win_autohide_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_autohide_get, Eina_Bool, 0);

void _efl_ui_win_icon_object_set(Eo *obj, Efl_Ui_Win_Data *pd, Efl_Canvas_Object *icon);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_icon_object_set, EFL_FUNC_CALL(icon), Efl_Canvas_Object *icon);

const Efl_Canvas_Object *_efl_ui_win_icon_object_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_icon_object_get, const Efl_Canvas_Object *, NULL);

void _efl_ui_win_iconified_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool iconified);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_iconified_set, EFL_FUNC_CALL(iconified), Eina_Bool iconified);

Eina_Bool _efl_ui_win_iconified_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_iconified_get, Eina_Bool, 0);

void _efl_ui_win_maximized_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool maximized);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_maximized_set, EFL_FUNC_CALL(maximized), Eina_Bool maximized);

Eina_Bool _efl_ui_win_maximized_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_maximized_get, Eina_Bool, 0);

void _efl_ui_win_fullscreen_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool fullscreen);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_fullscreen_set, EFL_FUNC_CALL(fullscreen), Eina_Bool fullscreen);

Eina_Bool _efl_ui_win_fullscreen_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_fullscreen_get, Eina_Bool, 0);

void _efl_ui_win_sticky_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool sticky);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_sticky_set, EFL_FUNC_CALL(sticky), Eina_Bool sticky);

Eina_Bool _efl_ui_win_sticky_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_sticky_get, Eina_Bool, 0);

void _efl_ui_win_urgent_set(Eo *obj, Efl_Ui_Win_Data *pd, Efl_Ui_Win_Urgent_Mode urgent);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_urgent_set, EFL_FUNC_CALL(urgent), Efl_Ui_Win_Urgent_Mode urgent);

Efl_Ui_Win_Urgent_Mode _efl_ui_win_urgent_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_urgent_get, Efl_Ui_Win_Urgent_Mode, 0);

void _efl_ui_win_modal_set(Eo *obj, Efl_Ui_Win_Data *pd, Efl_Ui_Win_Modal_Mode modal);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_modal_set, EFL_FUNC_CALL(modal), Efl_Ui_Win_Modal_Mode modal);

Efl_Ui_Win_Modal_Mode _efl_ui_win_modal_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_modal_get, Efl_Ui_Win_Modal_Mode, 0);

void _efl_ui_win_noblank_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool noblank);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_noblank_set, EFL_FUNC_CALL(noblank), Eina_Bool noblank);

Eina_Bool _efl_ui_win_noblank_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_noblank_get, Eina_Bool, 0);

void _efl_ui_win_borderless_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool borderless);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_borderless_set, EFL_FUNC_CALL(borderless), Eina_Bool borderless);

Eina_Bool _efl_ui_win_borderless_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_borderless_get, Eina_Bool, 0);

void _efl_ui_win_role_set(Eo *obj, Efl_Ui_Win_Data *pd, const char *role);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_role_set, EFL_FUNC_CALL(role), const char *role);

const char *_efl_ui_win_role_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_role_get, const char *, NULL);

void _efl_ui_win_name_set(Eo *obj, Efl_Ui_Win_Data *pd, const char *name);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_name_set, EFL_FUNC_CALL(name), const char *name);

const char *_efl_ui_win_name_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_name_get, const char *, NULL);

void _efl_ui_win_type_set(Eo *obj, Efl_Ui_Win_Data *pd, Efl_Ui_Win_Type type);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_type_set, EFL_FUNC_CALL(type), Efl_Ui_Win_Type type);

Efl_Ui_Win_Type _efl_ui_win_type_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_type_get, Efl_Ui_Win_Type, -1 /* Efl.Ui.Win.Type.unknown */);

void _efl_ui_win_accel_preference_set(Eo *obj, Efl_Ui_Win_Data *pd, const char *accel);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_accel_preference_set, EFL_FUNC_CALL(accel), const char *accel);

const char *_efl_ui_win_accel_preference_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_accel_preference_get, const char *, NULL);

void _efl_ui_win_available_profiles_set(Eo *obj, Efl_Ui_Win_Data *pd, const char **profiles, unsigned int count);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_available_profiles_set, EFL_FUNC_CALL(profiles, count), const char **profiles, unsigned int count);

Eina_Bool _efl_ui_win_available_profiles_get(Eo *obj, Efl_Ui_Win_Data *pd, char ***profiles, unsigned int *count);

EOAPI EFL_FUNC_BODYV_CONST(efl_ui_win_available_profiles_get, Eina_Bool, 0, EFL_FUNC_CALL(profiles, count), char ***profiles, unsigned int *count);

void _efl_ui_win_alpha_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool alpha);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_alpha_set, EFL_FUNC_CALL(alpha), Eina_Bool alpha);

Eina_Bool _efl_ui_win_alpha_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_alpha_get, Eina_Bool, 0);

const char *_efl_ui_win_stack_id_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_stack_id_get, const char *, NULL);

void _efl_ui_win_stack_master_id_set(Eo *obj, Efl_Ui_Win_Data *pd, const char *id);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_stack_master_id_set, EFL_FUNC_CALL(id), const char *id);

const char *_efl_ui_win_stack_master_id_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_stack_master_id_get, const char *, NULL);

void _efl_ui_win_stack_base_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool base);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_stack_base_set, EFL_FUNC_CALL(base), Eina_Bool base);

Eina_Bool _efl_ui_win_stack_base_get(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_win_stack_base_get, Eina_Bool, 0);

void _efl_ui_win_stack_pop_to(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_ui_win_stack_pop_to);

Eina_Bool _efl_ui_win_socket_listen(Eo *obj, Efl_Ui_Win_Data *pd, const char *svcname, int svcnum, Eina_Bool svcsys);

EOAPI EFL_FUNC_BODYV(efl_ui_win_socket_listen, Eina_Bool, 0, EFL_FUNC_CALL(svcname, svcnum, svcsys), const char *svcname, int svcnum, Eina_Bool svcsys);

void _efl_ui_win_activate(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_ui_win_activate);

void _efl_ui_win_raise(Eo *obj, Efl_Ui_Win_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_ui_win_raise);

void _efl_ui_win_center(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool h, Eina_Bool v);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_win_center, EFL_FUNC_CALL(h, v), Eina_Bool h, Eina_Bool v);

Eina_Bool _efl_ui_win_keygrab_set(Eo *obj, Efl_Ui_Win_Data *pd, const char *key, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers, int priority, Efl_Ui_Win_Keygrab_Mode grab_mode);

EOAPI EFL_FUNC_BODYV(efl_ui_win_keygrab_set, Eina_Bool, 0, EFL_FUNC_CALL(key, modifiers, not_modifiers, priority, grab_mode), const char *key, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers, int priority, Efl_Ui_Win_Keygrab_Mode grab_mode);

Eina_Bool _efl_ui_win_keygrab_unset(Eo *obj, Efl_Ui_Win_Data *pd, const char *key, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers);

EOAPI EFL_FUNC_BODYV(efl_ui_win_keygrab_unset, Eina_Bool, 0, EFL_FUNC_CALL(key, modifiers, not_modifiers), const char *key, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers);

Eina_Bool _efl_ui_win_move_resize_start(Eo *obj, Efl_Ui_Win_Data *pd, Efl_Ui_Win_Move_Resize_Mode mode);

EOAPI EFL_FUNC_BODYV(efl_ui_win_move_resize_start, Eina_Bool, 0, EFL_FUNC_CALL(mode), Efl_Ui_Win_Move_Resize_Mode mode);

Efl_Object *_efl_ui_win_efl_object_constructor(Eo *obj, Efl_Ui_Win_Data *pd);


void _efl_ui_win_efl_object_destructor(Eo *obj, Efl_Ui_Win_Data *pd);


Efl_Object *_efl_ui_win_efl_object_finalize(Eo *obj, Efl_Ui_Win_Data *pd);


void _efl_ui_win_efl_gfx_visible_set(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool v);


void _efl_ui_win_efl_gfx_position_set(Eo *obj, Efl_Ui_Win_Data *pd, int x, int y);


void _efl_ui_win_efl_gfx_size_set(Eo *obj, Efl_Ui_Win_Data *pd, int w, int h);


Eina_Bool _efl_ui_win_elm_widget_focus_direction(Eo *obj, Efl_Ui_Win_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _efl_ui_win_elm_widget_focus_next_manager_is(Eo *obj, Efl_Ui_Win_Data *pd);


Eina_Bool _efl_ui_win_elm_widget_focus_direction_manager_is(Eo *obj, Efl_Ui_Win_Data *pd);


Eina_Bool _efl_ui_win_elm_widget_focus_next(Eo *obj, Efl_Ui_Win_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Elm_Theme_Apply _efl_ui_win_elm_widget_theme_apply(Eo *obj, Efl_Ui_Win_Data *pd);


Eina_Bool _efl_ui_win_elm_widget_on_focus(Eo *obj, Efl_Ui_Win_Data *pd, Elm_Widget_Item *item);


Eina_Bool _efl_ui_win_elm_widget_widget_event(Eo *obj, Efl_Ui_Win_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


Efl_Ui_Focus_Manager *_efl_ui_win_elm_widget_focus_manager_factory(Eo *obj, Efl_Ui_Win_Data *pd, Efl_Ui_Focus_Object *root);


Elm_Interface_Atspi_Accessible *_efl_ui_win_elm_interface_atspi_accessible_parent_get(Eo *obj, Efl_Ui_Win_Data *pd);


Elm_Atspi_State_Set _efl_ui_win_elm_interface_atspi_accessible_state_set_get(Eo *obj, Efl_Ui_Win_Data *pd);


const char *_efl_ui_win_elm_interface_atspi_accessible_name_get(Eo *obj, Efl_Ui_Win_Data *pd);


void _efl_ui_win_elm_interface_atspi_component_extents_get(Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool screen_coords, int *x, int *y, int *w, int *h);


const Elm_Atspi_Action *_efl_ui_win_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Efl_Ui_Win_Data *pd);


Eina_Bool _efl_ui_win_efl_input_state_modifier_enabled_get(Eo *obj, Efl_Ui_Win_Data *pd, Efl_Input_Modifier mod, const Efl_Input_Device *seat);


Eina_Bool _efl_ui_win_efl_input_state_lock_enabled_get(Eo *obj, Efl_Ui_Win_Data *pd, Efl_Input_Lock lock, const Efl_Input_Device *seat);


void _efl_ui_win_efl_screen_screen_dpi_get(Eo *obj, Efl_Ui_Win_Data *pd, int *xdpi, int *ydpi);


int _efl_ui_win_efl_screen_screen_rotation_get(Eo *obj, Efl_Ui_Win_Data *pd);


void _efl_ui_win_efl_screen_screen_size_get(Eo *obj, Efl_Ui_Win_Data *pd, int *w, int *h);


void _efl_ui_win_efl_gfx_size_hint_hint_base_set(Eo *obj, Efl_Ui_Win_Data *pd, int w, int h);


void _efl_ui_win_efl_gfx_size_hint_hint_base_get(Eo *obj, Efl_Ui_Win_Data *pd, int *w, int *h);


void _efl_ui_win_efl_gfx_size_hint_hint_step_set(Eo *obj, Efl_Ui_Win_Data *pd, int w, int h);


void _efl_ui_win_efl_gfx_size_hint_hint_step_get(Eo *obj, Efl_Ui_Win_Data *pd, int *w, int *h);


void _efl_ui_win_efl_gfx_size_hint_hint_aspect_set(Eo *obj, Efl_Ui_Win_Data *pd, Efl_Gfx_Size_Hint_Aspect mode, int w, int h);


void _efl_ui_win_efl_gfx_size_hint_hint_max_set(Eo *obj, Efl_Ui_Win_Data *pd, int w, int h);


void _efl_ui_win_efl_text_text_set(Eo *obj, Efl_Ui_Win_Data *pd, const char *text);


const char *_efl_ui_win_efl_text_text_get(Eo *obj, Efl_Ui_Win_Data *pd);


void _efl_ui_win_efl_input_interface_pointer_xy_get(Eo *obj, Efl_Ui_Win_Data *pd, int *x, int *y);


Eina_Bool _efl_ui_win_efl_input_interface_pointer_inside_get(Eo *obj, Efl_Ui_Win_Data *pd);


Eina_Iterator *_efl_ui_win_efl_input_interface_pointer_iterate(const Eo *obj, Efl_Ui_Win_Data *pd, Eina_Bool hover);


Eina_Bool _efl_ui_win_efl_canvas_image_max_size_get(Eo *obj, Efl_Ui_Win_Data *pd, int *maxw, int *maxh);


void _efl_ui_win_efl_canvas_smart_objects_calculate(Eo *obj, Efl_Ui_Win_Data *pd);


Eina_Iterator *_efl_ui_win_efl_canvas_objects_at_xy_get(const Eo *obj, Efl_Ui_Win_Data *pd, int x, int y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);


Efl_Gfx *_efl_ui_win_efl_canvas_object_top_at_xy_get(const Eo *obj, Efl_Ui_Win_Data *pd, int x, int y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);


Eina_Iterator *_efl_ui_win_efl_canvas_objects_in_rectangle_get(const Eo *obj, Efl_Ui_Win_Data *pd, int x, int y, int w, int h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);


Efl_Gfx *_efl_ui_win_efl_canvas_object_top_in_rectangle_get(const Eo *obj, Efl_Ui_Win_Data *pd, int x, int y, int w, int h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);


Efl_Input_Device *_efl_ui_win_efl_canvas_device_get(Eo *obj, Efl_Ui_Win_Data *pd, const char *name);


Efl_Input_Device *_efl_ui_win_efl_canvas_seat_get(Eo *obj, Efl_Ui_Win_Data *pd, int id);


Eina_Bool _efl_ui_win_efl_container_content_set(Eo *obj, Efl_Ui_Win_Data *pd, Efl_Gfx *content);


Efl_Gfx *_efl_ui_win_efl_container_content_get(Eo *obj, Efl_Ui_Win_Data *pd);


Efl_Gfx *_efl_ui_win_efl_container_content_unset(Eo *obj, Efl_Ui_Win_Data *pd);


Efl_Object *_efl_ui_win_efl_part_part(const Eo *obj, Efl_Ui_Win_Data *pd, const char *name);


static Eina_Bool
_efl_ui_win_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_WIN_EXTRA_OPS
#define EFL_UI_WIN_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_win_indicator_enabled_set, _efl_ui_win_indicator_enabled_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_indicator_enabled_get, _efl_ui_win_indicator_enabled_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_indicator_type_set, _efl_ui_win_indicator_type_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_indicator_type_get, _efl_ui_win_indicator_type_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_keyboard_mode_set, _efl_ui_win_keyboard_mode_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_keyboard_mode_get, _efl_ui_win_keyboard_mode_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_wm_available_rotations_set, _efl_ui_win_wm_available_rotations_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_wm_available_rotations_get, _efl_ui_win_wm_available_rotations_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_screen_constrain_set, _efl_ui_win_screen_constrain_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_screen_constrain_get, _efl_ui_win_screen_constrain_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_focus_highlight_style_set, _efl_ui_win_focus_highlight_style_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_focus_highlight_style_get, _efl_ui_win_focus_highlight_style_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_focus_highlight_enabled_set, _efl_ui_win_focus_highlight_enabled_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_focus_highlight_enabled_get, _efl_ui_win_focus_highlight_enabled_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_focus_highlight_animate_set, _efl_ui_win_focus_highlight_animate_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_focus_highlight_animate_get, _efl_ui_win_focus_highlight_animate_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_prop_focus_skip_set, _efl_ui_win_prop_focus_skip_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_focus_get, _efl_ui_win_focus_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_autodel_set, _efl_ui_win_autodel_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_autodel_get, _efl_ui_win_autodel_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_autohide_set, _efl_ui_win_autohide_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_autohide_get, _efl_ui_win_autohide_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_icon_object_set, _efl_ui_win_icon_object_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_icon_object_get, _efl_ui_win_icon_object_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_iconified_set, _efl_ui_win_iconified_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_iconified_get, _efl_ui_win_iconified_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_maximized_set, _efl_ui_win_maximized_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_maximized_get, _efl_ui_win_maximized_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_fullscreen_set, _efl_ui_win_fullscreen_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_fullscreen_get, _efl_ui_win_fullscreen_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_sticky_set, _efl_ui_win_sticky_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_sticky_get, _efl_ui_win_sticky_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_urgent_set, _efl_ui_win_urgent_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_urgent_get, _efl_ui_win_urgent_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_modal_set, _efl_ui_win_modal_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_modal_get, _efl_ui_win_modal_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_noblank_set, _efl_ui_win_noblank_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_noblank_get, _efl_ui_win_noblank_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_borderless_set, _efl_ui_win_borderless_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_borderless_get, _efl_ui_win_borderless_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_role_set, _efl_ui_win_role_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_role_get, _efl_ui_win_role_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_name_set, _efl_ui_win_name_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_name_get, _efl_ui_win_name_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_type_set, _efl_ui_win_type_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_type_get, _efl_ui_win_type_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_accel_preference_set, _efl_ui_win_accel_preference_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_accel_preference_get, _efl_ui_win_accel_preference_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_available_profiles_set, _efl_ui_win_available_profiles_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_available_profiles_get, _efl_ui_win_available_profiles_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_alpha_set, _efl_ui_win_alpha_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_alpha_get, _efl_ui_win_alpha_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_stack_id_get, _efl_ui_win_stack_id_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_stack_master_id_set, _efl_ui_win_stack_master_id_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_stack_master_id_get, _efl_ui_win_stack_master_id_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_stack_base_set, _efl_ui_win_stack_base_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_stack_base_get, _efl_ui_win_stack_base_get),
      EFL_OBJECT_OP_FUNC(efl_ui_win_stack_pop_to, _efl_ui_win_stack_pop_to),
      EFL_OBJECT_OP_FUNC(efl_ui_win_socket_listen, _efl_ui_win_socket_listen),
      EFL_OBJECT_OP_FUNC(efl_ui_win_activate, _efl_ui_win_activate),
      EFL_OBJECT_OP_FUNC(efl_ui_win_raise, _efl_ui_win_raise),
      EFL_OBJECT_OP_FUNC(efl_ui_win_center, _efl_ui_win_center),
      EFL_OBJECT_OP_FUNC(efl_ui_win_keygrab_set, _efl_ui_win_keygrab_set),
      EFL_OBJECT_OP_FUNC(efl_ui_win_keygrab_unset, _efl_ui_win_keygrab_unset),
      EFL_OBJECT_OP_FUNC(efl_ui_win_move_resize_start, _efl_ui_win_move_resize_start),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_win_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_ui_win_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_ui_win_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _efl_ui_win_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _efl_ui_win_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _efl_ui_win_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _efl_ui_win_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _efl_ui_win_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _efl_ui_win_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _efl_ui_win_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _efl_ui_win_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _efl_ui_win_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _efl_ui_win_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_manager_factory, _efl_ui_win_elm_widget_focus_manager_factory),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_parent_get, _efl_ui_win_elm_interface_atspi_accessible_parent_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _efl_ui_win_elm_interface_atspi_accessible_state_set_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_name_get, _efl_ui_win_elm_interface_atspi_accessible_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_extents_get, _efl_ui_win_elm_interface_atspi_component_extents_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _efl_ui_win_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(efl_input_modifier_enabled_get, _efl_ui_win_efl_input_state_modifier_enabled_get),
      EFL_OBJECT_OP_FUNC(efl_input_lock_enabled_get, _efl_ui_win_efl_input_state_lock_enabled_get),
      EFL_OBJECT_OP_FUNC(efl_screen_dpi_get, _efl_ui_win_efl_screen_screen_dpi_get),
      EFL_OBJECT_OP_FUNC(efl_screen_rotation_get, _efl_ui_win_efl_screen_screen_rotation_get),
      EFL_OBJECT_OP_FUNC(efl_screen_size_get, _efl_ui_win_efl_screen_screen_size_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_base_set, _efl_ui_win_efl_gfx_size_hint_hint_base_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_base_get, _efl_ui_win_efl_gfx_size_hint_hint_base_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_step_set, _efl_ui_win_efl_gfx_size_hint_hint_step_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_step_get, _efl_ui_win_efl_gfx_size_hint_hint_step_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_aspect_set, _efl_ui_win_efl_gfx_size_hint_hint_aspect_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_max_set, _efl_ui_win_efl_gfx_size_hint_hint_max_set),
      EFL_OBJECT_OP_FUNC(efl_text_set, _efl_ui_win_efl_text_text_set),
      EFL_OBJECT_OP_FUNC(efl_text_get, _efl_ui_win_efl_text_text_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_xy_get, _efl_ui_win_efl_input_interface_pointer_xy_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_inside_get, _efl_ui_win_efl_input_interface_pointer_inside_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_iterate, _efl_ui_win_efl_input_interface_pointer_iterate),
      EFL_OBJECT_OP_FUNC(efl_canvas_image_max_size_get, _efl_ui_win_efl_canvas_image_max_size_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_smart_objects_calculate, _efl_ui_win_efl_canvas_smart_objects_calculate),
      EFL_OBJECT_OP_FUNC(efl_canvas_objects_at_xy_get, _efl_ui_win_efl_canvas_objects_at_xy_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_top_at_xy_get, _efl_ui_win_efl_canvas_object_top_at_xy_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_objects_in_rectangle_get, _efl_ui_win_efl_canvas_objects_in_rectangle_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_top_in_rectangle_get, _efl_ui_win_efl_canvas_object_top_in_rectangle_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_device_get, _efl_ui_win_efl_canvas_device_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_seat_get, _efl_ui_win_efl_canvas_seat_get),
      EFL_OBJECT_OP_FUNC(efl_content_set, _efl_ui_win_efl_container_content_set),
      EFL_OBJECT_OP_FUNC(efl_content_get, _efl_ui_win_efl_container_content_get),
      EFL_OBJECT_OP_FUNC(efl_content_unset, _efl_ui_win_efl_container_content_unset),
      EFL_OBJECT_OP_FUNC(efl_part, _efl_ui_win_efl_part_part),
      EFL_UI_WIN_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_WIN_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_WIN_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_win_class_desc = {
   EO_VERSION,
   "Efl.Ui.Win",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Win_Data),
   _efl_ui_win_class_initializer,
   _efl_ui_win_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_win_class_get, &_efl_ui_win_class_desc, ELM_WIDGET_CLASS, EFL_CANVAS_INTERFACE, ELM_INTERFACE_ATSPI_WINDOW_INTERFACE, ELM_INTERFACE_ATSPI_COMPONENT_MIXIN, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, EFL_CONTAINER_INTERFACE, EFL_INPUT_STATE_INTERFACE, EFL_INPUT_INTERFACE_INTERFACE, EFL_SCREEN_INTERFACE, EFL_GFX_SIZE_HINT_INTERFACE, EFL_TEXT_INTERFACE, EFL_CONFIG_GLOBAL_CLASS, EFL_PART_INTERFACE, EFL_UI_FOCUS_MANAGER_CLASS, NULL);

EAPI void
elm_win_keyboard_mode_set(Efl_Ui_Win *obj, Efl_Ui_Win_Keyboard_Mode mode)
{
   efl_ui_win_keyboard_mode_set(obj, mode);
}

EAPI Efl_Ui_Win_Keyboard_Mode
elm_win_keyboard_mode_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_keyboard_mode_get(obj);
}

EAPI void
elm_win_wm_rotation_available_rotations_set(Efl_Ui_Win *obj, const int *rotations, unsigned int count)
{
   efl_ui_win_wm_available_rotations_set(obj, rotations, count);
}

EAPI Eina_Bool
elm_win_wm_rotation_available_rotations_get(const Efl_Ui_Win *obj, int **rotations, unsigned int *count)
{
   return efl_ui_win_wm_available_rotations_get(obj, rotations, count);
}

EAPI void
elm_win_screen_constrain_set(Efl_Ui_Win *obj, Eina_Bool constrain)
{
   efl_ui_win_screen_constrain_set(obj, constrain);
}

EAPI Eina_Bool
elm_win_screen_constrain_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_screen_constrain_get(obj);
}

EAPI void
elm_win_focus_highlight_style_set(Efl_Ui_Win *obj, const char *style)
{
   efl_ui_win_focus_highlight_style_set(obj, style);
}

EAPI const char *
elm_win_focus_highlight_style_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_focus_highlight_style_get(obj);
}

EAPI void
elm_win_focus_highlight_enabled_set(Efl_Ui_Win *obj, Eina_Bool enabled)
{
   efl_ui_win_focus_highlight_enabled_set(obj, enabled);
}

EAPI Eina_Bool
elm_win_focus_highlight_enabled_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_focus_highlight_enabled_get(obj);
}

EAPI void
elm_win_focus_highlight_animate_set(Efl_Ui_Win *obj, Eina_Bool animate)
{
   efl_ui_win_focus_highlight_animate_set(obj, animate);
}

EAPI Eina_Bool
elm_win_focus_highlight_animate_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_focus_highlight_animate_get(obj);
}

EAPI void
elm_win_prop_focus_skip_set(Efl_Ui_Win *obj, Eina_Bool skip)
{
   efl_ui_win_prop_focus_skip_set(obj, skip);
}

EAPI Eina_Bool
elm_win_focus_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_focus_get(obj);
}

EAPI void
elm_win_autodel_set(Efl_Ui_Win *obj, Eina_Bool autodel)
{
   efl_ui_win_autodel_set(obj, autodel);
}

EAPI Eina_Bool
elm_win_autodel_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_autodel_get(obj);
}

EAPI void
elm_win_autohide_set(Efl_Ui_Win *obj, Eina_Bool autohide)
{
   efl_ui_win_autohide_set(obj, autohide);
}

EAPI Eina_Bool
elm_win_autohide_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_autohide_get(obj);
}

EAPI void
elm_win_icon_object_set(Efl_Ui_Win *obj, Efl_Canvas_Object *icon)
{
   efl_ui_win_icon_object_set(obj, icon);
}

EAPI const Efl_Canvas_Object *
elm_win_icon_object_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_icon_object_get(obj);
}

EAPI void
elm_win_iconified_set(Efl_Ui_Win *obj, Eina_Bool iconified)
{
   efl_ui_win_iconified_set(obj, iconified);
}

EAPI Eina_Bool
elm_win_iconified_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_iconified_get(obj);
}

EAPI void
elm_win_maximized_set(Efl_Ui_Win *obj, Eina_Bool maximized)
{
   efl_ui_win_maximized_set(obj, maximized);
}

EAPI Eina_Bool
elm_win_maximized_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_maximized_get(obj);
}

EAPI void
elm_win_fullscreen_set(Efl_Ui_Win *obj, Eina_Bool fullscreen)
{
   efl_ui_win_fullscreen_set(obj, fullscreen);
}

EAPI Eina_Bool
elm_win_fullscreen_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_fullscreen_get(obj);
}

EAPI void
elm_win_sticky_set(Efl_Ui_Win *obj, Eina_Bool sticky)
{
   efl_ui_win_sticky_set(obj, sticky);
}

EAPI Eina_Bool
elm_win_sticky_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_sticky_get(obj);
}

EAPI void
elm_win_noblank_set(Efl_Ui_Win *obj, Eina_Bool noblank)
{
   efl_ui_win_noblank_set(obj, noblank);
}

EAPI Eina_Bool
elm_win_noblank_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_noblank_get(obj);
}

EAPI void
elm_win_borderless_set(Efl_Ui_Win *obj, Eina_Bool borderless)
{
   efl_ui_win_borderless_set(obj, borderless);
}

EAPI Eina_Bool
elm_win_borderless_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_borderless_get(obj);
}

EAPI void
elm_win_role_set(Efl_Ui_Win *obj, const char *role)
{
   efl_ui_win_role_set(obj, role);
}

EAPI const char *
elm_win_role_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_role_get(obj);
}

EAPI const char *
elm_win_name_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_name_get(obj);
}

EAPI Efl_Ui_Win_Type
elm_win_type_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_type_get(obj);
}

EAPI const char *
elm_win_accel_preference_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_accel_preference_get(obj);
}

EAPI void
elm_win_available_profiles_set(Efl_Ui_Win *obj, const char **profiles, unsigned int count)
{
   efl_ui_win_available_profiles_set(obj, profiles, count);
}

EAPI Eina_Bool
elm_win_available_profiles_get(const Efl_Ui_Win *obj, char ***profiles, unsigned int *count)
{
   return efl_ui_win_available_profiles_get(obj, profiles, count);
}

EAPI void
elm_win_alpha_set(Efl_Ui_Win *obj, Eina_Bool alpha)
{
   efl_ui_win_alpha_set(obj, alpha);
}

EAPI Eina_Bool
elm_win_alpha_get(const Efl_Ui_Win *obj)
{
   return efl_ui_win_alpha_get(obj);
}

EAPI Eina_Bool
elm_win_socket_listen(Efl_Ui_Win *obj, const char *svcname, int svcnum, Eina_Bool svcsys)
{
   return efl_ui_win_socket_listen(obj, svcname, svcnum, svcsys);
}

EAPI void
elm_win_activate(Efl_Ui_Win *obj)
{
   efl_ui_win_activate(obj);
}

EAPI void
elm_win_raise(Efl_Ui_Win *obj)
{
   efl_ui_win_raise(obj);
}

EAPI void
elm_win_center(Efl_Ui_Win *obj, Eina_Bool h, Eina_Bool v)
{
   efl_ui_win_center(obj, h, v);
}

EAPI Eina_Bool
elm_win_move_resize_start(Efl_Ui_Win *obj, Efl_Ui_Win_Move_Resize_Mode mode)
{
   return efl_ui_win_move_resize_start(obj, mode);
}
