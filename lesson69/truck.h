#pragma once
#include "transport.h"

class Truck : public Transport {
private:
	int weight;
	int tank;
public:
	Truck();
	Truck(int tank, int weight);
	~Truck();

	int getWeight();
	void setWeight(int tank);
	int getTank();
	void setTank(int weight);
};