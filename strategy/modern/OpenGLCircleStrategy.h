#ifndef OPENGL_CIRCLE_STRATEGY_H_
#define OPENGL_CIRCLE_STRATEGY_H_

#include "Circle.h"
#include <iostream>
#include <string>

class OpenGLCircleStrategy
{
public:
    explicit OpenGLCircleStrategy(const std::string& color)
    : mColor( color )
    {
    }

    void operator()( Circle const& circle ) const
    {
        std::cout << "OpenGL draws circle with color " << mColor << std::endl;
    }

private:
    std::string mColor;
};

#endif