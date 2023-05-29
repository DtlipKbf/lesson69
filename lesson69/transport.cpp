#include "transport.h"

int Transport::count = 0;

Transport::Transport() {
	count++;
	tank = 0;
}
Transport::Transport(int tank) {
	count++;
	this->tank = tank;
}
Transport::~Transport() {
	count--;
}
int Transport::getCount() {
	return count;
}
int Transport::getTank() {
	return tank;
}
void Transport::setTank(int tank) {
	if(tank > 0){
		this->tank = tank;
	}
}