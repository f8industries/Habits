#ifndef HABITS_GLOBAL_H
#define HABITS_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef HABITS_LIB
# define HABITS_EXPORT Q_DECL_EXPORT
#else
# define HABITS_EXPORT Q_DECL_IMPORT
#endif

#endif // HABITS_GLOBAL_H
