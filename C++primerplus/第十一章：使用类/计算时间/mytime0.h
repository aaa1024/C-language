#ifndef MYTIME_0_H_
#define MYTIME_0_H_
#include <iostream>
class Time
{
private:
	int hours;
	int minutes;
public:
	Time(int, int);
	Time(const Time &t);
	Time operator+(const Time &other)const;
	void operator-(const Time& t);
	void print();
	friend std::ostream & operator<<(std::ostream & os, const Time &t);
};
#endif