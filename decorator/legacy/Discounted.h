#ifndef _DISCOUNTED_H_
#define _DISCOUNTED_H_

#include "DecoratedItem.h"
#include <stdexcept>
#include <cmath>

class Discounted : public DecoratedItem
{
public:
    Discounted(double discount, std::unique_ptr<Item> item)
        : DecoratedItem(std::move(item))
        , factor_(1.0 - discount)
    {
        if (!std::isfinite(discount) || discount < 0.0 || discount > 1.0) {
            throw std::invalid_argument("Invalid discount");
        }
    }

    Money price() const override
    {
        return item().price() * factor_;
    }

private:
    double factor_;
};

#endif