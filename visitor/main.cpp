#include "Element.h"
#include "This.h"
#include "That.h"
#include "TheOther.h"
#include "UpVisitor.h"
#include "DownVisitor.h"

int main() 
{
	Element *list[] = 
	{
		new This(), new That(), new TheOther()
	};

	UpVisitor up;
	DownVisitor down;
	for (int i = 0; i < 3; i++)
	{
		list[i]->accept(up);
	}

	for (int i = 0; i < 3; i++) {
		list[i]->accept(down);
	}

	return 0;
}
