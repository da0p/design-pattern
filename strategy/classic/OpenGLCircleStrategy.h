#ifndef _OPENGL_CIRCLE_STRATEGY_H_
#define _OPENGL_CIRCLE_STRATEGY_H_

#include "Circle.h"
#include "DrawCircleStrategy.h"
#include <string>
#include <iostream>

class OpenGLCircleStrategy : public DrawCircleStrategy
{
public:
    explicit OpenGLCircleStrategy(std::string doodle)
        : mDoodle( doodle )
    {
    }

    void draw( Circle const& circle ) const override
    {
        std::cout << "OpenGL drawing " << mDoodle << std::endl;
    }
private:
    std::string mDoodle;
};

#endif