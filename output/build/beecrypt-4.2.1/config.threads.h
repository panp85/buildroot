#if ENABLE_THREADS
# ifndef _REENTRANT
#  define _REENTRANT
# endif
# if LINUX
#  define _LIBC_REENTRANT
# endif
#else
# ifdef _REENTRANT
#  undef _REENTRANT
# endif
#endif

#if !ENABLE_THREAD_LOCAL_STORAGE
# define __thread
#endif
