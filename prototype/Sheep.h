#ifndef _SHEEP_H_
#define _SHEEP_H_

#include "Animal.h"
#include <iostream>
#include <memory>

class Sheep : public Animal
{
public:
    void makeSound() const override
    {
        std::cout << "Hello, I'm a sheep!\n";
    }

    std::unique_ptr<Animal> clone() const override
    {
        return std::make_unique<Sheep>(*this);
    }
};

#endif