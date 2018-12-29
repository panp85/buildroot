
void _elm_grid_size_set(Eo *obj, void *pd, int w, int h);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_grid_size_set, EFL_FUNC_CALL(w, h), int w, int h);

void _elm_grid_size_get(Eo *obj, void *pd, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_grid_size_get, EFL_FUNC_CALL(w, h), int *w, int *h);

Eina_List *_elm_grid_children_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_grid_children_get, Eina_List *, NULL);

void _elm_grid_clear(Eo *obj, void *pd, Eina_Bool clear);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_grid_clear, EFL_FUNC_CALL(clear), Eina_Bool clear);

void _elm_grid_unpack(Eo *obj, void *pd, Efl_Canvas_Object *subobj);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_grid_unpack, EFL_FUNC_CALL(subobj), Efl_Canvas_Object *subobj);

void _elm_grid_pack(Eo *obj, void *pd, Efl_Canvas_Object *subobj, int x, int y, int w, int h);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_grid_pack, EFL_FUNC_CALL(subobj, x, y, w, h), Efl_Canvas_Object *subobj, int x, int y, int w, int h);

Efl_Object *_elm_grid_efl_object_constructor(Eo *obj, void *pd);


Eina_Bool _elm_grid_elm_widget_focus_direction(Eo *obj, void *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _elm_grid_elm_widget_focus_next_manager_is(Eo *obj, void *pd);


Eina_Bool _elm_grid_elm_widget_focus_next(Eo *obj, void *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_grid_elm_widget_focus_direction_manager_is(Eo *obj, void *pd);


Elm_Theme_Apply _elm_grid_elm_widget_theme_apply(Eo *obj, void *pd);


static Eina_Bool
_elm_grid_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_GRID_EXTRA_OPS
#define ELM_GRID_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_grid_size_set, _elm_grid_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_grid_size_get, _elm_grid_size_get),
      EFL_OBJECT_OP_FUNC(elm_obj_grid_children_get, _elm_grid_children_get),
      EFL_OBJECT_OP_FUNC(elm_obj_grid_clear, _elm_grid_clear),
      EFL_OBJECT_OP_FUNC(elm_obj_grid_unpack, _elm_grid_unpack),
      EFL_OBJECT_OP_FUNC(elm_obj_grid_pack, _elm_grid_pack),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_grid_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _elm_grid_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_grid_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_grid_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_grid_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_grid_elm_widget_theme_apply),
      ELM_GRID_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_GRID_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_GRID_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_grid_class_desc = {
   EO_VERSION,
   "Elm.Grid",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _elm_grid_class_initializer,
   _elm_grid_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_grid_class_get, &_elm_grid_class_desc, ELM_WIDGET_CLASS, NULL);

EAPI void
elm_grid_size_set(Elm_Grid *obj, int w, int h)
{
   elm_obj_grid_size_set(obj, w, h);
}

EAPI void
elm_grid_size_get(const Elm_Grid *obj, int *w, int *h)
{
   elm_obj_grid_size_get(obj, w, h);
}

EAPI Eina_List *
elm_grid_children_get(const Elm_Grid *obj)
{
   return elm_obj_grid_children_get(obj);
}

EAPI void
elm_grid_clear(Elm_Grid *obj, Eina_Bool clear)
{
   elm_obj_grid_clear(obj, clear);
}

EAPI void
elm_grid_unpack(Elm_Grid *obj, Efl_Canvas_Object *subobj)
{
   elm_obj_grid_unpack(obj, subobj);
}

EAPI void
elm_grid_pack(Elm_Grid *obj, Efl_Canvas_Object *subobj, int x, int y, int w, int h)
{
   elm_obj_grid_pack(obj, subobj, x, y, w, h);
}
