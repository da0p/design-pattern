#include "Car.h"
#include "ElectricCar.h"
#include "CombustionCar.h"

int main(int argc, char *argv[])
{
    ElectricCar electricCar;
    electricCar.drive();
    electricCar.park();

    CombustionCar combustionCar;
    combustionCar.drive();
    combustionCar.park();
}