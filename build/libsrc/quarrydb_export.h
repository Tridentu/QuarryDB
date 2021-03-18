
#ifndef QUARRYDB_EXPORT_H
#define QUARRYDB_EXPORT_H

#ifdef QUARRYDB_STATIC_DEFINE
#  define QUARRYDB_EXPORT
#  define QUARRYDB_NO_EXPORT
#else
#  ifndef QUARRYDB_EXPORT
#    ifdef quarrydbcore_EXPORTS
        /* We are building this library */
#      define QUARRYDB_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define QUARRYDB_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef QUARRYDB_NO_EXPORT
#    define QUARRYDB_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef QUARRYDB_DEPRECATED
#  define QUARRYDB_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef QUARRYDB_DEPRECATED_EXPORT
#  define QUARRYDB_DEPRECATED_EXPORT QUARRYDB_EXPORT QUARRYDB_DEPRECATED
#endif

#ifndef QUARRYDB_DEPRECATED_NO_EXPORT
#  define QUARRYDB_DEPRECATED_NO_EXPORT QUARRYDB_NO_EXPORT QUARRYDB_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef QUARRYDB_NO_DEPRECATED
#    define QUARRYDB_NO_DEPRECATED
#  endif
#endif

#endif /* QUARRYDB_EXPORT_H */
