EOAPI EFL_FUNC_BODY_CONST(efl_player_playable_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_player_play_set, EFL_FUNC_CALL(play), Eina_Bool play);
EOAPI EFL_FUNC_BODY_CONST(efl_player_play_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_player_position_set, EFL_FUNC_CALL(sec), double sec);
EOAPI EFL_FUNC_BODY_CONST(efl_player_position_get, double, 0);
EOAPI EFL_FUNC_BODY_CONST(efl_player_progress_get, double, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_player_play_speed_set, EFL_FUNC_CALL(speed), double speed);
EOAPI EFL_FUNC_BODY_CONST(efl_player_play_speed_get, double, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_player_volume_set, EFL_FUNC_CALL(volume), double volume);
EOAPI EFL_FUNC_BODY_CONST(efl_player_volume_get, double, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_player_mute_set, EFL_FUNC_CALL(mute), Eina_Bool mute);
EOAPI EFL_FUNC_BODY_CONST(efl_player_mute_get, Eina_Bool, 0);
EOAPI EFL_FUNC_BODY_CONST(efl_player_length_get, double, 0);
EOAPI EFL_FUNC_BODY_CONST(efl_player_seekable_get, Eina_Bool, 0);

static Eina_Bool
_efl_player_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_PLAYER_EXTRA_OPS
#define EFL_PLAYER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_player_playable_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_player_play_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_player_play_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_player_position_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_player_position_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_player_progress_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_player_play_speed_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_player_play_speed_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_player_volume_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_player_volume_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_player_mute_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_player_mute_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_player_length_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_player_seekable_get, NULL),
      EFL_PLAYER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_PLAYER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_PLAYER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_player_class_desc = {
   EO_VERSION,
   "Efl.Player",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_player_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_player_interface_get, &_efl_player_class_desc, NULL, NULL);
