#ifndef _DRAW_CIRCLE_STRATEGY_H_
#define _DRAW_CIRCLE_STRATEGY_H_

#include "DrawStrategy.h"

class Circle;

class DrawCircleStrategy : public DrawStrategy<Circle>
{
public:
    virtual ~DrawCircleStrategy() = default;

    virtual void draw( Circle const& circle) const = 0;
};

#endif