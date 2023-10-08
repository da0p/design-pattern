#ifndef _SHAPE_H_
#define _SHAPE_H_

class Shape
{
public:
	virtual ~Shape() = default;

	virtual void draw() const = 0;
};

#endif
