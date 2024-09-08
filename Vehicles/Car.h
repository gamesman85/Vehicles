#pragma once

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int number_of_doors;

public:
    Car(int speed, int distance, int doors);
    int get_number_of_doors() const;
};