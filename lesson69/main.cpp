#include "GasStation.h"
#include "main.h"

int main() {
	Car car1(50, 200, 1600);
	Car car2(60, 240, 2000);
	Car car3(40, 160, 1200);
	// Car *car2 = new Car();

	Bus bus(200, 50);

	Truck truck1(300, 20000);
	Truck truck2(350, 25000);

	Transport transport[15] = {car1,car2,car3, bus, truck1, truck2};
	int size = Transport::getCount();

	//Transport* transport = new Transport
	// transport = new Car()/Bus()/Truck();

	int total = GasStation::calculateTotalGas(transport, size);

	cout << total << endl;
	return 0;
}