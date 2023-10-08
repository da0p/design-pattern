#include <iostream>
#include <memory>
#include <utility>
#include "DrawStrategy.h"
#include "OpenGLCircleStrategy.h"
#include "OpenGLSquareStrategy.h"
#include "Circle.h"
#include "Square.h"

#include <vector>

int main(int argc, char *argv[])
{

	using Shapes = std::vector<std::shared_ptr<Shape>>;

	Shapes shapes{};

	shapes.emplace_back(
		std::make_unique<Circle>(
			2.3, 
			std::make_shared<OpenGLCircleStrategy>("Red")
		)
	);

	shapes.emplace_back(
		std::make_unique<Square>(
			10.0,
			std::make_shared<OpenGLSquareStrategy>("Green")
		)
	);

	shapes.emplace_back(
		std::make_unique<Square>(
			20.0,
			std::make_shared<OpenGLSquareStrategy>("Yellow")
		)
	);

	shapes.emplace_back(
		std::make_unique<Circle>(
			4.1,
			std::make_shared<OpenGLCircleStrategy>("Black")
		)
	);

	for ( auto const& shape : shapes )
	{
		shape->draw();
	}

	return 0;
}
