#include "bus.h"

Bus::Bus() : Transport() {
	passengers = 0;
}
Bus::Bus(int tank, int passengers) :Transport(tank) {
	this->passengers = passengers;
}
Bus::~Bus(){}
int Bus::getPassengers() {
	return passengers;
}
void Bus::setPassengers(int passengers) {
	if (passengers > 0) {
		this->passengers = passengers;
	}
}
int Bus::getTank() {
	return tank;
}
void Bus::setTank(int tank) {
	if (tank > 0) {
		this->tank = tank;
	}
}