
void _efl_ui_win_internal_part_efl_object_destructor(Eo *obj, Elm_Part_Data *pd);


Eina_Bool _efl_ui_win_internal_part_efl_container_content_set(Eo *obj, Elm_Part_Data *pd, Efl_Gfx *content);


Efl_Gfx *_efl_ui_win_internal_part_efl_container_content_get(Eo *obj, Elm_Part_Data *pd);


Efl_Gfx *_efl_ui_win_internal_part_efl_container_content_unset(Eo *obj, Elm_Part_Data *pd);


void _efl_ui_win_internal_part_efl_gfx_color_set(Eo *obj, Elm_Part_Data *pd, int r, int g, int b, int a);


void _efl_ui_win_internal_part_efl_gfx_color_get(Eo *obj, Elm_Part_Data *pd, int *r, int *g, int *b, int *a);


Eina_Bool _efl_ui_win_internal_part_efl_file_file_set(Eo *obj, Elm_Part_Data *pd, const char *file, const char *key);


void _efl_ui_win_internal_part_efl_file_file_get(Eo *obj, Elm_Part_Data *pd, const char **file, const char **key);


static Eina_Bool
_efl_ui_win_internal_part_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_WIN_INTERNAL_PART_EXTRA_OPS
#define EFL_UI_WIN_INTERNAL_PART_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_ui_win_internal_part_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_content_set, _efl_ui_win_internal_part_efl_container_content_set),
      EFL_OBJECT_OP_FUNC(efl_content_get, _efl_ui_win_internal_part_efl_container_content_get),
      EFL_OBJECT_OP_FUNC(efl_content_unset, _efl_ui_win_internal_part_efl_container_content_unset),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_set, _efl_ui_win_internal_part_efl_gfx_color_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_get, _efl_ui_win_internal_part_efl_gfx_color_get),
      EFL_OBJECT_OP_FUNC(efl_file_set, _efl_ui_win_internal_part_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_get, _efl_ui_win_internal_part_efl_file_file_get),
      EFL_UI_WIN_INTERNAL_PART_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_WIN_INTERNAL_PART_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_WIN_INTERNAL_PART_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_win_internal_part_class_desc = {
   EO_VERSION,
   "Efl.Ui.Win.Internal.Part",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Part_Data),
   _efl_ui_win_internal_part_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_win_internal_part_class_get, &_efl_ui_win_internal_part_class_desc, EFL_OBJECT_CLASS, EFL_CONTAINER_INTERFACE, EFL_GFX_INTERFACE, EFL_FILE_INTERFACE, NULL);
