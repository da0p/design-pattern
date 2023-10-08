#ifndef VISITOR_H
#define VISITOR_H

class This;
class That;
class TheOther;

class Visitor
{
public:
	virtual void visit(This *e) = 0;
	virtual void visit(That *e) = 0;
	virtual void visit(TheOther *e) = 0;
};

#endif
