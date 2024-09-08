#include "Vehicle.h"

Vehicle::Vehicle(int speed, int distance)
	: current_speed(speed), distance_travelled(distance) {
}

int Vehicle::get_speed() const {
	return current_speed;
}

int Vehicle::get_distance() const {
	return distance_travelled;
}