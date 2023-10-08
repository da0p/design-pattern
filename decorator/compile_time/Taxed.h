#ifndef _TAXED_H_
#define _TAXED_H_

#include "Money.h"
#include "PricedItem.h"

template<double taxRate, PricedItem Item>
class Taxed : private Item
{
public:
    template<typename... Args>
    explicit Taxed(Args&&... args)
        : Item {std::forward<Args>(args)...}
    {}

    Money price() const {
        return Item::price() * (10 + taxRate);
    }
};

#endif