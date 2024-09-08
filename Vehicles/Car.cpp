#include "Car.h"

Car::Car(int speed, int distance, int doors)
    : Vehicle(speed, distance), number_of_doors(doors) {
}

int Car::get_number_of_doors() const {
    return number_of_doors;
}