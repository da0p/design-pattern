#ifndef _DISCOUNTED_H_
#define _DISCOUNTED_H_

#include "Money.h"
#include "PricedItem.h"
#include <utility>

template<double discount, PricedItem Item>
class Discounted
{
public:
    template<typename... Args>
    explicit Discounted(Args&&... args)
        : item_{std::forward<Args>(args)...}
    {}

    Money price() const
    {
        return item_.price() * (1.0 - discount);
    }

private:
    Item item_;
};

#endif