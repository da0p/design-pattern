#ifndef _ADDABLE_H_
#define _ADDABLE_H_

template<typename Derived>
struct Addable
{
    friend Derived& operator+=(Derived& lhs, Derived const& rhs)
    {
        lhs.get() += rhs.get();
        return lhs;
    }

    friend Derived operator+(Derived const& lhs, Derived const& rhs)
    {
        return Derived{lhs.get() + rhs.get()};
    }
};

#endif