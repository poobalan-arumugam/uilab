#ifndef LIBUILAB_GLOBAL_H
#define LIBUILAB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBUILAB_LIBRARY)
#  define LIBUILABSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LIBUILABSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBUILAB_GLOBAL_H
