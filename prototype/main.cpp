#include "Animal.h"
#include "Sheep.h"
#include "Cat.h"

int main(int argc, char *argv[])
{
    std::unique_ptr<Animal> dolly = std::make_unique<Sheep>();
    auto molly = dolly->clone();
    dolly->makeSound();
    molly->makeSound();

    std::unique_ptr<Animal> milo = std::make_unique<Cat>();
    auto limo = milo->clone();
    milo->makeSound();
    limo->makeSound();

    return 0;
}