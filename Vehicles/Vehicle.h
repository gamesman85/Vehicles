#pragma once

class Vehicle {
private:
	int current_speed;
	int distance_travelled;
public:
	Vehicle(int speed, int distance);
	int get_speed() const;
	int get_distance() const;
};