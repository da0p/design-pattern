#ifndef _PRICED_ITEM_H_
#define _PRICED_ITEM_H_

#include "Money.h"

template<typename T>
concept PricedItem = 
    requires (T item) {
        {
            item.price()
        } -> std::same_as<Money>;
    };

#endif