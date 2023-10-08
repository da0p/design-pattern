#ifndef UP_VISITOR_H
#define UP_VISITOR_H
#include <iostream>
#include "This.h"
#include "That.h"
#include "TheOther.h"

class UpVisitor : public Visitor
{
public:
	void visit(This *e)
	{
		std::cout << "do Up on " + e->thiss() << "\n";
	}

	void visit(That *e)
	{
		std::cout << "do Up on " + e->that() << "\n";
	}

	void visit(TheOther *e)
	{
		std::cout << "do Up on " + e->theOther() << "\n";
	}
};
#endif
