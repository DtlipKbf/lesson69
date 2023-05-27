#pragma once
#include "transport.h"
class Car : public Transport {
private:
	int speed;
	int power;
public:
	Car():power(0), speed(0) {};
	Car(int tank, int power, int speed) : power(power), speed(speed) {};
	~Car() {};

	int getSpeed();
	void setSpeed(int speed);
	int getPower();
	void setPower(int pover);
}