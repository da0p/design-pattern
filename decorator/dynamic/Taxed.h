#ifndef _TAXED_H_
#define _TAXED_H_

#include "Item.h"
#include <utility>

class Taxed
{
public:
    Taxed(double taxRate, Item item)
        : item_(std::move(item))
        , factor_(1.0 + taxRate)
    {}

    Money price() const
    {
        return item_.price() * factor_;
    }

private:
    Item item_;
    double factor_;
};

#endif