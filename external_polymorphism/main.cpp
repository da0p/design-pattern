#include "Circle.h"
#include "Square.h"
#include "Shape.h"
#include "OpenGLDrawStrategy.h"
#include <memory>
#include <vector>

int main(int argc, char *argv[])
{
	using Shapes = std::vector<std::unique_ptr<ShapeConcept>>;
	using CircleModel = ShapeModel<Circle, OpenGLDrawStrategy>;
	using SquareModel = ShapeModel<Square, OpenGLDrawStrategy>;

	Shapes shapes{};

	shapes.emplace_back(
		std::make_unique<CircleModel>(
			Circle{2.3}, OpenGLDrawStrategy("Red")));

	shapes.emplace_back(
		std::make_unique<SquareModel>(
			Square{1.2}, OpenGLDrawStrategy("Blue")));

	shapes.emplace_back(
		std::make_unique<CircleModel>(
			Circle{4.5}, OpenGLDrawStrategy("Yellow")));

	for( auto const& shape : shapes)
	{
		shape->draw();
	}


	return 0;
}
