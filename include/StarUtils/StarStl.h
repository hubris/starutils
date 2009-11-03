#ifndef STARSTL_H
#define STARSTL_H

#include "StarExport.h"

#include <functional>

namespace Star
{
    namespace Stl
    {
        template<typename T> STARUTILS_EXPORT
        struct DeleteObject
        {
            void operator()(T *obj)
            {
                delete obj;
            }
        };

        template<typename T> STARUTILS_EXPORT
        struct Mul : public std::binary_function<T, T, T>
        {
            T operator()(T a, T b) const
            {
                return a*b;
            }
        };
    }
}

#endif
