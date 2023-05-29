#pragma once
#include "transport.h"
class Car : public Transport {
private:
	int speed;
	int power;
public:
	Car();
	Car(int tank, int power, int speed);
	~Car();

	int getSpeed();
	void setSpeed(int speed);
	int getPower();
	void setPower(int pover);
};