
Efl_Object *_ector_software_buffer_efl_object_constructor(Eo *obj, void *pd);


void _ector_software_buffer_efl_object_destructor(Eo *obj, void *pd);


static Eina_Bool
_ector_software_buffer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_SOFTWARE_BUFFER_EXTRA_OPS
#define ECTOR_SOFTWARE_BUFFER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _ector_software_buffer_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _ector_software_buffer_efl_object_destructor),
      ECTOR_SOFTWARE_BUFFER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_SOFTWARE_BUFFER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_SOFTWARE_BUFFER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_software_buffer_class_desc = {
   EO_VERSION,
   "Ector.Software.Buffer",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _ector_software_buffer_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_software_buffer_class_get, &_ector_software_buffer_class_desc, EFL_OBJECT_CLASS, ECTOR_SOFTWARE_BUFFER_BASE_MIXIN, NULL);
