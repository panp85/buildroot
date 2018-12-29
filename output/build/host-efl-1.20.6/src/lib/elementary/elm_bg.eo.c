
void _elm_bg_option_set(Eo *obj, Elm_Bg_Data *pd, Elm_Bg_Option option);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_bg_option_set, EFL_FUNC_CALL(option), Elm_Bg_Option option);

Elm_Bg_Option _elm_bg_option_get(Eo *obj, Elm_Bg_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_bg_option_get, Elm_Bg_Option, 0);

void _elm_bg_color_set(Eo *obj, Elm_Bg_Data *pd, int r, int g, int b, int a);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_bg_color_set, EFL_FUNC_CALL(r, g, b, a), int r, int g, int b, int a);

void _elm_bg_color_get(Eo *obj, Elm_Bg_Data *pd, int *r, int *g, int *b, int *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_bg_color_get, EFL_FUNC_CALL(r, g, b, a), int *r, int *g, int *b, int *a);

void _elm_bg_load_size_set(Eo *obj, Elm_Bg_Data *pd, int w, int h);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_bg_load_size_set, EFL_FUNC_CALL(w, h), int w, int h);

Efl_Object *_elm_bg_efl_object_constructor(Eo *obj, Elm_Bg_Data *pd);


const Elm_Layout_Part_Alias_Description *_elm_bg_elm_layout_content_aliases_get(Eo *obj, Elm_Bg_Data *pd);


void _elm_bg_elm_layout_sizing_eval(Eo *obj, Elm_Bg_Data *pd);


Eina_Bool _elm_bg_efl_file_file_set(Eo *obj, Elm_Bg_Data *pd, const char *file, const char *key);


void _elm_bg_efl_file_file_get(Eo *obj, Elm_Bg_Data *pd, const char **file, const char **key);


static Eina_Bool
_elm_bg_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_BG_EXTRA_OPS
#define ELM_BG_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_bg_option_set, _elm_bg_option_set),
      EFL_OBJECT_OP_FUNC(elm_obj_bg_option_get, _elm_bg_option_get),
      EFL_OBJECT_OP_FUNC(elm_obj_bg_color_set, _elm_bg_color_set),
      EFL_OBJECT_OP_FUNC(elm_obj_bg_color_get, _elm_bg_color_get),
      EFL_OBJECT_OP_FUNC(elm_obj_bg_load_size_set, _elm_bg_load_size_set),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_bg_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_content_aliases_get, _elm_bg_elm_layout_content_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_bg_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(efl_file_set, _elm_bg_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_get, _elm_bg_efl_file_file_get),
      ELM_BG_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_BG_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_BG_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_bg_class_desc = {
   EO_VERSION,
   "Elm.Bg",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Bg_Data),
   _elm_bg_class_initializer,
   _elm_bg_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_bg_class_get, &_elm_bg_class_desc, ELM_LAYOUT_CLASS, EFL_FILE_INTERFACE, NULL);

EAPI void
elm_bg_option_set(Elm_Bg *obj, Elm_Bg_Option option)
{
   elm_obj_bg_option_set(obj, option);
}

EAPI Elm_Bg_Option
elm_bg_option_get(const Elm_Bg *obj)
{
   return elm_obj_bg_option_get(obj);
}

EAPI void
elm_bg_load_size_set(Elm_Bg *obj, int w, int h)
{
   elm_obj_bg_load_size_set(obj, w, h);
}
