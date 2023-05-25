#pragma once
#include "truck.h"
#include "car.h"
#include "bus.h"

class GasStation{
public:
	static int calculateTotalGas(Truck* t, int st,Bus* b, int sb, Car* c, int sc);
};