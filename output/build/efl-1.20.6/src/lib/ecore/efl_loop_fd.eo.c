EWAPI const Efl_Event_Description _EFL_LOOP_FD_EVENT_READ =
   EFL_EVENT_DESCRIPTION("read");
EWAPI const Efl_Event_Description _EFL_LOOP_FD_EVENT_WRITE =
   EFL_EVENT_DESCRIPTION("write");
EWAPI const Efl_Event_Description _EFL_LOOP_FD_EVENT_ERROR =
   EFL_EVENT_DESCRIPTION("error");

void _efl_loop_fd_fd_set(Eo *obj, Efl_Loop_Fd_Data *pd, int fd);

EOAPI EFL_VOID_FUNC_BODYV(efl_loop_fd_set, EFL_FUNC_CALL(fd), int fd);

int _efl_loop_fd_fd_get(Eo *obj, Efl_Loop_Fd_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_loop_fd_get, int, 0);

void _efl_loop_fd_fd_file_set(Eo *obj, Efl_Loop_Fd_Data *pd, int fd);

EOAPI EFL_VOID_FUNC_BODYV(efl_loop_fd_file_set, EFL_FUNC_CALL(fd), int fd);

int _efl_loop_fd_fd_file_get(Eo *obj, Efl_Loop_Fd_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_loop_fd_file_get, int, 0);

Efl_Object *_efl_loop_fd_efl_object_constructor(Eo *obj, Efl_Loop_Fd_Data *pd);


void _efl_loop_fd_efl_object_destructor(Eo *obj, Efl_Loop_Fd_Data *pd);


void _efl_loop_fd_efl_object_parent_set(Eo *obj, Efl_Loop_Fd_Data *pd, Efl_Object *parent);


static Eina_Bool
_efl_loop_fd_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_LOOP_FD_EXTRA_OPS
#define EFL_LOOP_FD_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_loop_fd_set, _efl_loop_fd_fd_set),
      EFL_OBJECT_OP_FUNC(efl_loop_fd_get, _efl_loop_fd_fd_get),
      EFL_OBJECT_OP_FUNC(efl_loop_fd_file_set, _efl_loop_fd_fd_file_set),
      EFL_OBJECT_OP_FUNC(efl_loop_fd_file_get, _efl_loop_fd_fd_file_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_loop_fd_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_loop_fd_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_parent_set, _efl_loop_fd_efl_object_parent_set),
      EFL_LOOP_FD_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_LOOP_FD_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_LOOP_FD_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_loop_fd_class_desc = {
   EO_VERSION,
   "Efl.Loop.Fd",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Loop_Fd_Data),
   _efl_loop_fd_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_loop_fd_class_get, &_efl_loop_fd_class_desc, EFL_LOOP_USER_CLASS, NULL);
