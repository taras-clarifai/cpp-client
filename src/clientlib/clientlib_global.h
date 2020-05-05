#ifndef CLIENTLIB_GLOBAL_H
#define CLIENTLIB_GLOBAL_H

#ifdef _WIN32
#  if defined(CLIENTLIB_LIBRARY)
#    define CLIENTLIB_SHARED_EXPORT __declspec(dllexport)
#  else
#    define CLIENTLIB_SHARED_EXPORT __declspec(dllimport)
#  endif
#else
#  define CLIENTLIB_SHARED_EXPORT
#endif

#endif // CLIENTLIB_GLOBAL_H
