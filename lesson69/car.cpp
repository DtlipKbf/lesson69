#include "car.h"

Car::Car() : Transport() {
	speed = 0;
	power = 0;
}
Car::Car(int tank, int power, int speed) : Transport(tank) {
	this->speed = speed;
	this->power = power;
}
Car::~Car(){}
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