#pragma once
class Bus{
private:
	int passengers;
	int tank;
public:
	Bus() : passengers(0), tank(0) {};
	Bus(int num, int tank) : passengers(num), tank(tank) {};

	int getPassengers();
	void setPassengers(int passengers);
	int getTank();
	void setTank(int tank);
};