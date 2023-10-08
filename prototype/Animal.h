#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <memory>

class Animal
{
public:
    virtual ~Animal() = default;
    virtual void makeSound() const = 0;
    virtual std::unique_ptr<Animal> clone() const = 0;
};

#endif