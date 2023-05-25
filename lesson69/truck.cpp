#include "truck.h"

int Truck::getTank() {
	return tank;
}
int Truck::getWeight() {
	return weight;
}
void Truck::setTank(int tank) {
	if (tank > 0) {
		this->tank = tank;
	}
}
void Truck::setWeight(int weight) {
	if (weight > 0) {
		this->weight = weight;
	}
}