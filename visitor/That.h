#ifndef THAT_H
#define THAT_H

#include <string>
#include "Visitor.h"
#include "Element.h"

class That : public Element
{
public:
	void accept(Visitor &v)
	{
		v.visit(this);
	}

	std::string that()
	{
		return "That";
	}
};

#endif
