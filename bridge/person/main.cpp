#include <iostream>
#include "Person.h"

int main(int argc, char *argv[])
{

    Person person;
    std::cout << "year of birth = " << person.yearOfBirth() << std::endl;

    return 0;
}