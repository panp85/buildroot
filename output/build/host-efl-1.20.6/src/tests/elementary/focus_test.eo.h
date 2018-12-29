#ifndef _FOCUS_TEST_EO_H_
#define _FOCUS_TEST_EO_H_

#ifndef _FOCUS_TEST_EO_CLASS_TYPE
#define _FOCUS_TEST_EO_CLASS_TYPE

typedef Eo Focus_Test;

#endif

#ifndef _FOCUS_TEST_EO_TYPES
#define _FOCUS_TEST_EO_TYPES


#endif
#define FOCUS_TEST_CLASS focus_test_class_get()

EWAPI const Efl_Class *focus_test_class_get(void);

EOAPI void focus_test_size(Eo *obj, Eina_Rectangle rect);

#endif
