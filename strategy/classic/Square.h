#ifndef _SQUARE_H_
#define _SQUARE_H_

#include "Shape.h"
#include "DrawSquareStrategy.h"
#include <memory>
#include <utility>

class Square : public Shape
{
public:
	explicit Square( double side, std::shared_ptr<DrawSquareStrategy> drawer )
		: mSide( side )
		, mDrawer( drawer )
	{
	}

	void draw() const override
	{
		mDrawer->draw(*this);
	}

	double side() const
	{
		return mSide;
	}

private:
	double mSide;
	std::shared_ptr<DrawSquareStrategy> mDrawer;
};

#endif
