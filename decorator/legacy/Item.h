#ifndef _ITEM_H_
#define _ITEM_H_

#include "Money.h"

class Item
{
public:
	virtual ~Item() = default;
	virtual Money price() const = 0;
};

#endif
