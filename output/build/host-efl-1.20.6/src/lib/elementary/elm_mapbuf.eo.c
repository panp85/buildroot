
void _elm_mapbuf_auto_set(Eo *obj, Elm_Mapbuf_Data *pd, Eina_Bool on);

EOAPI EFL_VOID_FUNC_BODYV(elm_private_mapbuf_auto_set, EFL_FUNC_CALL(on), Eina_Bool on);

Eina_Bool _elm_mapbuf_auto_get(Eo *obj, Elm_Mapbuf_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_private_mapbuf_auto_get, Eina_Bool, 0);

void _elm_mapbuf_smooth_set(Eo *obj, Elm_Mapbuf_Data *pd, Eina_Bool smooth);

EOAPI EFL_VOID_FUNC_BODYV(elm_private_mapbuf_smooth_set, EFL_FUNC_CALL(smooth), Eina_Bool smooth);

Eina_Bool _elm_mapbuf_smooth_get(Eo *obj, Elm_Mapbuf_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_private_mapbuf_smooth_get, Eina_Bool, 0);

void _elm_mapbuf_alpha_set(Eo *obj, Elm_Mapbuf_Data *pd, Eina_Bool alpha);

EOAPI EFL_VOID_FUNC_BODYV(elm_private_mapbuf_alpha_set, EFL_FUNC_CALL(alpha), Eina_Bool alpha);

Eina_Bool _elm_mapbuf_alpha_get(Eo *obj, Elm_Mapbuf_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_private_mapbuf_alpha_get, Eina_Bool, 0);

void _elm_mapbuf_enabled_set(Eo *obj, Elm_Mapbuf_Data *pd, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_private_mapbuf_enabled_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);

Eina_Bool _elm_mapbuf_enabled_get(Eo *obj, Elm_Mapbuf_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_private_mapbuf_enabled_get, Eina_Bool, 0);

void _elm_mapbuf_point_color_set(Eo *obj, Elm_Mapbuf_Data *pd, int idx, int r, int g, int b, int a);

EOAPI EFL_VOID_FUNC_BODYV(elm_private_mapbuf_point_color_set, EFL_FUNC_CALL(idx, r, g, b, a), int idx, int r, int g, int b, int a);

void _elm_mapbuf_point_color_get(Eo *obj, Elm_Mapbuf_Data *pd, int idx, int *r, int *g, int *b, int *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_private_mapbuf_point_color_get, EFL_FUNC_CALL(idx, r, g, b, a), int idx, int *r, int *g, int *b, int *a);

Efl_Object *_elm_mapbuf_efl_object_constructor(Eo *obj, Elm_Mapbuf_Data *pd);


void _elm_mapbuf_efl_gfx_visible_set(Eo *obj, Elm_Mapbuf_Data *pd, Eina_Bool v);


void _elm_mapbuf_efl_gfx_position_set(Eo *obj, Elm_Mapbuf_Data *pd, int x, int y);


void _elm_mapbuf_efl_gfx_size_set(Eo *obj, Elm_Mapbuf_Data *pd, int w, int h);


Elm_Theme_Apply _elm_mapbuf_elm_widget_theme_apply(Eo *obj, Elm_Mapbuf_Data *pd);


Eina_Bool _elm_mapbuf_elm_widget_sub_object_del(Eo *obj, Elm_Mapbuf_Data *pd, Efl_Canvas_Object *sobj);


Eina_Bool _elm_mapbuf_efl_container_content_set(Eo *obj, Elm_Mapbuf_Data *pd, Efl_Gfx *content);


Efl_Gfx *_elm_mapbuf_efl_container_content_get(Eo *obj, Elm_Mapbuf_Data *pd);


Efl_Gfx *_elm_mapbuf_efl_container_content_unset(Eo *obj, Elm_Mapbuf_Data *pd);


Efl_Object *_elm_mapbuf_efl_part_part(const Eo *obj, Elm_Mapbuf_Data *pd, const char *name);


static Eina_Bool
_elm_mapbuf_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_MAPBUF_EXTRA_OPS
#define ELM_MAPBUF_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_private_mapbuf_auto_set, _elm_mapbuf_auto_set),
      EFL_OBJECT_OP_FUNC(elm_private_mapbuf_auto_get, _elm_mapbuf_auto_get),
      EFL_OBJECT_OP_FUNC(elm_private_mapbuf_smooth_set, _elm_mapbuf_smooth_set),
      EFL_OBJECT_OP_FUNC(elm_private_mapbuf_smooth_get, _elm_mapbuf_smooth_get),
      EFL_OBJECT_OP_FUNC(elm_private_mapbuf_alpha_set, _elm_mapbuf_alpha_set),
      EFL_OBJECT_OP_FUNC(elm_private_mapbuf_alpha_get, _elm_mapbuf_alpha_get),
      EFL_OBJECT_OP_FUNC(elm_private_mapbuf_enabled_set, _elm_mapbuf_enabled_set),
      EFL_OBJECT_OP_FUNC(elm_private_mapbuf_enabled_get, _elm_mapbuf_enabled_get),
      EFL_OBJECT_OP_FUNC(elm_private_mapbuf_point_color_set, _elm_mapbuf_point_color_set),
      EFL_OBJECT_OP_FUNC(elm_private_mapbuf_point_color_get, _elm_mapbuf_point_color_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_mapbuf_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _elm_mapbuf_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _elm_mapbuf_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _elm_mapbuf_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_mapbuf_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _elm_mapbuf_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(efl_content_set, _elm_mapbuf_efl_container_content_set),
      EFL_OBJECT_OP_FUNC(efl_content_get, _elm_mapbuf_efl_container_content_get),
      EFL_OBJECT_OP_FUNC(efl_content_unset, _elm_mapbuf_efl_container_content_unset),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_mapbuf_efl_part_part),
      ELM_MAPBUF_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_MAPBUF_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_MAPBUF_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_mapbuf_class_desc = {
   EO_VERSION,
   "Elm.Mapbuf",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Mapbuf_Data),
   _elm_mapbuf_class_initializer,
   _elm_mapbuf_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_mapbuf_class_get, &_elm_mapbuf_class_desc, ELM_WIDGET_CLASS, EFL_CONTAINER_INTERFACE, EFL_PART_INTERFACE, NULL);

EAPI void
elm_mapbuf_auto_set(Elm_Mapbuf *obj, Eina_Bool on)
{
   elm_private_mapbuf_auto_set(obj, on);
}

EAPI Eina_Bool
elm_mapbuf_auto_get(const Elm_Mapbuf *obj)
{
   return elm_private_mapbuf_auto_get(obj);
}

EAPI void
elm_mapbuf_smooth_set(Elm_Mapbuf *obj, Eina_Bool smooth)
{
   elm_private_mapbuf_smooth_set(obj, smooth);
}

EAPI Eina_Bool
elm_mapbuf_smooth_get(const Elm_Mapbuf *obj)
{
   return elm_private_mapbuf_smooth_get(obj);
}

EAPI void
elm_mapbuf_alpha_set(Elm_Mapbuf *obj, Eina_Bool alpha)
{
   elm_private_mapbuf_alpha_set(obj, alpha);
}

EAPI Eina_Bool
elm_mapbuf_alpha_get(const Elm_Mapbuf *obj)
{
   return elm_private_mapbuf_alpha_get(obj);
}

EAPI void
elm_mapbuf_enabled_set(Elm_Mapbuf *obj, Eina_Bool enabled)
{
   elm_private_mapbuf_enabled_set(obj, enabled);
}

EAPI Eina_Bool
elm_mapbuf_enabled_get(const Elm_Mapbuf *obj)
{
   return elm_private_mapbuf_enabled_get(obj);
}

EAPI void
elm_mapbuf_point_color_set(Elm_Mapbuf *obj, int idx, int r, int g, int b, int a)
{
   elm_private_mapbuf_point_color_set(obj, idx, r, g, b, a);
}

EAPI void
elm_mapbuf_point_color_get(const Elm_Mapbuf *obj, int idx, int *r, int *g, int *b, int *a)
{
   elm_private_mapbuf_point_color_get(obj, idx, r, g, b, a);
}
