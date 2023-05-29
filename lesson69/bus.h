#pragma once
#include "transport.h"

class Bus : public Transport {
private:
	int passengers;
	int tank;
public:
	Bus();
	Bus(int tank, int passengers);
	~Bus();

	int getPassengers();
	void setPassengers(int passengers);
	int getTank();
	void setTank(int tank);
};