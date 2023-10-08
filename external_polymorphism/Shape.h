#ifndef _SHAPE_H_
#define _SHAPE_H_

#include <functional>
#include <stdexcept>
#include <utility>

class ShapeConcept
{
public:
	virtual ~ShapeConcept() = default;

	virtual void draw() const = 0;
};

struct DefaultDrawer
{
	template<typename T>
	void operator()(T const& obj) const
	{
		draw(obj);
	}
};

template<typename ShapeT
		, typename DrawStrategy = DefaultDrawer>
class ShapeModel : public ShapeConcept
{
public:

	explicit ShapeModel(ShapeT shape, DrawStrategy drawer = DefaultDrawer{})
		: shape_{std::move(shape)}
		, drawer_{std::move(drawer)}
	{}

	void draw() const override 
	{
		drawer_(shape_);
	}

private:
	ShapeT shape_;
	DrawStrategy drawer_;
};

#endif
