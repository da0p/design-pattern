#ifndef _COMBUSTION_ENGINE_H_
#define _COMBUSTION_ENGINE_H_

#include "Engine.h"
#include <iostream>

class CombustionEngine : public Engine
{
public:
    void start() override
    {
        std::cout << "Combustion engine starts...\n";
    }

    void stop() override
    {
        std::cout << "Combustion engine stops...\n";
    }
};

#endif