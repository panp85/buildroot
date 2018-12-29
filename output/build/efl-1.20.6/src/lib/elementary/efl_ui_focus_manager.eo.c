EWAPI const Efl_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_REDIRECT_CHANGED =
   EFL_EVENT_DESCRIPTION("redirect,changed");
EWAPI const Efl_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_FLUSH_PRE =
   EFL_EVENT_DESCRIPTION("flush,pre");
EWAPI const Efl_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_COORDS_DIRTY =
   EFL_EVENT_DESCRIPTION("coords,dirty");
EWAPI const Efl_Event_Description _EFL_UI_FOCUS_MANAGER_EVENT_FOCUSED =
   EFL_EVENT_DESCRIPTION("focused");

Efl_Ui_Focus_Object *_efl_ui_focus_manager_move(Eo *obj, Efl_Ui_Focus_Manager_Data *pd, Efl_Ui_Focus_Direction direction);

EOAPI EFL_FUNC_BODYV(efl_ui_focus_manager_move, Efl_Ui_Focus_Object *, NULL, EFL_FUNC_CALL(direction), Efl_Ui_Focus_Direction direction);

Efl_Ui_Focus_Object *_efl_ui_focus_manager_request_move(Eo *obj, Efl_Ui_Focus_Manager_Data *pd, Efl_Ui_Focus_Direction direction);

EOAPI EFL_FUNC_BODYV(efl_ui_focus_manager_request_move, Efl_Ui_Focus_Object *, NULL, EFL_FUNC_CALL(direction), Efl_Ui_Focus_Direction direction);

Eina_Bool _efl_ui_focus_manager_register(Eo *obj, Efl_Ui_Focus_Manager_Data *pd, Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Object *parent, Efl_Ui_Focus_Manager *redirect);

EOAPI EFL_FUNC_BODYV(efl_ui_focus_manager_register, Eina_Bool, 0, EFL_FUNC_CALL(child, parent, redirect), Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Object *parent, Efl_Ui_Focus_Manager *redirect);

Eina_Bool _efl_ui_focus_manager_register_logical(Eo *obj, Efl_Ui_Focus_Manager_Data *pd, Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Object *parent, Efl_Ui_Focus_Manager *redirect);

EOAPI EFL_FUNC_BODYV(efl_ui_focus_manager_register_logical, Eina_Bool, 0, EFL_FUNC_CALL(child, parent, redirect), Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Object *parent, Efl_Ui_Focus_Manager *redirect);

Eina_Bool _efl_ui_focus_manager_update_redirect(Eo *obj, Efl_Ui_Focus_Manager_Data *pd, Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Manager *redirect);

EOAPI EFL_FUNC_BODYV(efl_ui_focus_manager_update_redirect, Eina_Bool, 0, EFL_FUNC_CALL(child, redirect), Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Manager *redirect);

Eina_Bool _efl_ui_focus_manager_update_parent(Eo *obj, Efl_Ui_Focus_Manager_Data *pd, Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Object *parent);

EOAPI EFL_FUNC_BODYV(efl_ui_focus_manager_update_parent, Eina_Bool, 0, EFL_FUNC_CALL(child, parent), Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Object *parent);

Eina_Bool _efl_ui_focus_manager_update_children(Eo *obj, Efl_Ui_Focus_Manager_Data *pd, Efl_Ui_Focus_Object *parent, Eina_List *children);

EOAPI EFL_FUNC_BODYV(efl_ui_focus_manager_update_children, Eina_Bool, 0, EFL_FUNC_CALL(parent, children), Efl_Ui_Focus_Object *parent, Eina_List *children);

void _efl_ui_focus_manager_update_order(Eo *obj, Efl_Ui_Focus_Manager_Data *pd, Efl_Ui_Focus_Object *parent, Eina_List *children);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_focus_manager_update_order, EFL_FUNC_CALL(parent, children), Efl_Ui_Focus_Object *parent, Eina_List *children);

void _efl_ui_focus_manager_unregister(Eo *obj, Efl_Ui_Focus_Manager_Data *pd, Efl_Ui_Focus_Object *child);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_focus_manager_unregister, EFL_FUNC_CALL(child), Efl_Ui_Focus_Object *child);

void _efl_ui_focus_manager_focus(Eo *obj, Efl_Ui_Focus_Manager_Data *pd, Efl_Ui_Focus_Object *focus);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_focus_manager_focus, EFL_FUNC_CALL(focus), Efl_Ui_Focus_Object *focus);

Efl_Ui_Focus_Object *_efl_ui_focus_manager_focused(Eo *obj, Efl_Ui_Focus_Manager_Data *pd);

EOAPI EFL_FUNC_BODY(efl_ui_focus_manager_focused, Efl_Ui_Focus_Object *, NULL);

void _efl_ui_focus_manager_redirect_set(Eo *obj, Efl_Ui_Focus_Manager_Data *pd, Efl_Ui_Focus_Manager *redirect);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_focus_manager_redirect_set, EFL_FUNC_CALL(redirect), Efl_Ui_Focus_Manager *redirect);

Efl_Ui_Focus_Manager *_efl_ui_focus_manager_redirect_get(Eo *obj, Efl_Ui_Focus_Manager_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_focus_manager_redirect_get, Efl_Ui_Focus_Manager *, NULL);

Eina_Iterator *_efl_ui_focus_manager_border_elements_get(Eo *obj, Efl_Ui_Focus_Manager_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_focus_manager_border_elements_get, Eina_Iterator *, NULL);

Eina_Bool _efl_ui_focus_manager_root_set(Eo *obj, Efl_Ui_Focus_Manager_Data *pd, Efl_Ui_Focus_Object *root);

EOAPI EFL_FUNC_BODYV(efl_ui_focus_manager_root_set, Eina_Bool, 0, EFL_FUNC_CALL(root), Efl_Ui_Focus_Object *root);

Efl_Ui_Focus_Object *_efl_ui_focus_manager_root_get(Eo *obj, Efl_Ui_Focus_Manager_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_focus_manager_root_get, Efl_Ui_Focus_Object *, NULL);

Efl_Ui_Focus_Relations *_efl_ui_focus_manager_fetch(Eo *obj, Efl_Ui_Focus_Manager_Data *pd, Efl_Ui_Focus_Object *child);

EOAPI EFL_FUNC_BODYV(efl_ui_focus_manager_fetch, Efl_Ui_Focus_Relations *, NULL, EFL_FUNC_CALL(child), Efl_Ui_Focus_Object *child);

Efl_Ui_Focus_Object *_efl_ui_focus_manager_logical_end(Eo *obj, Efl_Ui_Focus_Manager_Data *pd);

EOAPI EFL_FUNC_BODY(efl_ui_focus_manager_logical_end, Efl_Ui_Focus_Object *, NULL);

Efl_Object *_efl_ui_focus_manager_efl_object_constructor(Eo *obj, Efl_Ui_Focus_Manager_Data *pd);


Efl_Object *_efl_ui_focus_manager_efl_object_finalize(Eo *obj, Efl_Ui_Focus_Manager_Data *pd);


Efl_Object *_efl_ui_focus_manager_efl_object_provider_find(Eo *obj, Efl_Ui_Focus_Manager_Data *pd, const Efl_Object *klass);


void _efl_ui_focus_manager_efl_object_destructor(Eo *obj, Efl_Ui_Focus_Manager_Data *pd);


static Eina_Bool
_efl_ui_focus_manager_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_FOCUS_MANAGER_EXTRA_OPS
#define EFL_UI_FOCUS_MANAGER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_move, _efl_ui_focus_manager_move),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_request_move, _efl_ui_focus_manager_request_move),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_register, _efl_ui_focus_manager_register),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_register_logical, _efl_ui_focus_manager_register_logical),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_update_redirect, _efl_ui_focus_manager_update_redirect),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_update_parent, _efl_ui_focus_manager_update_parent),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_update_children, _efl_ui_focus_manager_update_children),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_update_order, _efl_ui_focus_manager_update_order),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_unregister, _efl_ui_focus_manager_unregister),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_focus, _efl_ui_focus_manager_focus),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_focused, _efl_ui_focus_manager_focused),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_redirect_set, _efl_ui_focus_manager_redirect_set),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_redirect_get, _efl_ui_focus_manager_redirect_get),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_border_elements_get, _efl_ui_focus_manager_border_elements_get),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_root_set, _efl_ui_focus_manager_root_set),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_root_get, _efl_ui_focus_manager_root_get),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_fetch, _efl_ui_focus_manager_fetch),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_logical_end, _efl_ui_focus_manager_logical_end),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_focus_manager_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_ui_focus_manager_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_provider_find, _efl_ui_focus_manager_efl_object_provider_find),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_ui_focus_manager_efl_object_destructor),
      EFL_UI_FOCUS_MANAGER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_FOCUS_MANAGER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_FOCUS_MANAGER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_focus_manager_class_desc = {
   EO_VERSION,
   "Efl.Ui.Focus.Manager",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Focus_Manager_Data),
   _efl_ui_focus_manager_class_initializer,
   _efl_ui_focus_manager_class_constructor,
   _efl_ui_focus_manager_class_destructor
};

EFL_DEFINE_CLASS(efl_ui_focus_manager_class_get, &_efl_ui_focus_manager_class_desc, EFL_OBJECT_CLASS, NULL);
