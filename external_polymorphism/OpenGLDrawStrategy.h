#include "Circle.h"
#include "Square.h"
#include <iostream>

class OpenGLDrawStrategy
{
public:
	explicit OpenGLDrawStrategy(const std::string& color)
		: color_(color)
	{}

	void operator()(Circle const& circle) const
	{
		std::cout << "Drawing a circle in " << color_ << std::endl;
	}

	void operator()(Square const& square) const
	{
		std::cout << "Drawing a square in " << color_ << std::endl;
	}

private:
	std::string color_;
};
