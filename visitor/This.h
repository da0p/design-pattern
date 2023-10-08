#ifndef THIS_H
#define THIS_H
#include "Visitor.h"
#include "Element.h"

class This : public Element
{
public:
	void accept(Visitor &v) 
	{
		v.visit(this);
	}

	std::string thiss()
	{
		return "This";
	}
};

#endif
