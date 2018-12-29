
void _elm_ctxpopup_item_init(Eo *obj, Elm_Ctxpopup_Item_Data *pd, Evas_Smart_Cb func, const void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_ctxpopup_item_init, EFL_FUNC_CALL(func, data), Evas_Smart_Cb func, const void *data);

Efl_Object *_elm_ctxpopup_item_efl_object_constructor(Eo *obj, Elm_Ctxpopup_Item_Data *pd);


void _elm_ctxpopup_item_efl_object_destructor(Eo *obj, Elm_Ctxpopup_Item_Data *pd);


void _elm_ctxpopup_item_elm_widget_item_disable(Eo *obj, Elm_Ctxpopup_Item_Data *pd);


void _elm_ctxpopup_item_elm_widget_item_signal_emit(Eo *obj, Elm_Ctxpopup_Item_Data *pd, const char *emission, const char *source);


void _elm_ctxpopup_item_elm_widget_item_part_text_set(Eo *obj, Elm_Ctxpopup_Item_Data *pd, const char *part, const char *label);


const char *_elm_ctxpopup_item_elm_widget_item_part_text_get(Eo *obj, Elm_Ctxpopup_Item_Data *pd, const char *part);


void _elm_ctxpopup_item_elm_widget_item_part_content_set(Eo *obj, Elm_Ctxpopup_Item_Data *pd, const char *part, Efl_Canvas_Object *content);


Efl_Canvas_Object *_elm_ctxpopup_item_elm_widget_item_part_content_get(Eo *obj, Elm_Ctxpopup_Item_Data *pd, const char *part);


void _elm_ctxpopup_item_elm_widget_item_focus_set(Eo *obj, Elm_Ctxpopup_Item_Data *pd, Eina_Bool focused);


Eina_Bool _elm_ctxpopup_item_elm_widget_item_focus_get(Eo *obj, Elm_Ctxpopup_Item_Data *pd);


void _elm_ctxpopup_item_efl_ui_item_selected_set(Eo *obj, Elm_Ctxpopup_Item_Data *pd, Eina_Bool selected);


Eina_Bool _elm_ctxpopup_item_efl_ui_item_selected_get(Eo *obj, Elm_Ctxpopup_Item_Data *pd);


Efl_Ui_Item *_elm_ctxpopup_item_efl_ui_item_prev_get(Eo *obj, Elm_Ctxpopup_Item_Data *pd);


Efl_Ui_Item *_elm_ctxpopup_item_efl_ui_item_next_get(Eo *obj, Elm_Ctxpopup_Item_Data *pd);


static Eina_Bool
_elm_ctxpopup_item_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_CTXPOPUP_ITEM_EXTRA_OPS
#define ELM_CTXPOPUP_ITEM_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_ctxpopup_item_init, _elm_ctxpopup_item_init),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_ctxpopup_item_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_ctxpopup_item_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_disable, _elm_ctxpopup_item_elm_widget_item_disable),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_signal_emit, _elm_ctxpopup_item_elm_widget_item_signal_emit),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_set, _elm_ctxpopup_item_elm_widget_item_part_text_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_text_get, _elm_ctxpopup_item_elm_widget_item_part_text_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_set, _elm_ctxpopup_item_elm_widget_item_part_content_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_part_content_get, _elm_ctxpopup_item_elm_widget_item_part_content_get),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_focus_set, _elm_ctxpopup_item_elm_widget_item_focus_set),
      EFL_OBJECT_OP_FUNC(elm_wdg_item_focus_get, _elm_ctxpopup_item_elm_widget_item_focus_get),
      EFL_OBJECT_OP_FUNC(efl_ui_item_selected_set, _elm_ctxpopup_item_efl_ui_item_selected_set),
      EFL_OBJECT_OP_FUNC(efl_ui_item_selected_get, _elm_ctxpopup_item_efl_ui_item_selected_get),
      EFL_OBJECT_OP_FUNC(efl_ui_item_prev_get, _elm_ctxpopup_item_efl_ui_item_prev_get),
      EFL_OBJECT_OP_FUNC(efl_ui_item_next_get, _elm_ctxpopup_item_efl_ui_item_next_get),
      ELM_CTXPOPUP_ITEM_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_CTXPOPUP_ITEM_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_CTXPOPUP_ITEM_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_ctxpopup_item_class_desc = {
   EO_VERSION,
   "Elm.Ctxpopup.Item",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Ctxpopup_Item_Data),
   _elm_ctxpopup_item_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_ctxpopup_item_class_get, &_elm_ctxpopup_item_class_desc, ELM_WIDGET_ITEM_CLASS, EFL_UI_ITEM_INTERFACE, NULL);

EAPI void
elm_ctxpopup_item_init(Elm_Ctxpopup_Item *obj, Evas_Smart_Cb func, const void *data)
{
   elm_obj_ctxpopup_item_init(obj, func, data);
}
