#ifndef DOWN_VISITOR_H
#define DOWN_VISITOR_H
#include <iostream>
#include "Visitor.h"
#include "This.h"
#include "That.h"
#include "TheOther.h"

class DownVisitor : public Visitor
{
public:
	void visit(This *e)
	{
		std::cout << "do Down on " + e->thiss() << "\n";
	}

	void visit(That *e)
	{
		std::cout << "do Down on " + e->that() << "\n";
	}

	void visit(TheOther *e)
	{
		std::cout << "do Down on " + e->theOther() << "\n";
	}
};
#endif
