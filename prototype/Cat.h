#ifndef _CAT_H_
#define _CAT_H_

#include "Animal.h"
#include <memory>
#include <iostream>

class Cat : public Animal
{
public:
    void makeSound() const override
    {
        std::cout << "I'm a cat, meow meow!\n";
    }

    std::unique_ptr<Animal> clone() const override
    {
        return std::make_unique<Cat>(*this);
    }
};

#endif