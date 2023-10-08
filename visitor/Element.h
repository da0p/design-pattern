#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>
#include <string>

class Element
{
public:
	virtual void accept(class Visitor &v) = 0;
};

#endif
