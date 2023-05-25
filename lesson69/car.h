#pragma once
class Car{
private:
	int speed;
	int power;
	int tank;
public:
	Car() : tank(0), power(0), speed(0) {};
	Car(int tank, int power, int speed) : tank(tank), power(power), speed(speed) {};
	~Car() {};

	int getSpeed();
	void setSpeed(int speed);
	int getPower();
	void setPower(int pover);
	int getTank();
	void setTank(int tank);
};

