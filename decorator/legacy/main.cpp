#include "ConferenceTicket.h"
#include "CppBook.h"
#include "Discounted.h"
#include "Taxed.h"
#include <cstdlib>
#include <memory>

int main()
{
    std::unique_ptr<Item> item1(
        std::make_unique<Taxed>(0.07,
            std::make_unique<CppBook>("Effective C++", 19)
        )
    );

    std::unique_ptr<Item> item2(
        std::make_unique<Taxed>(0.19,
            std::make_unique<Discounted>(0.2,
                std::make_unique<ConferenceTicket>("CppCon", 999.0)))
    );

    Money const totalPrice1 = item1->price();
    Money const totalPrice2 = item2->price();

    std::cout << "totalPrice1 = " << totalPrice1 << std::endl;
    std::cout << "totalPrice2 = " << totalPrice2 << std::endl;

    return EXIT_SUCCESS;
}