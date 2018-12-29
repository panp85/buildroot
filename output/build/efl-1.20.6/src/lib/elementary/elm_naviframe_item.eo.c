
void _elm_naviframe_item_style_set(Eo *obj, Elm_Naviframe_Item_Data *pd, const char *style);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_naviframe_item_style_set, EFL_FUNC_CALL(style), const char *style);

const char *_elm_naviframe_item_style_get(Eo *obj, Elm_Naviframe_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_naviframe_item_style_get, const char *, NULL);

void _elm_naviframe_item_pop_to(Eo *obj, Elm_Naviframe_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_naviframe_item_pop_to);

Eina_Bool _elm_naviframe_item_title_enabled_get(const Eo *obj, Elm_Naviframe_Item_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_naviframe_item_title_enabled_get, Eina_Bool, 0);

void _elm_naviframe_item_title_enabled_set(Eo *obj, Elm_Naviframe_Item_Data *pd, Eina_Bool enable, Eina_Bool transition);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_naviframe_item_title_enabled_set, EFL_FUNC_CALL(enable, transition), Eina_Bool enable, Eina_Bool transition);

void _elm_naviframe_item_promote(Eo *obj, Elm_Naviframe_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_naviframe_item_promote);

void _elm_naviframe_item_pop_cb_set(Eo *obj, Elm_Naviframe_Item_Data *pd, Elm_Naviframe_Item_Pop_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_naviframe_item_pop_cb_set, EFL_FUNC_CALL(func, data), Elm_Naviframe_Item_Pop_Cb func, void *data);

Efl_Object *_elm_naviframe_item_efl_object_constructor(Eo *obj, Elm_Naviframe_Item_Data *pd);


void _elm_naviframe_item_efl_object_destructor(Eo *obj, Elm_Naviframe_Item_Data *pd);


void _elm_naviframe_item_elm_widget_item_signal_emit(Eo *obj, Elm_Naviframe_Item_Data *pd, const char *emission, const char *source);


void _elm_naviframe_item_elm_widget_item_part_text_set(Eo *obj, Elm_Naviframe_Item_Data *pd, const char *part, const char *label);


const char *_elm_naviframe_item_elm_widget_item_part_text_get(Eo *obj, Elm_Naviframe_Item_Data *pd, const char *part);


void _elm_naviframe_item_elm_widget_item_part_content_set(Eo *obj, Elm_Naviframe_Item_Data *pd, const char *part, Efl_Canvas_Object *content);


Efl_Canvas_Object *_elm_naviframe_item_elm_widget_item_part_content_get(Eo *obj, Elm_Naviframe_Item_Data *pd, const char *part);


Efl_Canvas_Object *_elm_naviframe_item_elm_widget_item_part_content_unset(Eo *obj, Elm_Naviframe_Item_Data *pd, const char *part);


Eina_List *_elm_naviframe_item_elm_interface_atspi_accessible_children_get(Eo *obj, Elm_Naviframe_Item_Data *pd);


static Eina_Bool
_elm_naviframe_item_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_NAVIFRAME_ITEM_EXTRA_OPS
#define ELM_NAVIFRAME_ITEM_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_item_style_set, _elm_naviframe_item_style_set),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_item_style_get, _elm_naviframe_item_style_get),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_item_pop_to, _elm_naviframe_item_pop_to),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_item_title_enabled_get, _elm_naviframe_item_title_enabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_item_title_enabled_set, _elm_naviframe_item_title_enabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_item_promote, _elm_naviframe_item_promote),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_item_pop_cb_set, _elm_naviframe_item_pop_cb_set),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_naviframe_item_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_naviframe_item_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_signal_emit, _elm_naviframe_item_elm_widget_item_signal_emit),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_set, _elm_naviframe_item_elm_widget_item_part_text_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_get, _elm_naviframe_item_elm_widget_item_part_text_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_set, _elm_naviframe_item_elm_widget_item_part_content_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_get, _elm_naviframe_item_elm_widget_item_part_content_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_unset, _elm_naviframe_item_elm_widget_item_part_content_unset),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_children_get, _elm_naviframe_item_elm_interface_atspi_accessible_children_get),
      ELM_NAVIFRAME_ITEM_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_NAVIFRAME_ITEM_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_NAVIFRAME_ITEM_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_naviframe_item_class_desc = {
   EO_VERSION,
   "Elm.Naviframe.Item",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Naviframe_Item_Data),
   _elm_naviframe_item_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_naviframe_item_class_get, &_elm_naviframe_item_class_desc, ELM_WIDGET_ITEM_CLASS, NULL);

EAPI void
elm_naviframe_item_style_set(Elm_Naviframe_Item *obj, const char *style)
{
   elm_obj_naviframe_item_style_set(obj, style);
}

EAPI const char *
elm_naviframe_item_style_get(const Elm_Naviframe_Item *obj)
{
   return elm_obj_naviframe_item_style_get(obj);
}

EAPI void
elm_naviframe_item_pop_to(Elm_Naviframe_Item *obj)
{
   elm_obj_naviframe_item_pop_to(obj);
}

EAPI Eina_Bool
elm_naviframe_item_title_enabled_get(const Elm_Naviframe_Item *obj)
{
   return elm_obj_naviframe_item_title_enabled_get(obj);
}

EAPI void
elm_naviframe_item_title_enabled_set(Elm_Naviframe_Item *obj, Eina_Bool enable, Eina_Bool transition)
{
   elm_obj_naviframe_item_title_enabled_set(obj, enable, transition);
}

EAPI void
elm_naviframe_item_promote(Elm_Naviframe_Item *obj)
{
   elm_obj_naviframe_item_promote(obj);
}

EAPI void
elm_naviframe_item_pop_cb_set(Elm_Naviframe_Item *obj, Elm_Naviframe_Item_Pop_Cb func, void *data)
{
   elm_obj_naviframe_item_pop_cb_set(obj, func, data);
}
