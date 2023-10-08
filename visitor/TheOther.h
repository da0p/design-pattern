#ifndef THE_OTHER_H
#define THE_OTHER_H
#include "Visitor.h"
#include "Element.h"

class TheOther : public Element
{
public:
	void accept(Visitor &v)
	{
		v.visit(this);
	}

	std::string theOther()
	{
		return "TheOther";
	}
};
#endif
