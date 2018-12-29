
Eina_Bool _efl_canvas_object_pointer_mode_by_device_set(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Input_Device *dev, Efl_Input_Object_Pointer_Mode pointer_mode);

EOAPI EFL_FUNC_BODYV(efl_canvas_object_pointer_mode_by_device_set, Eina_Bool, 0, EFL_FUNC_CALL(dev, pointer_mode), Efl_Input_Device *dev, Efl_Input_Object_Pointer_Mode pointer_mode);

Efl_Input_Object_Pointer_Mode _efl_canvas_object_pointer_mode_by_device_get(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Input_Device *dev);

EOAPI EFL_FUNC_BODYV_CONST(efl_canvas_object_pointer_mode_by_device_get, Efl_Input_Object_Pointer_Mode, 0, EFL_FUNC_CALL(dev), Efl_Input_Device *dev);

Eina_Bool _efl_canvas_object_pointer_mode_set(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Input_Object_Pointer_Mode pointer_mode);

EOAPI EFL_FUNC_BODYV(efl_canvas_object_pointer_mode_set, Eina_Bool, 0, EFL_FUNC_CALL(pointer_mode), Efl_Input_Object_Pointer_Mode pointer_mode);

Efl_Input_Object_Pointer_Mode _efl_canvas_object_pointer_mode_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_pointer_mode_get, Efl_Input_Object_Pointer_Mode, 0);

Eina_Bool _efl_canvas_object_pointer_in_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_pointer_in_get, Eina_Bool, 0);

Eina_Bool _efl_canvas_object_pointer_device_in_get(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Input_Device *pointer);

EOAPI EFL_FUNC_BODYV_CONST(efl_canvas_object_pointer_device_in_get, Eina_Bool, 0, EFL_FUNC_CALL(pointer), Efl_Input_Device *pointer);

void _efl_canvas_object_render_op_set(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Gfx_Render_Op render_op);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_object_render_op_set, EFL_FUNC_CALL(render_op), Efl_Gfx_Render_Op render_op);

Efl_Gfx_Render_Op _efl_canvas_object_render_op_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_render_op_get, Efl_Gfx_Render_Op, 0);

void _efl_canvas_object_freeze_events_set(Eo *obj, Evas_Object_Protected_Data *pd, Eina_Bool freeze);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_object_freeze_events_set, EFL_FUNC_CALL(freeze), Eina_Bool freeze);

Eina_Bool _efl_canvas_object_freeze_events_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_freeze_events_get, Eina_Bool, 0);

void _efl_canvas_object_clip_set(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Canvas_Object *clip);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_object_clip_set, EFL_FUNC_CALL(clip), Efl_Canvas_Object *clip);

Efl_Canvas_Object *_efl_canvas_object_clip_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_clip_get, Efl_Canvas_Object *, NULL);

void _efl_canvas_object_repeat_events_set(Eo *obj, Evas_Object_Protected_Data *pd, Eina_Bool repeat);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_object_repeat_events_set, EFL_FUNC_CALL(repeat), Eina_Bool repeat);

Eina_Bool _efl_canvas_object_repeat_events_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_repeat_events_get, Eina_Bool, 0);

void _efl_canvas_object_scale_set(Eo *obj, Evas_Object_Protected_Data *pd, double scale);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_object_scale_set, EFL_FUNC_CALL(scale), double scale);

double _efl_canvas_object_scale_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_scale_get, double, 0);

void _efl_canvas_object_key_focus_set(Eo *obj, Evas_Object_Protected_Data *pd, Eina_Bool focus);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_object_key_focus_set, EFL_FUNC_CALL(focus), Eina_Bool focus);

Eina_Bool _efl_canvas_object_key_focus_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_key_focus_get, Eina_Bool, 0);

Eina_Bool _efl_canvas_object_seat_focus_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_seat_focus_get, Eina_Bool, 0);

Eina_Bool _efl_canvas_object_seat_focus_check(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Input_Device *seat);

EOAPI EFL_FUNC_BODYV(efl_canvas_object_seat_focus_check, Eina_Bool, 0, EFL_FUNC_CALL(seat), Efl_Input_Device *seat);

Eina_Bool _efl_canvas_object_seat_focus_add(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Input_Device *seat);

EOAPI EFL_FUNC_BODYV(efl_canvas_object_seat_focus_add, Eina_Bool, 0, EFL_FUNC_CALL(seat), Efl_Input_Device *seat);

Eina_Bool _efl_canvas_object_seat_focus_del(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Input_Device *seat);

EOAPI EFL_FUNC_BODYV(efl_canvas_object_seat_focus_del, Eina_Bool, 0, EFL_FUNC_CALL(seat), Efl_Input_Device *seat);

void _efl_canvas_object_is_frame_object_set(Eo *obj, Evas_Object_Protected_Data *pd, Eina_Bool is_frame);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_object_is_frame_object_set, EFL_FUNC_CALL(is_frame), Eina_Bool is_frame);

Eina_Bool _efl_canvas_object_is_frame_object_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_is_frame_object_get, Eina_Bool, 0);

void _efl_canvas_object_precise_is_inside_set(Eo *obj, Evas_Object_Protected_Data *pd, Eina_Bool precise);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_object_precise_is_inside_set, EFL_FUNC_CALL(precise), Eina_Bool precise);

Eina_Bool _efl_canvas_object_precise_is_inside_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_precise_is_inside_get, Eina_Bool, 0);

void _efl_canvas_object_propagate_events_set(Eo *obj, Evas_Object_Protected_Data *pd, Eina_Bool propagate);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_object_propagate_events_set, EFL_FUNC_CALL(propagate), Eina_Bool propagate);

Eina_Bool _efl_canvas_object_propagate_events_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_propagate_events_get, Eina_Bool, 0);

void _efl_canvas_object_pass_events_set(Eo *obj, Evas_Object_Protected_Data *pd, Eina_Bool pass);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_object_pass_events_set, EFL_FUNC_CALL(pass), Eina_Bool pass);

Eina_Bool _efl_canvas_object_pass_events_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_pass_events_get, Eina_Bool, 0);

void _efl_canvas_object_anti_alias_set(Eo *obj, Evas_Object_Protected_Data *pd, Eina_Bool anti_alias);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_object_anti_alias_set, EFL_FUNC_CALL(anti_alias), Eina_Bool anti_alias);

Eina_Bool _efl_canvas_object_anti_alias_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_anti_alias_get, Eina_Bool, 0);

Eina_Iterator *_efl_canvas_object_clipees_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_clipees_get, Eina_Iterator *, NULL);

Efl_Canvas_Object *_efl_canvas_object_render_parent_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_render_parent_get, Efl_Canvas_Object *, NULL);

void _efl_canvas_object_paragraph_direction_set(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Text_Bidirectional_Type dir);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_object_paragraph_direction_set, EFL_FUNC_CALL(dir), Efl_Text_Bidirectional_Type dir);

Efl_Text_Bidirectional_Type _efl_canvas_object_paragraph_direction_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_paragraph_direction_get, Efl_Text_Bidirectional_Type, 0);

Eina_Bool _efl_canvas_object_clipees_has(const Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_clipees_has, Eina_Bool, 0);

Eina_Bool _efl_canvas_object_key_grab(Eo *obj, Evas_Object_Protected_Data *pd, const char *keyname, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers, Eina_Bool exclusive);

EOAPI EFL_FUNC_BODYV(efl_canvas_object_key_grab, Eina_Bool, 0, EFL_FUNC_CALL(keyname, modifiers, not_modifiers, exclusive), const char *keyname, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers, Eina_Bool exclusive);

void _efl_canvas_object_key_ungrab(Eo *obj, Evas_Object_Protected_Data *pd, const char *keyname, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_object_key_ungrab, EFL_FUNC_CALL(keyname, modifiers, not_modifiers), const char *keyname, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers);

void _efl_canvas_object_no_render_set(Eo *obj, Evas_Object_Protected_Data *pd, Eina_Bool enable);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_object_no_render_set, EFL_FUNC_CALL(enable), Eina_Bool enable);

Eina_Bool _efl_canvas_object_no_render_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_no_render_get, Eina_Bool, 0);

Eina_Bool _efl_canvas_object_pointer_inside_by_device_get(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Input_Device *dev);

EOAPI EFL_FUNC_BODYV_CONST(efl_canvas_object_pointer_inside_by_device_get, Eina_Bool, 0, EFL_FUNC_CALL(dev), Efl_Input_Device *dev);

Eina_Bool _efl_canvas_object_pointer_inside_get(Eo *obj, Evas_Object_Protected_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_object_pointer_inside_get, Eina_Bool, 0);

Eina_Bool _efl_canvas_object_pointer_coords_inside_get(Eo *obj, Evas_Object_Protected_Data *pd, int x, int y);

EOAPI EFL_FUNC_BODYV(efl_canvas_object_pointer_coords_inside_get, Eina_Bool, 0, EFL_FUNC_CALL(x, y), int x, int y);

Efl_Object *_efl_canvas_object_efl_object_constructor(Eo *obj, Evas_Object_Protected_Data *pd);


void _efl_canvas_object_efl_object_destructor(Eo *obj, Evas_Object_Protected_Data *pd);


Efl_Object *_efl_canvas_object_efl_object_provider_find(Eo *obj, Evas_Object_Protected_Data *pd, const Efl_Object *klass);


void _efl_canvas_object_efl_gfx_visible_set(Eo *obj, Evas_Object_Protected_Data *pd, Eina_Bool v);


Eina_Bool _efl_canvas_object_efl_gfx_visible_get(Eo *obj, Evas_Object_Protected_Data *pd);


void _efl_canvas_object_efl_gfx_color_set(Eo *obj, Evas_Object_Protected_Data *pd, int r, int g, int b, int a);


void _efl_canvas_object_efl_gfx_color_get(Eo *obj, Evas_Object_Protected_Data *pd, int *r, int *g, int *b, int *a);


Eina_Bool _efl_canvas_object_efl_gfx_color_part_set(Eo *obj, Evas_Object_Protected_Data *pd, const char *part, int r, int g, int b, int a);


Eina_Bool _efl_canvas_object_efl_gfx_color_part_get(Eo *obj, Evas_Object_Protected_Data *pd, const char *part, int *r, int *g, int *b, int *a);


void _efl_canvas_object_efl_gfx_geometry_set(Eo *obj, Evas_Object_Protected_Data *pd, int x, int y, int w, int h);


void _efl_canvas_object_efl_gfx_geometry_get(Eo *obj, Evas_Object_Protected_Data *pd, int *x, int *y, int *w, int *h);


void _efl_canvas_object_efl_gfx_position_set(Eo *obj, Evas_Object_Protected_Data *pd, int x, int y);


void _efl_canvas_object_efl_gfx_position_get(Eo *obj, Evas_Object_Protected_Data *pd, int *x, int *y);


void _efl_canvas_object_efl_gfx_size_set(Eo *obj, Evas_Object_Protected_Data *pd, int w, int h);


void _efl_canvas_object_efl_gfx_size_get(Eo *obj, Evas_Object_Protected_Data *pd, int *w, int *h);


void _efl_canvas_object_efl_gfx_stack_layer_set(Eo *obj, Evas_Object_Protected_Data *pd, short l);


short _efl_canvas_object_efl_gfx_stack_layer_get(Eo *obj, Evas_Object_Protected_Data *pd);


Efl_Gfx_Stack *_efl_canvas_object_efl_gfx_stack_below_get(Eo *obj, Evas_Object_Protected_Data *pd);


Efl_Gfx_Stack *_efl_canvas_object_efl_gfx_stack_above_get(Eo *obj, Evas_Object_Protected_Data *pd);


void _efl_canvas_object_efl_gfx_stack_stack_below(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Gfx_Stack *below);


void _efl_canvas_object_efl_gfx_stack_stack_above(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Gfx_Stack *above);


void _efl_canvas_object_efl_gfx_stack_raise(Eo *obj, Evas_Object_Protected_Data *pd);


void _efl_canvas_object_efl_gfx_stack_lower(Eo *obj, Evas_Object_Protected_Data *pd);


void _efl_canvas_object_efl_gfx_size_hint_hint_aspect_set(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Gfx_Size_Hint_Aspect mode, int w, int h);


void _efl_canvas_object_efl_gfx_size_hint_hint_aspect_get(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Gfx_Size_Hint_Aspect *mode, int *w, int *h);


void _efl_canvas_object_efl_gfx_size_hint_hint_align_set(Eo *obj, Evas_Object_Protected_Data *pd, double x, double y);


void _efl_canvas_object_efl_gfx_size_hint_hint_align_get(Eo *obj, Evas_Object_Protected_Data *pd, double *x, double *y);


void _efl_canvas_object_efl_gfx_size_hint_hint_combined_min_get(Eo *obj, Evas_Object_Protected_Data *pd, int *w, int *h);


void _efl_canvas_object_efl_gfx_size_hint_hint_restricted_min_set(Eo *obj, Evas_Object_Protected_Data *pd, int w, int h);


void _efl_canvas_object_efl_gfx_size_hint_hint_restricted_min_get(Eo *obj, Evas_Object_Protected_Data *pd, int *w, int *h);


void _efl_canvas_object_efl_gfx_size_hint_hint_min_set(Eo *obj, Evas_Object_Protected_Data *pd, int w, int h);


void _efl_canvas_object_efl_gfx_size_hint_hint_min_get(Eo *obj, Evas_Object_Protected_Data *pd, int *w, int *h);


void _efl_canvas_object_efl_gfx_size_hint_hint_max_set(Eo *obj, Evas_Object_Protected_Data *pd, int w, int h);


void _efl_canvas_object_efl_gfx_size_hint_hint_max_get(Eo *obj, Evas_Object_Protected_Data *pd, int *w, int *h);


void _efl_canvas_object_efl_gfx_size_hint_hint_margin_set(Eo *obj, Evas_Object_Protected_Data *pd, int l, int r, int t, int b);


void _efl_canvas_object_efl_gfx_size_hint_hint_margin_get(Eo *obj, Evas_Object_Protected_Data *pd, int *l, int *r, int *t, int *b);


void _efl_canvas_object_efl_gfx_size_hint_hint_request_set(Eo *obj, Evas_Object_Protected_Data *pd, int w, int h);


void _efl_canvas_object_efl_gfx_size_hint_hint_request_get(Eo *obj, Evas_Object_Protected_Data *pd, int *w, int *h);


void _efl_canvas_object_efl_gfx_size_hint_hint_weight_set(Eo *obj, Evas_Object_Protected_Data *pd, double x, double y);


void _efl_canvas_object_efl_gfx_size_hint_hint_weight_get(Eo *obj, Evas_Object_Protected_Data *pd, double *x, double *y);


void _efl_canvas_object_efl_input_interface_seat_event_filter_set(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Input_Device *seat, Eina_Bool enable);


Eina_Bool _efl_canvas_object_efl_input_interface_seat_event_filter_get(Eo *obj, Evas_Object_Protected_Data *pd, Efl_Input_Device *seat);


Efl_Loop *_efl_canvas_object_efl_loop_user_loop_get(Eo *obj, Evas_Object_Protected_Data *pd);


static Eina_Bool
_efl_canvas_object_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_OBJECT_EXTRA_OPS
#define EFL_CANVAS_OBJECT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_canvas_object_pointer_mode_by_device_set, _efl_canvas_object_pointer_mode_by_device_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_pointer_mode_by_device_get, _efl_canvas_object_pointer_mode_by_device_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_pointer_mode_set, _efl_canvas_object_pointer_mode_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_pointer_mode_get, _efl_canvas_object_pointer_mode_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_pointer_in_get, _efl_canvas_object_pointer_in_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_pointer_device_in_get, _efl_canvas_object_pointer_device_in_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_render_op_set, _efl_canvas_object_render_op_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_render_op_get, _efl_canvas_object_render_op_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_freeze_events_set, _efl_canvas_object_freeze_events_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_freeze_events_get, _efl_canvas_object_freeze_events_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_clip_set, _efl_canvas_object_clip_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_clip_get, _efl_canvas_object_clip_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_repeat_events_set, _efl_canvas_object_repeat_events_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_repeat_events_get, _efl_canvas_object_repeat_events_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_scale_set, _efl_canvas_object_scale_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_scale_get, _efl_canvas_object_scale_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_key_focus_set, _efl_canvas_object_key_focus_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_key_focus_get, _efl_canvas_object_key_focus_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_seat_focus_get, _efl_canvas_object_seat_focus_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_seat_focus_check, _efl_canvas_object_seat_focus_check),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_seat_focus_add, _efl_canvas_object_seat_focus_add),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_seat_focus_del, _efl_canvas_object_seat_focus_del),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_is_frame_object_set, _efl_canvas_object_is_frame_object_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_is_frame_object_get, _efl_canvas_object_is_frame_object_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_precise_is_inside_set, _efl_canvas_object_precise_is_inside_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_precise_is_inside_get, _efl_canvas_object_precise_is_inside_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_propagate_events_set, _efl_canvas_object_propagate_events_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_propagate_events_get, _efl_canvas_object_propagate_events_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_pass_events_set, _efl_canvas_object_pass_events_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_pass_events_get, _efl_canvas_object_pass_events_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_anti_alias_set, _efl_canvas_object_anti_alias_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_anti_alias_get, _efl_canvas_object_anti_alias_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_clipees_get, _efl_canvas_object_clipees_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_render_parent_get, _efl_canvas_object_render_parent_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_paragraph_direction_set, _efl_canvas_object_paragraph_direction_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_paragraph_direction_get, _efl_canvas_object_paragraph_direction_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_clipees_has, _efl_canvas_object_clipees_has),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_key_grab, _efl_canvas_object_key_grab),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_key_ungrab, _efl_canvas_object_key_ungrab),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_no_render_set, _efl_canvas_object_no_render_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_no_render_get, _efl_canvas_object_no_render_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_pointer_inside_by_device_get, _efl_canvas_object_pointer_inside_by_device_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_pointer_inside_get, _efl_canvas_object_pointer_inside_get),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_pointer_coords_inside_get, _efl_canvas_object_pointer_coords_inside_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_canvas_object_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_canvas_object_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_provider_find, _efl_canvas_object_efl_object_provider_find),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _efl_canvas_object_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_get, _efl_canvas_object_efl_gfx_visible_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_set, _efl_canvas_object_efl_gfx_color_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_get, _efl_canvas_object_efl_gfx_color_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_part_set, _efl_canvas_object_efl_gfx_color_part_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_part_get, _efl_canvas_object_efl_gfx_color_part_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_geometry_set, _efl_canvas_object_efl_gfx_geometry_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_geometry_get, _efl_canvas_object_efl_gfx_geometry_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _efl_canvas_object_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_get, _efl_canvas_object_efl_gfx_position_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _efl_canvas_object_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_get, _efl_canvas_object_efl_gfx_size_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_layer_set, _efl_canvas_object_efl_gfx_stack_layer_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_layer_get, _efl_canvas_object_efl_gfx_stack_layer_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_below_get, _efl_canvas_object_efl_gfx_stack_below_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_above_get, _efl_canvas_object_efl_gfx_stack_above_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_below, _efl_canvas_object_efl_gfx_stack_stack_below),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_above, _efl_canvas_object_efl_gfx_stack_stack_above),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_raise, _efl_canvas_object_efl_gfx_stack_raise),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_lower, _efl_canvas_object_efl_gfx_stack_lower),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_aspect_set, _efl_canvas_object_efl_gfx_size_hint_hint_aspect_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_aspect_get, _efl_canvas_object_efl_gfx_size_hint_hint_aspect_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_align_set, _efl_canvas_object_efl_gfx_size_hint_hint_align_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_align_get, _efl_canvas_object_efl_gfx_size_hint_hint_align_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_combined_min_get, _efl_canvas_object_efl_gfx_size_hint_hint_combined_min_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_restricted_min_set, _efl_canvas_object_efl_gfx_size_hint_hint_restricted_min_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_restricted_min_get, _efl_canvas_object_efl_gfx_size_hint_hint_restricted_min_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_min_set, _efl_canvas_object_efl_gfx_size_hint_hint_min_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_min_get, _efl_canvas_object_efl_gfx_size_hint_hint_min_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_max_set, _efl_canvas_object_efl_gfx_size_hint_hint_max_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_max_get, _efl_canvas_object_efl_gfx_size_hint_hint_max_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_margin_set, _efl_canvas_object_efl_gfx_size_hint_hint_margin_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_margin_get, _efl_canvas_object_efl_gfx_size_hint_hint_margin_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_request_set, _efl_canvas_object_efl_gfx_size_hint_hint_request_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_request_get, _efl_canvas_object_efl_gfx_size_hint_hint_request_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_weight_set, _efl_canvas_object_efl_gfx_size_hint_hint_weight_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_hint_weight_get, _efl_canvas_object_efl_gfx_size_hint_hint_weight_get),
      EFL_OBJECT_OP_FUNC(efl_input_seat_event_filter_set, _efl_canvas_object_efl_input_interface_seat_event_filter_set),
      EFL_OBJECT_OP_FUNC(efl_input_seat_event_filter_get, _efl_canvas_object_efl_input_interface_seat_event_filter_get),
      EFL_OBJECT_OP_FUNC(efl_loop_get, _efl_canvas_object_efl_loop_user_loop_get),
      EFL_CANVAS_OBJECT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_OBJECT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_OBJECT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_object_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Object",
   EFL_CLASS_TYPE_REGULAR_NO_INSTANT,
   sizeof(Evas_Object_Protected_Data),
   _efl_canvas_object_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_object_class_get, &_efl_canvas_object_class_desc, EFL_OBJECT_CLASS, EFL_GFX_INTERFACE, EFL_GFX_STACK_INTERFACE, EFL_ANIMATOR_INTERFACE, EFL_INPUT_INTERFACE_INTERFACE, EFL_GFX_SIZE_HINT_INTERFACE, EFL_GFX_MAP_MIXIN, EFL_LOOP_USER_CLASS, NULL);

EAPI Eina_Bool
evas_object_pointer_mode_set(Efl_Canvas_Object *obj, Efl_Input_Object_Pointer_Mode pointer_mode)
{
   return efl_canvas_object_pointer_mode_set(obj, pointer_mode);
}

EAPI Efl_Input_Object_Pointer_Mode
evas_object_pointer_mode_get(const Efl_Canvas_Object *obj)
{
   return efl_canvas_object_pointer_mode_get(obj);
}

EAPI void
evas_object_freeze_events_set(Efl_Canvas_Object *obj, Eina_Bool freeze)
{
   efl_canvas_object_freeze_events_set(obj, freeze);
}

EAPI Eina_Bool
evas_object_freeze_events_get(const Efl_Canvas_Object *obj)
{
   return efl_canvas_object_freeze_events_get(obj);
}

EAPI void
evas_object_clip_set(Efl_Canvas_Object *obj, Efl_Canvas_Object *clip)
{
   efl_canvas_object_clip_set(obj, clip);
}

EAPI Efl_Canvas_Object *
evas_object_clip_get(const Efl_Canvas_Object *obj)
{
   return efl_canvas_object_clip_get(obj);
}

EAPI void
evas_object_repeat_events_set(Efl_Canvas_Object *obj, Eina_Bool repeat)
{
   efl_canvas_object_repeat_events_set(obj, repeat);
}

EAPI Eina_Bool
evas_object_repeat_events_get(const Efl_Canvas_Object *obj)
{
   return efl_canvas_object_repeat_events_get(obj);
}

EAPI void
evas_object_scale_set(Efl_Canvas_Object *obj, double scale)
{
   efl_canvas_object_scale_set(obj, scale);
}

EAPI double
evas_object_scale_get(const Efl_Canvas_Object *obj)
{
   return efl_canvas_object_scale_get(obj);
}

EAPI void
evas_object_focus_set(Efl_Canvas_Object *obj, Eina_Bool focus)
{
   efl_canvas_object_key_focus_set(obj, focus);
}

EAPI Eina_Bool
evas_object_focus_get(const Efl_Canvas_Object *obj)
{
   return efl_canvas_object_key_focus_get(obj);
}

EAPI void
evas_object_is_frame_object_set(Efl_Canvas_Object *obj, Eina_Bool is_frame)
{
   efl_canvas_object_is_frame_object_set(obj, is_frame);
}

EAPI Eina_Bool
evas_object_is_frame_object_get(const Efl_Canvas_Object *obj)
{
   return efl_canvas_object_is_frame_object_get(obj);
}

EAPI void
evas_object_precise_is_inside_set(Efl_Canvas_Object *obj, Eina_Bool precise)
{
   efl_canvas_object_precise_is_inside_set(obj, precise);
}

EAPI Eina_Bool
evas_object_precise_is_inside_get(const Efl_Canvas_Object *obj)
{
   return efl_canvas_object_precise_is_inside_get(obj);
}

EAPI void
evas_object_propagate_events_set(Efl_Canvas_Object *obj, Eina_Bool propagate)
{
   efl_canvas_object_propagate_events_set(obj, propagate);
}

EAPI Eina_Bool
evas_object_propagate_events_get(const Efl_Canvas_Object *obj)
{
   return efl_canvas_object_propagate_events_get(obj);
}

EAPI void
evas_object_pass_events_set(Efl_Canvas_Object *obj, Eina_Bool pass)
{
   efl_canvas_object_pass_events_set(obj, pass);
}

EAPI Eina_Bool
evas_object_pass_events_get(const Efl_Canvas_Object *obj)
{
   return efl_canvas_object_pass_events_get(obj);
}

EAPI void
evas_object_anti_alias_set(Efl_Canvas_Object *obj, Eina_Bool anti_alias)
{
   efl_canvas_object_anti_alias_set(obj, anti_alias);
}

EAPI Eina_Bool
evas_object_anti_alias_get(const Efl_Canvas_Object *obj)
{
   return efl_canvas_object_anti_alias_get(obj);
}

EAPI Efl_Canvas_Object *
evas_object_smart_parent_get(const Efl_Canvas_Object *obj)
{
   return efl_canvas_object_render_parent_get(obj);
}

EAPI void
evas_object_paragraph_direction_set(Efl_Canvas_Object *obj, Efl_Text_Bidirectional_Type dir)
{
   efl_canvas_object_paragraph_direction_set(obj, dir);
}

EAPI Efl_Text_Bidirectional_Type
evas_object_paragraph_direction_get(const Efl_Canvas_Object *obj)
{
   return efl_canvas_object_paragraph_direction_get(obj);
}

EAPI Eina_Bool
evas_object_clipees_has(const Efl_Canvas_Object *obj)
{
   return efl_canvas_object_clipees_has(obj);
}

EAPI Eina_Bool
evas_object_pointer_inside_by_device_get(const Efl_Canvas_Object *obj, Efl_Input_Device *dev)
{
   return efl_canvas_object_pointer_inside_by_device_get(obj, dev);
}

EAPI Eina_Bool
evas_object_pointer_inside_get(const Efl_Canvas_Object *obj)
{
   return efl_canvas_object_pointer_inside_get(obj);
}

EAPI Eina_Bool
evas_object_pointer_coords_inside_get(Efl_Canvas_Object *obj, int x, int y)
{
   return efl_canvas_object_pointer_coords_inside_get(obj, x, y);
}
