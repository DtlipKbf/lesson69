#pragma once
class Transport{
private:
	int tank;
public:
	Transport();
	Transport(int tank);
	~Transport();
	int getTank();
	void setTank(int tank);
};

