#ifndef _ELECTRIC_ENGINE_H_
#define _ELECTRIC_ENGINE_H_

#include "Engine.h"
#include <iostream>

class ElectricEngine : public Engine
{
public:
    void start() override
    {
        std::cout << "Electric engine starts...\n"; 
    }
    void stop() override
    {
        std::cout << "Electric engine stops...\n";
    }
};

#endif