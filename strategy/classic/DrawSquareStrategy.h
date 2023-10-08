#ifndef _DRAW_SQUARE_STRATEGY_H_
#define _DRAW_SQUARE_STRATEGY_H_

#include "DrawStrategy.h"

class Square;

class DrawSquareStrategy : public DrawStrategy<Square>
{
public:
    virtual ~DrawSquareStrategy() = default;

    virtual void draw( Square const& square ) const = 0;
};
#endif