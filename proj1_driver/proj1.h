#pragma once
class date2019
{
private:
	int day, month, var, mon, subVar, subMon; //private date member declaration

public:
	//constructors
	date2019();
	date2019(int dd);
	date2019(int dd, int mm);

	//methods
	void setDate(int, int);
	void print();
	void plusDay(int);
};

