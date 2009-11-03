#ifndef STARIMPORT_H
#define STARIMPORT_H

#ifdef _WIN32
#define _STAR_EXPORT __declspec( dllexport )
#define _STAR_IMPORT __declspec( dllimport )
#else
#define _STAR_EXPORT __attribute__ ((visibility("default")))
#define _STAR_IMPORT
#endif

#if defined(StarUtils_EXPORTS)
#define STARUTILS_EXPORT _STAR_EXPORT
#else
#define STARUTILS_EXPORT _STAR_IMPORT
#endif

#endif
