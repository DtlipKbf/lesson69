#include "transport.h"

Transport::Transport() {
	tank = 0;
}
Transport::Transport(int tank) {
	this->tank = tank;
}
Transport::~Transport(){}
int Transport::getTank() {
	return tank;
}
void Transport::setTank(int tank) {
	if(tank > 0){
		this->tank = tank;
	}
}