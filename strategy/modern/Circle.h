#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "Shape.h"
#include <functional>
#include <utility>

class Circle : public Shape
{
public:
    using DrawStrategy = std::function<void(Circle const&)>;

    explicit Circle( double radius, DrawStrategy drawer )
        : mRadius( radius )
        , mDrawer( std::move(drawer) )
    {
    }

    void draw() const override
    {
        mDrawer(*this);
    }

private:
    double mRadius;
    DrawStrategy mDrawer;
};

#endif