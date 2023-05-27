#pragma once

class Truck {
private:
	int weight;
	int tank;
public:
	Truck() : tank(0), weight(0) {}
	Truck(int tank, int weight) :tank(tank), weight(weight) {}
	~Truck() {}

	int getWeight();
	void setWeight(int tank);
	int getTank();
	void setTank(int weight);
};

