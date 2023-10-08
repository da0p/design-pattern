#ifndef _SWAPPABLE_H_
#define _SWAPPABLE_H_

#include <utility>

template<typename Derived>
struct Swappable
{
    friend void swap(Derived& lhs, Derived& rhs)
    {
        std::swap(lhs.get(), rhs.get());
    }
};

#endif