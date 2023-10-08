#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "OpenGLCircleStrategy.h"
#include "OpenGLSquareStrategy.h"
#include <vector>
#include <memory>

int main(int argc, char *argv[])
{

    using Shapes = std::vector<std::unique_ptr<Shape>>;

    Shapes shapes;

    shapes.emplace_back(
        std::make_unique<Circle>(
            2.3, 
            OpenGLCircleStrategy("Red")
        )
    );

    shapes.emplace_back(
        std::make_unique<Square>(
            10.0,
            OpenGLSquareStrategy("Yellow")
        )
    );

    shapes.emplace_back(
        std::make_unique<Square>(
            11.0,
            OpenGLSquareStrategy("Blue")
        )
    );

    shapes.emplace_back(
        std::make_unique<Circle>(
            2.0,
            OpenGLCircleStrategy("Green")
        )
    );

    for ( auto const& shape : shapes )
    {
        shape->draw();
    }

    return 0;
}