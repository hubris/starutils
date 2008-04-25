#ifndef STARIMPORT_H
#define STARIMPORT_H

#ifdef _WIN32
#define _STAR_EXPORT __declspec( dllexport )
#define _STAR_IMPORT __declspec( dllexport )
#endif

#ifdef __GCC__
#define _STAR_EXPORT __attribute__ ((visibility("default")))
#define _STAR_IMPORT
#endif

#endif
