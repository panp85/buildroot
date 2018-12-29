EWAPI const Efl_Event_Description _ELM_SLIDESHOW_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");
EWAPI const Efl_Event_Description _ELM_SLIDESHOW_EVENT_TRANSITION_END =
   EFL_EVENT_DESCRIPTION("transition,end");

void _elm_slideshow_cache_after_set(Eo *obj, Elm_Slideshow_Data *pd, int count);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_slideshow_cache_after_set, EFL_FUNC_CALL(count), int count);

int _elm_slideshow_cache_after_get(Eo *obj, Elm_Slideshow_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_slideshow_cache_after_get, int, 0);

void _elm_slideshow_cache_before_set(Eo *obj, Elm_Slideshow_Data *pd, int count);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_slideshow_cache_before_set, EFL_FUNC_CALL(count), int count);

int _elm_slideshow_cache_before_get(Eo *obj, Elm_Slideshow_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_slideshow_cache_before_get, int, 0);

void _elm_slideshow_layout_set(Eo *obj, Elm_Slideshow_Data *pd, const char *layout);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_slideshow_layout_set, EFL_FUNC_CALL(layout), const char *layout);

const char *_elm_slideshow_layout_get(Eo *obj, Elm_Slideshow_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_slideshow_layout_get, const char *, NULL);

void _elm_slideshow_transition_set(Eo *obj, Elm_Slideshow_Data *pd, const char *transition);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_slideshow_transition_set, EFL_FUNC_CALL(transition), const char *transition);

const char *_elm_slideshow_transition_get(Eo *obj, Elm_Slideshow_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_slideshow_transition_get, const char *, NULL);

void _elm_slideshow_loop_set(Eo *obj, Elm_Slideshow_Data *pd, Eina_Bool loop);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_slideshow_loop_set, EFL_FUNC_CALL(loop), Eina_Bool loop);

Eina_Bool _elm_slideshow_loop_get(Eo *obj, Elm_Slideshow_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_slideshow_loop_get, Eina_Bool, 0);

void _elm_slideshow_timeout_set(Eo *obj, Elm_Slideshow_Data *pd, double timeout);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_slideshow_timeout_set, EFL_FUNC_CALL(timeout), double timeout);

double _elm_slideshow_timeout_get(Eo *obj, Elm_Slideshow_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_slideshow_timeout_get, double, 0);

const Eina_List *_elm_slideshow_items_get(Eo *obj, Elm_Slideshow_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_slideshow_items_get, const Eina_List *, NULL);

const Eina_List *_elm_slideshow_transitions_get(Eo *obj, Elm_Slideshow_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_slideshow_transitions_get, const Eina_List *, NULL);

unsigned int _elm_slideshow_count_get(Eo *obj, Elm_Slideshow_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_slideshow_count_get, unsigned int, 0);

Elm_Widget_Item *_elm_slideshow_item_current_get(Eo *obj, Elm_Slideshow_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_slideshow_item_current_get, Elm_Widget_Item *, NULL);

const Eina_List *_elm_slideshow_layouts_get(Eo *obj, Elm_Slideshow_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_slideshow_layouts_get, const Eina_List *, NULL);

void _elm_slideshow_previous(Eo *obj, Elm_Slideshow_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_slideshow_previous);

Elm_Widget_Item *_elm_slideshow_item_nth_get(const Eo *obj, Elm_Slideshow_Data *pd, unsigned int nth);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_slideshow_item_nth_get, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(nth), unsigned int nth);

void _elm_slideshow_next(Eo *obj, Elm_Slideshow_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_slideshow_next);

void _elm_slideshow_clear(Eo *obj, Elm_Slideshow_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_slideshow_clear);

Elm_Widget_Item *_elm_slideshow_item_add(Eo *obj, Elm_Slideshow_Data *pd, const Elm_Slideshow_Item_Class *itc, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_slideshow_item_add, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(itc, data), const Elm_Slideshow_Item_Class *itc, const void *data);

Elm_Widget_Item *_elm_slideshow_item_sorted_insert(Eo *obj, Elm_Slideshow_Data *pd, const Elm_Slideshow_Item_Class *itc, const void *data, Eina_Compare_Cb func);

EOAPI EFL_FUNC_BODYV(elm_obj_slideshow_item_sorted_insert, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(itc, data, func), const Elm_Slideshow_Item_Class *itc, const void *data, Eina_Compare_Cb func);

Efl_Object *_elm_slideshow_efl_object_constructor(Eo *obj, Elm_Slideshow_Data *pd);


Eina_Bool _elm_slideshow_elm_widget_focus_next_manager_is(Eo *obj, Elm_Slideshow_Data *pd);


Eina_Bool _elm_slideshow_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Slideshow_Data *pd);


Eina_Bool _elm_slideshow_elm_widget_widget_event(Eo *obj, Elm_Slideshow_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _elm_slideshow_elm_layout_sizing_eval(Eo *obj, Elm_Slideshow_Data *pd);


const Elm_Atspi_Action *_elm_slideshow_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Slideshow_Data *pd);


static Eina_Bool
_elm_slideshow_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_SLIDESHOW_EXTRA_OPS
#define ELM_SLIDESHOW_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_cache_after_set, _elm_slideshow_cache_after_set),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_cache_after_get, _elm_slideshow_cache_after_get),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_cache_before_set, _elm_slideshow_cache_before_set),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_cache_before_get, _elm_slideshow_cache_before_get),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_layout_set, _elm_slideshow_layout_set),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_layout_get, _elm_slideshow_layout_get),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_transition_set, _elm_slideshow_transition_set),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_transition_get, _elm_slideshow_transition_get),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_loop_set, _elm_slideshow_loop_set),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_loop_get, _elm_slideshow_loop_get),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_timeout_set, _elm_slideshow_timeout_set),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_timeout_get, _elm_slideshow_timeout_get),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_items_get, _elm_slideshow_items_get),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_transitions_get, _elm_slideshow_transitions_get),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_count_get, _elm_slideshow_count_get),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_item_current_get, _elm_slideshow_item_current_get),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_layouts_get, _elm_slideshow_layouts_get),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_previous, _elm_slideshow_previous),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_item_nth_get, _elm_slideshow_item_nth_get),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_next, _elm_slideshow_next),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_clear, _elm_slideshow_clear),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_item_add, _elm_slideshow_item_add),
      EFL_OBJECT_OP_FUNC(elm_obj_slideshow_item_sorted_insert, _elm_slideshow_item_sorted_insert),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_slideshow_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_slideshow_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_slideshow_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_slideshow_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_slideshow_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_slideshow_elm_interface_atspi_widget_action_elm_actions_get),
      ELM_SLIDESHOW_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_SLIDESHOW_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_SLIDESHOW_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_slideshow_class_desc = {
   EO_VERSION,
   "Elm.Slideshow",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Slideshow_Data),
   _elm_slideshow_class_initializer,
   _elm_slideshow_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_slideshow_class_get, &_elm_slideshow_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);

EAPI void
elm_slideshow_cache_after_set(Elm_Slideshow *obj, int count)
{
   elm_obj_slideshow_cache_after_set(obj, count);
}

EAPI int
elm_slideshow_cache_after_get(const Elm_Slideshow *obj)
{
   return elm_obj_slideshow_cache_after_get(obj);
}

EAPI void
elm_slideshow_cache_before_set(Elm_Slideshow *obj, int count)
{
   elm_obj_slideshow_cache_before_set(obj, count);
}

EAPI int
elm_slideshow_cache_before_get(const Elm_Slideshow *obj)
{
   return elm_obj_slideshow_cache_before_get(obj);
}

EAPI void
elm_slideshow_layout_set(Elm_Slideshow *obj, const char *layout)
{
   elm_obj_slideshow_layout_set(obj, layout);
}

EAPI const char *
elm_slideshow_layout_get(const Elm_Slideshow *obj)
{
   return elm_obj_slideshow_layout_get(obj);
}

EAPI void
elm_slideshow_transition_set(Elm_Slideshow *obj, const char *transition)
{
   elm_obj_slideshow_transition_set(obj, transition);
}

EAPI const char *
elm_slideshow_transition_get(const Elm_Slideshow *obj)
{
   return elm_obj_slideshow_transition_get(obj);
}

EAPI void
elm_slideshow_loop_set(Elm_Slideshow *obj, Eina_Bool loop)
{
   elm_obj_slideshow_loop_set(obj, loop);
}

EAPI Eina_Bool
elm_slideshow_loop_get(const Elm_Slideshow *obj)
{
   return elm_obj_slideshow_loop_get(obj);
}

EAPI void
elm_slideshow_timeout_set(Elm_Slideshow *obj, double timeout)
{
   elm_obj_slideshow_timeout_set(obj, timeout);
}

EAPI double
elm_slideshow_timeout_get(const Elm_Slideshow *obj)
{
   return elm_obj_slideshow_timeout_get(obj);
}

EAPI const Eina_List *
elm_slideshow_items_get(const Elm_Slideshow *obj)
{
   return elm_obj_slideshow_items_get(obj);
}

EAPI const Eina_List *
elm_slideshow_transitions_get(const Elm_Slideshow *obj)
{
   return elm_obj_slideshow_transitions_get(obj);
}

EAPI unsigned int
elm_slideshow_count_get(const Elm_Slideshow *obj)
{
   return elm_obj_slideshow_count_get(obj);
}

EAPI Elm_Widget_Item *
elm_slideshow_item_current_get(const Elm_Slideshow *obj)
{
   return elm_obj_slideshow_item_current_get(obj);
}

EAPI const Eina_List *
elm_slideshow_layouts_get(const Elm_Slideshow *obj)
{
   return elm_obj_slideshow_layouts_get(obj);
}

EAPI void
elm_slideshow_previous(Elm_Slideshow *obj)
{
   elm_obj_slideshow_previous(obj);
}

EAPI Elm_Widget_Item *
elm_slideshow_item_nth_get(const Elm_Slideshow *obj, unsigned int nth)
{
   return elm_obj_slideshow_item_nth_get(obj, nth);
}

EAPI void
elm_slideshow_next(Elm_Slideshow *obj)
{
   elm_obj_slideshow_next(obj);
}

EAPI void
elm_slideshow_clear(Elm_Slideshow *obj)
{
   elm_obj_slideshow_clear(obj);
}

EAPI Elm_Widget_Item *
elm_slideshow_item_add(Elm_Slideshow *obj, const Elm_Slideshow_Item_Class *itc, const void *data)
{
   return elm_obj_slideshow_item_add(obj, itc, data);
}

EAPI Elm_Widget_Item *
elm_slideshow_item_sorted_insert(Elm_Slideshow *obj, const Elm_Slideshow_Item_Class *itc, const void *data, Eina_Compare_Cb func)
{
   return elm_obj_slideshow_item_sorted_insert(obj, itc, data, func);
}
