#ifndef ELEMENTARY_OPTIONS_H
#define ELEMENTARY_OPTIONS_H

#define ELM_ELDBUS
#define ELM_EFREET
#define ELM_ETHUMB

#define ELM_UNIX
#undef ELM_WIN32
#undef ELM_EMAP
#undef ELM_DEBUG
#define ELM_ALLOCA_H
#define ELM_LIBINTL_H
#define ELM_DIRENT_H

#ifdef EFL_BETA_API_SUPPORT
# define ELM_ELOCATION
#endif

#endif
