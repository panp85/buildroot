#ifndef _ELDBUS_TYPES_EOT_H_
#define _ELDBUS_TYPES_EOT_H_

#ifndef _ELDBUS_TYPES_EOT_TYPES
#define _ELDBUS_TYPES_EOT_TYPES

/** Represents a client object bound to an interface
 *
 * @ingroup Eldbus
 */
typedef struct _Eldbus_Proxy Eldbus_Proxy;

/** Represents a connection of one the type of connection with the DBus daemon.
 *
 * @ingroup Eldbus
 */
typedef struct _Eldbus_Connection Eldbus_Connection;

/** Represents an object path already attached with bus name or unique id
 *
 * @ingroup Eldbus
 */
typedef struct _Eldbus_Object Eldbus_Object;

/** Argument direction
 *
 * @ingroup Eldbus_Introspection
 */
typedef enum
{
  ELDBUS_INTROSPECTION_ARGUMENT_DIRECTION_NONE = 0, /**< No direction */
  ELDBUS_INTROSPECTION_ARGUMENT_DIRECTION_IN, /**< Incoming direction */
  ELDBUS_INTROSPECTION_ARGUMENT_DIRECTION_OUT /**< Outgoing direction */
} Eldbus_Introspection_Argument_Direction;

/** Property access rights
 *
 * @ingroup Eldbus_Introspection
 */
typedef enum
{
  ELDBUS_INTROSPECTION_PROPERTY_ACCESS_READ = 0, /**< Property can be read */
  ELDBUS_INTROSPECTION_PROPERTY_ACCESS_WRITE, /**< Property can be written */
  ELDBUS_INTROSPECTION_PROPERTY_ACCESS_READWRITE /**< Property can be read and
                                                  * written */
} Eldbus_Introspection_Property_Access;

/** DBus Node
 *
 * @ingroup Eldbus_Introspection
 */
typedef struct _Eldbus_Introspection_Node
{
  Eina_Stringshare *name; /**< Node name (optional) */
  Eina_List *nodes; /**< List with nodes */
  Eina_List *interfaces; /**< List with interfaces */
} Eldbus_Introspection_Node;

/** DBus Interface
 *
 * @ingroup Eldbus_Introspection
 */
typedef struct _Eldbus_Introspection_Interface
{
  Eina_Stringshare *name; /**< Interface name */
  Eina_List *methods; /**< List with interface methods */
  Eina_List *signals; /**< List with interface signals */
  Eina_List *properties; /**< List with interface properties */
  Eina_List *annotations; /**< List with interface annotations */
} Eldbus_Introspection_Interface;

/** DBus Method
 *
 * @ingroup Eldbus_Introspection
 */
typedef struct _Eldbus_Introspection_Method
{
  Eina_Stringshare *name; /**< Method name */
  Eina_List *arguments; /**< List with method arguments */
  Eina_List *annotations; /**< List with method annotations */
} Eldbus_Introspection_Method;

/** DBus Property
 *
 * @ingroup Eldbus_Introspection
 */
typedef struct _Eldbus_Introspection_Property
{
  Eina_Stringshare *name; /**< Property name */
  Eina_Stringshare *type; /**< Property type */
  Eldbus_Introspection_Property_Access access; /**< Property access rights */
  Eina_List *annotations; /**< List with property annotations */
} Eldbus_Introspection_Property;

/** DBus Annotation
 *
 * @ingroup Eldbus_Introspection
 */
typedef struct _Eldbus_Introspection_Annotation
{
  Eina_Stringshare *name; /**< Annotation name */
  Eina_Stringshare *value; /**< Annotation value */
} Eldbus_Introspection_Annotation;

/** DBus Argument
 *
 * @ingroup Eldbus_Introspection
 */
typedef struct _Eldbus_Introspection_Argument
{
  Eina_Stringshare *name; /**< Argument name (optional) */
  Eina_Stringshare *type; /**< Argument type */
  Eldbus_Introspection_Argument_Direction direction; /**< Argument direction */
} Eldbus_Introspection_Argument;

/** DBus Signal
 *
 * @ingroup Eldbus_Introspection
 */
typedef struct _Eldbus_Introspection_Signal
{
  Eina_Stringshare *name; /**< Signal name */
  Eina_List *arguments; /**< List with signal arguments */
  Eina_List *annotations; /**< List with signal annotations */
} Eldbus_Introspection_Signal;


#endif

#endif
