#ifndef _ELECTRIC_CAR_H_
#define _ELECTRIC_CAR_H_

#include "Car.h"
#include "ElectricEngine.h"
#include <iostream>

class ElectricCar : public Car
{
public:
    explicit ElectricCar() 
        : Car(std::make_unique<ElectricEngine>()) 
    {}

    void drive() override
    {
        auto engine = getEngine();
        engine->start();
        std::cout << "Start driving...\n";
    }

    void park() override
    {
        auto engine = getEngine();
        std::cout << "Parking...\n";
        engine->stop();
    }
};

#endif