#pragma once
#include "truck.h"
#include "car.h"
#include "bus.h"

class GasStation{
public:
	static int calculateTotalGas(Transport* transport, int size);
};