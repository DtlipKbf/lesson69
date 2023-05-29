#pragma once
class Transport{
private:
	static int count;
	int tank;
public:
	Transport();
	Transport(int tank);
	~Transport();
	static int getCount();
	int getTank();
	void setTank(int tank);
};

