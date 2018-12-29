
void _elm_systray_id_set(Eo *obj, void *pd, const char *id);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_systray_id_set, EFL_FUNC_CALL(id), const char *id);

const char *_elm_systray_id_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_systray_id_get, const char *, NULL);

void _elm_systray_category_set(Eo *obj, void *pd, Elm_Systray_Category cat);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_systray_category_set, EFL_FUNC_CALL(cat), Elm_Systray_Category cat);

Elm_Systray_Category _elm_systray_category_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_systray_category_get, Elm_Systray_Category, 0);

void _elm_systray_icon_theme_path_set(Eo *obj, void *pd, const char *icon_theme_path);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_systray_icon_theme_path_set, EFL_FUNC_CALL(icon_theme_path), const char *icon_theme_path);

const char *_elm_systray_icon_theme_path_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_systray_icon_theme_path_get, const char *, NULL);

void _elm_systray_menu_set(Eo *obj, void *pd, const Efl_Object *menu);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_systray_menu_set, EFL_FUNC_CALL(menu), const Efl_Object *menu);

const Efl_Object *_elm_systray_menu_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_systray_menu_get, const Efl_Object *, NULL);

void _elm_systray_att_icon_name_set(Eo *obj, void *pd, const char *att_icon_name);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_systray_att_icon_name_set, EFL_FUNC_CALL(att_icon_name), const char *att_icon_name);

const char *_elm_systray_att_icon_name_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_systray_att_icon_name_get, const char *, NULL);

void _elm_systray_status_set(Eo *obj, void *pd, Elm_Systray_Status st);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_systray_status_set, EFL_FUNC_CALL(st), Elm_Systray_Status st);

Elm_Systray_Status _elm_systray_status_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_systray_status_get, Elm_Systray_Status, 0);

void _elm_systray_icon_name_set(Eo *obj, void *pd, const char *icon_name);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_systray_icon_name_set, EFL_FUNC_CALL(icon_name), const char *icon_name);

const char *_elm_systray_icon_name_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_systray_icon_name_get, const char *, NULL);

void _elm_systray_title_set(Eo *obj, void *pd, const char *title);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_systray_title_set, EFL_FUNC_CALL(title), const char *title);

const char *_elm_systray_title_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_systray_title_get, const char *, NULL);

Eina_Bool _elm_systray_register(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY(elm_obj_systray_register, Eina_Bool, 0);

static Eina_Bool
_elm_systray_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_SYSTRAY_EXTRA_OPS
#define ELM_SYSTRAY_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_systray_id_set, _elm_systray_id_set),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_id_get, _elm_systray_id_get),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_category_set, _elm_systray_category_set),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_category_get, _elm_systray_category_get),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_icon_theme_path_set, _elm_systray_icon_theme_path_set),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_icon_theme_path_get, _elm_systray_icon_theme_path_get),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_menu_set, _elm_systray_menu_set),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_menu_get, _elm_systray_menu_get),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_att_icon_name_set, _elm_systray_att_icon_name_set),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_att_icon_name_get, _elm_systray_att_icon_name_get),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_status_set, _elm_systray_status_set),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_status_get, _elm_systray_status_get),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_icon_name_set, _elm_systray_icon_name_set),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_icon_name_get, _elm_systray_icon_name_get),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_title_set, _elm_systray_title_set),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_title_get, _elm_systray_title_get),
      EFL_OBJECT_OP_FUNC(elm_obj_systray_register, _elm_systray_register),
      ELM_SYSTRAY_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_SYSTRAY_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_SYSTRAY_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_systray_class_desc = {
   EO_VERSION,
   "Elm.Systray",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _elm_systray_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_systray_class_get, &_elm_systray_class_desc, EFL_OBJECT_CLASS, NULL);

EAPI void
elm_systray_id_set(Elm_Systray *obj, const char *id)
{
   elm_obj_systray_id_set(obj, id);
}

EAPI const char *
elm_systray_id_get(const Elm_Systray *obj)
{
   return elm_obj_systray_id_get(obj);
}

EAPI void
elm_systray_category_set(Elm_Systray *obj, Elm_Systray_Category cat)
{
   elm_obj_systray_category_set(obj, cat);
}

EAPI Elm_Systray_Category
elm_systray_category_get(const Elm_Systray *obj)
{
   return elm_obj_systray_category_get(obj);
}

EAPI void
elm_systray_icon_theme_path_set(Elm_Systray *obj, const char *icon_theme_path)
{
   elm_obj_systray_icon_theme_path_set(obj, icon_theme_path);
}

EAPI const char *
elm_systray_icon_theme_path_get(const Elm_Systray *obj)
{
   return elm_obj_systray_icon_theme_path_get(obj);
}

EAPI void
elm_systray_menu_set(Elm_Systray *obj, const Efl_Object *menu)
{
   elm_obj_systray_menu_set(obj, menu);
}

EAPI const Efl_Object *
elm_systray_menu_get(const Elm_Systray *obj)
{
   return elm_obj_systray_menu_get(obj);
}

EAPI void
elm_systray_att_icon_name_set(Elm_Systray *obj, const char *att_icon_name)
{
   elm_obj_systray_att_icon_name_set(obj, att_icon_name);
}

EAPI const char *
elm_systray_att_icon_name_get(const Elm_Systray *obj)
{
   return elm_obj_systray_att_icon_name_get(obj);
}

EAPI void
elm_systray_status_set(Elm_Systray *obj, Elm_Systray_Status st)
{
   elm_obj_systray_status_set(obj, st);
}

EAPI Elm_Systray_Status
elm_systray_status_get(const Elm_Systray *obj)
{
   return elm_obj_systray_status_get(obj);
}

EAPI void
elm_systray_icon_name_set(Elm_Systray *obj, const char *icon_name)
{
   elm_obj_systray_icon_name_set(obj, icon_name);
}

EAPI const char *
elm_systray_icon_name_get(const Elm_Systray *obj)
{
   return elm_obj_systray_icon_name_get(obj);
}

EAPI void
elm_systray_title_set(Elm_Systray *obj, const char *title)
{
   elm_obj_systray_title_set(obj, title);
}

EAPI const char *
elm_systray_title_get(const Elm_Systray *obj)
{
   return elm_obj_systray_title_get(obj);
}

EAPI Eina_Bool
elm_systray_register(Elm_Systray *obj)
{
   return elm_obj_systray_register(obj);
}
