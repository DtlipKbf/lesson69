#include "car.h"

int Car::getSpeed() {
	return speed;
};
void Car::setSpeed(int speed) {
	if (speed > 0) {
		this -> speed = speed;
	}
};
int Car::getPower() {
	return power;
};
void Car::setPower(int pover) {
	if (power > 0) {
		this->power = power;
	}
};