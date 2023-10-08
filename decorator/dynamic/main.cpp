#include <iostream>
#include <cstdlib>
#include "ConferenceTicket.h"
#include "Discounted.h"
#include "Taxed.h"

int main(int argc, char *argv[])
{

    Item item(Taxed(0.15, Discounted(0.2, ConferenceTicket{"C++ Software Design", Money{499}})));

    Money const totalPrice = item.price();

    std::cout << totalPrice << std::endl;

    return EXIT_SUCCESS;
}