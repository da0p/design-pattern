#ifndef _OPENGL_SQUARE_STRATEGY_H_
#define _OPENGL_SQUARE_STRATEGY_H_

#include "Square.h"
#include "DrawSquareStrategy.h"
#include <string>
#include <iostream>

class OpenGLSquareStrategy : public DrawSquareStrategy
{
public:
    explicit OpenGLSquareStrategy(std::string doodle)
        : mDoodle( doodle )
    {
    }

    void draw( Square const& square ) const override
    {
        std::cout << "OpenGL drawing " << mDoodle << std::endl;
    }
private:
    std::string mDoodle;
};

#endif