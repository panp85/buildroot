EWAPI const Efl_Event_Description _EIO_SENTRY_EVENT_FILE_CREATED =
   EFL_EVENT_DESCRIPTION("file,created");
EWAPI const Efl_Event_Description _EIO_SENTRY_EVENT_FILE_DELETED =
   EFL_EVENT_DESCRIPTION("file,deleted");
EWAPI const Efl_Event_Description _EIO_SENTRY_EVENT_FILE_MODIFIED =
   EFL_EVENT_DESCRIPTION("file,modified");
EWAPI const Efl_Event_Description _EIO_SENTRY_EVENT_FILE_CLOSED =
   EFL_EVENT_DESCRIPTION("file,closed");
EWAPI const Efl_Event_Description _EIO_SENTRY_EVENT_DIRECTORY_CREATED =
   EFL_EVENT_DESCRIPTION("directory,created");
EWAPI const Efl_Event_Description _EIO_SENTRY_EVENT_DIRECTORY_DELETED =
   EFL_EVENT_DESCRIPTION("directory,deleted");
EWAPI const Efl_Event_Description _EIO_SENTRY_EVENT_DIRECTORY_MODIFIED =
   EFL_EVENT_DESCRIPTION("directory,modified");
EWAPI const Efl_Event_Description _EIO_SENTRY_EVENT_DIRECTORY_CLOSED =
   EFL_EVENT_DESCRIPTION("directory,closed");
EWAPI const Efl_Event_Description _EIO_SENTRY_EVENT_SELF_RENAME =
   EFL_EVENT_DESCRIPTION("self,rename");
EWAPI const Efl_Event_Description _EIO_SENTRY_EVENT_SELF_DELETED =
   EFL_EVENT_DESCRIPTION("self,deleted");
EWAPI const Efl_Event_Description _EIO_SENTRY_EVENT_ERROR =
   EFL_EVENT_DESCRIPTION("error");

Eina_Bool _eio_sentry_add(Eo *obj, Eio_Sentry_Data *pd, const char *path);

EOAPI EFL_FUNC_BODYV(eio_sentry_add, Eina_Bool, 0, EFL_FUNC_CALL(path), const char *path);

void _eio_sentry_del(Eo *obj, Eio_Sentry_Data *pd, const char *path);

EOAPI EFL_VOID_FUNC_BODYV(eio_sentry_del, EFL_FUNC_CALL(path), const char *path);

Efl_Object *_eio_sentry_efl_object_constructor(Eo *obj, Eio_Sentry_Data *pd);


void _eio_sentry_efl_object_destructor(Eo *obj, Eio_Sentry_Data *pd);


static Eina_Bool
_eio_sentry_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EIO_SENTRY_EXTRA_OPS
#define EIO_SENTRY_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(eio_sentry_add, _eio_sentry_add),
      EFL_OBJECT_OP_FUNC(eio_sentry_del, _eio_sentry_del),
      EFL_OBJECT_OP_FUNC(efl_constructor, _eio_sentry_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _eio_sentry_efl_object_destructor),
      EIO_SENTRY_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EIO_SENTRY_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EIO_SENTRY_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _eio_sentry_class_desc = {
   EO_VERSION,
   "Eio.Sentry",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Eio_Sentry_Data),
   _eio_sentry_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(eio_sentry_class_get, &_eio_sentry_class_desc, EFL_OBJECT_CLASS, NULL);
