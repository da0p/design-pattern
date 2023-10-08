#ifndef _SQUARE_H_
#define _SQUARE_H_

#include "Shape.h"
#include <functional>
#include <utility>

class Square : public Shape
{
public:
    using DrawStrategy = std::function<void( Square const& )>;

    explicit Square( double side, DrawStrategy drawer )
        : mSide( side )
        , mDrawer( std::move(drawer) )
    {
    }

    void draw() const override
    {
        mDrawer(*this);
    }

private:
    double mSide;
    DrawStrategy mDrawer;
};
#endif