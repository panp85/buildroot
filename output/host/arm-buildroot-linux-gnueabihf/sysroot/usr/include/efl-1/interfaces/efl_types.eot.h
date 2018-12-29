#ifndef _EFL_TYPES_EOT_H_
#define _EFL_TYPES_EOT_H_

#ifndef _EFL_TYPES_EOT_TYPES
#define _EFL_TYPES_EOT_TYPES

/**
 * @brief This type describes the version of EFL with an optional variant.
 *
 * This may be used to query the current running version of EFL. Or it can be
 * passed by applications at startup time to inform EFL of the version a
 * certain application was built for.
 *
 * @since 1.18
 *
 * @ingroup Efl
 */
typedef struct _Efl_Version
{
  int major; /**< Major component of the version (>= 1). */
  int minor; /**< Minor component of the version (>= 0). */
  int micro; /**< Micro component of the version (>= 0). */
  int revision; /**< Revision component of the version (>= 0). */
  const char *flavor; /**< Special version string for this build of EFL, @c null
                       * for vanilla (upstream) EFL. Contains
                       * @c EFL_VERSION_FLAVOR. */
  const char *build_id; /**< Contains @c EFL_BUILD_ID. */
} Efl_Version;

/** This type describes an observable touple
 *
 * @ingroup Efl_Observable
 */
typedef struct _Efl_Observable_Tuple
{
  const char *key; /**< Touple key */
  Eina_Iterator *data; /**< Touple data */
} Efl_Observable_Tuple;


#endif

#endif
