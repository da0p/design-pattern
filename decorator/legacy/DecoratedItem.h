#ifndef _DECORATED_ITEM_H_
#define _DECORATED_ITEM_H_

#include "Item.h"
#include <memory>
#include <stdexcept>
#include <utility>

class DecoratedItem : public Item
{
public:
	explicit DecoratedItem(std::unique_ptr<Item> item)
		: item_(std::move(item))
	{
		if (!item_) {
			throw std::invalid_argument("Invalid item");
		}
	}

protected:
	Item& item()
	{
		return *item_;
	}

	Item const& item() const
	{
		return *item_;
	}

private:
	std::unique_ptr<Item> item_;
};

#endif
