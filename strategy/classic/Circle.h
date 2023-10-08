#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "Shape.h"
#include "DrawCircleStrategy.h"
#include <memory>
#include <utility>

class Circle : public Shape
{
public:
	explicit Circle( double radius, std::shared_ptr<DrawCircleStrategy> drawer )
		: mRadius( radius )
		, mDrawer( drawer )
	{
	}
	
	void draw() const override
	{
		mDrawer->draw(*this);
	}

	double radius() const
	{
		return mRadius;
	}

private:
	double mRadius;
	std::shared_ptr<DrawCircleStrategy> mDrawer;
};

#endif
