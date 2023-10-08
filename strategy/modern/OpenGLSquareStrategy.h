#ifndef OPENGL_SQUARE_STRATEGY_H_
#define OPENGL_SQUARE_STRATEGY_H_

#include "Square.h"
#include <iostream> 
#include <string>

class OpenGLSquareStrategy
{
public:
    explicit OpenGLSquareStrategy( const std::string& color )
        : mColor( color )
    {
    }

    void operator()( Square const& square ) const
    {
        std::cout << "OpenGL draws square with color " << mColor << std::endl;
    }

private:
    std::string mColor;
};

#endif