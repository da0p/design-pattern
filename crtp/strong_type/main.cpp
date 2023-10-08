#include "Distances.h"
#include <iostream>

int main(int argc, char *argv[])
{
    auto const m1 = Meter<long>{ 120L };
    auto const m2 = Meter<long>{ 50L };
    auto const m3 = m1 + m2;

    std::cout << m3 << std::endl;
}