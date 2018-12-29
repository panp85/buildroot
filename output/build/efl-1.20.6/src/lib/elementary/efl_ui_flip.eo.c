EWAPI const Efl_Event_Description _EFL_UI_FLIP_EVENT_ANIMATE_BEGIN =
   EFL_EVENT_DESCRIPTION("animate,begin");
EWAPI const Efl_Event_Description _EFL_UI_FLIP_EVENT_ANIMATE_DONE =
   EFL_EVENT_DESCRIPTION("animate,done");

void _efl_ui_flip_interaction_set(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Ui_Flip_Interaction mode);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_flip_interaction_set, EFL_FUNC_CALL(mode), Efl_Ui_Flip_Interaction mode);

Efl_Ui_Flip_Interaction _efl_ui_flip_interaction_get(Eo *obj, Efl_Ui_Flip_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_flip_interaction_get, Efl_Ui_Flip_Interaction, 0);

Eina_Bool _efl_ui_flip_front_visible_get(Eo *obj, Efl_Ui_Flip_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_flip_front_visible_get, Eina_Bool, 0);

void _efl_ui_flip_interaction_direction_hitsize_set(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Orient dir, double hitsize);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_flip_interaction_direction_hitsize_set, EFL_FUNC_CALL(dir, hitsize), Efl_Orient dir, double hitsize);

double _efl_ui_flip_interaction_direction_hitsize_get(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Orient dir);

EOAPI EFL_FUNC_BODYV(efl_ui_flip_interaction_direction_hitsize_get, double, 0, EFL_FUNC_CALL(dir), Efl_Orient dir);

void _efl_ui_flip_interaction_direction_enabled_set(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Orient dir, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_flip_interaction_direction_enabled_set, EFL_FUNC_CALL(dir, enabled), Efl_Orient dir, Eina_Bool enabled);

Eina_Bool _efl_ui_flip_interaction_direction_enabled_get(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Orient dir);

EOAPI EFL_FUNC_BODYV(efl_ui_flip_interaction_direction_enabled_get, Eina_Bool, 0, EFL_FUNC_CALL(dir), Efl_Orient dir);

void _efl_ui_flip_go(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Ui_Flip_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_flip_go, EFL_FUNC_CALL(mode), Efl_Ui_Flip_Mode mode);

void _efl_ui_flip_go_to(Eo *obj, Efl_Ui_Flip_Data *pd, Eina_Bool front, Efl_Ui_Flip_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_flip_go_to, EFL_FUNC_CALL(front, mode), Eina_Bool front, Efl_Ui_Flip_Mode mode);

Efl_Object *_efl_ui_flip_efl_object_constructor(Eo *obj, Efl_Ui_Flip_Data *pd);


Eina_Bool _efl_ui_flip_elm_widget_focus_direction(Eo *obj, Efl_Ui_Flip_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _efl_ui_flip_elm_widget_sub_object_add(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Canvas_Object *sobj);


Elm_Theme_Apply _efl_ui_flip_elm_widget_theme_apply(Eo *obj, Efl_Ui_Flip_Data *pd);


Eina_Bool _efl_ui_flip_elm_widget_focus_direction_manager_is(Eo *obj, Efl_Ui_Flip_Data *pd);


Eina_Bool _efl_ui_flip_elm_widget_focus_next_manager_is(Eo *obj, Efl_Ui_Flip_Data *pd);


Eina_Bool _efl_ui_flip_elm_widget_focus_next(Eo *obj, Efl_Ui_Flip_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _efl_ui_flip_elm_widget_sub_object_del(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Canvas_Object *sobj);


Eina_Iterator *_efl_ui_flip_efl_container_content_iterate(Eo *obj, Efl_Ui_Flip_Data *pd);


int _efl_ui_flip_efl_container_content_count(Eo *obj, Efl_Ui_Flip_Data *pd);


Eina_Bool _efl_ui_flip_efl_container_content_remove(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Gfx *content);


Efl_Object *_efl_ui_flip_efl_part_part(const Eo *obj, Efl_Ui_Flip_Data *pd, const char *name);


Eina_Bool _efl_ui_flip_efl_pack_unpack(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Gfx *subobj);


Eina_Bool _efl_ui_flip_efl_pack_pack(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Gfx *subobj);


Eina_Bool _efl_ui_flip_efl_pack_linear_pack_begin(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Gfx *subobj);


Eina_Bool _efl_ui_flip_efl_pack_linear_pack_end(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Gfx *subobj);


Eina_Bool _efl_ui_flip_efl_pack_linear_pack_before(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Gfx *subobj, const Efl_Gfx *existing);


Eina_Bool _efl_ui_flip_efl_pack_linear_pack_after(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Gfx *subobj, const Efl_Gfx *existing);


Eina_Bool _efl_ui_flip_efl_pack_linear_pack_at(Eo *obj, Efl_Ui_Flip_Data *pd, Efl_Gfx *subobj, int index);


Efl_Gfx *_efl_ui_flip_efl_pack_linear_pack_content_get(Eo *obj, Efl_Ui_Flip_Data *pd, int index);


Efl_Gfx *_efl_ui_flip_efl_pack_linear_pack_unpack_at(Eo *obj, Efl_Ui_Flip_Data *pd, int index);


int _efl_ui_flip_efl_pack_linear_pack_index_get(Eo *obj, Efl_Ui_Flip_Data *pd, const Efl_Gfx *subobj);


static Eina_Bool
_efl_ui_flip_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_FLIP_EXTRA_OPS
#define EFL_UI_FLIP_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_flip_interaction_set, _efl_ui_flip_interaction_set),
      EFL_OBJECT_OP_FUNC(efl_ui_flip_interaction_get, _efl_ui_flip_interaction_get),
      EFL_OBJECT_OP_FUNC(efl_ui_flip_front_visible_get, _efl_ui_flip_front_visible_get),
      EFL_OBJECT_OP_FUNC(efl_ui_flip_interaction_direction_hitsize_set, _efl_ui_flip_interaction_direction_hitsize_set),
      EFL_OBJECT_OP_FUNC(efl_ui_flip_interaction_direction_hitsize_get, _efl_ui_flip_interaction_direction_hitsize_get),
      EFL_OBJECT_OP_FUNC(efl_ui_flip_interaction_direction_enabled_set, _efl_ui_flip_interaction_direction_enabled_set),
      EFL_OBJECT_OP_FUNC(efl_ui_flip_interaction_direction_enabled_get, _efl_ui_flip_interaction_direction_enabled_get),
      EFL_OBJECT_OP_FUNC(efl_ui_flip_go, _efl_ui_flip_go),
      EFL_OBJECT_OP_FUNC(efl_ui_flip_go_to, _efl_ui_flip_go_to),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_flip_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _efl_ui_flip_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_add, _efl_ui_flip_elm_widget_sub_object_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _efl_ui_flip_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _efl_ui_flip_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _efl_ui_flip_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _efl_ui_flip_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _efl_ui_flip_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(efl_content_iterate, _efl_ui_flip_efl_container_content_iterate),
      EFL_OBJECT_OP_FUNC(efl_content_count, _efl_ui_flip_efl_container_content_count),
      EFL_OBJECT_OP_FUNC(efl_content_remove, _efl_ui_flip_efl_container_content_remove),
      EFL_OBJECT_OP_FUNC(efl_part, _efl_ui_flip_efl_part_part),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack, _efl_ui_flip_efl_pack_unpack),
      EFL_OBJECT_OP_FUNC(efl_pack, _efl_ui_flip_efl_pack_pack),
      EFL_OBJECT_OP_FUNC(efl_pack_begin, _efl_ui_flip_efl_pack_linear_pack_begin),
      EFL_OBJECT_OP_FUNC(efl_pack_end, _efl_ui_flip_efl_pack_linear_pack_end),
      EFL_OBJECT_OP_FUNC(efl_pack_before, _efl_ui_flip_efl_pack_linear_pack_before),
      EFL_OBJECT_OP_FUNC(efl_pack_after, _efl_ui_flip_efl_pack_linear_pack_after),
      EFL_OBJECT_OP_FUNC(efl_pack_at, _efl_ui_flip_efl_pack_linear_pack_at),
      EFL_OBJECT_OP_FUNC(efl_pack_content_get, _efl_ui_flip_efl_pack_linear_pack_content_get),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack_at, _efl_ui_flip_efl_pack_linear_pack_unpack_at),
      EFL_OBJECT_OP_FUNC(efl_pack_index_get, _efl_ui_flip_efl_pack_linear_pack_index_get),
      EFL_UI_FLIP_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_FLIP_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_FLIP_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_flip_class_desc = {
   EO_VERSION,
   "Efl.Ui.Flip",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Flip_Data),
   _efl_ui_flip_class_initializer,
   _efl_ui_flip_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_flip_class_get, &_efl_ui_flip_class_desc, ELM_WIDGET_CLASS, EFL_PACK_LINEAR_INTERFACE, EFL_PART_INTERFACE, NULL);

EAPI void
elm_flip_interaction_set(Efl_Ui_Flip *obj, Efl_Ui_Flip_Interaction mode)
{
   efl_ui_flip_interaction_set(obj, mode);
}

EAPI Efl_Ui_Flip_Interaction
elm_flip_interaction_get(const Efl_Ui_Flip *obj)
{
   return efl_ui_flip_interaction_get(obj);
}

EAPI Eina_Bool
elm_flip_front_visible_get(const Efl_Ui_Flip *obj)
{
   return efl_ui_flip_front_visible_get(obj);
}

EAPI void
elm_flip_go(Efl_Ui_Flip *obj, Efl_Ui_Flip_Mode mode)
{
   efl_ui_flip_go(obj, mode);
}

EAPI void
elm_flip_go_to(Efl_Ui_Flip *obj, Eina_Bool front, Efl_Ui_Flip_Mode mode)
{
   efl_ui_flip_go_to(obj, front, mode);
}
