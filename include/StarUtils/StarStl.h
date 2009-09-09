#ifndef STARSTL_H
#define STARSTL_H

#include <functional>

namespace Star
{
    namespace Stl
    {
        template<typename T>
        struct DeleteObject
        {
            void operator()(T *obj)
            {
                delete obj;
            }
        };

        template<typename T>
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
