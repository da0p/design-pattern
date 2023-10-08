#include "ConferenceTicket.h"
#include "Discounted.h"
#include "Taxed.h"
#include <cstdlib>

int main(int argc, char *argv[])
{
    Taxed<0.15, Discounted<0.2, ConferenceTicket>> item{"Core C++", Money{499}};

    Money const totalPrice = item.price();

    std::cout << totalPrice << std::endl;
}