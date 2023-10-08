#ifndef _CPP_BOOK_H_
#define _CPP_BOOK_H_

#include "Item.h"
#include <string>
#include <utility>

class CppBook : public Item
{
public:
    CppBook(std::string title, Money price)
        : title_{std::move(title)}
        , price_{price}
    {}

    std::string const& title() const
    {
        return title_;
    }

    Money price() const override
    {
        return price_;
    }

private:
    std::string title_{};
    Money price_;
};

#endif