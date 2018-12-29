EOAPI EFL_FUNC_BODY_CONST(efl_image_animated_get, Eina_Bool, 0);
EOAPI EFL_FUNC_BODYV(efl_image_animated_frame_set, Eina_Bool, 0, EFL_FUNC_CALL(frame_index), int frame_index);
EOAPI EFL_FUNC_BODY_CONST(efl_image_animated_frame_get, int, 0);
EOAPI EFL_FUNC_BODY_CONST(efl_image_animated_frame_count_get, int, 0);
EOAPI EFL_FUNC_BODY_CONST(efl_image_animated_loop_type_get, Efl_Image_Animated_Loop_Hint, 0);
EOAPI EFL_FUNC_BODY_CONST(efl_image_animated_loop_count_get, int, 0);
EOAPI EFL_FUNC_BODYV_CONST(efl_image_animated_frame_duration_get, double, 0, EFL_FUNC_CALL(start_frame, frame_num), int start_frame, int frame_num);

static Eina_Bool
_efl_image_animated_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_IMAGE_ANIMATED_EXTRA_OPS
#define EFL_IMAGE_ANIMATED_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_image_animated_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_animated_frame_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_animated_frame_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_animated_frame_count_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_animated_loop_type_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_animated_loop_count_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_image_animated_frame_duration_get, NULL),
      EFL_IMAGE_ANIMATED_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_IMAGE_ANIMATED_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_IMAGE_ANIMATED_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_image_animated_class_desc = {
   EO_VERSION,
   "Efl.Image.Animated",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_image_animated_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_image_animated_interface_get, &_efl_image_animated_class_desc, NULL, NULL);
