#ifndef _CONFERENCE_TICKET_H_
#define _CONFERENCE_TICKET_H_

#include "Money.h"

#include <string>
#include <utility>

class ConferenceTicket
{
public:
    ConferenceTicket(std::string name, Money price)
        : name_{std::move(name)}
        , price_{price}
    {}

    std::string const& name() const
    {
        return name_;
    }

    Money price() const
    {
        return price_;
    }

private:
    std::string name_;
    Money price_;
};

#endif