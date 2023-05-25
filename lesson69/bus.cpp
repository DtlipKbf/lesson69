#include "bus.h"
int Bus::getPassengers() {
	return passengers;
};
void Bus::setPassengers(int passengers) {
	if (passengers > 0) {
		this->passengers = passengers;
	}
};
int Bus::getTank() {
	return tank;
};
void Bus::setTank(int tank) {
	if (tank > 0) {
		this->tank = tank;
	}
};