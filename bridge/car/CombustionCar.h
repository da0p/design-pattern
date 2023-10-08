#ifndef _COMBUSTION_CAR_H_
#define _COMBUSTION_CAR_H_

#include "Car.h"
#include "CombustionEngine.h"
#include <iostream>

class CombustionCar : public Car
{
public:
    CombustionCar() 
        : Car(std::make_unique<CombustionEngine>())
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