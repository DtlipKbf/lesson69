#include "GasStation.h"

int GasStation::calculateTotalGas(Truck* t, int st, Bus* b, int sb, Car* c, int sc) {
	int total = 0;
	for (int i = 0; i < sb; i++) {
		total += b[i].getTank();
	}
	for (int i = 0; i < st; i++) {
		total += t[i].getTank();
	}
	for (int i = 0; i < sc; i++) {
		total += c[i].getTank();
	}
	return total;
};